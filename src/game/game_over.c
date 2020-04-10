/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** game_over
*/

#include "my.h"

int game_over(screen_t *screen)
{
    int quit = 0;
    sfTexture *lose = sfTexture_createFromFile("assets/img/map/gameover.png",
    NULL);
    sfSprite *sprite_lose = sfSprite_create();

    sfSprite_setTexture(sprite_lose, lose, sfTrue);
    while (quit == 0) {
        sfRenderWindow_clear(screen->window, sfBlack);
        sfRenderWindow_drawSprite(screen->window, sprite_lose, NULL);
        draw_text_gameover(screen->window);
        quit = event_gameover(screen->window);
        sfRenderWindow_display(screen->window);
    }
    return (quit);
}

void draw_text_gameover(sfRenderWindow *window)
{
    draw_continue(window);
    draw_yes(window);
    draw_no(window);
    draw_hover(window);
}