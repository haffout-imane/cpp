/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:13:51 by ihaffout          #+#    #+#             */
/*   Updated: 2024/11/12 12:36:41 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void Contact::set_info(std::string user_fn, std::string user_ln, std::string user_nn, std::string user_phn, std::string user_ds)
{
    first_name = user_fn;
    last_name = user_ln;
    nickname = user_nn;
    phone_number = user_phn;
    darkest_secret = user_ds;
}

std::string     Contact::get_first_name()
{
    return(first_name);
}

std::string     Contact::get_last_name()
{
    return(last_name);
}

std::string     Contact::get_nickname()
{
    return(nickname);
}

std::string     Contact::get_phone_number()
{
    return(phone_number);
}

std::string     Contact::get_darkest_secret()
{
    return(darkest_secret);
}

