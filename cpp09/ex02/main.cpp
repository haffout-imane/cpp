/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 04:07:47 by ihaffout          #+#    #+#             */
/*   Updated: 2025/03/06 02:17:48 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    PmergeMe p;
    try
    {
        p.validInput(ac, av);
        std::cout << "Before: ";
        for(std::vector<int>::iterator it = p.getVector().begin(); it != p.getVector().end(); it++)
            std::cout << *it << " ";
        std::cout << std::endl;
        
           
        clock_t start_v = std::clock();
        p.mergeInsertionSort(p.getVector());
        clock_t end_v = std::clock();
        double time_v = static_cast<double>(end_v - start_v) / CLOCKS_PER_SEC * 1000000;
        
        clock_t start_d = std::clock();
        p.mergeInsertionSort(p.getDeque());
        clock_t end_d = std::clock();
        double time_d = static_cast<double>(end_d - start_d) / CLOCKS_PER_SEC * 1000000;
        
        std::cout << "After: ";
        for(std::vector<int>::iterator it = p.getVector().begin(); it != p.getVector().end(); it++)
            std::cout << *it << " ";
        std::cout << std::endl;
        
        std::cout << "Time to process a range of " << p.getVector().size() << " elements with std::vector : " << time_v << " us" << std::endl;
        std::cout << "Time to process a range of " << p.getDeque().size() << " elements with std::deque : " << time_d << " us" << std::endl;
    
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}