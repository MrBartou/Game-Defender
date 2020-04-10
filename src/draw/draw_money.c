/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** draw_money
*/

#include "my.h"

void draw_money(sfRenderWindow *window, tower_t tower)
{
    sfText *money_nbr = sfText_create();
    sfVector2f position;
    char *char_money = malloc(sizeof(char) * 1);
    char_money = my_itoa(tower.money, char_money);
    sfFont *font = sfFont_createFromFile("assets/fonts/FunSized.ttf");
    position.x = 0;
    position.y = 530;

    sfText_setString(money_nbr, char_money);
    sfText_setPosition(money_nbr, position);
    sfText_setFont(money_nbr, font);
    sfText_setCharacterSize(money_nbr, 24);
    sfText_setColor(money_nbr, sfBlack);
    sfRenderWindow_drawText(window, money_nbr, NULL);
}