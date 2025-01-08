/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 03:26:49 by marvin            #+#    #+#             */
/*   Updated: 2025/01/01 03:26:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

    #include "AMateria.hpp"
    #include "ICharacter.hpp"

class Ice : public AMateria
{
    public:
        Ice(void);
        Ice(std::string & type);
        Ice(Ice &obj);
        Ice &operator=(Ice &obj);
        ~Ice(void);
 
        virtual Ice* clone() const;
        virtual void use(ICharacter& target);
};

#endif