/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:42:35 by ritavasques       #+#    #+#             */
/*   Updated: 2025/04/02 15:14:30 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void printNum(int i) {
    std::cout << i << " ";
}

int main(void) {
    
    //List
    std::list<int> lst;
    //Populate list
    lst.push_back(1);
    lst.push_back(2);
    lst.push_back(3);
    lst.push_back(4);
    
    //Display list
    std::cout << "List lst: ";
    std::for_each(lst.begin(), lst.end(), printNum);
    std::cout << std::endl;

    //Existing number
    std::cout << "Find 2" << std::endl;
    try {
        easyfind(lst, 2);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    //Non Existing number
    std::cout << "Find 42" << std::endl;
    try {
        easyfind(lst, 42); 
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}