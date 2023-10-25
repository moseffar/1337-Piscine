#ifndef FT_H
# define FT_H

extern char *dict[];
int	    ft_strlen(char *str);
int	    ft_atoi(char *str, unsigned int *n);
char    *map(unsigned int  nb, char **dict);
void     int_to_letter(unsigned int  n);
void	ft_putstr(char *str);
int	    ft_recursive_power(int nb, int power);

#endif