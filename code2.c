#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    char *fname = "data.csv";
    char s[100];
    int n1, n2;
    float f1, f2;

    fp = fopen( fname, "r" );
    if( fp == NULL ){
        printf( "%sファイルが開けません\n", fname );
        exit(1);
    }

    while( fscanf( fp, "%[^,], %d, %d, %f, %f", s, &n1, &n2, &f1, &f2 ) != EOF ){
        printf( "%s %d %d %.1f %.1f", s, n1, n2, f1, f2 );
    }
    printf("\n");

    fclose( fp );
    return 0;
}
