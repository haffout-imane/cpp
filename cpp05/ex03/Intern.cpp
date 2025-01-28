/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 13:29:36 by ihaffout          #+#    #+#             */
/*   Updated: 2025/01/21 13:29:37 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(Intern const &obj)
{
    *this = obj;
}

Intern::~Intern() {}

Intern & Intern::operator=(Intern const &obj)
{
    (void) obj;
    return *this;
}

AForm *Intern::makeForm(std::string form, std::string target)
{
    std::string forms[3] = {
                                "shrubbery creation", 
                                "robotomy request", 
                                "presidential pardon"
                            };
    AForm *(*formFuncs[3])(std::string target) = {
                                                    newShrubberyCreationForm,
                                                    newRobotomyRequestForm,
                                                    newPresidentialPardonForm
                                                };
    for (int i = 0; i < 3; i++)
    {
        if (form == forms[i])
        {
            std::cout << "Intern creates " << form << std::endl;
            return formFuncs[i](target);
        }
    }
    throw FormNotFoundException();
}

const char *Intern::FormNotFoundException::what() const throw()
{
    return "Form not found";
}

AForm *newShrubberyCreationForm(std::string target)
{
    return new ShrubberyCreationForm(target);
}

AForm *newRobotomyRequestForm(std::string target)
{
    return new RobotomyRequestForm(target);
}

AForm *newPresidentialPardonForm(std::string target)
{
    return new PresidentialPardonForm(target);
}
