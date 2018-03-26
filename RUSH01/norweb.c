# include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int		count;
	int		b[10];

	count = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb == 0)
	{
		ft_putchar(nb + 48);
	}
	while (nb > 0)
	{
		b[count] = nb % 10;
		count++;
		nb /= 10;
	}
	while (count > 0)
	{
		count--;
		ft_putchar(b[count] + 48);
	}
}

void	ft_print_puzzle(int **puzzle)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		while (j < 8)
		{
			ft_putnbr((puzzle[i][j]));
			ft_putchar(' ');
			j++;
		}
		ft_putnbr(puzzle[i][j]);
		ft_putchar('\n');
		j = 0;
		i++;
	}
}

int		is_available(int **puzzle, int row, int col, int num)
{
	int row_start;
	int col_start;
	int i;

	row_start = (row / 3) * 3;
	col_start = (col / 3) * 3;
	i = 0;
	while (i < 9)
	{
		if (puzzle[row][i] == num)
			return (0); 
		if (puzzle[i][col] == num)
			return (0);
		if (puzzle[row_start + (i % 3)][col_start + (i / 3)] == num)
			return (0);
		i++;
	}
	return (1);
}

int		build_board2(int **puzzle, int row, int col, int i)
{
	while (i < 9)
	{
		if (is_available(puzzle, row, col, i + 1))
		{
			puzzle[row][col] = i + 1;
			if ((col + 1) < 9)
			{
				if (build_board(puzzle, row, col + 1))
					return (1);
				else
					puzzle[row][col] = 0;
			}
			else if ((row + 1) < 9)
			{
				if (build_board(puzzle, row + 1, 0))
					return (1);
				else
					puzzle[row][col] = 0;
			}
			else
				return (1);
		}
		i++;
	}
	return (0);
}

int		**ft_error(void)
{
	write(1, "Error!\n", 7);
	return (0);
}

int		build_board(int **puzzle, int row, int col)
{
	int i;

	if (row < 9 && col < 9)
	{
		if (puzzle[row][col] != 0)
		{
			if ((col + 1) < 9)
				return (build_board(puzzle, row, col + 1));
			else if ((row + 1) < 9)
				return (build_board(puzzle, row + 1, 0));
			else
				return (1); 
		}
		else
		{
			i = 0;
			return (build_board2(puzzle, row, col, i));
		}
		return (0);
	}
	else
		return (1);
}

int		**ft_create_puzzle(char **argv)
{
	int **puzzle;
	int i;
	int j;

	i = 1;	
	j = 0;

	puzzle = (int**)malloc(sizeof(int*) * 9);
	while (i < 10)
	{
		puzzle[i - 1] = (int*)malloc(sizeof(int) * 9);
		while (j < 9)
		{
			if (argv[i][j] == 0)
				return (ft_error());
			if ((argv[i][j] - '0') < 0)
				puzzle[i - 1][j] = 0;
			else
				puzzle[i - 1][j] = (argv[i][j] - '0');
			j++;
		}
		j = 0;
		i++;
	}
	return (puzzle);
}

int		main(int argc, char **argv)
{
	int **puzzle;

	if (argc != 10)
	{
		write(1, "Error!\n", 7);
		return (0);
	}


	puzzle = ft_create_puzzle(argv);
	if (puzzle == 0)
	{
		return (0);
	}


	if (build_board(puzzle, 0, 0))
		ft_print_puzzle(puzzle);
	else
		write(1, "Error!\n", 7);
	return (0);
}