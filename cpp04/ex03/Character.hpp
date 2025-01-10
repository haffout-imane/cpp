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

class Character : public ICharacter
{
    private:
        std::string name;
        int used_slots;
        AMateria *slots[4];
        AMateria *leftMateria;

    public:
        Character(void);
        Character(std::string name);
        Character(Character &obj);
        Character &operator=(Character &obj);
        ~Character(void);

        std::string const &getName() const;
        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter &target);
};

#endif