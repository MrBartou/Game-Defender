/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019 [WSL: Ubuntu-18.04]
** File description:
** draw_screen
*/

#include "my.h"

screen_t *draw_screen(screen_t *screen)
{
    sfSprite_setTexture(screen->spritebg, screen->texturebg, sfTrue);
    sfRenderWindow_drawSprite(screen->window, screen->spritebg, NULL);
    return (screen);
}