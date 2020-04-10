##
## EPITECH PROJECT, 2020
## MUL_my_defender_2019 [WSL: Ubuntu-18.04]
## File description:
## Makefile
##

cyan = /bin/echo -e "\x1b[36m\#\# $1\x1b[0m"

CFLAGS		+=	-I include -W -Wall -Wextra -g

DIR	=	./src

RM	=	rm -f

SRC		=	./src/main.c \
			./src/game/game_loop.c \
			./src/draw/draw_screen.c \
			./src/init/init_screen.c \
			./src/event/event.c \
			./src/draw/draw_menu.c \
			./src/init/init_menu2.c \
			./src/init/init_menu1.c \
			./src/init/init_menu3.c \
			./src/init/init_menu4.c \
			./src/display_help.c \
			./src/draw/draw_text.c \
			./src/init/init_money.c \
			./src/init/init_round.c \
			./src/init/init_life.c \
			./src/event/play_music.c \
			./src/event/do_clock.c \
			./src/draw/draw_enemy.c \
			./src/event/move_enemy.c \
			./src/event/move_pos_enemy.c \
			./src/game/life_nexus.c \
			./src/game/game_over.c \
			./src/draw/draw_continue.c \
			./src/draw/draw_yes.c \
			./src/draw/draw_no.c \
			./src/button/button_pressed.c \
			./src/event/event_gameover.c \
			./src/button/button_hover.c \
			./src/game/main_menu.c \
			./src/draw/draw_main_menu.c \
			./src/button/main_hover.c \
			./src/button/main_pressed.c \
			./src/draw/draw_round.c \
			./src/event/destroy.c \
			./src/game/do_round.c \
			./src/init/init_tower.c \
			./src/draw/draw_money.c \
			./src/init/init_enemy.c \
			./src/event/manage_tower.c \
			./src/init/init_pos_tower.c \
			./src/draw/draw_tower.c \
			./src/game/get_money.c \
			./src/init/reset_game.c \
			./src/event/tower_shoot.c \
			./src/event/range_tower.c \

OBJ 	=  	$(SRC:.c=.o)

EXEC	=	my_defender

all: 	$(EXEC) clean

$(EXEC):	$(OBJ)
	@echo "\e[0;31m Compilation des fichiers -> DONE \e[0;m"
	make -C lib/
	gcc -o $(EXEC) $(OBJ) $(CFLAGS) -L./lib/ -lmy -l csfml-graphics -l csfml-window -l csfml-system -l csfml-audio
	@echo "\e[0;31m Compilation du programme -> DONE \e[0;m"
clean:
	$(RM) $(OBJ)
	@echo "\e[0;31m Cleaning -> DONE \e[0;m"

fclean:	clean
	$(RM) $(EXEC)
	@echo "\e[0;31m Cleaning all -> DONE \e[0;m"

re:	fclean all

.PHONY: all clean re fclean