/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 11:35:40 by yamajid           #+#    #+#             */
/*   Updated: 2023/12/22 10:51:13 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact{
private:
    std::string m_first_name;
    std::string m_last_name;
    std::string m_nickname;
    std::string m_phonenumber;
    std::string m_darkest_secret;
    
public:
    std::string get_first_name();
    std::string get_last_name();
    std::string get_nickname();
    std::string get_phonenumber();
    std::string get_darkest_secret();
    
    void        set_first_name(std::string first_name);
    void        set_last_name(std::string last_name);
    void        set_nickname(std::string nicknmae);
    void        set_phonenumber(std::string phonenumber);
    void        set_darkset_secret(std::string darkset_secret);
    
};

class PhoneBook{
private:
    Contact array[8];
public:
    void    exit();
    int     add(int index);
    void    search(int pos);
    void    error();
};

#endif