/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 07:38:20 by marvin            #+#    #+#             */
/*   Updated: 2025/01/08 07:38:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

    #include "AMateria.hpp"

class ICharacter
{
    public:
        virtual ~ICharacter(void) = 0;
        virtual std::string const &getName() const = 0;
        virtual equip(AMateria *m) = 0;
        virtual unequip(int idx) = 0;
        virtual void use(int idx, ICharacter target) = 0;
};

#endif