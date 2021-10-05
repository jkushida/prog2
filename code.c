#include <stdio.h>

int main(void)
{
    char str1[] = "abcde";
    char str2[6] = {0};
    char *p1, *p2;
    
    p1 = str1;
    p2 = str2;
    while(*p1!='\0'){
        p1++;
    }
    p1--;
    
    while(*p1!='a'){
        *p2 = *p1;
        p2++;
        p1--;
    }
    *p2 = *p1;
    
    
    p2 = str2;
    
    printf("%s\n",p2);
    
    return 0;
}
