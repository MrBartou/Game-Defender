/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** main_menu
*/

#include "my.h"

void main_menu(void)
{
    screen_t *screen;
    sfMusic *music;
    int quit = 0;

    screen = init_screen();
    music = play_music_main(music);
    while (sfRenderWindow_isOpen(screen->window)) {
        sfRenderWindow_clear(screen->window, sfWhite);
        draw_text_main(screen);
        quit = event_main_menu(screen, music);
        sfRenderWindow_display(screen->window);
    }
    if (quit == 0)
        sfMusic_destroy(music);
    sfRenderWindow_destroy(screen->window);
}

void draw_text_main(screen_t *screen)
{
    draw_title(screen->window);
    draw_play(screen->window);
    draw_help(screen->window);
    draw_quit(screen->window);
    draw_hover_main(screen->window);
}

int event_main_menu(screen_t *screen, sfMusic *music)
{
    sfEvent event;
    int quit = 0;

    while (sfRenderWindow_pollEvent(screen->window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(screen->window);
        if (event.type == sfEvtMouseButtonPressed)
            quit = manage_main_pressed(event.mouseButton, screen, music);
    }
    return (quit);
}