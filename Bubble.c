#include<stdio.h>

void bubblesort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void main(){
    int arr[]={5,6,7,1,2,3,55,66,23};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("sorted array is:");
    bubblesort(arr,n);
     for(int i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
}
