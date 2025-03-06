/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 04:07:44 by ihaffout          #+#    #+#             */
/*   Updated: 2025/03/06 01:57:32 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{

}

PmergeMe::PmergeMe(PmergeMe const & src)
{
    *this = src;
}

PmergeMe &PmergeMe::operator=(PmergeMe const & src)
{
    if(this != &src)
    {
        *this = src;
    }
    return *this;
}

PmergeMe::~PmergeMe()
{

}

std::vector<int> &PmergeMe::getVector()
{
    return this->_v;
}

std::deque<int> &PmergeMe::getDeque()
{
    return this->_d;
}

void PmergeMe::validInput(int ac, char **av)
{
    if(ac > 1)
    {
        for(int i = 1; i < ac; i++)
        {
            if(std::all_of(av[i], av[i] + strlen(av[i]), ::isdigit) == false)
            {
                if(av[i][0] == '+' && std::all_of(av[i] + 1, av[i] + strlen(av[i]), ::isdigit))
                    continue;
                throw std::runtime_error("Usage: ./PmergeMe [positive integer] [positive integer] ...");
            }
            if(std::stoi(av[i]) < 0)
                throw std::runtime_error("Usage: ./PmergeMe [positive integer] [positive integer] ...");
        }
    }
    else
        throw std::runtime_error("Usage: ./PmergeMe [positive integer] [positive integer] ...");
    
    for(int i = 1; i < ac; i++)
    {
        int num = std::stoi(av[i]);
        _v.push_back(num);
        _d.push_back(num);
    }
}

std::vector<size_t> PmergeMe::OrderGeneraterVector(size_t size)
{
    std::vector<size_t> indexes;
    if(size == 0)
        return indexes;
    indexes.push_back(0);
    
    size_t index = 1;
    while(index < size)
    {
        indexes.push_back(index);
        if(index * 2 < size)
            index *= 2;
        else
            index = size;
    }
    
    index = 0;
    while(index < size)
    {
        if(std::find(indexes.begin(), indexes.end(), index) == indexes.end())
            indexes.push_back(index);
        index++;
    }
    

    return indexes;
}

std::deque<size_t> PmergeMe::OrderGeneraterDeque(size_t size)
{
    std::deque<size_t> indexes;
    if(size == 0)
        return indexes;

    indexes.push_back(0);
    size_t index = 1;
    while(index < size)
    {
        indexes.push_back(index);
        if(index * 2 < size)
            index *= 2;
        else
            index = size;
    }
    
    index = 0;
    while(index < size)
    {
        if(std::find(indexes.begin(), indexes.end(), index) == indexes.end())
            indexes.push_back(index);
        index++;
    }

    return indexes;
}


void PmergeMe::mergeInsertionSort(std::vector<int> &_v)
{
    if (_v.size() > 1)
    {
        std::vector< std::pair<int, int> > pairs;
        for(unsigned long i = 0; i < _v.size() - 1; i += 2)
        {
            if(_v[i] < _v[i + 1])
                pairs.push_back(std::make_pair(_v[i], _v[i + 1]));
            else
                pairs.push_back(std::make_pair(_v[i + 1], _v[i]));
        }
        
        std::vector<int> tmp, main;
        for(unsigned long i = 0; i < pairs.size(); i++)
        {
            tmp.push_back(pairs[i].first);
            main.push_back(pairs[i].second);
        }

        if(_v.size() % 2 != 0)
            tmp.push_back(_v.back());

        mergeInsertionSort(main);
        std::vector<size_t> indexes = OrderGeneraterVector(tmp.size());
        for(size_t i = 0; i < indexes.size(); i++)
        {
            if(indexes[i] < tmp.size())
            {
                std::vector<int>::iterator it = std::lower_bound(main.begin(), main.end(), tmp[indexes[i]]);
                main.insert(it, tmp[indexes[i]]);
            }  
        }
        _v = main;
    }
}

void PmergeMe::mergeInsertionSort(std::deque<int> &_d)
{
    if (_d.size() > 1)
    {
        std::deque< std::pair<int, int> > pairs;
        for(unsigned long i = 0; i < _d.size() - 1; i += 2)
        {
            if(_d[i] < _d[i + 1])
                pairs.push_back(std::make_pair(_d[i], _d[i + 1]));
            else
                pairs.push_back(std::make_pair(_d[i + 1], _d[i]));
        }
        
        std::deque<int> tmp, main;
        for(unsigned long i = 0; i < pairs.size(); i++)
        {
            tmp.push_back(pairs[i].first);
            main.push_back(pairs[i].second);
        }

        if(_d.size() % 2 != 0)
            tmp.push_back(_d.back());
        mergeInsertionSort(main);
        std::deque<size_t> indexes = OrderGeneraterDeque(tmp.size());
        for(size_t i = 0; i < indexes.size(); i++)
        {
            if(indexes[i] < tmp.size())
            {
                std::deque<int>::iterator it = std::lower_bound(main.begin(), main.end(), tmp[indexes[i]]);
                main.insert(it, tmp[indexes[i]]);
            }  
        }
        _d = main;
    }
}

