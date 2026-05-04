#include <stdio.h>

//函式宣告
int gcd(int a,int b);
int lcm(int a,int b);

void main() 
{
    int x,y,m,n;
    
    //輸入兩個整數
    printf("Input two integers:");
    scanf("%d %d",&x,&y);
    
    //呼叫函式計算
    m=gcd(x,y);
    n=lcm(x,y);
    
    //輸出結果
    printf("gcd=%d\n",m);
    printf("lcm=%d\n",n);
}

//GCD函式定義
//第一個能同時整除a和b的數就是GCD
int gcd(int a,int b)
{
    int i;
    for(i=a;i>=1;i--)
	{
        //如果i能同時整除a和b
        if(a%i==0&&b%i==0)
		{
            return i; //找到答案，直接回傳並結束函式
        }
    }
    return 1; //一定會找到(至少是1)
}

//LCM函式定義
//兩數相乘=GCD*LCM
//所以LCM=(a*b)/GCD
int lcm(int a, int b) 
{
    return (a*b)/gcd(a,b);
}
