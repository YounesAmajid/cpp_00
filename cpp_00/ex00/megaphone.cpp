/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 19:32:17 by yamajid           #+#    #+#             */
/*   Updated: 2023/12/20 11:48:40 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>

int main (int argc, char **argv)
{
    if (argc < 2)
        return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);
    for(int j = 1; j < argc; j++)
    {
        std::string str(argv[j]);
        for (int i = 0; i < str.length(); i++)
            std::cout << (char)toupper(str[i]);
    }
    std::cout << std::endl;
    return 0; 
}
