/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 14:57:17 by ihaffout          #+#    #+#             */
/*   Updated: 2025/01/21 13:40:15 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    Intern imane;
    Bureaucrat b("Bureaucrat", 1);
    AForm *rrf;
    AForm *ppf;
    AForm *scf;
    AForm *test;
    try
    {
        rrf = imane.makeForm("robotomy request", "Bender");
        ppf = imane.makeForm("presidential pardon", "Bender");
        scf = imane.makeForm("shrubbery creation", "Bender");
        test = imane.makeForm("test", "Bender");
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    b.signForm(*rrf);
    b.executeForm(*rrf);
    b.signForm(*ppf);
    b.executeForm(*ppf);
    b.signForm(*scf);
    b.executeForm(*scf);
    delete rrf;
    delete ppf;
    delete scf;
    return 0;
}
