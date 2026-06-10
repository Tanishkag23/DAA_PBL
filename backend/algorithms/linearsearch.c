#include <stdio.h>
void linearSearch(int arr[], int n , int key){

    int count=0;

    for ( int i=0 ; i <n ; i++){

        count++;

        if (arr[i]==key) {
            printf("FOUND AT INDEX: %d\n",i);
            printf("%d",count);
            return;
            }
    }
    printf("NOT FOUND ");  
}

int main(){
    int arr[] = {8,7,6,5,4,3,2,1};
    int n = 8;


    int key;
    printf("Enter key to search: ");
    scanf("%d",&key);

    linearSearch(arr,n,key);

    return 0;
}

