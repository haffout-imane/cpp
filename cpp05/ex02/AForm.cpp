/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 10:39:41 by ihaffout          #+#    #+#             */
/*   Updated: 2025/01/21 13:00:59 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("default"), gradeToSign(150), gradeToExecute(150) 
{
    this->_sign = 0;
}

AForm::AForm(const std::string name, const int gradeToSign, const int gradeToExecute) : name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    this->_sign = 0;
}

AForm::AForm(const AForm &obj) : name(obj.getName()), gradeToSign(obj.getGradeToSign()), gradeToExecute(obj.getGradeToExecute())
{
    *this = obj;
}

AForm &AForm::operator=(const AForm &obj)
{
    if(this != &obj)
    {
        this->_sign = obj.get_sign();
    }
    return(*this);
}

AForm::~AForm() {}
        
std::string AForm::getName() const 
{
    return(this->name);
}

int AForm::get_sign() const 
{
    return(this->_sign);
}

int AForm::getGradeToSign() const 
{
    return(this->gradeToSign);
}

int AForm::getGradeToExecute() const 
{
    return(this->gradeToExecute);
}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
    if(bureaucrat.getGrade() <= this->getGradeToSign())
        this->_sign = 1;
    else
        throw Bureaucrat::GradeTooLowException();
}

std::ostream& operator<<(std::ostream &out, const AForm &obj)
{
    if(obj.get_sign())
        out << obj.getName() << " is signed!"<< std::endl;
    else
        out << obj.getName() << " is not signed!"<< std::endl;
    return (out);
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return ("Grade Too High!");
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return ("Grade Too Low!");    
}

const char *AForm::FormNotSignedException::what() const throw()
{
    return ("Form is not signed!");    
}