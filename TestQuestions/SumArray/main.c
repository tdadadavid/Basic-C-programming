#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#define SIZE 10 //This is a symbolic constants

//Sum the elements in an array

int main(){

    int sum = 0;
    int arr[10] = {1 , 2 , 3 , 4 , 5 , 10};
    int lenOfArr = sizeof(arr) / sizeof(arr[0]);

//    printf("Enter your name: ");
//    scanf("%c"  , &name);
//    printf("Hello %c" , name);
//
//    puts(""); puts("");

    printf("The len of the array: %d\n" , lenOfArr);

    for(size_t i = 0; i <= lenOfArr-1; i++){
        sum += arr[i];
    }

    printf("%d" , sum);
}
