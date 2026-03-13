/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sam Blassin <Sam.blassin@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 09:34:57 by Sam Blassin       #+#    #+#             */
/*   Updated: 2026/03/13 09:57:59 by Sam Blassin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
    public:
        Zombie(std::string n) : name(n) {};

        void announce( void );

    private:
        std::string name;
};

Zombie      *newZombie( std::string name );
void        randomChump(std::string name);

#endif