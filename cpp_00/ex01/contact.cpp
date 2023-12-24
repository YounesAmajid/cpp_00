/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:07:16 by yamajid           #+#    #+#             */
/*   Updated: 2023/12/24 11:36:18 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "contact.hpp"

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
