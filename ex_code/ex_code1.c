#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
    int no;
    char name[5];
    int score1;
    int score2;
    double point;
}student_t;

void print_data(student_t *seito, int n);
void swap(student_t *a, student_t *b);

void bubbleSort1(student_t *seito, int n);
void bubbleSort2(student_t *seito, int n);
void bubbleSort3(student_t *seito, int n);
void file_output_data(student_t *seito, int n);


int main()
{
    FILE *fp;
    int i, mode;
    int n = 5; // データ数
    
    char *fname = "ex1_code_data.csv";
    char s[100], str[5][100];
    int n1, n2, n3;
    float f;
    
    
    fp = fopen( fname, "r" );
    if( fp == NULL ){
        printf( "%sファイルが開けません\n", fname );
        exit(1);
    }
    
    // 構造体配列の宣言と初期化
    student_t seito[n];
    
    // 1行目(ヘッダ)のみを読み込み
    fscanf( fp, "%[^,], %[^,], %[^,], %[^,], %s", str[0], str[1], str[2], str[3], str[4]);
    printf( "%s %s %s %s %s\n", str[0], str[1], str[2], str[3], str[4]);
    
    i = 0;
    // 2行目以降を読み込み
    while( fscanf( fp, " %d, %[^,], %d, %d, %f",&n1, s, &n2, &n3, &f ) == 5){
        //printf( "%d %s %d %d %.1f\n", n1, s, n2, n3, f);
        
        seito[i].no = n1;
        strcpy(seito[i].name, s);
        seito[i].score1 = n2;
        seito[i].score2 = n3;
        seito[i].point = f;
        i ++;
    }
    
    
    
    print_data(seito, n);
    
    printf("select mode [1, 2, 3] ->  ");
    scanf("%d", &mode);
    
    // modeによりソートの方法を選択
    switch (mode){
        case 1:
            printf("score1で昇順にソート\n\n");
            bubbleSort1(seito, n);
            break;
            
        case 2:
            printf("score2で降順にソート\n\n");
            bubbleSort2(seito, n);
            break;
            
        case 3:
            printf("pointで降順にソート\n\n");
            bubbleSort3(seito, n);
            break;
            
        default:
            printf("error -> input [1, 2, 3]\n");
            exit (1);
            
    }
    
    print_data(seito, n);
    
    file_output_data(seito, n);
    
    return (0);
}

// score1で昇順にソート
void bubbleSort1(student_t *seito, int n){
    int i,j;
    
    //BubbleSort
    for(i=0; i<n-1; i++){
        for(j=n-1; j>i; j--){
            if(seito[j-1].score1>seito[j].score1)
                swap( &seito[j], &seito[j-1]);
            
        }
    }
}

// score2で降順にソート
void bubbleSort2(student_t *seito, int n){
    int i,j;
    
    //BubbleSort
    for(i=0; i<n-1; i++){
        for(j=n-1; j>i; j--){
            if(seito[j-1].score2<seito[j].score2)
                swap( &seito[j], &seito[j-1]);
            
        }
    }
}

// pointで降順にソート
void bubbleSort3(student_t *seito, int n){
    int i,j;
    
    //BubbleSort
    for(i=0; i<n-1; i++){
        for(j=n-1; j>i; j--){
            if(seito[j-1].point<seito[j].point)
                swap( &seito[j], &seito[j-1]);
            
        }
    }
}

void swap(student_t *a, student_t *b){
    student_t temp;
    
    temp = *a;
    *a = *b;
    *b = temp;
    
}

void print_data(student_t *seito, int n){
    int i;
    
    printf("no, name, score1, score2, point\n");
    for(i = 0; i<n; i++)
        printf("%d, %s, %d, %d, %.1f\n",seito[i].no, seito[i].name, seito[i].score1, seito[i].score2, seito[i].point);
    printf("\n");
    
}

void file_output_data(student_t *seito, int n){
    int i;
    FILE *fp;
    char *fname = "ex1_code_output.csv";
    
    fp = fopen( fname, "w" );
    if( fp == NULL ){
        printf( "%sファイルが開けません\n", fname );
        exit (1);
    }
    
    fprintf( fp, "no, name, score1, score2, point\n");
    for(i = 0; i<n; i++)
        fprintf( fp, "%d, %s, %d, %d, %.1f\n",seito[i].no, seito[i].name, seito[i].score1, seito[i].score2, seito[i].point);
    fclose(fp);
    printf( "%sへのファイル書き込み終了\n", fname);
    
}
