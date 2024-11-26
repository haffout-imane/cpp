/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 04:00:49 by ihaffout          #+#    #+#             */
/*   Updated: 2024/11/25 06:11:34 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string ft_replace(std::string str, std::string s1, std::string s2)
{
    if (s1.empty() || s2.empty())
        return (str);
    std::string result;
    size_t start = 0, index = 0;
    while((index = str.find(s1, start)) != std::string::npos)
    {
        result.append(str, start, index - start);
        result.append(s2);
        start = index + s1.length();
    }
    result.append(str, start, str.length() - start);
    return (result);
}

int main()
{
    
    std::string fileName, s1, s2, tmp, result;
    std::cout << " => Enter a file name: ";
    std::getline(std::cin, fileName);
    if(std::cin.eof())
        return(1);
    std::cout << " => Enter the first string: ";
    std::getline(std::cin, s1);
    if(std::cin.eof())
        return(1);
    std::cout << " => Enter the second string: ";
    std::getline(std::cin, s2);
    if(std::cin.eof())
        return(1);
    std::ifstream infile(fileName);
    std::getline(infile, tmp, '\0');
    if(!infile.is_open())
        return (std::cout << "Error: file doesnt exist or not enough permissions to open it" << std::endl, 1);  
    result= ft_replace(tmp, s1, s2);
    fileName.append(".replace");
    std::ofstream outfile(fileName, std::ios::trunc);
    if(!outfile.is_open())
        return (std::cout << "Error: can't create the " << fileName << " file!" << std::endl, 1);  
    outfile << result;
    outfile.close();
    
}