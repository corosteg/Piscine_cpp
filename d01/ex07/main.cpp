/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 15:06:45 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/22 15:06:46 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int         usage()
{
    std::cout << "replace: usage: replace <file> s1 s2" << std::endl;
    return 1;
}

int         print_error(std::string error)
{
    std::cout << "replace error: " << error << std::endl;
    return 1;
}

std::string replace(std::string str, char* s1, char* s2)
{
    std::string str1 = s1;
    std::string str2 = s2;
    std::size_t found;
    std::size_t pos = 0;

    while (true)
    {
        found = str.find(str1, pos);
        pos = found + 1;
        if (found == std::string::npos)
            break;
        str.erase(found, str1.size());
        str.insert(found, str2);
    }

    return str;
}

void        write_result(char* file, std::string str)
{
    std::string     file_name = file;
    std::string     final_name = file_name + ".replace"; 
    std::ofstream   outfile (final_name);

    outfile << str;
    outfile.close();
}

int         core(char** av)
{
    std::ifstream   is;
    std::string     str;

    is.open(av[1]);
    if (is) {
        is.seekg (0, is.end);
        int         length = is.tellg();
        is.seekg (0, is.beg);
        char*       buffer = new char [length];
        is.read (buffer,length);
        is.close();

        str = buffer;

        delete[] buffer;
    } else
        return print_error("replace need a file with rights in argument");

    str = replace(str, av[2], av[3]);
    write_result(av[1], str);

    return 0;
}

int     main(int ac, char** av)
{
    if (ac != 4)
        return usage();

    return core(av);
}