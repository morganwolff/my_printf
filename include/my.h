/*
** EPITECH PROJECT, 2021
** my
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <string.h>
    #include <dirent.h>
    #include <stdarg.h>

void my_put_nbr(int nb);
void my_putchar(char c);
void my_putstr(char const *str);
void my_strupcase(char *str);
int index_flags(char c, char *str);

void my_char(va_list list);
void my_str(va_list list);
void my_nbr(va_list list);
void my_upcase(va_list list);

#endif
