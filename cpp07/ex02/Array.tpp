/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 23:57:03 by ihaffout          #+#    #+#             */
/*   Updated: 2025/02/06 01:24:36 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
    arr = NULL;
    _size = 0;
}

template <typename T>
Array<T>::Array(unsigned int _size)
{
    this->_size = _size;
    this->arr = new T[_size]();
}

template <typename T>
Array<T> &Array<T>::operator=(Array const & obj)
{
    if(this != &obj)
    {
        if(arr)
            delete[] arr;
        this->_size = obj._size;
        this->arr = new T[this->_size];
        for(unsigned int i = 0; i < this->_size; i++)
            this->arr[i] = obj.arr[i];
    }
    return *this;
}

template <typename T>
Array<T>::Array(const Array &obj)
{
    this->_size = obj._size;
    this->arr = new T[this->_size];
    for(unsigned int i = 0; i < this->_size; i++)
        this->arr[i] = obj.arr[i];
}

template <typename T>
Array<T>::~Array()
{
    if(this->arr)
        delete[] this->arr;
}
template<typename T>
T &Array<T>::operator[](unsigned int index)
{
    if (index < this->_size)
        return(this->arr[index]);
    throw std::out_of_range("Index out of bounds!");
}

template<typename T>
const T &Array<T>::operator[](unsigned int index) const
{
    if (index < this->_size)
        return(this->arr[index]);
    throw std::out_of_range("Index out of bounds!");
}

template<typename T>
unsigned int Array<T>::size() const
{
    return this->_size;
}
