/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019 [WSL: Ubuntu-18.04]
** File description:
** game_loop
*/

#include "my.h"

void game_loop(screen_t *screen)
{
    int reset = 0;
    menu_t *menu;
    enemy_t *enemy = init_enemy(enemy);
    tower_t tower = init_tower(tower);
    sfClock *clock = sfClock_create();
    sfClock *clock2 = sfClock_create();
    sfMusic *music;

    music = play_music(music);
    while (sfRenderWindow_isOpen(screen->window)) {
        enemy->rect_enemy = do_clock(clock, enemy->rect_enemy);
        sfRenderWindow_clear(screen->window, sfBlack);
        screen = draw_screen(screen);
        menu = draw_menu(menu, screen);
        tower = event(screen->window, tower, enemy);
        enemy = tower_shoot(tower, enemy);
        enemy = draw_enemy(enemy, screen, clock2);
        reset = life_nexus(enemy, screen);
        if (reset == 2) {
            tower = reset_tower(tower);
            enemy = reset_enemy(enemy);
        }
        sfRenderWindow_display(screen->window);
    }
    destroy(enemy, music);
}