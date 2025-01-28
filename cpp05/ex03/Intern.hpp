/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 13:29:33 by ihaffout          #+#    #+#             */
/*   Updated: 2025/01/21 13:29:34 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

    #include "AForm.hpp"
    #include "ShrubberyCreationForm.hpp"
    #include "RobotomyRequestForm.hpp"
    #include "PresidentialPardonForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(Intern const &obj);
        ~Intern();
        Intern & operator=(Intern const &obj);
        AForm *makeForm(std::string form, std::string target);
        class FormNotFoundException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};  

AForm *newShrubberyCreationForm(std::string target);
AForm *newRobotomyRequestForm(std::string target);
AForm *newPresidentialPardonForm(std::string target);

#endif
