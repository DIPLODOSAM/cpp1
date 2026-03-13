/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sam Blassin <Sam.blassin@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 10:10:10 by Sam Blassin       #+#    #+#             */
/*   Updated: 2026/03/13 10:32:55 by Sam Blassin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name )
{
    if (N <= 0)
        return nullptr;

    Zombie *horde = new Zombie[N];
    
    for(int i = 0; i < N; i++)
    {
        horde[i].setName(name);
    }
    
    return horde;
}
