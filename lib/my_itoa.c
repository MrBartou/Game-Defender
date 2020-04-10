/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** my_itoa
*/

#include "my.h"

char *my_itoa(int i, char str[])
{
    char const digit[] = "0123456789";
    char *p = str;

    if (i < 0) {
        *p++ = '-';
        i *= -1;
    }
    int shifter = i;
    for (; shifter; ++p)
        shifter = shifter / 10;
    *p = '\0';
    while (i) {
        *--p = digit[i % 10];
        i = i / 10;
    }
    return (str);
}