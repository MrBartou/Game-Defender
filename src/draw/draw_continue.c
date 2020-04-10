/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** draw_continue
*/

#include "my.h"

void draw_continue(sfRenderWindow *window)
{
    sfText *retry;
    sfVector2f position = set_position_continue(position);
    sfFont *font = sfFont_createFromFile("assets/fonts/FunSized.ttf");

    retry = sfText_create();
    sfText_setString(retry, "Continue ?");
    sfText_setPosition(retry, position);
    sfText_setFont(retry, font);
    sfText_setCharacterSize(retry, 40);
    sfText_setColor(retry, sfRed);
    sfRenderWindow_drawText(window, retry, NULL);
}

sfVector2f set_position_continue(sfVector2f position)
{
    position.x = 270;
    position.y = 450;
    return (position);
}