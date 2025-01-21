/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 10:44:20 by ihaffout          #+#    #+#             */
/*   Updated: 2025/01/20 15:46:26 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

    #include "AForm.hpp"
    #include "Bureaucrat.hpp"
    
class PresidentialPardonForm : public AForm
{
        private:
        std::string _target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm const &obj);
        virtual ~PresidentialPardonForm();
        PresidentialPardonForm & operator=(PresidentialPardonForm const &obj);
        void execute(Bureaucrat const & executor) const;
};

#endif