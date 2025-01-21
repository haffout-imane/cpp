/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 14:57:26 by ihaffout          #+#    #+#             */
/*   Updated: 2025/01/21 12:27:41 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

    #include <iostream>
    #include "AForm.hpp"

class AForm;

class  Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string const name, int grade);
        Bureaucrat& operator=(Bureaucrat const & obj);
        Bureaucrat(Bureaucrat const & obj);
        ~Bureaucrat();
        std::string getName() const;
        int getGrade() const;
        void decrementGrade();
        void incrementGrade();
        void signForm(AForm &form);
        void executeForm(AForm const & form);
        
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
    
};

std::ostream& operator<<(std::ostream &out, const Bureaucrat &obj);

#endif