#include<stdio.h>

int linearsearch(int arr[],int N,int el){
    for(int i=0;i<N;i++){
        if(arr[i]==el){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[]={2,4,6,8,10,12};
    int el=6;
    int N=sizeof(arr)/sizeof(arr[0]);
    int result=linearsearch(arr,N,el);
    (result==-1)?
        printf("Element not found")
        :printf("element found at index %d",result);
}