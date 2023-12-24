/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 10:49:36 by yamajid           #+#    #+#             */
/*   Updated: 2023/12/24 21:10:37 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <iomanip>
#include "contact.hpp"

class PhoneBook{
private:
    Contact array[8];
public:
    void    exit();
    bool    add(int index);
    void    search(int pos);
    void    error();
    int     change_pos(int pos);
};