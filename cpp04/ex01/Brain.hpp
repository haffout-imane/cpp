/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 23:16:00 by ihaffout          #+#    #+#             */
/*   Updated: 2024/12/25 23:47:59 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

    #include "Animal.hpp"

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain(void);
        Brain(Brain &obj);
        Brain &operator=(Brain &obj);
        ~Brain(void);
};

#endif