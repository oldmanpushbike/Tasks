//
// Created by lenovo on 2023/11/20.
//
#include <stdio.h>
#include <math.h>
int k;
int r[100001];
void math(int n)
{
    int w=0,l=0;
    for(int j=0;j<k;j++)
    {
        if(r[j]==1)
            w++;
        else if(r[j]==0)
            l++;
        if((l>=n||w>=n)&&abs(l-w)>=2)
        {
            printf("%d:%d\n",w,l);
            w=l=0;
        }
    }
    printf("%d:%d\n",w,l);
}
int main(void)
{
    char s;
    for(int i=0;s!='E';i++)
    {
        s=getchar();
        if(s=='W')
            r[i]=1;
        else if(s=='L')
            r[i]=0;
        else
            r[i]=-1;
        k=i;
    }
    math(11);
    printf("\n");
    math(21);
    return 0;
}