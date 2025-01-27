/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 19:27:26 by ihaffout          #+#    #+#             */
/*   Updated: 2025/01/25 19:34:27 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

    #include <iostream>
    #include <string>

class Base
{      
    public:
        virtual ~Base();
};

Base *generate(void);
void    identify(Base *p);
void    identify(Base &p);

#endif