#include<stdio.h>
#include<math.h>
int main()
{
    int n,k,m;
    scanf("%d%d%d",&n,&k,&m);
    int bags=ceil((double)n/(k*m));
    printf("%d",bags);
}