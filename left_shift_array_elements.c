#include<stdio.h>
int main(){
int arr[5];
int i,n=5;
        printf("enter the array elements\n");
        for(int j=0;j<n;j++)
{        scanf("%d",&arr[j]);


}
        printf("array elements are:\n");
        for(i=0;i<5;i++)
{
        printf("%d ",arr[i] );
}
        for(i=0;i<(n-1);i++)
{
        arr[i]=arr[i+1];
}
        arr[i]=0;
        printf("array elements are:\n");
        for(i=0;i<5;i++)
{
        printf("%d ",arr[i] );
}

}
