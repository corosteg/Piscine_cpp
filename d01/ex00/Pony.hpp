/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 16:26:26 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/21 16:26:27 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

class Pony {

public:

    bool            male;
    std::string     name;
    std::string     like;
    std::string     where;

    Pony( std::string name, std::string like, std::string where, bool male );
    ~Pony();

    Pony*   ponyOnTheHeap();
    Pony    ponyOnTheStack();

};

#endif