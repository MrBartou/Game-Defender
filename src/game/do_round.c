/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** do_round
*/

#include "my.h"

enemy_t *do_round(enemy_t *enemy, sfClock *clock)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(clock)) > 20000) {
        enemy->round = enemy->round + 1;
        for (int count = 0; count != 29; count = count + 1) {
            sfSprite_destroy(enemy->sprit_enemy[count]);
            enemy->sprit_enemy[count] = sfSprite_create();
            enemy->pos_enemy[count] = set_pos_enemy(enemy->pos_enemy[count],
            count);
            enemy->life[count] = 100;
        }
        sfClock_restart(clock);
    }
    return (enemy);
}