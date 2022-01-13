/*
** EPITECH PROJECT, 2022
** my_nbr
** File description:
** my_nbr
*/

#include "my.h"

void my_nbr(va_list list)
{
    my_put_nbr(va_arg(list, int));
}