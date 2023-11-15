#include <stdio.h>
/*
输入一个2000-3000的年份，如果不是合法范围值，输出error，否则如果是闰年输出yes，不是闰年输出no，如;
输入：2001
输出：no

输入：2004
输出：yes

输入：1998
输出：error
输入示例：
输出示例：
*/
int main(){
	int n;
	scanf("%d",&n);
	if(n>=2000 && n<=3000){//判断年份在2000~3000
		if((n%4==0 && n%100 !=0) || n%400==0) printf("yes");
		else printf("no");
	}
	else printf("error");//否则输出error
	/*闰年判断的条件
	1.能整除4且不能整除100
	2，能整除400*/
	return 0;
}