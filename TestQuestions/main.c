#include <stdio.h>
#include <stdlib.h>

int postionLocator(int value[]);


int main()
{
    int arr[100];
    int randomNumber = 0;
    int lengthOfArray = sizeof(arr)/sizeof(arr[0]);
    int userInput;
    int index = 0;
    int seed;

    srand((unsigned)time(NULL));

    // Assigning random values to the array
    for(int i = 0; i <= 99; ++i){
        randomNumber = (rand() % 100) + 1;
        arr[i] = randomNumber;
    }

    for(int i = 0; i < lengthOfArray; i++){
        printf("%d " , arr[i]);
    }
//
    printf("%d", lengthOfArray);

//    Accepting inputs from the user
    printf("Enter a number you want to search for \nNumber =>");
    scanf("%d" , &userInput);

    // Searching through the array to find the userInput
//    for(unsigned i= 1; i < lengthOfArray - 1; ++i){
//        if(userInput == arr[i]){
//            printf("True , Location: %d" , i);
//
//            break;
//        }
//        else{
//            printf("False , Location: Not in Array ");
//            break;
//        }
//    }


    while(index <= lengthOfArray){
        if(userInput != arr[index]){
            index++;
        }
        else{
            printf("True , Location: %d" , index);
            break;
        }
    }
}

