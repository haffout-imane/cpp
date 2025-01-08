/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 07:41:27 by marvin            #+#    #+#             */
/*   Updated: 2025/01/08 07:41:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

    #include "AMateria.hpp"
    #include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        std::string name;

    public:
        Character(void);
        Character(std::sting name);
        Character(Character &objd);
        Character &operator=(Character &obj);
        ~Character(void);
}

#endif