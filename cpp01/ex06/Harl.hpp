/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harlFilter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 01:22:12 by ihaffout          #+#    #+#             */
/*   Updated: 2024/11/29 02:35:46 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

    #include <iostream>

class Harl
{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);

    public:
        void complain(std::string level);
};

#endif