/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 10:44:30 by ihaffout          #+#    #+#             */
/*   Updated: 2025/01/20 19:33:23 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

    #include "AForm.hpp"
    #include "Bureaucrat.hpp"
    #include <fstream>

class ShrubberyCreationForm : public AForm
{
    private:
        std::string _target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm const &obj);
        virtual ~ShrubberyCreationForm();
        ShrubberyCreationForm & operator=(ShrubberyCreationForm const &obj);
        void execute(Bureaucrat const & executor) const;
};

#endif