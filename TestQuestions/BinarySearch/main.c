#include <stdio.h>
#include <stdlib.h>
#define SIZE 10 // array_size = 10

// Binary Search(Recursive form)
// 1 => means the searchItem has been found
// -1 => searchItem not in the array

int BinarySearch(int array[] , int searchItem , int lowBound , int upperBound);
int BinarySearch2(int array[] , int target);

int main(){
    int index;
    int searchItem = 10;
    int arr[SIZE] = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10};



    index = BinarySearch2(arr , searchItem);
    printf("Counting in Computer Terms => %d\n" , index);
    printf("Counting in Humans Terms => %d" , index+1);
}

int BinarySearch2(int array[] , int target){
    return BinarySearch(array , target , 0  , SIZE-1);
}


int BinarySearch(int array[] , int searchItem , int lowBound , int upperBound){

    int mid = lowBound + (upperBound - lowBound) / 2;

    if(upperBound < lowBound)
        return -1;

    if(searchItem == array[mid])
        return mid;

    if(searchItem < array[mid])
        return BinarySearch(array , searchItem , lowBound , mid-1);

    if(searchItem > array[mid])
        return BinarySearch(array , searchItem , mid + 1 , upperBound);

}
