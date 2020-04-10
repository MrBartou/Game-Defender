/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** draw_no
*/

#include "my.h"

void draw_no(sfRenderWindow *window)
{
    sfText *no;
    sfVector2f position = set_position_no(position);
    sfFont *font = sfFont_createFromFile("assets/fonts/Simplicity.ttf");

    no = sfText_create();
    sfText_setString(no, "NO");
    sfText_setPosition(no, position);
    sfText_setFont(no, font);
    sfText_setCharacterSize(no, 50);
    sfText_setColor(no, sfRed);
    sfRenderWindow_drawText(window, no, NULL);
}

sfVector2f set_position_no(sfVector2f position)
{
    position.x = 570;
    position.y = 500;
    return (position);
}