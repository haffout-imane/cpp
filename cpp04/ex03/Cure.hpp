/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 03:37:26 by marvin            #+#    #+#             */
/*   Updated: 2025/01/01 03:37:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

    #include "AMateria.hpp"
    #include "ICharacter.hpp"

class Cure : public AMateria
{
    public:
        Cure(void);
        Cure(Cure const &obj);
        Cure &operator=(Cure const &obj);
        ~Cure(void);
 
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};

#endif