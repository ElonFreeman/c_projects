#include <stdio.h>

int main()
{
    printf("%d\n",1+1);
    printf("1+1=%d",1+1);
    printf("泥壕！\n");   
    printf("Hello World!\n");
    printf("1+2=%d\n",1+2);
    
    int price=0;
    printf("输入金额（￥）：");
    scanf("%d",&price);
    int change=100-price;
    printf("找零（￥）：%d\n",change);

    return 0;
}