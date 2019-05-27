/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 13:57:27 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/25 13:57:29 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_H
#define ISQUAD_H

class ISquad {

public:

    virtual ~ISquad() {}
    
    virtual int             getCount() const = 0;
    virtual ISpaceMarine*   getUnit(int) const = 0;
    virtual int             push(ISpaceMarine*) = 0;

};

#endif
