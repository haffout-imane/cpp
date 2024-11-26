/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 22:58:20 by ihaffout          #+#    #+#             */
/*   Updated: 2024/11/24 03:11:00 by ihaffout         ###   ########.fr       */
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
};
Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif