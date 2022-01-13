/*
** EPITECH PROJECT, 2021
** index
** File description:
** index
*/

#include "my.h"

int index_flags(char c, char *str)
{
    int i = 0;
    while ((c != str[i]) && (str[i] != '\0')) {
        i++;
    }
    return (i);
}
