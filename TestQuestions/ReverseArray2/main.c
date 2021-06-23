#include <stdio.h>
#include <stdlib.h>

// this is the second part
// the user will enter the number of elements
// then enter the elements then we'll reverse it


int main(){
    int element;
    int lenOfArray;
    int index = 0;

    printf("Enter the Length of the array: ");
    scanf("%d" , &lenOfArray);

    // Creating an array with the user
    // defined length
    int storageArr[lenOfArray];
    int revArr[lenOfArray];

    //Inputing values into the array
    printf("Enter the elements of the array\n");
    for(unsigned int i = 0; i < lenOfArray; i++){
        printf("=>");
        scanf("%d" , &element);
        storageArr[i] = element;
    }

    //Reversing the array
    for(unsigned int i = lenOfArray; i >= 1; i--){
        revArr[index] = storageArr[i-1];
        index++;
    }

    //printing the original array
    for(unsigned int i = 0; i < lenOfArray; i++){
        printf("%2d" , storageArr[i]);
    }

    puts("");

    for(unsigned int i = 0; i <= lenOfArray; i++){
        printf("%2d" , revArr[i]);
    }
    puts("");

    //This code is printing extra characters

}
