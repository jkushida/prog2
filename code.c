// c1-3.c 解答
#include <stdio.h>

int main(void)
{
    int array[5] = { 1, 2, 3, 4, 5 };
    int i, *p[5];
    
    for(i = 0; i < 5; ++i ){
        p[i] =&array[4-i];
    }
    
    for(i = 0; i < 5; ++i ){
        printf( "%d ", *p );
    }
    printf( "\n" );
    return 0;
}
