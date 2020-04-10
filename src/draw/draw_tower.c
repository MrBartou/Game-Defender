/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** draw_tower
*/

#include "my.h"

sfIntRect set_rect_tower(sfIntRect rect_enemy)
{
    rect_enemy.top = 0;
    rect_enemy.left = 0;
    rect_enemy.width = 50;
    rect_enemy.height = 50;
    return (rect_enemy);
}

void draw_tower(sfRenderWindow *window, tower_t tower, int count)
{
    if (tower.tower[count][0] != 48) {
        tower.sprite_tower[count] = sfSprite_create();
        sfTexture *texture_tower = sfTexture_createFromFile
        ("assets/img/tower/tower1/1.png", NULL);
        sfIntRect rect_tower = set_rect_tower(rect_tower);

        sfSprite_setTexture(tower.sprite_tower[count], texture_tower, sfTrue);
        sfSprite_setTextureRect(tower.sprite_tower[count], rect_tower);
        sfSprite_setPosition(tower.sprite_tower[count], tower.pos_tower[count]);
        sfRenderWindow_drawSprite(window, tower.sprite_tower[count], NULL);
    }
}