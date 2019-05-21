/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 19:22:30 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/20 19:22:32 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

void    add_contact(Contact contact[MAX_CONTACTS], int index)
{
    contact[index].get_data();
}

void    search_contact(Contact contact[MAX_CONTACTS], int max)
{
    int i;
    int choice;

    i = 0;
    while(i < max)
    {
        std::cout << i << "         |";
        contact[i].print_search();
        i += 1;
    }
    std::cout << "Choose a contact: ";
    std::cin >> choice;

    if (std::cin.fail()) {
        std::cout << "Error a number was needed :(" << std::endl;
        std::cin.clear();
    }
    else {
        if (choice >= max || choice < 0)
            std::cout << "Error index number " << choice << " doesn't exist :(" << std::endl;
        else
            contact[choice].print_all();
    }
}

int     main()
{
    int             index;
    std::string     buf;
    Contact         contact[MAX_CONTACTS];

    index = 0;
    while(true)
    {
        std::cin >> buf;
        
        if (!buf.compare("EXIT"))
            break;
        else if (!buf.compare("ADD"))
        {
            if (index > 7)
                std::cout << "You have reached the maximum contacts limit" << std::endl;
            else
            {
                add_contact(contact, index);
                index += 1;
            }
        }
        else if (!buf.compare("SEARCH"))
            search_contact(contact, index);
        else
            std::cin.ignore(INT_MAX,'\n');
    }
    return 0;
}