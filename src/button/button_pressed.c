/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** button_pressed
*/

#include "my.h"

void yes_pressed(sfRenderWindow *window)
{
    sfText *yes;
    sfVector2f position = set_position_yes(position);
    sfFont *font = sfFont_createFromFile("assets/fonts/Simplicity.ttf");

    yes = sfText_create();
    sfText_setString(yes, "Yes");
    sfText_setPosition(yes, position);
    sfText_setFont(yes, font);
    sfText_setCharacterSize(yes, 50);
    sfText_setColor(yes, sfBlue);
    sfRenderWindow_drawText(window, yes, NULL);
}

void no_pressed(sfRenderWindow *window)
{
    sfText *no;
    sfVector2f position = set_position_no(position);
    sfFont *font = sfFont_createFromFile("assets/fonts/Simplicity.ttf");

    no = sfText_create();
    sfText_setString(no, "NO");
    sfText_setPosition(no, position);
    sfText_setFont(no, font);
    sfText_setCharacterSize(no, 50);
    sfText_setColor(no, sfBlue);
    sfRenderWindow_drawText(window, no, NULL);
    sfRenderWindow_close(window);
}