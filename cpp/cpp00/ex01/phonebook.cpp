/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:13:44 by ihaffout          #+#    #+#             */
/*   Updated: 2024/11/10 16:45:51 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iomanip>


PhoneBook::PhoneBook()
{
    index = 0;
    contacts_nbr = 0;
}

int    PhoneBook::add_contact()
{
    std::string user_fn, user_ln, user_nn, user_phn, user_ds;
    std::cout << "Enter first name: ";
    std::getline(std::cin, user_fn);
    if (user_fn.empty())
        return (std::cout << "* You should enter the first name! *" << std::endl, 1);
    std::cout << "Enter last name: ";
    std::getline(std::cin ,user_ln);
    if(user_ln.empty())
        return(std::cout << "* You should enter the last name! *" << std::endl, 1);
    std::cout << "Enter nickname: ";
    std::getline(std::cin ,user_nn);
    if(user_nn.empty())
        return(std::cout << "* You should enter the nickname! *" << std::endl, 1);
    std::cout << "Enter phone number: ";
    std::getline(std::cin ,user_phn);
    if(user_phn.empty())
        return(std::cout << "* You should enter the phone number! *" << std::endl, 1);
    if(user_phn.length() != 10 || !std::all_of(user_phn.begin(), user_phn.end(), ::isdigit))
        return(std::cout << "* Check your phone number! it must be 10 digits *" << std::endl, 1);
    std::cout << "Enter a dark secret: ";
    std::getline(std::cin ,user_ds);
    if(user_ds.empty())
        return(std::cout << "* You should enter a dark secret! *" << std::endl, 1);
    if (contacts_nbr == 2)
        contacts[index].set_info(user_fn, user_ln, user_nn, user_phn, user_ds);
    else 
    {
        contacts[index].set_info(user_fn, user_ln, user_nn, user_phn, user_ds);
        contacts_nbr++;
    }
    index = (index + 1) % 2;
    return(0);
}

void    PhoneBook::search_contact()
{
    std::string str;
    if(!contacts_nbr)
    {
        std::cout << "* You don't have any contacts! *" << std::endl;
        return;
    }
    for(int i = 0; i < contacts_nbr; i++)
    {
        std::cout << "-------------------------------------------" << std::endl;
        std::cout << std::setw(10) << i << "|";
        if(contacts[i].get_first_name().length() > 10)
            std::cout << contacts[i].get_first_name().substr(0, 9) << ".|";
        else
            std::cout << std::setw(10) << contacts[i].get_first_name() << "|";
        if(contacts[i].get_last_name().length() > 10)
            std::cout << contacts[i].get_last_name().substr(0, 9) << ".|";
        else
            std::cout << std::setw(10) << contacts[i].get_last_name() << "|";
        if(contacts[i].get_nickname().length() > 10)
            std::cout << contacts[i].get_nickname().substr(0, 9) << "." << std::endl;
        else
            std::cout << std::setw(10) << contacts[i].get_nickname() << std::endl;
    } 
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "  ====> Enter an index: " ;
    std::getline(std::cin, str);
    int nbr;
    if(str.length() == 1)
    {
        try
        {
            nbr = std::stoi(str);
        }
        catch(const std::out_of_range &s)
        {
            std::cout << "* You must enter an integer! *";
            return;
        }
        catch( const std::invalid_argument &s)
        {
            std::cout << "* You must enter an integer! *";
            return;
        }
        if (nbr < contacts_nbr)
        {
            std::cout << " -first name: " << contacts[nbr].get_first_name() << std::endl;
            std::cout << " -last name: " << contacts[nbr].get_last_name() << std::endl;
            std::cout << " -nick name: " << contacts[nbr].get_nickname() << std::endl;
            std::cout << " -phone number: " << contacts[nbr].get_phone_number() << std::endl;
            std::cout << " -darkest secret: " << contacts[nbr].get_darkest_secret() << std::endl;
        }
        else 
            std::cout << "* YOU don't have this contact! *" << std::endl;
    }
    else
        std::cout << "* Invalid index! *" << std::endl;
}

