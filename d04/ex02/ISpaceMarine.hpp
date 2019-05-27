/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 13:57:14 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/25 13:57:16 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class ISpaceMarine
{
public:

    virtual ~ISpaceMarine() {}
    
    virtual ISpaceMarine*   clone() const = 0;
    virtual void            battleCry() const = 0;
    virtual void            rangedAttack() const = 0;
    virtual void            meleeAttack() const = 0;
};
