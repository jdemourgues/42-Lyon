/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   megaphone.cpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <jde-mour@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/04/01 11:51:54 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/01 14:51:50 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <iostream>

void    ftPrintStr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        std::cout << (char)toupper(str[i]);
        i++; 
    }
}

int     main(int argc, char **argv)
{
    int i;

    if (argc <= 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    i = 1;
    while (i < argc)
    {
        ftPrintStr(argv[i]);
        i++;
    }
        std::cout << std::endl;
    return 0;
}