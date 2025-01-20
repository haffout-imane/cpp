/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 14:57:17 by ihaffout          #+#    #+#             */
/*   Updated: 2025/01/18 10:50:47 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat b1("imane", 1);
    Form f1("Visa", 100, 50);
    try
    {
        f1.beSigned(b1);
        std::cout << f1;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "----------------------" << std::endl;
    
    Bureaucrat b2("imane", 150);
    Form f2("Visa", 100, 50);
    try
    {
        f2.beSigned(b2);
        std::cout << f2;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}