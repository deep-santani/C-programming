#include<stdio.h>
int main()
{
    int i,j,a=1;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf("%d",a);
            a++;
        }
        a=1;
        printf("\n");
    }
    getchar();
}
