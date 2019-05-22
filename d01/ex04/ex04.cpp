/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 15:08:07 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/22 15:08:10 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int     main()
{
    std::string     str = "HI THIS IS BRAIN";
    std::string*    strPtr = &str;
    std::string&    strRef = str;

    std::cout << *strPtr << " " << strRef << std::endl;

    return 0;
}
