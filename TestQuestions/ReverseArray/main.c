#include <stdio.h>
#include <stdlib.h>


// Reverse an Array
// first i will create an array(strings and characters) then reverse it
// then allow the user to input values then will reverse
// the array(check ReverseArray2).. GOD helping!!!

int main(){
    int index = 0;
    int storageArray[5];
    int arr[5] = {30 , 7 , 9 , 12 , 3};
    int lenOfArray = sizeof(arr)/sizeof(arr[0]);

    // Reversing the array and storing it in
    // new array
    for(unsigned int i = 5; i >= 1; i--){
        storageArray[index] = arr[i];
        index++;
    }

    // printing the original array
    printf("ORIGINAL\n");
    for (unsigned int i = 0; i <= lenOfArray; i++){
        printf("%5d" , arr[i]);
    }

    puts("");

    // printing the reversed array
    printf("REVERSED\n");
    for(unsigned int i = 0; i <= lenOfArray; i++){
        printf("%5d " , storageArray[i]);
    }

    // Output is omitting one element in the array
}
