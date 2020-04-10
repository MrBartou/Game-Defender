/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** draw_yes
*/

#include "my.h"

void draw_yes(sfRenderWindow *window)
{
    sfText *yes;
    sfVector2f position = set_position_yes(position);
    sfFont *font = sfFont_createFromFile("assets/fonts/Simplicity.ttf");

    yes = sfText_create();
    sfText_setString(yes, "Yes");
    sfText_setPosition(yes, position);
    sfText_setFont(yes, font);
    sfText_setCharacterSize(yes, 50);
    sfText_setColor(yes, sfRed);
    sfRenderWindow_drawText(window, yes, NULL);
}

sfVector2f set_position_yes(sfVector2f position)
{
    position.x = 170;
    position.y = 500;
    return (position);
}