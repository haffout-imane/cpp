/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 03:38:20 by ihaffout          #+#    #+#             */
/*   Updated: 2025/02/09 03:35:54 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

    #include <iostream>
    #include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() : std::stack<T>();
        MutantStack(MutantStack const & src) : std::stack<T>(src);
        virtual ~MutantStack();
        MutantStack & operator=(MutantStack const & src);
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin();
        iterator end();
        iterator rbegin();
        iterator rend();
        iterator rbegin() const;
        iterator rend() const;
};

    #include "MutantStack.tpp"

#endif