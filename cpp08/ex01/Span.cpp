/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 01:28:56 by ihaffout          #+#    #+#             */
/*   Updated: 2025/02/08 03:20:37 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    this->N = 0;
}

Span::Span(int N)
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
    int shortest = 0;
    int tmp = 0;
    if(this->span.size() < 2)
        throw std::runtime_error("Span is too short!");
    std::sort(this->span.begin(), this->span.end());
    shortest = this->span[1] - this->span[0];
    for(unsigned int i = 0; i < this->span.size() - 1; i++)
    {
        tmp = this->span[i + 1] - this->span[i];
        if(tmp < shortest)
            shortest = tmp;
    }
    return shortest;
}

int Span::longestSpan()
{
    if(this->span.size() < 2)
        throw std::runtime_error("Span is too short!");
    std::sort(this->span.begin(), this->span.end());
    return this->span[this->span.size() - 1] - this->span[0];
}

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if(this->span.size() + std::distance(begin, end) > this->N)
        throw std::runtime_error("Span is full!");
    this->span.insert(this->span.end(), begin, end);
}