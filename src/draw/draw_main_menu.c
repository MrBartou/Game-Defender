/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** draw_main_menu
*/

#include "my.h"

void draw_title(sfRenderWindow *window)
{
    sfText *title;
    sfVector2f position;
    sfFont *font = sfFont_createFromFile("assets/fonts/Simplicity.ttf");
    position.x = 175;
    position.y = 0;

    title = sfText_create();
    sfText_setString(title, "DEFENDER");
    sfText_setPosition(title, position);
    sfText_setFont(title, font);
    sfText_setCharacterSize(title, 150);
    sfText_setColor(title, sfBlack);
    sfRenderWindow_drawText(window, title, NULL);
}

void draw_play(sfRenderWindow *window)
{
    sfText *play;
    sfVector2f position;
    sfFont *font = sfFont_createFromFile("assets/fonts/Simplicity.ttf");
    position.x = 350;
    position.y = 200;

    play = sfText_create();
    sfText_setString(play, "PLAY");
    sfText_setPosition(play, position);
    sfText_setFont(play, font);
    sfText_setCharacterSize(play, 50);
    sfText_setColor(play, sfRed);
    sfRenderWindow_drawText(window, play, NULL);
}

void draw_help(sfRenderWindow *window)
{
    sfText *help;
    sfVector2f position;
    sfFont *font = sfFont_createFromFile("assets/fonts/Simplicity.ttf");
    position.x = 350;
    position.y = 300;

    help = sfText_create();
    sfText_setString(help, "HELP");
    sfText_setPosition(help, position);
    sfText_setFont(help, font);
    sfText_setCharacterSize(help, 50);
    sfText_setColor(help, sfRed);
    sfRenderWindow_drawText(window, help, NULL);
}

void draw_quit(sfRenderWindow *window)
{
    sfText *quit;
    sfVector2f position;
    sfFont *font = sfFont_createFromFile("assets/fonts/Simplicity.ttf");
    position.x = 350;
    position.y = 400;

    quit = sfText_create();
    sfText_setString(quit, "QUIT");
    sfText_setPosition(quit, position);
    sfText_setFont(quit, font);
    sfText_setCharacterSize(quit, 50);
    sfText_setColor(quit, sfRed);
    sfRenderWindow_drawText(window, quit, NULL);
}