/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 23:15:58 by ihaffout          #+#    #+#             */
/*   Updated: 2024/12/26 00:39:03 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain: Default constructor called!" << std::endl;
}

Brain::Brain(Brain &obj)
{
    std::cout << "Brain: Copy constructor called!" << std::endl;
    *this = obj;
}

Brain &Brain::operator=(Brain &obj)
{
    std::cout << "Brain: Copy assignment operator called!" << std::endl;
    if(this != &obj)
    {
        for(int i = 0; i < 100; i++)
            this->ideas[i] = obj.ideas[i];
    }
    return(*this);
}

Brain::~Brain(void)
{
    std::cout << "Brain: Destructor called!" << std::endl;
}
