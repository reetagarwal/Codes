//Recursive approach

#include<stdio.h>

int binarysearch(int s,int e,int arr[],int el){
    if(s>e){
        return -1;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==el){
        return mid;
    }
    if(arr[mid]>el){
        return binarysearch(s,mid-1,arr,el);
    }
    return binarysearch(mid+1,e,arr,el);
}

int main(){
    int arr[]={2,4,6,8,10};
    int el=6;
    int n=sizeof(arr)/sizeof(arr[0]);//e=arr.length-1
    int result=binarysearch(0,n-1,arr,el);
    (result==-1)?
        printf("element is not present in array"):
        printf("element is at index %d",result);
}