/*
** EPITECH PROJECT, 2022
** my_char
** File description:
** my_char
*/

#include "my.h"

void my_char(va_list list)
{
    my_putchar(va_arg(list, int));
}
