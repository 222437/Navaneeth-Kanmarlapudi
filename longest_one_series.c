#include<stdio.h>
int longest_one_series(int n)
{
        unsigned int num=(unsigned int)n;
        int max_count=0;
        int count=0;
        for(int i=0;i<32;i++)
        {
                if(num&(1<<i))
                {
                        count++;
                        if(count>max_count)
                        max_count=count;
                }
                else
                {
                  count=0;
                }
        }
     return max_count;
}
int main()
{
        int n;
        printf("enter the integer:");
        scanf("%d",&n);
        int result=longest_one_series(n);
        if(result==0)
        {
                printf("no series of one\n");
        }
        else
        {
          printf("%d\n",result);
        }
    return 0;
}
