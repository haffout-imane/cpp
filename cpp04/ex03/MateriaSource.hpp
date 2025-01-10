/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 00:13:45 by ihaffout          #+#    #+#             */
/*   Updated: 2025/01/09 00:23:54 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE
#define MATERIASOURCE

    #include "AMateria.hpp"
    #include "IMateriaSource.hpp"
    
class MateriaSource : public IMateriaSource
{
    private:
        AMateria *materia_book[4];
    public:
        MateriaSource();        
        MateriaSource(MateriaSource &obj);
        MateriaSource   &operator=(MateriaSource &obj);
        ~MateriaSource();
        
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};
#endif 