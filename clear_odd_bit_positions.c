#include<stdio.h>
int clear_odd_bits(int x)
{
        int mask=~((1<<1)|(1<<3)|(1<<5)|(1<<7)|(1<<9));
        return x &mask;

}
int main()
{
        int num=0xFFFF;
        int result=clear_odd_bits(num);
        printf("original:ox%x\n",num);
        printf("modified:0x%x\n",result);
        return 0;
}
