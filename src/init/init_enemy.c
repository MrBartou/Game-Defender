/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** init_enemy
*/

#include "my.h"

enemy_t *init_enemy(enemy_t *enemy)
{
    enemy = malloc(sizeof(enemy_t));
    enemy->round = 0;

    enemy->life = malloc(sizeof(int) * 100);
    enemy->texture_enemy = sfTexture_createFromFile
    ("assets/img/ennemi/BlueMonster.png", NULL);
    for (int count = 0; count != 29; count = count + 1) {
        enemy->sprit_enemy[count] = sfSprite_create();
        enemy->pos_enemy[count] = set_pos_enemy(enemy->pos_enemy[count], count);
        enemy->life[count] = 100;
    }
    enemy->rect_enemy = set_rect_enemy(enemy->rect_enemy);
    return (enemy);
}

sfVector2f set_move_enemy(int count, sfVector2f position)
{
    position.x = position.x - (20 * count);
    return (position);
}

sfVector2f set_pos_enemy(sfVector2f pos_enemy, int count)
{
    pos_enemy.x = -50 - (20 * count);
    pos_enemy.y = 240;
    return (pos_enemy);
}

sfIntRect set_rect_enemy(sfIntRect rect_enemy)
{
    rect_enemy.top = 0;
    rect_enemy.left = 0;
    rect_enemy.width = 40;
    rect_enemy.height = 40;
    return (rect_enemy);
}