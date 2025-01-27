/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 16:00:21 by ihaffout          #+#    #+#             */
/*   Updated: 2025/01/25 18:25:17 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

    #include <iostream>
    #include <string>

typedef struct Data
{
    int age;
    std::string name;
    std::string city;

} Data;

class Serializer
{   
    private:
        Serializer();
        Serializer(Serializer const &obj);
        Serializer &operator=(Serializer const &obj);
        ~Serializer();
        
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};
#endif