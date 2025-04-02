/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:16:31 by ritavasques       #+#    #+#             */
/*   Updated: 2025/04/02 16:18:05 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void print(int i) {
    std::cout << i << " ";
}

int main(void) {
    Span myN = Span(3);
    try {
        myN.addNumber(17);
        myN.addNumber(3);
        myN.addNumber(10);
        //myN.addNumber(20);

        std::for_each(myN.getNbrs().begin(), myN.getNbrs().end(), print);
        std::cout << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}