/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sam Blassin <Sam.blassin@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 09:34:57 by Sam Blassin       #+#    #+#             */
/*   Updated: 2026/03/13 10:37:13 by Sam Blassin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
    public:
        Zombie(std::string n) : name(n) {};

        Zombie(){};

        void setName( std::string n );

        void announce( void );
    
    private:
        std::string name;
};

Zombie *zombieHorde(int N, std::string name );

#endif