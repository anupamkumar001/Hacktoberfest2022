#include<stdio.h>
int main()
{
    int a[40],b[40],i,j,k,p;
    float l=0,c[40];
    int n=0,m=0,o=0;
    for (i=1,j=1,p=1; i<=36,j<=36,p<=36; i++,j++,p++)
    {
        printf("enter two exam marks for student%d\n",p);
        scanf("%d%d",&a[i],&b[j]);
    }
    for (i=1,j=1,p=1; i<=36,j<=36,p<=36; i++,j++,p++)
    {
        printf("displaying two exam marks for student%d\n",p);
        printf("exam 1=%d\nexam 2=%d ",a[i],b[i]);
        printf("\n");
    }
    for (i=1,j=1,k=1; i<=36,j<=36,k<=36; i++,j++,k++)
    {
        c[k]=(a[i]+b[j])/2;
        printf("avg marks for student%d = %.2lf\n",k,c[k]);

    }
    for (i=1,j=1; i<=36,j<=36; i++,j++)
    {
        if(a[i]>=40&&b[j]>=40)
        {
            n=n+1;

            if(a[i]==100&&b[j]==100)
            {
                o=o+1;

            }
        }
        else
        {
            m=m+1;


        }

    }
    printf(" passed  %d\n",n);
    printf(" perfect %d\n",o);
    printf(" failed  %d\n",m);



}
