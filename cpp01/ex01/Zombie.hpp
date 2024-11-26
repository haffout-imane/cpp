/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 03:52:51 by ihaffout          #+#    #+#             */
/*   Updated: 2024/11/24 04:22:38 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

    #include <iostream>
    
class Zombie
{
    private:
        std::string name;

    public:
        Zombie(std::string name);
        Zombie();
        ~Zombie();
        void announce(void);
        void set_name(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif