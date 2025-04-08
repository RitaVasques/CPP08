/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 12:36:10 by ritavasques       #+#    #+#             */
/*   Updated: 2025/04/08 16:18:54 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
    MutantStack<int> mstack;
    std::list<int> lst;

    mstack.push(5);
    mstack.push(17);
    lst.push_back(5);
    lst.push_back(17);
    
    
    //View last element
    std::cout << "mstack_top: " << mstack.top() << std::endl;
    std::cout << "lst_top: " << lst.back() << std::endl;

    //LIFO - remove last element
    mstack.pop();
    lst.pop_back();
    
    std::cout << "mstack_size: " << mstack.size() << std::endl;
    std::cout << "lst_size: " << lst.size() << std::endl;
    
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    
    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(737);
    lst.push_back(0);
    
    
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    
    int index = 0;
    while (it != ite)
    {
        std::cout << "mstack[" << index << "]: "<< *it << std::endl;
        ++it;
        ++index;
    }
    
    int idx = 0;
    for (std::list<int>::iterator iterate = lst.begin(); iterate != lst.end(); ++iterate)
    {
        std::cout << "lst[" << idx << "]: " << *iterate << std::endl;
        ++idx;
    }
    
    //conversion to standard stack
    std::stack<int> s(mstack);
    
    return 0;
}