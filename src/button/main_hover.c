/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** main_hover
*/

#include "my.h"

void play_hover(sfRenderWindow *window)
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
    sfText_setColor(play, sfYellow);
    sfRenderWindow_drawText(window, play, NULL);
}

void help_hover(sfRenderWindow *window)
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
    sfText_setColor(help, sfYellow);
    sfRenderWindow_drawText(window, help, NULL);
}

void quit_hover(sfRenderWindow *window)
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
    sfText_setColor(quit, sfYellow);
    sfRenderWindow_drawText(window, quit, NULL);
}

void draw_hover_main(sfRenderWindow *window)
{
    void (*play)(sfRenderWindow *);
    play = &play_hover;
    void (*help)(sfRenderWindow *);
    help = &help_hover;
    void (*quit)(sfRenderWindow *);
    quit = &quit_hover;
    sfVector2i mouse;
    mouse = sfMouse_getPositionRenderWindow(window);

    if (mouse.x > 350 && mouse.x < 420 && mouse.y > 210 && mouse.y < 260)
        (*play)(window);
    if (mouse.x > 350 && mouse.x < 410 && mouse.y > 310 && mouse.y < 360)
        (*help)(window);
    if (mouse.x > 350 && mouse.x < 430 && mouse.y > 410 && mouse.y < 460)
        (*quit)(window);
}