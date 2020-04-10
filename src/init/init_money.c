/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019 [WSL: Ubuntu-18.04]
** File description:
** init_menu
*/

#include "my.h"

text_t *init_money(void)
{
    text_t *text = malloc(sizeof(text_t));
    text->position = set_position_money(text->position);
    text->font = sfFont_createFromFile("assets/fonts/FunSized.ttf");

    text->score = sfText_create();
    sfText_setString(text->score, "Money");
    sfText_setPosition(text->score, text->position);
    sfText_setFont(text->score, text->font);
    sfText_setCharacterSize(text->score, 24);
    sfText_setColor(text->score, sfBlack);
    return (text);
}

sfVector2f set_position_money(sfVector2f position)
{
    position.x = 0;
    position.y = 500;
    return (position);
}