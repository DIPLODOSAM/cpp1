/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sam Blassin <Sam.blassin@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 10:56:20 by Sam Blassin       #+#    #+#             */
/*   Updated: 2026/03/13 11:20:03 by Sam Blassin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string t)
{
    this->type = t;
}

const std::string Weapon::getType() const
{
    return this->type;
}

void Weapon::setType(std::string t)
{
    this->type = t;
}
