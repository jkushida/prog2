#include <stdio.h>

int main(){
    int a[100];
    int i;
    int n = 0;
    while ( scanf("%d", &a[n]) != EOF ) {
      ++n;
    }

    printf("\n入力した数値\n");
    for(i=0; i<n;i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
