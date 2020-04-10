/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** move_enemy
*/

#include "my.h"

void move_enemy(sfIntRect *rect_enemy)
{
    int first_image = 35;
    int max = 140;

    rect_enemy->left += first_image;
    if (rect_enemy->left == max)
        rect_enemy->left = 0;
}