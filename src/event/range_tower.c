/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** range_tower
*/

#include "my.h"

enemy_t *range_tower3(enemy_t *enemy, int count, int count2)
{
    sfVector2f *pos;
    pos = enemy->pos_enemy;

    if (count == 6 && pos[count2].x > 430 && pos[count2].x < 490 &&
    pos[count2].y > 280 && pos[count2].y < 340) {
        enemy->life[count2] = enemy->life[count2] - 4;
    }
    if (count == 7 && pos[count2].x > 520 && pos[count2].x < 580 &&
    pos[count2].y > 230 && pos[count2].y < 290) {
        enemy->life[count2] = enemy->life[count2] - 4;
    }
    if (count == 8 && pos[count2].x > 500 && pos[count2].x < 560 &&
    pos[count2].y > 130 && pos[count2].y < 190) {
        enemy->life[count2] = enemy->life[count2] - 4;
    }
    return (enemy);
}

enemy_t *range_tower2(enemy_t *enemy, int count, int count2)
{
    sfVector2f *pos;
    pos = enemy->pos_enemy;

    if (count == 3 && pos[count2].x > 240 && pos[count2].x < 300 &&
    pos[count2].y > 400 && pos[count2].y < 460) {
        enemy->life[count2] = enemy->life[count2] - 4;
    }
    if (count == 4 && pos[count2].x > 400 && pos[count2].x < 460 &&
    pos[count2].y > 350 && pos[count2].y < 410) {
        enemy->life[count2] = enemy->life[count2] - 4;
    }
    if (count == 5 && pos[count2].x > 470 && pos[count2].x < 530 &&
    pos[count2].y > 370 && pos[count2].y < 430) {
        enemy->life[count2] = enemy->life[count2] - 4;
    }
    enemy = range_tower3(enemy, count, count2);
    return (enemy);
}

enemy_t *range_tower(enemy_t *enemy, int count, int count2)
{
    sfVector2f *pos;
    pos = enemy->pos_enemy;

    if (count == 0 && pos[count2].x > 190 && pos[count2].x < 250 &&
    pos[count2].y > 170 && pos[count2].y < 270) {
        enemy->life[count2] = enemy->life[count2] - 4;
    }
    if (count == 1 && pos[count2].x > 190 && pos[count2].x < 250 &&
    pos[count2].y > 280 && pos[count2].y < 340) {
        enemy->life[count2] = enemy->life[count2] - 4;
    }
    if (count == 2 && pos[count2].x > 240 && pos[count2].x < 300 &&
    pos[count2].y > 330 && pos[count2].y < 390) {
        enemy->life[count2] = enemy->life[count2] - 4;
    }
    enemy = range_tower2(enemy, count, count2);
    return (enemy);
}