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

int main(int ac, char **av)
{
    if(ac == 4)
    {
        std::string tmp, result, name;
        name = name.append(av[1]);
        name.append(".replace");
        std::ifstream infile(av[1]);
        std::getline(infile, tmp, '\0');
        if(!infile.is_open())
            return (std::cout << "Error: file doesnt exist or not enough permissions to open it" << std::endl, 1);  
        result= ft_replace(tmp, av[2], av[3]);
        std::ofstream outfile(name, std::ios::trunc);
        if(!outfile.is_open())
            return (std::cout << "Error: can't create the " << av[1] << " file!" << std::endl, 1);  
        outfile << result;
        outfile.close();
    }  
}
