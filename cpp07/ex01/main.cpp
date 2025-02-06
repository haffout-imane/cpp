/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 20:56:33 by ihaffout          #+#    #+#             */
/*   Updated: 2025/02/04 23:05:31 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    std::string human[5] = {"First name: Imane",
                            "Last name: Haffout",
                            "Age: 21",
                            "City: Tanger",
                            "School: 1337"};
    iter<std::string , const std::string>(human, 5, ft_print);
}