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

class Cure : public AMateria
{
    public:
        Cure(void);
        Cure(std::string & type);
        Cure(Cure &obj);
        Cure &operator=(Cure &obj);
        ~Cure(void);
 
        virtual Cure* clone() const;
        virtual void use(ICharacter& target);
};

#endif