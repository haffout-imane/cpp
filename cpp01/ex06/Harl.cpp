/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 01:22:25 by ihaffout          #+#    #+#             */
/*   Updated: 2024/11/29 03:09:36 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl << std::endl;
}
void Harl::info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl << "You didn’t putenough bacon in my burger!" << std::endl <<"If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}
void Harl::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl << "I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}
void Harl::error(void)
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

void Harl::complain(std::string level)
{

    int i = 0;
    void (Harl::*functions[])(void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error,
    };

    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for(i = 0; i <= 4; i++)
    {
        if(levels[i] == level)
            break;
    }
        switch (i)
        {
            case 0:
                (this->*functions[0])();
            case 1:
                (this->*functions[1])();
            case 2:
                (this->*functions[2])();
            case 3:
                (this->*functions[3])();
                break;
            default:
                std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl << std::endl;
        }
    return;
}