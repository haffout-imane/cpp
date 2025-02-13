/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 01:28:56 by ihaffout          #+#    #+#             */
/*   Updated: 2025/02/12 05:15:50 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    this->N = 0;
}

Span::Span(unsigned int N)
{
    this->N = N;
}

Span::Span(Span const & src)
{
    *this = src;
}

Span::~Span() {}

Span & Span::operator=(Span const & src)
{
    if(this != &src)
    {   
        this->N = src.N;
        this->span = src.span;
    }
    return *this;
}

void Span::addNumber(int n)
{
    if(this->span.size() < this->N)
        this->span.push_back(n);
    else
        throw std::runtime_error("Span is full!");
}

int Span::shortestSpan()
{
    if(this->span.size() < 2)
        throw std::runtime_error("Span is too short!");
    std::vector<int> tmp = this->span;
    int shortest = tmp[1] - tmp[0];
    for(unsigned int i = 1; i < tmp.size(); i++)
    {
        if(tmp[i] - tmp[i - 1] < shortest)
            shortest = tmp[i] - tmp[i - 1];
    }
    return shortest;
}

int Span::longestSpan()
{
    if(this->span.size() < 2)
        throw std::runtime_error("Span is too short!");
    std::vector<int> tmp = this->span;
    std::sort(tmp.begin(), tmp.end());
    return tmp[tmp.size() - 1] - tmp[0];
}

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if(this->span.size() + std::distance(begin, end) > this->N)
        throw std::runtime_error("Span is full!");
    this->span.insert(this->span.end(), begin, end);
}
