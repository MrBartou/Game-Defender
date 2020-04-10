/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019 [WSL: Ubuntu-18.04]
** File description:
** init_menu
*/

#include "my.h"

menu_t *init_menu3(void)
{
    menu_t *menu = malloc(sizeof(menu_t));
    menu->position = set_pos3(menu->position);
    menu->size = set_size3(menu->size);

    menu->rect = sfRectangleShape_create();
    sfRectangleShape_setPosition(menu->rect, menu->position);
    sfRectangleShape_setSize(menu->rect, menu->size);
    sfRectangleShape_setFillColor(menu->rect, sfBlack);
    return (menu);
}

sfVector2f set_pos3(sfVector2f position)
{
    position.x = 660;
    position.y = 100;
    return (position);
}

sfVector2f set_size3(sfVector2f size)
{
    size.x = 140;
    size.y = 400;
    return (size);
}