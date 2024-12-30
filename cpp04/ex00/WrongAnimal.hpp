/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 23:22:27 by ihaffout          #+#    #+#             */
/*   Updated: 2024/12/29 01:43:27 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

    #include <iostream>

class WrongAnimal
{
    protected:
        std::string type;

    public:
        WrongAnimal(void);
        WrongAnimal(std::string type);
        WrongAnimal(WrongAnimal &obj);
        WrongAnimal  &operator=(const WrongAnimal    &obj);
        virtual ~WrongAnimal();
        void    makeSound(void) const; 
        std::string getType(void) const;
        
};

#endif