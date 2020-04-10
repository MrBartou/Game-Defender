/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019 [WSL: Ubuntu-18.04]
** File description:
** draw_score
*/

#include "my.h"

text_t *draw_text(screen_t *screen)
{
    text_t *text;

    text = init_money();
    sfRenderWindow_drawText(screen->window, text->score, NULL);
    text = init_round();
    sfRenderWindow_drawText(screen->window, text->round, NULL);
    text = init_life();
    sfRenderWindow_drawText(screen->window, text->life, NULL);
    return (text);
}