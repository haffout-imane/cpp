/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 16:33:58 by ihaffout          #+#    #+#             */
/*   Updated: 2025/01/24 14:37:47 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

    #include <iostream>
    #include <string>

class ScalarConverter
{   
    private:
        ScalarConverter();
        ScalarConverter(ScalarConverter const &obj);
        ~ScalarConverter();
        ScalarConverter & operator=(ScalarConverter const &obj);
        
    public:
        static void convert(std::string _input); 
};
#endif