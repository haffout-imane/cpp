/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:34:21 by ihaffout          #+#    #+#             */
/*   Updated: 2024/11/26 01:03:41 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(int ac, char **av)
{   
    (void) av;
    if(ac == 1)
    {
        PhoneBook phonebook;
        std::string command;
        while (1)
        {
            std::cout << "  => Enter a command: ";
            std::getline(std::cin, command);
            if (std::cin.eof())
            {
                std::cout << std::endl;
                return 1;
            }
            if(command == "ADD")
                phonebook.add_contact();
            else if(command == "SEARCH")
                phonebook.search_contact();
            else if(command == "EXIT")
                break;
            else
                std::cout << "* Invalid command *" << std::endl;
        }
        std::cout << "* BYE *" << std::endl;
    }
    return(0);
}