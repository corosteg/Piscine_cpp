/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 21:03:05 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/20 21:03:06 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Contact.class.hpp"

Contact::Contact( void ) {
    Contact::_nbInst += 1;
    return;
}

Contact::~Contact( void ) {
    return;
}

void    Contact::print_all() {
    std::cout << this->first_name << std::endl;
    std::cout << this->last_name << std::endl;
    std::cout << this->nickname << std::endl;
    std::cout << this->login << std::endl;
    std::cout << this->postal_address << std::endl;
    std::cout << this->email_address << std::endl;
    std::cout << this->phone_number << std::endl;
    std::cout << this->birthday_date << std::endl;
    std::cout << this->favorite_meal << std::endl;
    std::cout << this->underwear_color << std::endl;
    std::cout << this->darkest_secret << std::endl;
}

void    Contact::get_data() {
    std::string     tmp;

    std::cout << "Get first_name: ";
    std::getline (std::cin >> tmp, this->first_name);
    this->first_name = tmp + this->first_name;

    std::cout << "Get last_name: ";
    std::getline (std::cin >> tmp, this->last_name);
    this->last_name = tmp + this->last_name;

    std::cout << "Get nickname: ";
    std::getline (std::cin >> tmp, this->nickname);
    this->nickname = tmp + this->nickname;

    std::cout << "Get login: ";
    std::getline (std::cin >> tmp, this->login);
    this->login = tmp + this->login;

    std::cout << "Get postal_address: ";
    std::getline (std::cin >> tmp, this->postal_address);
    this->postal_address = tmp + this->postal_address;

    std::cout << "Get email_address: ";
    std::getline (std::cin >> tmp, this->email_address);
    this->email_address = tmp + this->email_address;

    std::cout << "Get phone_number: ";
    std::getline (std::cin >> tmp, this->phone_number);
    this->phone_number = tmp + this->phone_number;

    std::cout << "Get birthday_date: ";
    std::getline (std::cin >> tmp, this->birthday_date);
    this->birthday_date = tmp + this->birthday_date;

    std::cout << "Get favorite_meal: ";
    std::getline (std::cin >> tmp, this->favorite_meal);
    this->favorite_meal = tmp + this->favorite_meal;

    std::cout << "Get underwear_color: ";
    std::getline (std::cin >> tmp, this->underwear_color);
    this->underwear_color = tmp + this->underwear_color;

    std::cout << "Get darkest_secret: ";
    std::getline (std::cin >> tmp, this->darkest_secret);
    this->darkest_secret = tmp + this->darkest_secret;

    // std::cout << "Get last_name: ";
    // std::cin >> this->last_name;
    // std::cout << "Get nickname: ";
    // std::cin >> this->nickname;
    // std::cout << "Get login: ";
    // std::cin >> this->login;
    // std::cout << "Get postal_address: ";
    // std::cin >> this->postal_address;
    // std::cout << "Get email_address: ";
    // std::cin >> this->email_address;
    // std::cout << "Get phone_number: ";
    // std::cin >> this->phone_number;
    // std::cout << "Get birthday_date: ";
    // std::cin >> this->birthday_date;
    // std::cout << "Get favorite_meal: ";
    // std::cin >> this->favorite_meal;
    // std::cout << "Get underwear_color: ";
    // std::cin >> this->underwear_color;
    // std::cout << "Get darkest_secret: ";
    // std::cin >> this->darkest_secret;
}

void    Contact::print_search() {
    std::string     first_name = this->first_name;
    std::string     last_name = this->last_name;
    std::string     nickname = this->nickname;

    first_name.resize (10, ' ');
    last_name.resize (10, ' ');
    nickname.resize (10, ' ');

    if (this->first_name.size() > 10) {
        first_name.replace (9,1,1, '.');
    }

    if (this->last_name.size() > 10) {
        last_name.replace (9,1,1, '.');
    }

    if (this->nickname.size() > 10) {
        nickname.replace (9,1,1, '.');
    }

    std::cout << first_name << '|';
    std::cout << last_name << '|';
    std::cout << nickname << '|' << std::endl;
}

int Contact::_nbInst = 0;