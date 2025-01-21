/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 10:44:32 by ihaffout          #+#    #+#             */
/*   Updated: 2025/01/21 12:18:35 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
    this->_target = "Default";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
    this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj) 
{
    *this = obj;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj)
{
    if(this != &obj)
    {
        this->_target = obj._target;
    }
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if(this->get_sign())
    {
        if(executor.getGrade() <= this->getGradeToExecute())
        {
            std::string file_name = this->_target + "_shrubbery";
            std::ofstream _file(file_name);
            if(!_file)
                exit(1);
            _file << "               ,@@@@@@@," << std::endl;
            _file << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
            _file << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
            _file << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
            _file << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
            _file << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
            _file << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
            _file << "        |o|        | |         | |" << std::endl;
            _file << "        |.|        | |         | |" << std::endl;
            _file.close();
        }
        else
        {
            throw AForm::GradeTooLowException();
        }
    }
    else
        throw (AForm::FormNotSignedException());
}