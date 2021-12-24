#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int i=9, j, k=9, l;
    j=i++; //Postincrement (j=i)
    l=k--; //Postdicrement (l=k)
    printf("i=%d, j=%d, \nk=%d, l=%d", i, j, k, l);
    getch();
    return 0;
}
