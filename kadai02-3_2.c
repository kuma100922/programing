#include<stdio.h>
int main(void){
    int a[5];//5件のデータを入力
    int *p;//ポインタ型変数
    int sum=0;
    int i;
    p=a;
    for(i=0;i<5;i++){
        scanf("%d",p+i);
        sum+=*(p+i);
        //デバッグ用
        //printf("%d\n",*(p+i));
    }
    printf("%d",sum/i);
}
/*
norim@LAPTOP-9SQTGP4H MINGW64 ~/Desktop/ノートフォルダ/試験対策/プログラミ 
ング演習Ⅱ/program (master)
$ gcc -Wall -pedantic -o kadai02-3_2 kadai02-3_2.c

norim@LAPTOP-9SQTGP4H MINGW64 ~/Desktop/ノートフォルダ/試験対策/プログラミ 
ング演習Ⅱ/program (master)
$ ./kadai02-3_2
1
2
3
4
5
3
*/