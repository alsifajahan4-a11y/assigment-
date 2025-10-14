#include<stdio.h>

int main(){
    int arr[5];

    printf("Enter 5 element : \n");

    //Inputing the elements
    for(int i=0; i<5; i++){
        printf("Enter %d:",i+1);
        scanf("%d", &arr[i]);
    }

    //printing the array
    printf("array in original order :");
    for(int i=0; i<5; i++){
        printf("%d",arr[i]);
    }
    printf("\n");

    //printing the array reverse order
    printf("Array in reverse order :");
    for(int i=4; i>=0; i--){
printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}

