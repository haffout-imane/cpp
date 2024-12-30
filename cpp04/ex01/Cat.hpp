/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 20:10:18 by ihaffout          #+#    #+#             */
/*   Updated: 2024/12/29 02:37:29 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

    #include "Animal.hpp"
    #include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *brain;
        
    public:
        Cat(void);
        Cat(std::string type);
        Cat(Cat &obj);
        Cat &operator=(const Cat &obj);
        ~Cat(void);
        void    makeSound(void) const;
};

#endif