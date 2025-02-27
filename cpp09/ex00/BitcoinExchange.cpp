/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 20:36:51 by ihaffout          #+#    #+#             */
/*   Updated: 2025/02/27 02:37:11 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const & src)
{
    *this = src;
}

BitcoinExchange & BitcoinExchange::operator=(BitcoinExchange const & src)
{
    (void)src;
    return *this;
}

BitcoinExchange::~BitcoinExchange()
{
}

bool validDate(std::string date)
{
    if(date[4] != '-' || date[7] != '-')
    {
        std::cout << "Error: bad date => " << date << std::endl;
        return false;
    }
    for (int i = 0; i < 10; i++)
    {
        if(i == 4 || i == 7)
            continue;
        if(date[i] < '0' || date[i] > '9')
        {
            std::cout << "Error: bad date => " << date << std::endl;
            return false;
        }
    }
    if (std::stoi(date.substr(5, 2)) > 12 || std::stoi(date.substr(5, 2)) < 1)
    {
        std::cout << "Error: bad date => " << date << std::endl;
        return false;
    }
    if(std::stoi(date.substr(8, 2)) > 31 || std::stoi(date.substr(8, 2)) < 1)
    {
        std::cout << "Error: bad date => " << date << std::endl;
        return false;
    }
    return true;
}

bool validValue(std::string value)
{
    int dot = 0;
    for (unsigned long i = 0; i < value.size(); i++)
    {
        if(i == 0 && (value[i] == '-' || value[i] == '+'))
            continue;
        if(value[i] < '0' || value[i] > '9')
        {
            if(value[i] == '.' && dot == 0)
            {
                dot++;
                continue;
            }
            std::cout << "Error: bad input => " << value << std::endl;
            return false;
        }
    }
    if(std::stof(value) < 0)
    {
        std::cout << "Error: not a positive number." << std::endl;
        return false;
    }
    if(std::stof(value) > 1000)
    {
        std::cout << "Error: too large a number." << std::endl;
        return false;
    }
    return true;
}

void BitcoinExchange::exchange(std::string dataFile, char *inputFile)
{
    std::ifstream file(dataFile);
    std::string line;
    
    if (!file.is_open())
        throw std::runtime_error("Error: could not open data file.");
    while (std::getline(file, line))
    {
        if(line == "date,exchange_rate")
            continue;
        std::string date = line.substr(0, 10);
        std::string value = line.substr(11);
        _data.insert(std::pair<std::string, float>(date, std::stof(value)));
    }
    file.close();

    std::ifstream file2(inputFile);
    if (!file2.is_open())
        throw std::runtime_error("Error: could not open input file.");
    for (int i = 0; std::getline(file2, line); i++)
    {
        std::string date;
        std::string slash;
        std::string value;
        if(i == 0 && line != "date | value")
            throw std::runtime_error("Error: invalid input file.");
        if(i == 0)
            continue;
        try
        {
            date = line.substr(0, 10);
            slash = line.substr(10, 3);
            value = line.substr(13);
        }
        catch(const std::exception& e)
        {
            std::cout << "Error: bad input => " << line << std::endl;
            continue;
        }
        if(slash != " | ")
        {
            std::cout << "Error: bad input => " << line << std::endl;
            continue;
        }
        if (validDate(date) == false)
            continue;
        if(validValue(value) == false)
            continue;
        std::map<std::string, float>::iterator it = _data.lower_bound(date);
        if(it == _data.begin())
        {
            std::cout << "Error: no data for this date => " << date << std::endl;
            continue;
        }
        if(it == _data.end() || it -> first != date)
            it--;
        std::cout << date << " => " << value << " = " << std::stof(value) * it -> second << std::endl;  
    }
}
