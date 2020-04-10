/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** event_gameover
*/

#include "my.h"

int event_gameover(sfRenderWindow *window)
{
    int quit = 0;
    sfEvent event;

    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window);
        if (event.type == sfEvtMouseButtonPressed)
            quit = manage_mouse_pressed(event.mouseButton, window);
    }
    return (quit);
}

int manage_mouse_pressed(sfMouseButtonEvent mouse, sfRenderWindow *window)
{
    void (*yes)(sfRenderWindow *);
    yes = &yes_pressed;
    void (*no)(sfRenderWindow *);
    no = &no_pressed;

    if (mouse.x > 170 && mouse.x < 230 && mouse.y > 530 && mouse.y < 560) {
        (*yes)(window);
        return (2);
    }
    if (mouse.x > 570 && mouse.x < 630 && mouse.y > 530 && mouse.y < 560) {
        (*no)(window);
        return (1);
    }
    return (0);
}