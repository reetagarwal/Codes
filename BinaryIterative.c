//Iterative approach

#include<stdio.h>

int binarysearch(int start,int end,int arr[],int el){
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==el){
            return mid;
        }
        if(arr[mid]>el){
            end=mid-1;
        }
        if(arr[mid]<el){
            start=mid+1;
        }
    }
    return -1;
}

int main(){
    int arr[]={2,4,6,8,10,12,14};
    int el=8;
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=binarysearch(0,n-1,arr,el);
    (result==-1)?
        printf("element is not present in array")
        :printf("elemet is present at index %d",result);
}