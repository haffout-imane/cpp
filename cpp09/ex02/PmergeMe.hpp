/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 04:07:42 by ihaffout          #+#    #+#             */
/*   Updated: 2025/03/06 01:30:29 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

    #include <iostream>
    #include <vector>
    #include <deque>
    #include <string>
    #include <ctime>

class PmergeMe
{
    private:
        std::vector<int> _v;
        std::deque<int> _d;
    public:
        PmergeMe();
        PmergeMe(PmergeMe const & src);
        PmergeMe &operator=(PmergeMe const & src);
        ~PmergeMe();
        std::vector<int> &getVector();
        std::deque<int> &getDeque();
        void validInput(int ac, char **av);
        std::vector<size_t> OrderGeneraterVector(size_t size); 
        std::deque<size_t> OrderGeneraterDeque(size_t size);
        void mergeInsertionSort(std::vector<int> &_v);
        void mergeInsertionSort(std::deque<int> &_d);
};

#endif