#include<stdio.h>

void swap(int* a, int*  b){int temp=*a;*a=*b;*b=temp;}
void prin(int arr[], int n){for (int i = 0; i < n; i++)printf("%d", arr[i]);}

void BinearySearch(int arr[],int left, int right ,int key, int *c){
    if (left >right){
        printf("NOT Found");
        return;
    }
    while(*c < (left+right)){

    int mid = (right + left)/2;

    if (arr[mid] == key){
        (*c)++;
    }
    else if (arr[mid] > key){
        BinearySearch(arr,left,mid-1,key,c);
    }
    else {
    BinearySearch(arr,mid+1,right,key,c);
    }
}
}


int main(){
    int arr[]= {1,2,2,2,1,1,1,1};
   // int arr2[]={1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;
    printf("Enter key to search: ");
    scanf("%d",&key);
    int c =0;
    BinearySearch(arr,0,n,key,&c);
    printf("\n%d",c);
    // prin(arr , n);
    return 0;
}
