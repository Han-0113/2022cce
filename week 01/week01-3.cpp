#include <stdio.h>
int main()
{
    char c;
    char line[30];///陣列，字母的陣列，叫字串
    ///陣列要多大?要看題目

    printf("請輸入一個字串,不要太長: ");
    scanf("%s", line);///讀入整個字串沒有& ，可以記成有兩個s 不用加&
    ///會以空格斷字
    printf("你輸入: %s", line);
}
