#include<stdio.h>
void main()
{
    for (int r = 1; r <= 20; r++)
    {
        for (int c = 1; c < 20; c++)
        {
            printf("%2d",r);
            // if ((c==15 && r>15)||(r==c && r<16))
            // else
            //     printf("  ");
        }
        printf("\n");
    }
}
