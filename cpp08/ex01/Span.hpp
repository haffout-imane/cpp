/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 01:16:44 by ihaffout          #+#    #+#             */
/*   Updated: 2025/02/08 02:11:53 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
    #include <iostream>
    #include <vector>
class Span
{
    private:
        unsigned int N;
        std::vector<int> span;
    public:
        Span();
        Span(int N);
        Span(Span const & src);
        ~Span();
        Span & operator=(Span const & src);
        void addNumber(int n);
        int shortestSpan();
        int longestSpan();
        void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);  
};




#endif