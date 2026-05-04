#include <stdio.h>
int f(int); //函數宣告
int main()
{
	int i;
	for(i=1;i<=20;i++)
	printf("f(%d)=%d\n",i,f(i));
	return 0;
}
int f(int n)
{
	//處理前三項固定的答案
	if (n==1)
		return 0;
    if (n==2) 
		return 1;
    if (n==3) 
		return 2;
	
	//設定初始的前三項變數
    int t1=0,t2=1,t3=2;
    int current=0;
    int k;
    
	//從第4項開始往後算，一路算到第 n 項,數列往後推移
    for(k=4;k<=n;k++)
	{
        current=t1+t2+t3;
        t1=t2;
        t2=t3;
        t3=current;
    }
    return current;
}
