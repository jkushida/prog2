// b3-2.c 解答
#include <stdio.h>

int main(void)
{
    char s[] = "NbcFefpxyUfg";
    int i = 0;
    while(s[i] != '\0'){
        
        // 小文字の範囲
        if(97 <= s[i] && s[i] <= 122){
            i++;
        }else{
            putchar(s[i]);
            i++;
        }
    }
    printf("\n");
    
    return (0);
}
