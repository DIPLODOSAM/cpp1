/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sam Blassin <Sam.blassin@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 09:56:46 by Sam Blassin       #+#    #+#             */
/*   Updated: 2026/03/13 10:01:59 by Sam Blassin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *bob = newZombie("bob");
    bob->announce();
    delete(bob);
    randomChump("apagnan");
    return 0;
}