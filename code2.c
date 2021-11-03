// option
// https://www.fe-siken.com/bunya.php?m=2&s=2&no=47

// エクセル表に手順

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j, k,jmax;
    char A[]={"-caababd"};
    char B[]={"-abd"};
    i = 1;
    j = 1;
    k=0;
    jmax=3;
    
    while(1){
        if(A[i]==B[j]){
            j=j+1;
            i=i+1;
            
        }else{
            printf("i=%d j = %d\n",i, j);
            i = i - j + 2;
            j = 1;
            
            printf("i=%d\n\n",i);

        }
        
       if( A[i]=='\0' || B[j]=='\0')
           break;
    }
    
    if(B[j]=='\0')
        k = i - jmax;
    
    printf("k=%d\n",k);
    
    return 0;
}
