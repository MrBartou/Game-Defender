/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019 [WSL: Ubuntu-18.04]
** File description:
** my_atoi
*/

int is_num(char c)
{
    return ((c >= '0' && c <= '9') ? 1 : 0);
}

int is_char(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    return (0);
}

int my_atoi(char *str)
{
    int nbr = 0;
    int is_neg = 1;

    while (*str) {
        if (is_char(*str))
            return (-1);
        if (*str == '-') {
            is_neg = -1;
            str++;
        }
        if (!(is_num(*str)) && *str != ' ')
            return ((nbr * is_neg) / 10);
        else if (*str == ' ')
            str++;
        nbr = ((*str - '0') + nbr);
        nbr = nbr * 10;
        str++;
    }
    return ((nbr * is_neg) / 10);
}
