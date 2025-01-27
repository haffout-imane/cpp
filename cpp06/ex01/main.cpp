/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 16:13:00 by ihaffout          #+#    #+#             */
/*   Updated: 2025/01/25 18:44:02 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data Humman1;
    Humman1.age = 21;
    Humman1.name = "imane";
    Humman1.city = "Tetouan";

    std::cout << "The address of Humman1 beffore serialization: " << &Humman1 << std::endl;
    uintptr_t raw = Serializer::serialize(&Humman1);
    std::cout << "The address of Humman1 after serialization: " << raw << std::endl;
    Data *_deserialize = Serializer::deserialize(raw);
    std::cout << "The address of Humman1 after deserialization: " << _deserialize << std::endl;
}