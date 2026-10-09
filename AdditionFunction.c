#include<stdio.h>

int Addition(int No1,int No2)
{
    int Ans = 0;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    int i = 11,j = 21;
    int iRet = 0;

    iRet = Addition(i,j);

    printf("Addition is : %d\n",iRet);

    return 0;
}