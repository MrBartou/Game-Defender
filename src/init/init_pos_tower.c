/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** init_pos_tower
*/

#include "my.h"

tower_t init_pos_tower5(tower_t tower, int count)
{
    if (count == 8) {
        tower.pos_tower[count].x = 525;
        tower.pos_tower[count].y = 160;
    }
    return (tower);
}

tower_t init_pos_tower4(tower_t tower, int count)
{
    if (count == 6) {
        tower.pos_tower[count].x = 455;
        tower.pos_tower[count].y = 310;
    } else if (count == 7) {
        tower.pos_tower[count].x = 550;
        tower.pos_tower[count].y = 260;
    } else
        tower = init_pos_tower5(tower, count);
    return (tower);
}

tower_t init_pos_tower3(tower_t tower, int count)
{
    if (count == 4) {
        tower.pos_tower[count].x = 430;
        tower.pos_tower[count].y = 380;
    } else if (count == 5) {
        tower.pos_tower[count].x = 500;
        tower.pos_tower[count].y = 400;
    } else
        tower = init_pos_tower4(tower, count);
    return (tower);
}

tower_t init_pos_tower2(tower_t tower, int count)
{
    if (count == 2) {
        tower.pos_tower[count].x = 265;
        tower.pos_tower[count].y = 355;
    } else if (count == 3) {
        tower.pos_tower[count].x = 335;
        tower.pos_tower[count].y = 425;
    } else
        tower = init_pos_tower3(tower, count);
    return (tower);
}

tower_t init_pos_tower(tower_t tower, int count)
{
    if (count == 0) {
        tower.pos_tower[count].x = 215;
        tower.pos_tower[count].y = 235;
    } else if (count == 1) {
        tower.pos_tower[count].x = 215;
        tower.pos_tower[count].y = 310;
    } else
        tower = init_pos_tower2(tower, count);
    return (tower);
}