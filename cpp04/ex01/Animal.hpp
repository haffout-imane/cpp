/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 18:39:29 by ihaffout          #+#    #+#             */
/*   Updated: 2024/12/25 22:24:36 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

    #include <iostream>

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
        virtual void    makeSound(void) const; 
        virtual std::string getType(void) const;
        
};

#endif