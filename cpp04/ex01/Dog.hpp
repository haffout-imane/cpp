/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 20:10:20 by ihaffout          #+#    #+#             */
/*   Updated: 2024/12/29 02:37:59 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

    #include "Animal.hpp"
    #include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *brain;

    public:
        Dog(void);
        Dog(std::string type);
        Dog(Dog &obj);
        Dog &operator=(const Dog &obj);
        ~Dog(void);
        void    makeSound(void) const;
};

#endif