#include <unistd.h>
void	ft_swap(char **a, char **b)
{	
	char	*x;

	x = *a;
	*a = *b;
	*b = x;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
		i++;
	return (s2[i] - s1[i]);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		write (1, &str[i++], 1);
}

int	print_params(int ac, char **av)
{
	int	i;

	i = ac;
	while (i-- > 1 )
	{	
		ft_putstr(av[i]);
		write (1, "\n", 1);
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac - 1)
	{
		if (ft_strcmp(av[i + 1], av[i]) < 0)
		{
			ft_swap(&av[i + 1], &av[i]);
			i = 1;
		}
		else
			i++;
	}
	print_params(ac, av);
	return (0);
}
