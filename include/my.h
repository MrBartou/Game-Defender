/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019 [WSL: Ubuntu-18.04]
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_

#include <SFML/Graphics.h>
#include <SFML/Config.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

typedef struct tower
{
    char **tower;
    int money;
    sfSprite *sprite_tower[3];
    sfVector2f pos_tower[9];
} tower_t;

typedef struct enemy
{
    sfTexture *texture_enemy;
    sfSprite *sprit_enemy[30];
    sfVector2f pos_enemy[30];
    sfIntRect rect_enemy;
    int round;
    int *life;
} enemy_t;

typedef struct menu
{
    sfFont *font;
    sfText *text;
    sfVector2f position;
    sfVector2f size;
    sfRectangleShape *rect;
    sfVector2i click_position;
    sfBool click;
    sfMouseButton button;
} menu_t;

typedef struct text
{
    sfText *score;
    sfText *round;
    sfText *life;
    sfVector2f position;
    sfFont *font;
} text_t;
typedef struct screen
{
    sfRenderWindow *window;
    sfMusic *music;
    sfClock *clock;
    sfTexture *texturebg;
    sfSprite *spritebg;

} screen_t;

/* main */
int main(int ac, char **av);
void display_help(void);

/* tower */
tower_t init_tower(tower_t tower);
tower_t init_pos_tower(tower_t tower, int count);
void draw_tower(sfRenderWindow *window, tower_t tower, int count);
tower_t reset_tower(tower_t tower);
enemy_t *tower_shoot(tower_t tower, enemy_t *enemy);
enemy_t *range_tower(enemy_t *enemy, int count, int count2);

/* screen */
screen_t *init_screen();
screen_t *draw_screen(screen_t *screen);

/* menu */
menu_t *init_menu();
menu_t *draw_menu(menu_t *menu, screen_t *screen);
sfVector2f set_pos(sfVector2f position);
sfVector2f set_size(sfVector2f size);

menu_t *init_menu2();
sfVector2f set_pos2(sfVector2f position);
sfVector2f set_size2(sfVector2f size);

menu_t *init_menu3();
sfVector2f set_pos3(sfVector2f position);
sfVector2f set_size3(sfVector2f size);

menu_t *init_menu4();
sfVector2f set_pos4(sfVector2f position);
sfVector2f set_size4(sfVector2f size);

/* game */
void game_loop(screen_t *screen);
tower_t event(sfRenderWindow *window, tower_t tower, enemy_t *enemy);
void draw_round(enemy_t *enemy, screen_t *screen);
enemy_t *do_round(enemy_t *enemy, sfClock *clock);
tower_t manage_tower(sfMouseButtonEvent mouse, tower_t tower);
tower_t get_money(tower_t tower, enemy_t *enemy);

/* destroy */
void destroy(enemy_t *enemy, sfMusic *music);

/* clock */
sfIntRect do_clock(sfClock *clock, sfIntRect rect_enemy);

/* enemy */
enemy_t *draw_enemy(enemy_t *enemy, screen_t *screen, sfClock *clock);
enemy_t *init_enemy(enemy_t *enemy);
sfVector2f set_pos_enemy(sfVector2f pos_enemy, int count);
sfIntRect set_rect_enemy(sfIntRect rect_enemy);
void move_enemy(sfIntRect *rect_enemy);
sfVector2f move_pos_enemy(sfVector2f pos_enemy, int count);
sfVector2f move_pos_enemy2(sfVector2f pos_enemy, int count2);
sfVector2f move_pos_enemy3(sfVector2f pos_enemy, int count2);
sfVector2f move_pos_enemy4(sfVector2f pos_enemy, int count2);
sfVector2f move_pos_enemy5(sfVector2f pos_enemy, int count2);
sfVector2f set_move_enemy(int count, sfVector2f position);
enemy_t *reset_enemy(enemy_t *enemy);

/* nexus */
int life_nexus(enemy_t *enemy, screen_t *screen);
void draw_life_nexus(screen_t *screen, int life);

/* gameover */
int game_over(screen_t *screen);
int event_gameover(sfRenderWindow *roundwindow);
void draw_text_gameover(sfRenderWindow *window);
enemy_t *reset_game(enemy_t *enemy);

/* button */
void draw_continue(sfRenderWindow *window);
sfVector2f set_position_continue(sfVector2f position);
void draw_yes(sfRenderWindow *window);
sfVector2f set_position_yes(sfVector2f position);
void draw_no(sfRenderWindow *window);
sfVector2f set_position_no(sfVector2f position);
int manage_mouse_pressed(sfMouseButtonEvent mouse, sfRenderWindow *window);
void yes_pressed(sfRenderWindow *window);
void no_pressed(sfRenderWindow *window);
void draw_hover(sfRenderWindow *window);
void yes_hover(sfRenderWindow *window);
void no_hover(sfRenderWindow *window);

/* text */
text_t *init_money(void);
text_t *init_round(void);
text_t *init_life(void);
text_t *draw_text(screen_t *screen);
sfVector2f set_position_money(sfVector2f position);
sfVector2f set_position_round(sfVector2f position);
sfVector2f set_position_life(sfVector2f position);
void draw_money(sfRenderWindow *window, tower_t tower);

/* main menu */
void main_menu(void);
void draw_text_main(screen_t *screen);
int event_main_menu(screen_t *screen, sfMusic *music);
void play_pressed(screen_t *screen, sfMusic *music);
void help_pressed(sfRenderWindow *window);
void quit_pressed(sfRenderWindow *window);
int manage_main_pressed(sfMouseButtonEvent mouse, screen_t *screen,
sfMusic *music);
void draw_title(sfRenderWindow *window);
void draw_play(sfRenderWindow *window);
void draw_help(sfRenderWindow *window);
void draw_quit(sfRenderWindow *window);
void play_hover(sfRenderWindow *window);
void help_hover(sfRenderWindow *window);
void quit_hover(sfRenderWindow *window);
void draw_hover_main(sfRenderWindow *window);

/* Music */
sfMusic *play_music(sfMusic *music);
sfMusic *play_music_main(sfMusic *music);

/* lib */
int my_atoi(char *str);
int	my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(char *str);
int my_strlen(char *str);
char *my_itoa(int i, char str[]);

#endif /* !MY_H_ */
