/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 20:10:20 by ihaffout          #+#    #+#             */
/*   Updated: 2025/01/01 04:04:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

    #include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog(void);
        Dog(Dog &obj);
        Dog &operator=(const Dog &obj);
        ~Dog(void);
        void    makeSound(void) const;
};

#endif