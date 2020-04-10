/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019 [WSL: Ubuntu-18.04]
** File description:
** draw_menu
*/

#include "my.h"

menu_t *draw_menu(menu_t *menu, screen_t *screen)
{
    draw_text(screen);
    menu = init_menu3(menu);
    sfRenderWindow_drawRectangleShape(screen->window, menu->rect, NULL);
    menu = init_menu4(menu);
    sfRenderWindow_drawRectangleShape(screen->window, menu->rect, NULL);
    return (menu);
}