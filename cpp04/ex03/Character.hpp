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
        AMateria *materia[4];

    public:
        Character(void);
        Character(std::string name);
        Character(Character &objd);
        Character &operator=(Character &obj);
        ~Character(void);

        std::string const &getName() const;
        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter &target);
};

#endif