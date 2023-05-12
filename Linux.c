#include<stdio.h>
#include<math.h>

int main()
{
    for (int x,y,i = 1;i < 1000000;i++){
        x = sqrt(i + 100);
        y = sqrt(i + 268);
        if((x * x == i + 100) && (y * y == i + 268))
        {
            printf("%d\n",i);
            //break; // 可以不用break，因为确实有不止一个。
        }
    }
}