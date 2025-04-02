/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:42:45 by ritavasques       #+#    #+#             */
/*   Updated: 2025/04/02 15:14:53 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <list>
# include <algorithm>
# include <iostream>

template< typename T>
void easyfind(T & num, int i) {
    //Iterates from begin to end of the list to find i
    //If the result is equal to the end of the list...
    if ((std::find(num.begin(), num.end(), i)) == num.end())
    {
        std::cout << "There is no " << i << " in the list" << std::endl;
        throw std::exception();
    }
    else
        std::cout << i << " is in the list" << std::endl;
}

#endif