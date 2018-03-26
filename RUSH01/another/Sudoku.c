#include <stdio.h>

#define SIZE 9

//sudoku problem
int matrix[9][9] = {
    {6,5,0,8,7,3,0,9,0},
    {0,0,3,2,5,0,0,0,8},
    {9,8,0,1,0,4,3,5,7},
    {1,0,5,0,0,0,0,0,0},
    {4,0,0,0,0,0,0,0,2},
    {0,0,0,0,0,0,5,0,3},
    {5,7,8,3,0,1,0,2,6},
    {2,0,0,0,4,8,9,0,0},
    {0,9,0,6,2,5,0,8,1}
};

//function to print sudoku
void print_sudoku()
{
    int i,j;
    for(i=0;i<SIZE;i++)
    {
        for(j=0;j<SIZE;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n\n");
    }
}

//function to check if all cells are assigned or not
//if there is any unassigned cell
//then this function will change the values of
//row and col accordingly
int number_unassigned(int *row, int *col)
{
    int num_unassign = 0;
    int i,j;
    for(i=0;i<SIZE;i++)
    {
        for(j=0;j<SIZE;j++)
        {
            //cell is unassigned
            if(matrix[i][j] == 0)
            {
                //changing the values of row and col
                *row = i;
                *col = j;
                //there is one or more unassigned cells
                printf("number_unassigned  row: %d col: %d num_unassign: %d\n",*row,*col,num_unassign);
                num_unassign = 1;
                printf("number_unassigned1  return(num_unassign): %d \n",num_unassign);
                return num_unassign;
            }
        }
    }
    printf("number_unassigned2  return(num_unassign): %d \n",num_unassign);
    return num_unassign;
}

//function to check if we can put a
//value in a paticular cell or not
int is_safe(int n, int r, int c)
{
    int i,j;
    //checking in row
    for(i=0;i<SIZE;i++)
    {
        printf("is_safe1 n: %d r: %d c: %d i: %d\n",n,r,c,i);
        //there is a cell with same value
        if(matrix[r][i] == n)
            {printf("is_safe1  return: return 0 \n");
            return 0;}
    }
    //checking column
    for(i=0;i<SIZE;i++)
    {
        printf("is_safe2 n: %d r: %d c: %d i: %d\n",n,r,c,i);
        //there is a cell with the value equal to i
        if(matrix[i][c] == n)
            {printf("is_safe2  return: return 0 \n");
            return 0;}
    }
    //checking sub matrix
    int row_start = (r/3)*3;
    int col_start = (c/3)*3;
    for(i=row_start;i<row_start+3;i++)
    {
        for(j=col_start;j<col_start+3;j++)
        {
            printf("is_safe3 n: %d r: %d c: %d i: %d row_start: %d col_start: %d\n",n,r,c,i,row_start,col_start);
            if(matrix[i][j]==n)
                {printf("is_safe3  return: return 0 \n");
                return 0;}
        }
    }
    printf("is_safe4  return: return 1 \n");
    return 1;
}

//function to solve sudoku
//using backtracking
int solve_sudoku()
{
    int row;
    int col;
    printf("solve_sudoku1  row: %d col: %d\n",row,col);
    //if all cells are assigned then the sudoku is already solved
    //pass by reference because number_unassigned will change the values of row and col
    if(number_unassigned(&row, &col) == 0)
        {printf("solve_sudoku1  return: return 1 \n");
        return 1;}
    int n,i;  
    //number between 1 to 9
    for(i=1;i<=SIZE;i++)
    {
        printf("solve_sudoku2 row: %d col: %d n: %d i: %d\n",row,col,n,i);
        //if we can assign i to the cell or not
        //the cell is matrix[row][col]
        if(is_safe(i, row, col))
        {            
            matrix[row][col] = i;
            //backtracking
            if(solve_sudoku())
                {printf("solve_sudoku2  return: return 1 \n");
                return 1;}
            //if we can't proceed with this solution
            //reassign the cell
            matrix[row][col]=0;
        }
    }
    printf("solve_sudoku3  return: return 0 \n");
    return 0;
}

int main()
{
    if (solve_sudoku())
        print_sudoku();   
    else
        printf("No solution\n");
    return 0;
}