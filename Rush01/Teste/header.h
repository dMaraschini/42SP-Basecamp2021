#ifndef HEADER_H
# define HEADER_H

void	ft_putchar(char c);

int		ft_putstr(char *str);

int		ft_validation(int arg1, char *arg2, int i);

int		ft_error(void);

int		ft_validation2(char *arg2, int i);

char	**ft_puttab(char **tab);

void	ft_createheader(char *argv);

void	ft_putheader(char **header);

void	ft_prttab(char **tab);

void	ft_sorttab(char **tab);

#endif