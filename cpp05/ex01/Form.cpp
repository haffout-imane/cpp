/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 12:16:48 by ihaffout          #+#    #+#             */
/*   Updated: 2025/01/17 19:51:17 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("default"), gradeToSign(150), gradeToExecute(150) 
{
    this->_sign = 0;
}

Form::Form(const std::string name, const int gradeToSign, const int gradeToExecute) : name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    this->_sign = 0;
}

Form::Form(const Form &obj) : name(obj.getName()), gradeToSign(obj.getGradeToSign()), gradeToExecute(obj.getGradeToExecute())
{
    *this = obj;
}

Form &Form::operator=(const Form &obj)
{
    if(this != &obj)
    {
        this->_sign = obj.get_sign();
    }
    return(*this);
}

Form::~Form() {}
        
std::string Form::getName() const 
{
    return(this->name);
}

int Form::get_sign() const 
{
    return(this->_sign);
}

int Form::getGradeToSign() const 
{
    return(this->gradeToSign);
}

int Form::getGradeToExecute() const 
{
    return(this->gradeToExecute);
}

void Form::beSigned(Bureaucrat &bereuacrat)
{
    if(bereuacrat.getGrade() <= this->getGradeToSign())
        this->_sign = 1;
    else
        throw Bureaucrat::GradeTooLowException();
}

std::ostream& operator<<(std::ostream &out, const Form &obj)
{
    if(obj.get_sign())
        out << obj.getName() << " is signed!"<< std::endl;
    else
        out << obj.getName() << " is not signed!"<< std::endl;
    return (out);
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("Grade Too High!");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("Grade Too Low!");    
}
