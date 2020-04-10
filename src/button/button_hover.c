/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** button_hover
*/

#include "my.h"

void draw_hover(sfRenderWindow *window)
{
    void (*yes)(sfRenderWindow *);
    yes = &yes_hover;
    void (*no)(sfRenderWindow *);
    no = &no_hover;
    sfVector2i mouse;
    mouse = sfMouse_getPositionRenderWindow(window);

    if (mouse.x > 170 && mouse.x < 230 && mouse.y > 530 && mouse.y < 560)
        (*yes)(window);
    if (mouse.x > 570 && mouse.x < 630 && mouse.y > 530 && mouse.y < 560)
        (*no)(window);
}

void yes_hover(sfRenderWindow *window)
{
    sfText *yes;
    sfVector2f position = set_position_yes(position);
    sfFont *font = sfFont_createFromFile("assets/fonts/Simplicity.ttf");

    yes = sfText_create();
    sfText_setString(yes, "Yes");
    sfText_setPosition(yes, position);
    sfText_setFont(yes, font);
    sfText_setCharacterSize(yes, 50);
    sfText_setColor(yes, sfYellow);
    sfRenderWindow_drawText(window, yes, NULL);
}

void no_hover(sfRenderWindow *window)
{
    sfText *no;
    sfVector2f position = set_position_no(position);
    sfFont *font = sfFont_createFromFile("assets/fonts/Simplicity.ttf");

    no = sfText_create();
    sfText_setString(no, "NO");
    sfText_setPosition(no, position);
    sfText_setFont(no, font);
    sfText_setCharacterSize(no, 50);
    sfText_setColor(no, sfYellow);
    sfRenderWindow_drawText(window, no, NULL);
}