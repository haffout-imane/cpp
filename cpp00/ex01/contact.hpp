/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:13:53 by ihaffout          #+#    #+#             */
/*   Updated: 2024/11/23 02:13:54 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;

    public:
        void    set_info(std::string user_fn, std::string user_ln, std::string user_nn, std::string user_phn, std::string user_ds);
        std::string    get_first_name();
        std::string    get_last_name();
        std::string    get_nickname();
        std::string    get_phone_number();
        std::string    get_darkest_secret();
};

#endif