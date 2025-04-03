/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:16:19 by ritavasques       #+#    #+#             */
/*   Updated: 2025/04/03 11:04:42 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <algorithm>
# include <iostream>

class Span {
	public:
		Span(unsigned int N);
		Span(const Span & other);
		~Span(void);

		Span & operator=(const Span & other);
		
		const std::vector<int> & getNbrs(void) const;

		void addNumber(int nbr);
		void addSeveral(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		unsigned int shortestSpan(void);
		unsigned int longestSpan(void);
	private:
		unsigned int _N;
		std::vector<int> _nbrs;
};

#endif