/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 23:53:33 by ihaffout          #+#    #+#             */
/*   Updated: 2025/02/06 00:36:35 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

    #include <iostream>

template<typename T>
class Array
{
    private:
        T *arr;
        unsigned int _size;
        
    public:
        Array();
        Array(unsigned int _size);
        Array(Array const &obj);
        Array& operator=(Array const &obj);
        ~Array();
        T &operator[](unsigned int index);
        const T &operator[](unsigned int index) const;
        unsigned int size() const;
};

#include "Array.tpp"

#endif