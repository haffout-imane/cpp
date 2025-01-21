/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 10:44:17 by ihaffout          #+#    #+#             */
/*   Updated: 2025/01/20 19:49:12 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
    this->_target = "Default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
    this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &obj) 
{
    *this = obj;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const &obj)
{
    if(this != &obj)
    {
        this->_target = obj._target;
    }
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if(this->get_sign())
    {
        if(executor.getGrade() <= this->getGradeToExecute())
        {
            std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
        }
        else
        {
            throw AForm::GradeTooLowException();
        }
    }
    else
        throw (AForm::FormNotSignedException());
}