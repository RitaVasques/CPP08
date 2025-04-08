/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 12:36:34 by ritavasques       #+#    #+#             */
/*   Updated: 2025/04/08 16:21:00 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>

template< typename T >
class MutantStack : public std::stack<T> {
    public:
        MutantStack(void) {}
        MutantStack(const MutantStack<T> & other) {
            *this = other;
        }
        ~MutantStack(void) {}
        
        MutantStack<T> & operator=(const MutantStack<T> & other) {
            if (this != &other)
                *this = other;
            return *this;
        }

        //Alias for the iterator type of the underlying container
        typedef typename std::stack<T>::container_type::iterator iterator;
        
        //Provides access to iterators for the stack's elements
        //this->c access the underlying container of std::stack
        iterator begin(void) {
            return this->c.begin();
        }
        iterator end(void) {
            return this->c.end();
        }
};

#endif