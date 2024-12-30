/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 20:10:18 by ihaffout          #+#    #+#             */
/*   Updated: 2024/12/25 22:50:17 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

    #include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat(void);
        Cat(std::string type);
        Cat(Cat &obj);
        Cat &operator=(const Cat &obj);
        ~Cat(void);
        void    makeSound(void) const;
};

#endif