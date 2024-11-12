/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:34:21 by ihaffout          #+#    #+#             */
/*   Updated: 2024/11/10 16:21:55 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

int main()
{
    Contact contact;
    PhoneBook phonebook;
    std::string command;

    while (1)
    {
        std::cout << "  => Eenter a command: ";
        std::getline(std::cin, command);
        // std::cin >> command;
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
    return(0);
}