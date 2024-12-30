/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 20:10:20 by ihaffout          #+#    #+#             */
/*   Updated: 2024/12/25 22:50:57 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

    #include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog(void);
        Dog(std::string type);
        Dog(Dog &obj);
        Dog &operator=(const Dog &obj);
        ~Dog(void);
        void    makeSound(void) const;
};

#endif