#include<stdio.h>
int main()
{
    int a,b,c=0;
    scanf("%d%d",&a,&b);
    for(int i=a+1;i<b;i++)
    {
        c=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==2)
        printf("%d
",i);
    }
}