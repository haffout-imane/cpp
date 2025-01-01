/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 20:10:20 by ihaffout          #+#    #+#             */
/*   Updated: 2025/01/01 04:21:01 by marvin           ###   ########.fr       */
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
        Dog(Dog &obj);
        Dog &operator=(const Dog &obj);
        ~Dog(void);
        void    makeSound(void) const;
        const std::string getBrainIdeas(int index) const;
        void setBrainIdeas(int index, std::string idea);
};

#endif