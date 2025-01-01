/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 18:39:29 by ihaffout          #+#    #+#             */
/*   Updated: 2024/12/31 23:20:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

    #include <iostream>
    #include <cstdlib>

class Animal
{
    protected:
        std::string type;

    public:
        Animal(void);
        Animal(std::string type);
        Animal(Animal &obj);
        Animal  &operator=(const Animal    &obj);
        virtual ~Animal();
        virtual void    makeSound(void) const = 0; 
        virtual std::string getType(void) const;
        
};

#endif