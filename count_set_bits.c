#include<stdio.h>
int countsetbits(unsigned int num)
{
        int count=0;
        while(num)
        {
                if(num &1)
               {
                  count++;
              }
                num = num >> 1;

        }
        return count;
}
int main()
{
        unsigned int num;
        printf("Enter a number:");
        scanf("%u",&num);
        printf("no.of set bits:%d\n",countsetbits(num));
        return 0;
}
