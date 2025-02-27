/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 22:06:02 by ihaffout          #+#    #+#             */
/*   Updated: 2024/12/21 19:10:33 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

    #include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public :
        FragTrap();
        FragTrap(const std::string &name);
        FragTrap(const FragTrap &obj);
        FragTrap    &operator=(const FragTrap &obj);
        ~FragTrap();

        void    highFivesGuys( void );
};

#endif