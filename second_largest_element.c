#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[]={400,70,90,50,10};
    int size,max,smax;
    size=sizeof(arr)/sizeof(arr[0]);
    printf("Given array: ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    smax=max=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            smax=max;
            max=arr[i];
        }
        else if(arr[i]>smax && arr[i]<max){
            smax=arr[i];
        }
    }
    printf("Largest element : %d \n",max);
    printf("Second Largest element : %d ",smax);
    return 0;
}
