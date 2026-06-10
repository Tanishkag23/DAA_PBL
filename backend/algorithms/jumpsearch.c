#include<stdio.h>
#include<math.h>

int min(int a,int b){
    if (a<b)return a;
    else return b;}
void swap(int* a, int*  b){int temp=*a;*a=*b;*b=temp;}
void prin(int arr[], int n){for (int i = 0; i < n; i++)printf("%d", arr[i]);}


void jumpSearch(int arr[], int n , int key){
    int step =sqrt(n);
    int prev=0;

    while (   arr[min(step,n)-1] < key  ){
        prev = step;
        step= step + sqrt(n);

        if (prev >=n){
            printf("Not found");
            return;
        }
    }

    while (arr[prev] < key){
        prev++;
        if (prev==min(step,n)){
            printf("Not found");
            return;
        }
    }

    if (arr[prev]==key)
    printf("Found at %d: ",prev);

}


int main(){
    int arr[]= {9,8,7,6,5,4,3,2,1};
    int arr2[]={1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;
    printf("Enter key to search: ");
    scanf("%d",&key);

    jumpSearch(arr2, n , key);
    // prin(arr , n);
    return 0;
}
