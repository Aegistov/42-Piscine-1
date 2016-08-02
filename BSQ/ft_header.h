#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>

typedef struct          s_max;
{
    int                 x_max;
    int                 y_max;
    int                 size;
    int                 new;
}                       t_max;

void        ft_putchar(char c);
void        ft_putstr(char *str);
void        ft_putnbr(int nbr);
int         ft_strlen(char *str);
void        ft_swap(unsigned int **ptr1, unsigned int **ptr2);
void        free_ptr(unsigned int **ptr1, unsigned int **ptr2, char **tmp);
int         find_minimum(unsigned int a, unsigned int b, unsigned int c);
int         nbr_of_lines(int *fold, char *file);
int         store_max(t_max *max, int i, int line, int current);
int         map_error(void);
int         nbr_columns(char *file);
int         first_line(char *file, int *fold);
int         create_bsq(char *file, t_max *max, int nbr_lines, int nbr_columns);
int         ft_atoi(char *str);
int         check_nbr_lines(char *str);
void        print_line(char *holder, t_max *max, int nbr_columns);
int         start_first_line(int fold, unsigned int *first, char *holder,
            t_max *max);
int         init_first_char(char *holder, unsigned int *ptr2, t_max *max,
            int line);
int         put_int_tab(char *holder, unsigned int *ptr1,
            unsigned int *ptr2, t_max *max);


#endif
