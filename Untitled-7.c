#include<stdio.h>
/*
输入四个整数， 将他们按大到小的顺序输出 。
输入示例：
1 2 3 4
输出示例：
4 3 2 1
*/
int main(void)
{
	int a,b,c,d,t;//t为中间变量
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a<b)
	{
		t=a; a=b; b=t;
	}
	if(a<c)
	{
		t=a; a=c; c=t;
	}
	if(a<d)
	{
		t=a; a=d; d=t;
	}
	if(b<c)
    {
    	t=b; b=c; c=t;
	}
	if(b<d)
	{
		t=b; b=d; d=t;
	}
	if(c<d)
	{
		t=c; c=d; d=t;
	}
	printf("%d %d %d %d",a,b,c,d);
	return 0;
 }