/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sam Blassin <Sam.blassin@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 10:56:18 by Sam Blassin       #+#    #+#             */
/*   Updated: 2026/03/13 11:30:28 by Sam Blassin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string n)
    : name(n), weapon(nullptr)
{}

void HumanB::setWeapon(Weapon& w)
{
    this->weapon = &w;
}

void HumanB::attack()
{
    if (this->weapon)
    {
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
    }
    else
    {
        std::cout<< this->name << " has no weapon" << std::endl;
    }
}
