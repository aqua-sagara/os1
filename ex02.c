#include <stdio.h>
#include <stdlib.h>

void PrintIntegerArray(int nArrayLength, int *naArray);

int main(int argc, char *argv[], char *envv[]) {

  int i;
  int nArrayLength;
  int *naArray;

  if (argc == 2) {

    //argv[1]は文字列(char配列型)なので, atoiで整数型に変換します
    //配列添字は0から始まるので、2の引数乗まで計算するには +1分多く確保します
    nArrayLength = atoi(argv[1]) + 1;

    //mallocして要素数nArrayLengthの配列を作ります
    naArray = (int*)malloc(nArrayLength*sizeof(int));

    naArray[0] = 1;
    for (i=1; i<nArrayLength; ++i) {
      naArray[i] = 2*naArray[i-1];
    }

    //出力するための関数を用意します
    PrintIntegerArray(nArrayLength, naArray);

    //mallocした動的確保配列がいらなくなったら, freeで領域を開放してください
    free(naArray);

  }

  return 0;

}

//出力するための関数を完成させてください
void PrintIntegerArray(int nArrayLength, int *naArray) {

  int i;
  for(i=0;i<nArrayLength;i++){
    printf("２の%d乗 : %d\n",i,naArray[i]);
  }
}
