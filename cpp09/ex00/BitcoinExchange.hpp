/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihaffout <ihaffout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 02:29:15 by ihaffout          #+#    #+#             */
/*   Updated: 2025/02/22 20:59:57 by ihaffout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

    #include <iostream>
    #include <fstream>
    #include <map>
    
class BitcoinExchange
{
    private:
        std::map<std::string, float> _data;

    public:
        BitcoinExchange();
        BitcoinExchange(BitcoinExchange const & src);
        BitcoinExchange & operator=(BitcoinExchange const & src);
        ~BitcoinExchange();
        void exchange(std::string dataFile, char *inputFile);

};

#endif
