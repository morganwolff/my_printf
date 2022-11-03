/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** my_printf
*/

#include "include/my.h"

void my_printf(char *src, ...)
{
    /*"qo,x,X,p,b,u"*/
    va_list list;
    int i = 0, ind;
    char flags[5] = "dicsS";
    char flag;
    void (*func[])(va_list list) = {my_nbr, my_nbr, my_char, my_str, my_upcase};

    va_start(list, src);
    for (; src[i] != '\0'; i++) {
        if (src[i] == '%') {
            flag = src[i + 1];
            ind = index_flags(flag, flags);
            func[ind](list);
            ind = 0;
        } else if (src[i] != '%' && src[i - 1] != '%')
            my_putchar(src[i]);
    }
    va_end(list);
}

int main()
{
    char c = 'a';
    char str[] = "salut";
    int nb = 15;

    my_printf("%S %c %i\n", str, c, nb);
    return (0);
}
