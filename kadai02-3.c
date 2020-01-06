#include<stdio.h>
int main(void){
    int a[5];//5件のデータを入力
    int *p;//ポインタ型変数
    int sum=0;
    int i;
    p=a;
    for(i=0;i<5;i++){
        scanf("%d",p);
        sum+=*p;
        //デバッグ用
        //printf("%d\n",*p);
        p++;
    }
    printf("%d",sum/i);
}
/*
norim@LAPTOP-9SQTGP4H MINGW64 ~/Desktop/ノートフォルダ/試験対策/プログラミ
ング演習Ⅱ/program (master)
$ gcc -Wall -pedantic -o kadai02-3 kadai02-3.c

norim@LAPTOP-9SQTGP4H MINGW64 ~/Desktop/ノートフォルダ/試験対策/プログラミ
ング演習Ⅱ/program (master)
$ ./kadai02-3
1
2
3
4
5
3
*/