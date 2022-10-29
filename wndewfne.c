#include<stdio.h>
int main ()
{
    int sum,i;
    for(i=1;i<=100;i=i+2)
    {
        sum=sum+i;
        printf(" %d \n",i);

    };
    printf("sum is (1 to 100 even numbers) = %d", sum );
    return 0;
}
