
// ソースファイルがArgPrint.cと言う名前で,
// 実行形式を指定したファイル名(ArgPrint)にしたいとき
// % gcc -o ArgPrint ArgPrint.c

#include <stdio.h>
#include <stdlib.h>

//argc : コマンドライン引数の数
//argv : コマンドライン引数の文字列配列
int main(int argc, char *argv[], char *envv[]) {

  int i;

  printf("引数の数 : %d\n", argc);

  for (i=0; i<argc; ++i) {
    printf("引数%d=%s\n",i,argv[i]);
  }

  return 0;

}
