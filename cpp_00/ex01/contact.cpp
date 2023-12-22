/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:07:16 by yamajid           #+#    #+#             */
/*   Updated: 2023/12/22 11:20:36 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "contact.hpp"

void PhoneBook::error()
{
    std::cout << "ERROR: empty field";
}

int PhoneBook::add(int index){
    
    std::string m_first_name;
    std::string m_last_name;
    std::string m_nickname;
    std::string m_phonenumber;
    std::string m_darkest_secret;
    
    std::cout << index << std::endl;
    std::cout << "First Name : ";
    std::getline(std::cin, m_first_name);    
    if (!std::cin.good() || m_first_name.empty()){
        error();
        return 0;
    }
    std::cout << "Last Name : ";
    std::getline(std::cin, m_last_name);    
    if (!std::cin.good() || m_last_name.empty()){
        error();
        return 0;
    }
    std::cout << "Nickname : ";
    std::getline(std::cin, m_nickname);    
    if (!std::cin.good() || m_nickname.empty()){
        error();
        return 0;
    }
    std::cout << "Phone number : ";
    std::getline(std::cin, m_phonenumber);    
    if (!std::cin.good() || m_phonenumber.empty()){
        error();
        return 0;
    }
    std::cout << "darkest secret : ";
    std::getline(std::cin, m_darkest_secret);    
    if (!std::cin.good() || m_darkest_secret.empty()){
        error();
        return 0;
    }
    PhoneBook::array[index].set_first_name(m_first_name);
    PhoneBook::array[index].set_last_name(m_last_name);
    PhoneBook::array[index].set_nickname(m_nickname);
    PhoneBook::array[index].set_phonenumber(m_phonenumber);
    PhoneBook::array[index].set_darkset_secret(m_darkest_secret);
    return 1;
}


void PhoneBook::search(int pos){
    
    PhoneBook user;
    std::string index;
    std::string info;
    int num;
    
    std::cout << std::setw(10) << "Index" << " | "; 
    std::cout << std::setw(10) << "first name" << " | "; 
    std::cout << std::setw(10) << "Last name" << " | ";
    std::cout << std::setw(10) << "Nickname" << " | " << std::endl;
    std::cout << std::setw(10) <<  "---------------------------------------------------" << std::endl;
    for (int i = 1; i < pos; i++)
    {
        std::cout << std::setw(10) << i << " | ";
        std::cout << std::setw(10) << array[i].get_first_name() << " | "; 
        std::cout << std::setw(10) <<  array[i].get_last_name() << " | "; 
        std::cout << std::setw(10) <<  array[i].get_nickname() << " | " << std::endl;
        std::cout << std::setw(10) <<  "---------------------------------------------------" << std::endl;
    }
    std::cout << "Enter index : ";
    std::getline(std::cin, index); 
    if (std::cin.good() && !index.empty() && !index[1])
    {
        if ((num = 0 + index[0] - '0') >= 1 && (num = 0 + index[0] - '0') <= 8)
        {
            std::cout << std::setw(10) << "Index" << " | "; 
            std::cout << std::setw(10) << "first name" << " | "; 
            std::cout << std::setw(10) << "Last name" << " | "; 
            std::cout << std::setw(10) << "Phone Num" << " | "; 
            std::cout << std::setw(10) << "Nickname" << " | ";
            std::cout << std::setw(10) << "darkest..." << " | " << std::endl;
            std::cout << std::setw(10) <<  "-----------------------------------------------------------------------------" << std::endl;
            if (!array[num].get_first_name().empty())
            {
                std::cout << std::setw(10) << num << " | ";
                std::cout << std::setw(10) << array[num].get_first_name() << " | "; 
                std::cout << std::setw(10) <<  array[num].get_last_name() << " | "; 
                std::cout << std::setw(10) <<  array[num].get_nickname() << " | "; 
                std::cout << std::setw(10) <<  array[num].get_phonenumber() << " | ";
                std::cout << std::setw(10) <<  array[num].get_darkest_secret() << " | " << std::endl;
                std::cout << std::setw(10) <<  "-----------------------------------------------------------------------------" << std::endl;
            }
            
        }
        else
            return ;
    }
    else
        return ;
        
}

std::string Contact::get_first_name(void){
    return (m_first_name);
}
std::string Contact::get_last_name(void){
    return (m_last_name);
}
std::string Contact::get_nickname(void){
    return (m_nickname);
}
std::string Contact::get_phonenumber(void){
    return (m_phonenumber);
}
std::string Contact::get_darkest_secret(void){
    return (m_darkest_secret);
}

void Contact::set_first_name(std::string first_name){
    m_first_name = first_name;
}

void Contact::set_last_name(std::string last_name){
    m_last_name = last_name;
    
}
 void Contact::set_nickname(std::string nicknmae){
    m_nickname = nicknmae;
}
void Contact::set_phonenumber(std::string phonenumber){
    m_phonenumber = phonenumber;
}
void Contact::set_darkset_secret(std::string darkset_secret){
    m_darkest_secret = darkset_secret;
}
