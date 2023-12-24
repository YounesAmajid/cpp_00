/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 20:52:03 by yamajid           #+#    #+#             */
/*   Updated: 2023/12/24 19:11:01 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int PhoneBook::change_pos(int pos){
    return pos + 1;
}

void PhoneBook::error(){
    std::cout << "ERROR: empty field";
}

bool PhoneBook::add(int index){
    
    std::string m_first_name;
    std::string m_last_name;
    std::string m_nickname;
    std::string m_phonenumber;
    std::string m_darkest_secret;
    
    std::cout << index << std::endl;
    std::cout << "First Name : ";
    std::getline(std::cin, m_first_name);
    if (!std::cin.good() || m_first_name.empty())
        return error(), false;
    
    std::cout << "Last Name : ";
    std::getline(std::cin, m_last_name);    
    if (!std::cin.good() || m_last_name.empty())
        return error(), false;
    
    std::cout << "Nickname : ";
    std::getline(std::cin, m_nickname);    
    if (!std::cin.good() || m_nickname.empty())
        return error(), false;
    
    std::cout << "Phone number : ";
    std::getline(std::cin, m_phonenumber);    
    if (!std::cin.good() || m_phonenumber.empty())
        return error(), false;
    else
        for(int i = 0; m_phonenumber[i]; i++)
            if (!isdigit(m_phonenumber[i])) return false;
    
    std::cout << "darkest secret : ";
    std::getline(std::cin, m_darkest_secret);    
    if (!std::cin.good() || m_darkest_secret.empty())
        return error(), false;
    PhoneBook::array[index].set_first_name(m_first_name);
    PhoneBook::array[index].set_last_name(m_last_name);
    PhoneBook::array[index].set_nickname(m_nickname);
    PhoneBook::array[index].set_phonenumber(m_phonenumber);
    PhoneBook::array[index].set_darkset_secret(m_darkest_secret);
    return true;
}


void PhoneBook::search(int pos){
    
    PhoneBook user;
    std::string index;
    std::string info;
    std::string str;
    int num;
    
    std::cout << std::setw(10) << "Index" << "|"; 
    std::cout << std::setw(10) << "first name" << "|"; 
    std::cout << std::setw(10) << "Last name" << "|";
    std::cout << std::setw(10) << "Nickname" << "|" << std::endl;
    std::cout << std::setw(10) <<  "--------------------------------------------" << std::endl;
    for (int i = 1; i < pos; i++)
    {
        std::cout << std::setw(10) << i << "|";
        std::cout << std::setw(10) << (str = array[i].get_first_name().length() > 10 ? \
            array[i].get_first_name().substr(0, 9) + "." : array[i].get_first_name())  << "|"; 
        std::cout << std::setw(10) <<  (str = array[i].get_last_name().length() > 10 ? \
            array[i].get_last_name().substr(0, 9) + "." : array[i].get_last_name()) << "|"; 
        std::cout << std::setw(10) <<  (str = array[i].get_nickname().length() > 10 ? \
            array[i].get_nickname().substr(0, 9) + "." : array[i].get_nickname()) << "|" << std::endl;
        std::cout << std::setw(10) <<  "--------------------------------------------" << std::endl;
    }
    std::cout << "Enter index : ";
    std::getline(std::cin, index); 
    if (std::cin.good() && !index.empty() && !index[1])
    {
        if ((num = 0 + index[0] - '0') >= 1 && (num = 0 + index[0] - '0') <= 8)
        {
            if (!array[num].get_first_name().empty())
            {
                std::cout << "Index           : " << num << std::endl; 
                std::cout << "first name      : " << array[num].get_first_name() << std::endl; 
                std::cout << "Last name       : " << array[num].get_last_name() << std::endl; 
                std::cout << "Phone Num       : " << array[num].get_nickname() << std::endl; 
                std::cout << "Nickname        : " << array[num].get_phonenumber() << std::endl;
                std::cout << "darkest secret  : " <<  array[num].get_darkest_secret() << std::endl;
            }
        }
    }
        
}