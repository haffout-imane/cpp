/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 20:10:18 by ihaffout          #+#    #+#             */
/*   Updated: 2025/01/01 04:03:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

    #include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat(void);
        Cat(Cat &obj);
        Cat &operator=(const Cat &obj);
        ~Cat(void);
        void    makeSound(void) const;
};

#endif