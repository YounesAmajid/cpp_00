/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 11:47:47 by yamajid           #+#    #+#             */
/*   Updated: 2023/12/22 11:30:07 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

int main ()
{
    PhoneBook info;
    int pos;
    int flag;

    pos = 1;
    flag = 0;
    while (true)
    {
        std::cout << "Enter ont of this command ADD, SEARCH or EXIT :" << std::endl;
        std::string  name;
        std::getline(std::cin, name);    
        if (std::cin.good())
        {
            if (name == "ADD"){
                if (pos == 8)
                {
                    pos = 1;
                    flag = 1;
                }
                if (info.add(pos) == 1) pos++;
            }
            else if (name == "SEARCH"){
                {
                    if (flag)
                        pos = 8;
                    info.search(pos);
                }
            }
            else if (name == "EXIT")
                return 0;
        }
        else
             break; 
    }
}
