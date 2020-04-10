/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019 [WSL: Ubuntu-18.04]
** File description:
** init_menu
*/

#include "my.h"

menu_t *init_menu(void)
{
    menu_t *menu = malloc(sizeof(menu_t));
    menu->position = set_pos(menu->position);
    menu->size = set_size(menu->size);

    menu->rect = sfRectangleShape_create();
    sfRectangleShape_setPosition(menu->rect, menu->position);
    sfRectangleShape_setSize(menu->rect, menu->size);
    sfRectangleShape_setFillColor(menu->rect, sfBlack);
    return (menu);
}

sfVector2f set_pos(sfVector2f position)
{
    position.x = 0;
    position.y = 0;
    return (position);
}

sfVector2f set_size(sfVector2f size)
{
    size.x = 150;
    size.y = 70;
    return (size);
}