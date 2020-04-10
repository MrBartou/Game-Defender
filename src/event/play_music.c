/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019 [WSL: Ubuntu-18.04]
** File description:
** play_music
*/

#include "my.h"

sfMusic *play_music(sfMusic *music)
{
    music = sfMusic_createFromFile("assets/music/2.ogg");
    sfMusic_setVolume(music, 50);
    sfMusic_setLoop(music, sfTrue);
    sfMusic_play(music);
    return (music);
}

sfMusic *play_music_main(sfMusic *music)
{
    music = sfMusic_createFromFile("assets/music/1.ogg");
    sfMusic_setVolume(music, 50);
    sfMusic_play(music);
    return (music);
}