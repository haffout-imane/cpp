/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 14:57:31 by ihaffout          #+#    #+#             */
/*   Updated: 2025/01/17 19:41:43 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default")
{
    this->grade = 150;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : name(name)
{
    if(grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if(grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade = grade;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &obj)
{
    if(this != &obj)
    {
        this->grade = obj.getGrade();
    }
    return(*this);
}

Bureaucrat::Bureaucrat(Bureaucrat const &obj)
{
    *this = obj;
} 

Bureaucrat::~Bureaucrat() {}

std::string Bureaucrat::getName() const
{
    return (this->name);
}

void Bureaucrat::decrementGrade()
{
    if(this->grade != 150)
        this->grade++;
    else
        throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::incrementGrade()
{
    if(this->grade != 1)
        this->grade--;
    else
        throw Bureaucrat::GradeTooHighException();
}

int Bureaucrat::getGrade() const
{
    return (this->grade);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade Too High!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade Too Low!");    
}

void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->name << " signs " << form.getName() << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cout << this->name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
    }
    
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat &obj)
{
    out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << "." << std::endl;
    return (out);
}