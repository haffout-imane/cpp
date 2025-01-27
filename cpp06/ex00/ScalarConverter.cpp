/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 16:34:01 by ihaffout          #+#    #+#             */
/*   Updated: 2025/01/24 15:09:02 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(ScalarConverter const &obj)
{
	*this = obj;
}

ScalarConverter::~ScalarConverter() {}

ScalarConverter & ScalarConverter::operator=(ScalarConverter const &obj)
{
	(void) obj;
	return(*this);
}

bool isDotted(std::string _input, int _length)
{
	int i = 0;
	int conter = 0;
	
	if (_input[0] == '-' || _input[0] == '+')
		i++;
	
	while(i < _length)
	{
		if (isdigit(_input[i]) || _input[i] == '.')
		{
			if (_input[i] == '.')
				conter++;
			i++;
		}
		else
			return false;
	}
	if (conter == 1)
		return true;
	else
		return false;
}

std::string getType(std::string _input)
{
	if(	_input == "nan" || _input == "nanf" || _input == "+inf" 
		|| _input == "+inff" || _input == "-inf" || _input == "-inff" )
		return "special";
	else if ((std::all_of(_input.begin(), _input.end(), isdigit))
		|| ((_input[0] == '-' || _input[0] == '+') && (std::all_of(_input.begin() + 1, _input.end(), isdigit))))
		return "int";
	else if(_input.length() == 1 && isprint(_input[0]))
		return "char";
	else if (_input.back() == 'f' && isDotted(_input, _input.length() - 1))
		return "float";
	else if (isDotted(_input, _input.length()))
		return "double";
	else
		return "fuck off";	
}
void convertChar(std::string _input)
{
	char c = _input[0];
	int iNbr = static_cast<int>(c);
	float fNbr = static_cast<float>(c);
	double dNbr = static_cast<double>(c);
	
	if(std::isprint(c))
		std::cout << "To char: " << c << std::endl;
	else
		std::cout << "To char: Non displayable" << std::endl;
	std::cout << "To int: " << iNbr << std::endl;
	std::cout << "To flout: " << fNbr << "f" << std::endl;	
	std::cout << "To double: " << dNbr << std::endl;
}
void convertInt(std::string _input)
{
	int nbr = std::stoi(_input);
	char c = static_cast<char>(nbr);
	float fNbr = static_cast<float>(nbr);
	double dNbr = static_cast<double>(nbr);
	
	if(std::isprint(c))
		std::cout << "To char: " << c << std::endl;
	else
		std::cout << "To char: Non displayable" << std::endl;
	std::cout << "To int: " << nbr << std::endl;
	std::cout << "To flout: " << fNbr << "f" << std::endl;	
	std::cout << "To double: " << dNbr << std::endl;
}
void convertFloat(std::string _input)
{
	float fNbr = std::stof(_input);
	char c = static_cast<char>(fNbr);
	int nbr = static_cast<int>(fNbr);
	double dNbr = static_cast<double>(fNbr);
	
	if(std::isprint(c))
		std::cout << "To char: " << c << std::endl;
	else
		std::cout << "To char: Non displayable" << std::endl;
	std::cout << "To int: " << nbr << std::endl;
	std::cout << "To flout: " << fNbr << "f" << std::endl;	 
	std::cout << "To double: " << dNbr << std::endl;
}

void convertDouble(std::string _input)
{
	double dNbr = std::stod(_input);
	char  c = static_cast<char>(dNbr);
	int nbr = static_cast<char>(dNbr);
	float fNbr = static_cast<float>(dNbr);
	
	if(std::isprint(c))
		std::cout << "To char: " << c << std::endl;
	else
		std::cout << "To char: Non displayable" << std::endl;
	std::cout << "To int: " << nbr << std::endl;
	std::cout << "To flout: " << fNbr << "f" << std::endl;	 
	std::cout << "To double: " << dNbr << std::endl;
}

void convertSpecial(std::string _type)
{
	std::cout << "Error" << _type << std::endl; 
	
}
void ScalarConverter::convert(std::string _input)
{
	std::string _type = getType(_input);
	if(_type == "char")
		convertChar(_input);
	else if(_type == "int")
		convertInt(_input);
	else if(_type == "double")
		convertDouble(_input);
	else if(_type == "float")
		convertFloat(_input);
	else if(_type == "special")
		convertSpecial(_type);
	
	
}

		 
