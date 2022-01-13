/*
** EPITECH PROJECT, 2022
** my_str_upcase
** File description:
** my_str_upcase
*/

#include "my.h"

void my_strupcase(char *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32 ;
    }
    my_putstr(str);
}