#include <stdio.h>
int main(void)
{
    int a[3][4];
    int i,j,max,m,n;
    for(i=0;i<3;i++)
        for(j=0;j<4;j++)
            scanf("%d",&a[i][j]);
    max=a[0][0];
    for(i=0;i<3;i++)
        for(j=0;j<4;j++)
            if(max<a[i][j])
            {
                max=a[i][j];
                m=i;
                n=j;
            }
    printf("a[%d][%d]=%d\n",m,n,max);
    return 0;
}