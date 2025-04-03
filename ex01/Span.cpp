/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:24:02 by ritavasques       #+#    #+#             */
/*   Updated: 2025/04/03 11:50:57 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) {
	if (N <= 0)
		throw std::exception();
	this->_N = N;
}

Span::Span(const Span & other) {
	if (other._N <= 0)
		throw std::exception();
	*this = other;	
}

Span::~Span(void) {
}

Span & Span::operator=(const Span & other) {
	if (other._N <= 0)
	{
		throw std::exception();
	}
	this->_N = other._N;
	this->_nbrs = other._nbrs;
	return *this;
}

const std::vector<int> & Span::getNbrs(void) const {
	return this->_nbrs;
}

void Span::addNumber(int nbr) {
	if (this->_nbrs.size() < this->_N)
		this->_nbrs.push_back(nbr);
	else
	{
		std::cout << "container if full" << std::endl;
		throw std::exception();
	}
	
}

void Span::addSeveral(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	unsigned int space = this->_N - this->_nbrs.size();
	unsigned int sizeToAdd = std::distance(begin, end);

	if (sizeToAdd > space)
	{
		std::cout << "Not enough space" << std::endl;
		throw std::exception();
	}
	this->_nbrs.insert(this->_nbrs.end(), begin, end);
}

unsigned int Span::shortestSpan(void) {
	std::vector<int> temp = this->_nbrs;
	unsigned int shortest = temp[1] - temp[0];
	unsigned int distance = 0;
	
	if (temp.size() < 2)
	{
		std::cout << "not enough elements" << std::endl;	
		throw std::exception();
	}
	std::sort(temp.begin(), temp.end());
	for (unsigned int i = 1; i < temp.size(); i++)
	{
		distance = temp[i] - temp[i - 1];
		if (distance < shortest)
			shortest = distance;
	}
	return shortest;
}

unsigned int Span::longestSpan(void) {
	std::vector<int> temp = this->_nbrs;
	unsigned int longest = 0;
	
	if (temp.size() < 2)
	{
		std::cout << "not enough elements" << std::endl;	
		throw std::exception();
	}
	std::sort(temp.begin(), temp.end());
	longest = *(temp.end() - 1) - *temp.begin();
	
	return longest;
}