/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 02:44:40 by ihaffout          #+#    #+#             */
/*   Updated: 2025/02/28 03:29:35 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
    
}

// RPN::RPN(RPN const & src)
// {
    
// }

// RPN &RPN::operator=(RPN const & src)
// {
    
// }

RPN::~RPN()
{
    
}

bool isoperator(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

void RPN::run(char *str)
{
    for(int i = 0; str[i]; i++)
    {
        if (std::isspace(str[i]))
            continue;
        if (std::isdigit(str[i]))
        {
            _stack.push(str[i] - '0');
            continue;
        }
        else if(isoperator(str[i]))
        {
            if (_stack.size() < 2)
                throw std::invalid_argument("Error");
            double a = _stack.top();
            _stack.pop();
            double b = _stack.top();
            _stack.pop();
            if (str[i] == '+')
                res = b + a;
            else if (str[i] == '-')
                res = b - a;
            else if (str[i] == '*')
                res = b * a;
            else if (str[i] == '/')
            {
                if (a == 0)
                    throw std::invalid_argument("Error");
                res = b / a;
            }
            _stack.push(res);
        }
        else
            throw std::invalid_argument("Error");
    }
    if (_stack.size() != 1)
        throw std::invalid_argument("Error");
    else
    {
        std::cout << _stack.top() << std::endl;
        _stack.pop();
    }
}

void RPN::validate(std::string str)
{
    if (str.empty())
        throw std::invalid_argument("Error");
    if(std::all_of(str.begin(), str.end(), isspace))
        throw std::invalid_argument("Error");
    for(int i = 0; str[i]; i++)
    {
        if (std::isspace(str[i]))
            continue;
        if(std::isdigit(str[i]) && std::isdigit(str[i + 1]))
            throw std::invalid_argument("Error");
        if (std::isdigit(str[i]) || isoperator(str[i]))
            continue;
        else
            throw std::invalid_argument("Error");
    }
    
}

