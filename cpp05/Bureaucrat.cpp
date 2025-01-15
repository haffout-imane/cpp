/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 14:57:31 by ihaffout          #+#    #+#             */
/*   Updated: 2025/01/14 16:49:05 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default")
{
    this->grade = 150;
    std::cout << "Bureaucrat: default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : name(name)
{
    if(grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if(grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade = grade;
    std::cout << "Bureaucrat: parametric constructor called" << std::endl; 
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const & src)
{
    
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
    
}

Bureaucrat::~Bureaucrat()
{
    
}

std::string Bureaucrat::getName() const
{
    return (this->name);
}

int Bureaucrat::getGrade() const
{
    return (this->grade);
}
