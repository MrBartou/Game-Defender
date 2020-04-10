/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** tower_shoot
*/

#include "my.h"

enemy_t *tower_shoot(tower_t tower, enemy_t *enemy)
{
    for (int count = 0; count != 9; count = count + 1) {
        for (int count2 = 0; count2 != enemy->round; count2 = count2 + 1) {
            if (tower.tower[count][0] == 49)
                enemy = range_tower(enemy, count, count2);
        }
    }
    return (enemy);
}