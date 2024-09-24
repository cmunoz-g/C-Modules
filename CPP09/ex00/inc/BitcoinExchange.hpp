/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camunozg <camunozg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:01:20 by camunozg          #+#    #+#             */
/*   Updated: 2024/09/24 13:37:56 by camunozg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <map>
#include <sstream>

class BitcoinExchange {
	
public:

	BitcoinExchange();
	BitcoinExchange( const BitcoinExchange &toCopy );
	~BitcoinExchange();

	BitcoinExchange &operator=( const BitcoinExchange &other);

	void loadData( void );											// Loads data from the .csv onto the map
	void processInputFile( std::string fileName );						// Opens file and checks for errors, calculates
	static void calculate( std::string date, std::string value);
	static bool checkDate( std::string date );
	
private:

	std::map<std::string, float> _data;
	
};

#endif