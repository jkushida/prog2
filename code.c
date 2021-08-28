#include <stdio.h>
#include <math.h>
int main(void)
{
    int n = 0;
    int M = 1; // 初期の細胞数
    int limit = 1E+5;

    while (1){
        
        M = M * 5;
        n++;
        printf("%d分後のM=%d\n",n,M);
        
        if(M>limit)
            break;
    }
 
    printf("n = %d\n",n);
    return 0;
}
