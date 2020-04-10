/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019 [WSL: Ubuntu-18.04]
** File description:
** do_clock
*/

#include "my.h"

sfIntRect do_clock(sfClock *clock, sfIntRect rect_enemy)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(clock)) > 100) {
        sfClock_restart(clock);
        move_enemy(&rect_enemy);
    }
    return (rect_enemy);
}