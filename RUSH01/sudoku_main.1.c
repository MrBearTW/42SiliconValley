#include "sudoku_main.h"


// i = guess num ?
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
/*	puzzle
00 01  ...  08
10 11 
.
.
80          88 

00 = 9
01 = 0
*/
	int i;

	if (row < 9 && col < 9)  // make sure is in 9*9 pizzale
	{
		if (puzzle[row][col] != 0)	//manage which has number
		{
			if ((col + 1) < 9)
				return (build_board(puzzle, row, col + 1));
			else if ((row + 1) < 9)
				return (build_board(puzzle, row + 1, 0));
			else
				return (1);   // done?
		}
		else	//manage which is . 
		{
			i = 0;
			return (build_board2(puzzle, row, col, i));
		}
		return (0);		// not done
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
/* 
argv
i1
i2
.
.
i9

j0 , j1 , j2

puzzle
00 01  ...  08
10 11 
.
.
80          88 

*/
	puzzle = (int**)malloc(sizeof(int*) * 9);
	while (i < 10)
	{
		puzzle[i - 1] = (int*)malloc(sizeof(int) * 9);
		while (j < 9)
		{
			// make sure is . not 0
			if (argv[i][j] == 0)
				return (ft_error());
			// ascii 46 = .
			// ascii 79 = 0
			if ((argv[i][j] - '0') < 0)
				puzzle[i - 1][j] = 0;     // . >> 0 ?
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

	//make sure have 10 argc
	if (argc != 10)
	{
		write(1, "Error!\n", 7);
		return (0);
	}

	// get puzzle shape and make sure is 9*9
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
}/*
./web 
"9...7...." 
"2...9..53"  
".6..124.." 
"84...1.9." 
"5.....8.." 
".31..4..." 
"..37..68." 
".9..5.741" 
"47......."

9 1 4 3 7 5 2 6 8
2 8 7 4 9 6 1 5 3
3 6 5 8 1 2 4 7 9
8 4 6 5 2 1 3 9 7
5 2 9 6 3 7 8 1 4
7 3 1 9 8 4 5 2 6
1 5 3 7 4 9 6 8 2
6 9 8 2 5 3 7 4 1
4 7 2 1 6 8 9 3 5

*/