/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 16:26:11 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/21 16:26:12 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./Pony.hpp"

int     main() {
    Pony    mother = Pony("Mom", "drugs", "stack", false);
    Pony*   pony1 = mother.ponyOnTheHeap();
    Pony    pony2 = mother.ponyOnTheStack();

    delete pony1;
    return 0;
}