#include<stdio.h>
#include<stdint.h>
int main()
{
        int num;
        printf("Enter an integer:");
        scanf("%d",&num);
        unsigned int temp=(unsigned int)num;
        unsigned int rev=0;
        int i;
        for(int i=0;i<32;i++)
        {
            rev<<=1;
            rev|=(temp&1);
            temp>>=1;
        }
        num=(int)rev;
        printf("Reversed bits(binary):");
        for(int i=31;i>=0;i--)
        {
           printf("%d",(rev>>i)&1);
        }
        printf("\n Reversed integer value:%d\n",num);
        return 0;
}
