/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** main_pressed
*/

#include "my.h"

void play_pressed(screen_t *screen, sfMusic *music)
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
    sfText_setColor(play, sfBlue);
    sfRenderWindow_drawText(screen->window, play, NULL);
    sfMusic_destroy(music);
    game_loop(screen);
}

void help_pressed(sfRenderWindow *window)
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
    sfText_setColor(help, sfBlue);
    sfRenderWindow_drawText(window, help, NULL);
}

void quit_pressed(sfRenderWindow *window)
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
    sfText_setColor(quit, sfBlue);
    sfRenderWindow_drawText(window, quit, NULL);
    sfRenderWindow_close(window);
}

int manage_main_pressed(sfMouseButtonEvent mouse, screen_t *screen,
sfMusic *music)
{
    void (*play)(screen_t *, sfMusic *);
    play = &play_pressed;
    void (*help)(sfRenderWindow *);
    help = &help_pressed;
    void (*quit)(sfRenderWindow *);
    quit = &quit_pressed;

    if (mouse.x > 350 && mouse.x < 420 && mouse.y > 210 && mouse.y < 260) {
        (*play)(screen, music);
        return (1);
    }
    if (mouse.x > 350 && mouse.x < 410 && mouse.y > 310 && mouse.y < 360)
        (*help)(screen->window);
    if (mouse.x > 350 && mouse.x < 430 && mouse.y > 410 && mouse.y < 460)
        (*quit)(screen->window);
    return (0);
}