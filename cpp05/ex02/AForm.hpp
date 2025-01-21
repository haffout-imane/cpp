/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 10:39:07 by ihaffout          #+#    #+#             */
/*   Updated: 2025/01/20 19:49:57 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AFORM_HPP
# define AFORM_HPP

    #include "Bureaucrat.hpp"
    
class Bureaucrat;

class AForm
{
    private:
        const std::string name;
        bool _sign;
        const int gradeToSign;
        const int gradeToExecute;
    
    public:
        AForm();
        AForm(const std::string name, const int gradeToSign, const int gradeToExecute);
        AForm(const AForm &obj);
        AForm &operator=(const AForm &obj);
        virtual ~AForm();
        
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
        
        class FormNotSignedException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        
        virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<<(std::ostream &out, const AForm &obj);

#endif