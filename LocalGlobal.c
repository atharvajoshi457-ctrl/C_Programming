#include<stdio.h>

int no = 11;

void fun()
{
    int i = 51;

    printf("Inside fun %d\n",i);
}

int main()
{
    int i = 21 ;

    fun();

    printf("Inside main %d\n",i);
    printf("Inside main %d\n",no);

    return 0;
}