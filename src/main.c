/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019 [WSL: Ubuntu-18.04]
** File description:
** main
*/

#include "my.h"

int main(int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        display_help();
        return (0);
    }
    if (ac > 1) {
        my_putstr("./my_defender -h");
        return (84);
    }
    main_menu();
}