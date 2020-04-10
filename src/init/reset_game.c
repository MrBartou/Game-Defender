/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** reset_game
*/

#include "my.h"

enemy_t *reset_enemy(enemy_t *enemy)
{
    enemy = init_enemy(enemy);
    return (enemy);
}

tower_t reset_tower(tower_t tower)
{
    tower = init_tower(tower);
    tower.money = tower.money - 10;
    return (tower);
}