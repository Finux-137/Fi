#include <stdio.h>
int main()
{
    int i, j, n = 18;
    int a[10];
    char ch[9];             //ch数组要9个，要保存终结符'\0'
    char buf[100] = { 0 };
    
    for (i = 7; i >= 0; i--)
    {
        a[i] = n % 2;
        n /= 2;
    }
    for (j = 8; j >= 0; j--)
    {
        ch[j] = a[j] + '0';     //转换
    }
    ch[8] = 0;  //终结
    strncpy(buf, ch, 8);
    puts(buf);
    system("pause");
    return 0;
}