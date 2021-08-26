#include <stdio.h>

int main()
{
    int a[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    
    printf("a[0][0] = %d\n", a[0][0]);
    printf("a[1][0] = %d\n", a[1][0]);
    printf("a[2][3] = %d\n", a[2][3]);
    
    return 0;
}
