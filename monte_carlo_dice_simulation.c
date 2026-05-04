#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int i;
    
    long long total_money=0;   //這裡數字較大，雖然int足夠，但用long long避免溢位更保險
    
    int bet;   //下注號碼
    int x,y,z;   //三顆骰子的點數
    int count;   //猜中的骰子數量

    srand(time(NULL));   //初始化隨機數種子，讓每次執行結果不同

    for(i=0;i<10000000;i++)   //模擬一千萬次 
	{
        //每次下注1元，我們隨機選一個號碼1~6下注
        //雖然題目沒說要怎麼選號，但隨機選號最符合真實模擬
        bet=(rand()%6)+1;

        //莊家擲出三顆骰子1~6
        x=(rand()%6)+1;
        y=(rand()%6)+1;
        z=(rand()%6)+1;

        //計算猜中幾顆
        count = 0;
        if(x==bet) count++;
        if(y==bet) count++;
        if(z==bet) count++;

        //根據規則計算輸贏金額
        if(count==0)
		{
            total_money-=1;   //沒中，輸1元
        } 
		else if(count==1)
		{
            total_money+=1;   //中1顆，贏1元
        } 
		else if(count==2) 
		{
            total_money+=2;   //中2顆，贏2元
        } 
		else if(count==3) 
		{
            total_money+=3;   //中3顆，贏3元
        }
    }

    //輸出最終結果
    printf("模擬玩10,000,000次後的輸贏結果:%lld元\n",total_money);

    return 0;
}
