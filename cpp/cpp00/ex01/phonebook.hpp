/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:13:46 by ihaffout          #+#    #+#             */
/*   Updated: 2024/11/10 12:46:21 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "contact.hpp"
    
class PhoneBook
{
    private:
        Contact contacts[8];
        int index;
        int contacts_nbr;
        
    public:
        int     add_contact();
        void    search_contact();
        PhoneBook();
};

#endif