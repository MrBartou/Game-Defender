/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** move_pos_enemy
*/

#include "my.h"

sfVector2f move_pos_enemy(sfVector2f pos_enemy, int count2)
{
    int count = 0;

    if (pos_enemy.y >= 380 ||
    pos_enemy.x >= 300 + (30 * count2))
        count = 1;
    if (count == 0) {
        if (pos_enemy.x <= 230 + (20 * count2))
            pos_enemy.x = pos_enemy.x + 3;
        else if (pos_enemy.y <= 360)
            pos_enemy.y = pos_enemy.y + 3;
        else
            pos_enemy = move_pos_enemy2(pos_enemy, count2);
    }
    if (count == 1)
        pos_enemy = move_pos_enemy3(pos_enemy, count2);
    return (pos_enemy);
}

sfVector2f move_pos_enemy2(sfVector2f pos_enemy, int count2)
{
    if (pos_enemy.x <= 280 + (20 * count2))
        pos_enemy.x = pos_enemy.x + 3;
    else if (pos_enemy.y <= 380)
        pos_enemy.y = pos_enemy.y + 3;
    return (pos_enemy);
}

sfVector2f move_pos_enemy3(sfVector2f pos_enemy, int count2)
{
    if (pos_enemy.x <= 468 + (20 * count2))
        pos_enemy.x = pos_enemy.x + 3;
    else if (pos_enemy.y >= 265)
        pos_enemy.y = pos_enemy.y - 3;
    else
        pos_enemy = move_pos_enemy4(pos_enemy, count2);
    return (pos_enemy);
}

sfVector2f move_pos_enemy4(sfVector2f pos_enemy, int count2)
{
    if (pos_enemy.x <= 518 + (20 * count2))
        pos_enemy.x = pos_enemy.x + 3;
    else if (pos_enemy.y >= 170)
        pos_enemy.y = pos_enemy.y - 3;
    else
        pos_enemy = move_pos_enemy5(pos_enemy, count2);
    return (pos_enemy);
}

sfVector2f move_pos_enemy5(sfVector2f pos_enemy, int count2)
{
    if (pos_enemy.x <= 600 + (20 * count2))
        pos_enemy.x = pos_enemy.x + 3;
    return (pos_enemy);
}