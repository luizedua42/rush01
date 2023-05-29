#include <stdlib.h>
#include <unistd.h>

void	free_matrix(char **matrix, int height);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	putspace(void)
{
	write(1, "  ", 2);
}

void putspaces()
{
	putspace();
	putspace();
	putspace();
	putspace();
	putspace();
	putspace();
}

void	print_middle(char **matrix)
{
	ft_putchar(matrix[2][0]);
	putspaces();
	ft_putchar(matrix[3][0]);
	ft_putchar('\n');

	ft_putchar(matrix[2][1]);
	putspaces();
	ft_putchar(matrix[3][1]);
	ft_putchar('\n');

	ft_putchar(matrix[2][2]);
	putspaces();
	ft_putchar(matrix[3][2]);
	ft_putchar('\n');
	
	ft_putchar(matrix[2][3]);
	putspaces();
	ft_putchar(matrix[3][3]);
	ft_putchar('\n');
}

void	print_top(char **matrix, int width)
{
	int	j;

	j = 0;
	putspace();
	while (j < width)
	{
		ft_putchar(matrix[0][j]);
		if (j != width - 1)
			putspace();
		j++;
	}
}

void	print_bottom(char **matrix, int width)
{
	int	j;

	j = 0;
	putspace();
	while (j < width)
	{
		ft_putchar(matrix[1][j]);
		if (j != width - 1)
			putspace();
		j++;
	}
}

void	print_borders(char **matrix, int width)
{
	print_top(matrix, width);
	ft_putchar('\n');
	print_middle(matrix);
	print_bottom(matrix, width);
	ft_putchar('\n');
}
