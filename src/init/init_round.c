/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019 [WSL: Ubuntu-18.04]
** File description:
** init_round
*/

#include "my.h"

text_t *init_round(void)
{
    text_t *text = malloc(sizeof(text_t));
    text->position = set_position_round(text->position);
    text->font = sfFont_createFromFile("assets/fonts/FunSized.ttf");

    text->round = sfText_create();
    sfText_setString(text->round, "Round");
    sfText_setPosition(text->round, text->position);
    sfText_setFont(text->round, text->font);
    sfText_setCharacterSize(text->round, 24);
    sfText_setColor(text->round, sfBlack);
    return (text);
}

sfVector2f set_position_round(sfVector2f position)
{
    position.x = 320;
    position.y = 0;
    return (position);
}