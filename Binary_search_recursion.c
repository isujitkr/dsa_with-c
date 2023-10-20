#include<stdio.h>
int binary_recursion(int arr[],int ser,int lb,int ub,int mid){
    if(lb>ub){
        return -1;
    }
    else{
        mid=(lb+ub)/2;
        if(arr[mid]==ser){
            return mid;
        }
        else if(arr[mid]>ser){
           return binary_recursion(arr,ser,lb,mid-1,mid);
       }
       else{
           return binary_recursion(arr,ser,mid+1,ub,mid);
       }
    }
}
int main(){
    int arr[]={2,3,4,10,40,50};
    int ser,mid;
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("Given array: ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Enter the element you want to search: ");
    scanf("%d",&ser);
    int lb=0,ub=size-1;
    mid=(lb+ub)/2;
    int found_index=binary_recursion(arr,ser,lb,ub,mid);
    if(found_index<0){
        printf("Element is not exist in the array");
    }
    else{
        printf("Element is found at %d index ",found_index);
    }
    return 0;
}
