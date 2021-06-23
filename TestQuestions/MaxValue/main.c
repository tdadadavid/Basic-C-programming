#include <stdio.h>
#include <stdlib.h>

// Search through the array and find the highest
// value in an array

// then find the first sum of the first three
// value

int linearSearch(int array[] , int lenOfArr);


int main(){

    int maxValue = 0;
    int arr[] = {
        1 , 909 , 0 , 7 , 55 , 889 , 10000 , 33 , 4 , 4 , 6 ,10,
        20 , 59 , 30 , 30 , 94 ,9393 , 33 , 12 , 4 , 20 , -1 ,-1,
        100 , 202 , 5 ,9 ,4, 7, 5, 3939 , 20 , 399030 , 89 , 2 , 8
        };

    int lenOfArr = sizeof(arr)/sizeof(arr[0]);

    maxValue = linearSearch(arr , lenOfArr);
    printf("%d" , maxValue);


}

int linearSearch(int array[] , int lenOfArr){

//    I wanna do it this way
//    int lenOfArr = sizeof(array)/sizeof(array[0]);
//    printf("%d" , lenOfArr);

    int max = array[0];
    size_t pos = 1;

    while(pos <= lenOfArr ){
         if(max < array[pos]){
            max = array[pos];
         }
         ++pos;
    }

    return max;
}
