#include <stdio.h>

int main()
{
    int i, j, k;
    int count=0;
    
    // 部屋番号を 100*i + 10*j + k で示し，カウントしていく
    
    // 100の桁
    for(i=0;i<10;i++){
        // 数字に4 or 9が出る場合はスキップ(カウントしない)
        if(i == 4 || i == 9)
            continue;
        
        // 10の桁
        for(j=0;j<10;j++){
            
            if(j == 4 || j == 9)
                continue;
            
            // 1の桁
            for(k=0;k<10;k++){
                if(k == 4 || k == 9)
                    continue;
                
                if(i == 0 && j ==0 && k==0)
                    continue;
        
                count++;
                
                if(i == 3 && j == 3 && k == 0 )
                    printf("部屋番号が0330の部屋は%d番目の部屋\n", count);
                
                if(count == 500)
                    printf("500番目の部屋の部屋番号は0%d%d%d\n", i, j, k);
                
            }
        }
        
    }
    
    return 0;
}
