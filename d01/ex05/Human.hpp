/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 15:07:59 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/22 15:08:00 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H
#include "Brain.hpp"

class Human {

public:


    Human( void );
    ~Human( void );

    const Brain&    getBrain();
    std::string     identify();

private:

    const Brain     _brain;

};

#endif
