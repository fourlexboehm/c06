#include <unistd.h>
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		write (1, &str[i++], 1);
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac && *av[i] != '\0')
	{	
		ft_putstr(av[i]);
		write (1, "\n", 1);
		i++;
	}
	return (0);
}
