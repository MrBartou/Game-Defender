/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** draw_enemy
*/

#include "my.h"

enemy_t *draw_enemy(enemy_t *enemy, screen_t *screen, sfClock *clock)
{
    enemy = do_round(enemy, clock);
    draw_round(enemy, screen);
    for (int count = 0; count != enemy->round; count = count + 1) {
        if (enemy->life[count] > 0) {
            sfSprite_setTexture(enemy->sprit_enemy[count],
            enemy->texture_enemy, sfTrue);
            sfSprite_setTextureRect(enemy->sprit_enemy[count],
            enemy->rect_enemy);
            sfSprite_setPosition(enemy->sprit_enemy[count],
            set_move_enemy(count, enemy->pos_enemy[count]));
            enemy->pos_enemy[count] = move_pos_enemy(enemy->pos_enemy[count],
            count);
            sfRenderWindow_drawSprite(screen->window,
            enemy->sprit_enemy[count], NULL);
        }
    }
    return (enemy);
}