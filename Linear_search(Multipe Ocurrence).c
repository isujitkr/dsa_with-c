#include<stdio.h>
int main(){
   int arr[]={10,20,30,40,20,50};
   int size,ser,count=0,flag=0;
   size=sizeof(arr)/sizeof(arr[0]);
   printf("Given array: ");
   for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
   }
   printf("\n");
   printf("Enter the element you want to search: ");
   scanf("%d",&ser);
   for(int i=0;i<size;i++){
       if(arr[i]==ser){
            count++;
            printf("Element found at index: %d \n",i);
            flag=1;
       }
   }
   if(flag==0){
        printf("No such element exist");
   }
   else{
        printf("Element %d occurs %d times ",ser,count);
   }

   return 0;
}
