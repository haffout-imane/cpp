/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 10:44:28 by ihaffout          #+#    #+#             */
/*   Updated: 2025/01/20 19:49:06 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
    this->_target = "Default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
    this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj) 
{
    *this = obj;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const &obj)
{
    if(this != &obj)
    {
        this->_target = obj._target;
    }
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if(this->get_sign())
    {
        if(executor.getGrade() <= this->getGradeToExecute())
        {
            std::cout << "Bzzzzzzzzzz" << std::endl;
            if (rand() % 2)
                std::cout << this->_target << " has been robotomized" << std::endl;
            else
                std::cout << this->_target << " robotomization failed" << std::endl;
        }
        else
        {
            throw AForm::GradeTooLowException();
        }
    }
    else
        throw (AForm::FormNotSignedException());
    
}