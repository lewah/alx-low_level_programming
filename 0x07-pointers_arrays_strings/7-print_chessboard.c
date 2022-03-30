#include "main.h"

/**
 * print_chessboard - prints chessboard.
 * @a: matrix
*/

void print_chessboard(char (*a)[8])
{
    int i,j;
    
    for(i=1;i<=8;i++)
    {
        for(j=1;j<=8;j++)
        {
            if((i+j)%2==0)
                _putchar("[X]");
            else _putchar("[ ]");
        }
        _putchar('\n');
    } 
}
