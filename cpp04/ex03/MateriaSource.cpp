/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 00:13:44 by ihaffout          #+#    #+#             */
/*   Updated: 2025/01/09 00:44:06 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : materia_book()
{
    std::cout << "MateriaSource: Default constructor called!" << std::endl;
} 

MateriaSource::MateriaSource(MateriaSource &obj)
{
    std::cout << "MateriaSource: Copy constructor called!" << std::endl;
    *this = obj;
}

MateriaSource   &MateriaSource::operator=(MateriaSource &obj)
{
    std::cout << "MateriaSource: Copy assignment operator called!" << std::endl;
    if (this != &obj)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->materia_book[i])
                delete (this->materia_book[i]);
            if (obj.materia_book[i])
                this->materia_book[i] = obj.materia_book[i]->clone();
            else
                this->materia_book[i] = NULL;
        }
    }
    std::cout << "MateriaSource: Copy assignment operator finished!" << std::endl;
    return (*this);
}

MateriaSource::~MateriaSource()
{
    for(int i = 0; i < 4; i++)
    {
        if (this->materia_book[i])
            delete (this->materia_book[i]);
    }
    std::cout << "MateriaSource: Destructor called!" << std::endl;
}


void MateriaSource::learnMateria(AMateria *mat)
{
    for(int i = 0; i < 4; i++)
    {
        if (!this->materia_book[i])
        {
            this->materia_book[i] = mat;
            std::cout << "MateriaSource: Materia learned!" << std::endl;
            break;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this -> materia_book[i] && type == this->materia_book[i]->getType())
        {
            std::cout << "MateriaSource: Materia created!" << std::endl;
            return (this->materia_book[i]->clone());
        }
    }
    std::cout << "MateriaSource: Materia not found!" << std::endl;
    return (NULL);
}
