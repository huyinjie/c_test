//编写一个统计空格nb、制表符nt和换行个数nl的程序
#include <stdio.h>
int main(void)
{
    int c,nb,nt,nl;

    nb = 0;
    nt = 0;
    nl = 0;
    
    while(c=getchar()!=EOF)
    {
        if(c == ' ') 
            ++nb;
        else if(c == '\t') 
            ++nt;
        else if(c == '\n') 
            ++nl;
    }
    printf("blanks=%d,tabs=%d,newlines=%d",nb,nt,nl);
    
    return 0;
}