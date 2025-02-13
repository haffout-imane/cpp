/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 03:38:26 by ihaffout          #+#    #+#             */
/*   Updated: 2025/02/12 05:33:57 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    mstack.push(25);
    std::cout << "Top element before pop: " << mstack.top() << std::endl;
    std::cout << "Size before pop: " << mstack.size() << std::endl;
    mstack.pop();
    std::cout << "Top element after pop: " << mstack.top() << std::endl;
    std::cout << "Size after pop: " << mstack.size() << std::endl;
    
    std::cout << "--------------------------" << std::endl;
    
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    std::cout << "Iterator: " << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    
    std::cout << "--------------------------" << std::endl;
    
    MutantStack<int>::reverse_iterator r1 = mstack.rbegin();
    MutantStack<int>::reverse_iterator r2 = mstack.rend();
    std::cout << "Reverse Iterator: " << std::endl;
    while (r1 != r2)
    {
        std::cout << *r1 << std::endl;
        ++r1;
    }
    
    return 0;
}
