/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** manage_tower
*/

#include "my.h"

tower_t manage_tower3(sfMouseButtonEvent mouse, tower_t tower)
{
    if (mouse.x > 460 && mouse.x < 480 && mouse.y > 315 && mouse.y < 335) {
        if (tower.tower[6][0] == 48 && tower.money >= 20) {
            tower.tower[6][0] = 49;
            tower.money = tower.money - 20;
        }
    } if (mouse.x > 555 && mouse.x < 575 && mouse.y > 265 && mouse.y < 285) {
        if (tower.tower[7][0] == 48 && tower.money >= 20) {
            tower.tower[7][0] = 49;
            tower.money = tower.money - 20;
        }
    } if (mouse.x > 530 && mouse.x < 550 && mouse.y > 170 && mouse.y < 190) {
        if (tower.tower[8][0] == 48 && tower.money >= 20) {
            tower.tower[8][0] = 49;
            tower.money = tower.money - 20;
        }
    }
    return (tower);
}

tower_t manage_tower2(sfMouseButtonEvent mouse, tower_t tower)
{
    if (mouse.x > 340 && mouse.x < 360 && mouse.y > 430 && mouse.y < 450) {
        if (tower.tower[3][0] == 48 && tower.money >= 20) {
            tower.tower[3][0] = 49;
            tower.money = tower.money - 20;
        }
    } if (mouse.x > 435 && mouse.x < 455 && mouse.y > 385 && mouse.y < 405) {
        if (tower.tower[4][0] == 48 && tower.money >= 20) {
            tower.tower[4][0] = 49;
            tower.money = tower.money - 20;
        }
    } if (mouse.x > 505 && mouse.x < 525 && mouse.y > 405 && mouse.y < 425) {
        if (tower.tower[5][0] == 48 && tower.money >= 20) {
            tower.tower[5][0] = 49;
            tower.money = tower.money - 20;
        }
    }
    tower = manage_tower3(mouse, tower);
    return (tower);
}

tower_t manage_tower(sfMouseButtonEvent mouse, tower_t tower)
{
    if (mouse.x > 220 && mouse.x < 240 && mouse.y > 240 && mouse.y < 260) {
        if (tower.tower[0][0] == 48 && tower.money >= 20) {
            tower.tower[0][0] = 49;
            tower.money = tower.money - 20;
        }
    } if (mouse.x > 220 && mouse.x < 240 && mouse.y > 310 && mouse.y < 330) {
        if (tower.tower[1][0] == 48 && tower.money >= 20) {
            tower.tower[1][0] = 49;
            tower.money = tower.money - 20;
        }
    } if (mouse.x > 270 && mouse.x < 290 && mouse.y > 360 && mouse.y < 380) {
        if (tower.tower[2][0] == 48 && tower.money >= 20) {
            tower.tower[2][0] = 49;
            tower.money = tower.money - 20;
        }
    }
    tower = manage_tower2(mouse, tower);
    return (tower);
}