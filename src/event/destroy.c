/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** destroy_enemy
*/

#include "my.h"

void destroy(enemy_t *enemy, sfMusic *music)
{
    for (int count = 0; count != 29; count = count + 1)
        sfSprite_destroy(enemy->sprit_enemy[count]);
    sfTexture_destroy(enemy->texture_enemy);
    sfMusic_destroy(music);
}