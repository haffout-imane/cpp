/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 14:57:17 by ihaffout          #+#    #+#             */
/*   Updated: 2025/01/17 12:10:07 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat b1("imane", 1);
    try
    {
        b1.incrementGrade();
        std::cout << b1;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
    Bureaucrat b2("nada", 150);
    try
    {
        b2.incrementGrade();
        std::cout << b2;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}