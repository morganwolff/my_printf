/*
** EPITECH PROJECT, 2022
** my_upcase
** File description:
** my_upcase
*/

#include "my.h"

void my_upcase(va_list list)
{
    my_strupcase(va_arg(list, char*));
}