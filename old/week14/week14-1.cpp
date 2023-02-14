#include <stdio.h>
int sum(int a, int b);
///在用之前，要先宣告或定義
int main()
{
    int ans = sum(2,3);
    printf("ans: %d\n", ans);
}
int sum(int a, int b)
{
    return a + b;
}
