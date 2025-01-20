/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 12:16:50 by ihaffout          #+#    #+#             */
/*   Updated: 2025/01/17 19:49:59 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

    #include "Bureaucrat.hpp"
    
class Bureaucrat;

class Form
{
    private:
        const std::string name;
        bool _sign;
        const int gradeToSign;
        const int gradeToExecute;
    
    public:
        Form();
        Form(const std::string name, const int gradeToSign, const int gradeToExecute);
        Form(const Form &obj);
        Form &operator=(const Form &obj);
        ~Form();
        
        std::string getName() const ;
        int get_sign() const ;
        int getGradeToSign() const ;
        int getGradeToExecute() const ;
        void beSigned(Bureaucrat &bureaucrat);
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

std::ostream& operator<<(std::ostream &out, const Form &obj);

#endif