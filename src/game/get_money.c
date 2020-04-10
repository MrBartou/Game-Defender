/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** get_money
*/

#include "my.h"

tower_t get_money(tower_t tower, enemy_t *enemy)
{
    static int money = 0;

    if (money != enemy->round) {
        tower.money = tower.money + 10;
    }
    money = enemy->round;
    return (tower);
}