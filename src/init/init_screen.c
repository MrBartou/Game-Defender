/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019 [WSL: Ubuntu-18.04]
** File description:
** init_screen
*/

#include "my.h"

screen_t *init_screen(void)
{
    screen_t *screen = malloc(sizeof(screen_t));
    sfVideoMode mode = {800, 600, 32};
    screen->window = sfRenderWindow_create(mode, "My defender !", \
    sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(screen->window, 30);
    screen->texturebg = sfTexture_createFromFile
    ("assets/img/map/Map.png", NULL);
    screen->spritebg = sfSprite_create();
    return (screen);
}