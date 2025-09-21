#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void sort(char *arr, int size){

        for(int i=0; i< size; i++){
                for(int j=0; j< size-1; j++){
                        if(arr[j] > arr[j+1]){
                                char temp=arr[j];
                                arr[j] = arr[j+1];
                                arr[j+1]=temp;
                        }
                }
        }

        for(int i=0; i<size; i++){
                printf("%c ", arr[i]);
        }
}
int main()
{

        char arr[5];
        int i,j;
        char temp;
        srand(getpid());
        for(i=0;i<5;i++)
        {
                //scanf("%c",&arr[i]);
                arr[i] = (rand() % 26) + 65;

        }

        for(int i=0; i<5;i++){
                printf("%c ", arr[i]);
        }

        printf("\n \n");
        printf(" after sorting:  ");


        sort(arr,5);

        return 0;
}

        
