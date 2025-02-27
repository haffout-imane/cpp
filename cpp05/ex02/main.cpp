/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 14:57:17 by ihaffout          #+#    #+#             */
/*   Updated: 2025/01/21 13:03:22 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    std::cout << std::endl;
    Bureaucrat b1("b1", 1);
    PresidentialPardonForm f1("f1");
    b1.signForm(f1);
    b1.executeForm(f1);
    
    std::cout << "-----------------------------------------------------------------------" << std::endl;

    Bureaucrat b12("b12", 20);
    PresidentialPardonForm f12("f12");
    b12.signForm(f12);
    b12.executeForm(f12);

    std::cout << "-----------------------------------------------------------------------" << std::endl;

    Bureaucrat b13("b13", 26);
    PresidentialPardonForm f13("f13");
    b13.signForm(f13);
    b13.executeForm(f13);

    std::cout << std::endl << "-----------------------------------------------------------------------" << std::endl;
    std::cout << "-----------------------------------------------------------------------" << std::endl << std::endl;

    Bureaucrat b2("b2", 1);
    ShrubberyCreationForm f2("f2");
    b2.signForm(f2);
    b2.executeForm(f2);

    std::cout << std::endl << "-----------------------------------------------------------------------" << std::endl;
    std::cout << "-----------------------------------------------------------------------" << std::endl << std::endl;

    Bureaucrat b3("b3", 1);
    RobotomyRequestForm f3("f3");
    b3.signForm(f3);
    b3.executeForm(f3);

    std::cout << std::endl;
}