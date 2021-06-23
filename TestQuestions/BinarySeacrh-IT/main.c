#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 10

// Binary Search(Iterative form)

int BinarySearch(int array[] , int searchItem);

int main(){
    int index;
    int searchItem = 10;
    int array[10] = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10};

    index = BinarySearch(array , searchItem);
    printf("%d" , index);

}



int BinarySearch(int array[] , int searchItem){

    int lowBound = 0;
    int  upperBound = ARRAY_SIZE-1;

    while(lowBound <= upperBound){
        int mid = (upperBound + lowBound) / 2;

        if(searchItem == array[mid])
            return mid;

        if(searchItem < array[mid])
            upperBound = mid - 1;
        else
            lowBound = mid + 1;
    }
    return -1;
}

