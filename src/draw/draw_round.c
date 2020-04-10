/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** draw_round
*/

#include "my.h"

void draw_round(enemy_t *enemy, screen_t *screen)
{
    sfText *round_nbr = sfText_create();
    sfVector2f position;
    char *char_round = malloc(sizeof(char) * 1);
    char_round = my_itoa(enemy->round, char_round);
    sfFont *font = sfFont_createFromFile("assets/fonts/FunSized.ttf");
    position.x = 420;
    position.y = 0;

    sfText_setString(round_nbr, char_round);
    sfText_setPosition(round_nbr, position);
    sfText_setFont(round_nbr, font);
    sfText_setCharacterSize(round_nbr, 24);
    sfText_setColor(round_nbr, sfBlack);
    sfRenderWindow_drawText(screen->window, round_nbr, NULL);
}