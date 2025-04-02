/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:24:02 by ritavasques       #+#    #+#             */
/*   Updated: 2025/04/02 16:43:22 by ritavasques      ###   ########.fr       */
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
	{
		this->_nbrs.push_back(nbr);
		std::cout << this->_nbrs.back() << " was added to the container" << std::endl;
	}
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
//unsigned int Span::shortestSpan(void) {}
//unsigned int Span::longestSpan(void) {}