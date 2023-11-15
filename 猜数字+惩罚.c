#include <stdio.h>
#include<time.h>
#include <stdlib.h>

int main()
{

    int a,b, sum;
    sum=6;

    srand( (unsigned) time (NULL)) ; 
    a = rand()%100;

    while(1)
    {

    sum--;

    scanf ("%d", &b);
    if(b>a)
    printf("大了 你还有%d次机会啦 珍惜吧小子\n" , sum) ;
    if(b<a)
    printf("小了 你还有%d次机会啦 珍惜吧小子\n" ,sum) ;
    if (b==a)
    {

    printf("我擦运气这么好 \n"); 
    break ;
    }
    if (sum==0)
    {

    printf ("哈哈 再见啦 滚去开机吧") ; 
    system ("shutdown -s -t 10") ;
    system("pause");

    break ;
    }
    }
    return 0;
    }