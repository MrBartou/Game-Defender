/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** life_nexus
*/

#include "my.h"

int life_nexus(enemy_t *enemy, screen_t *screen)
{
    static int life = 1000;
    int reset = 0;
    for (int count = 0; count != 29; count = count + 1) {
        if (enemy->pos_enemy[count].x >= 597)
            life = life - 10;
    }
    if (life == 0)
        reset = game_over(screen);
    if (reset == 2) {
        life = 1000;
        return (2);
    }
    draw_life_nexus(screen, life);
    return (0);
}

void draw_life_nexus(screen_t *screen, int life)
{
    sfText *life_text = sfText_create();
    sfVector2f position;
    char *char_life = malloc(sizeof(char) * 1);
    char_life = my_itoa(life, char_life);
    sfFont *font = sfFont_createFromFile("assets/fonts/FunSized.ttf");
    position.x = 730;
    position.y = 570;

    sfText_setString(life_text, char_life);
    sfText_setPosition(life_text, position);
    sfText_setFont(life_text, font);
    sfText_setCharacterSize(life_text, 24);
    sfText_setColor(life_text, sfBlack);
    sfRenderWindow_drawText(screen->window, life_text, NULL);
}