/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:16:31 by ritavasques       #+#    #+#             */
/*   Updated: 2025/04/03 11:52:37 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void print(int i) {
    std::cout << i << " ";
}

int main(void) {
    Span sp = Span(5);
    try {
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        //myN.addNumber(20);

        std::for_each(sp.getNbrs().begin(), sp.getNbrs().end(), print);
        std::cout << std::endl;

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    unsigned int size = 150;
    Span other = Span(size);
    std::vector<int> numbers;
    srand(time(NULL));
    for (unsigned int i = 0; i < size; i++)
        numbers.push_back(rand());
    try {
        other.addSeveral(numbers.begin(), numbers.end());
        
        std::for_each(other.getNbrs().begin(), other.getNbrs().end(), print);
        std::cout << std::endl;

        std::cout << "ShortestSpan: " << other.shortestSpan() << std::endl;
        std::cout << "LongestSpan: " << other.longestSpan() << std::endl;

        std::vector<int> temp = other.getNbrs();
        std::sort(temp.begin(), temp.end());
        std::cout << "1st element: " << *temp.begin() << std::endl;
        std::cout << "last element: " << *(temp.end() - 1) << std::endl;
        std::cout <<  "check long: " << other.longestSpan() - (*(temp.end() - 1) - *temp.begin()) << std::endl;
        
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}