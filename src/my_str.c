/*
** EPITECH PROJECT, 2022
** my_str
** File description:
** my_str
*/

#include "my.h"

void my_str(va_list list)
{
    my_putstr(va_arg(list, char*));
}