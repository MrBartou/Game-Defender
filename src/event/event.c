/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019 [WSL: Ubuntu-18.04]
** File description:
** event
*/

#include "my.h"

tower_t event(sfRenderWindow *window, tower_t tower, enemy_t *enemy)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window);
        if (event.type == sfEvtMouseButtonPressed) {
            tower = manage_tower(event.mouseButton, tower);
        }
    }
    draw_money(window, tower);
    tower = get_money(tower, enemy);
    for (int count = 0; count != 9; count++)
        draw_tower(window, tower, count);
    return (tower);
}