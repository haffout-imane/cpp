/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 02:16:14 by marvin            #+#    #+#             */
/*   Updated: 2025/01/01 02:16:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

    #include <iostream>

class AMateria
{
    protected:
        std::string type;

    public:
        AMateria(void);
        AMateria(std::string & type);
        AMateria(AMateria const &obj);
        AMateria &operator=(AMateria &obj);
        ~AMateria(void);

        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};


#endif