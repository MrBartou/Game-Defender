/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** init_tower
*/

#include "my.h"

tower_t init_tower(tower_t tower)
{
    tower.tower = malloc(sizeof(char *) * 10);
    for (int count = 0; count != 9; count = count + 1) {
        tower.tower[count] = malloc(sizeof(char) + 1);
        tower.tower[count][0] = 48;
        tower = init_pos_tower(tower, count);
    }
    tower.money = 40;
    return (tower);
}