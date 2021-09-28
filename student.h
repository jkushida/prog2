/* 学生情報のヘッダファイル */
struct student{     // 学生情報
  int no;           // 学生番号
  char name[10];    // 氏名
  double average;   // 平均点
};

void show_info(struct student sei); //情報の表示
