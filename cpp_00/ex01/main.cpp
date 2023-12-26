/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 11:47:47 by yamajid           #+#    #+#             */
/*   Updated: 2023/12/26 14:56:56 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "PhoneBook.hpp"

int main (){

    PhoneBook info;
    int pos;
    int flag;
    int i;

    pos = 0;
    flag = 0;
    i = 0;
    while (true)
    {
        std::cout << "Enter ont of this command ADD, SEARCH or EXIT : " << std::endl;
        std::string  name;
        std::getline(std::cin, name);
        if (std::cin.good())
        {
            if (name == "ADD"){
                if (pos == 7){
                    pos = pos % pos + i++;
                    flag = 1;
                }
                if (info.add(pos)) pos++;
            }
            else if (name == "SEARCH"){
                if (flag != 0)
                    info.search((flag = 7));
                info.search(pos);
            }
            else if (name == "EXIT")
                return 0;
        }
        else
             break; 
    }
}
