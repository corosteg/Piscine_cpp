/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 21:02:59 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/20 21:03:00 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H
# define MAX_CONTACTS 8

class Contact {

public:

    static int      _nbInst;
    std::string     first_name;
    std::string     last_name;
    std::string     nickname;
    std::string     login;
    std::string     postal_address;
    std::string     email_address;
    std::string     phone_number;
    std::string     birthday_date;
    std::string     favorite_meal;
    std::string     underwear_color;
    std::string     darkest_secret;

    Contact();
    ~Contact( void );
    
    void    print_all();
    void    get_data();
    void    print_search();

};

#endif