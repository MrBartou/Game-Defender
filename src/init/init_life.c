/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019 [WSL: Ubuntu-18.04]
** File description:
** init_life
*/

#include "my.h"

text_t *init_life(void)
{
    text_t *text = malloc(sizeof(text_t));
    text->position = set_position_life(text->position);
    text->font = sfFont_createFromFile("assets/fonts/FunSized.ttf");

    text->life = sfText_create();
    sfText_setString(text->life, "Life");
    sfText_setPosition(text->life, text->position);
    sfText_setFont(text->life, text->font);
    sfText_setCharacterSize(text->life, 24);
    sfText_setColor(text->life, sfBlack);
    return (text);
}

sfVector2f set_position_life(sfVector2f position)
{
    position.x = 650;
    position.y = 570;
    return (position);
}