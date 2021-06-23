//#include <stdio.h>
//#include <stdlib.h>
//
//char* linearSearch(int arr[100] , int input);
//
//
//int main()
//{
//    int userInput;
//    int arr[100];
//    int count = 1;
//    int lenOfArray = sizeof(arr) / sizeof(arr[0]);
//
//    // Prompt
//    printf("Enter 100 numbers\n");
//
//    //Inputing and storing of the numbers in an arr
//    for(int i = 0; i <= lenOfArray - 1; i++){
//        printf("(%d) " , count++);
//        scanf("%d" , &userInput);
//        arr[i] = userInput;
//
//        // Print break after 10 integers
//        if((i + 1) % 10 == 0){
//            puts("**********");
//        }
//    }
//
//    printf("Enter any number you want to search for\n");
//    printf("NUMBER => ");
//    scanf("%d" , &userInput);
//
//
//    linearSearch(arr , userInput);
//    printf(linearSearch);
//
////    for(unsigned int i = 0; i <= lenOfArray; i++){
////        if(arr[i] != userInput){
////            printf("FALSE");
////            break;
////        }
////    }
////
////    printf("TRUE , LOCATION: %d" , i);
//}
//
//
//char* linearSearch(int arr[100] , int input){
//
//    int lenOfArray = sizeof(arr) / sizeof(arr[0]);
//    for(unsigned int i = 0; i <= lenOfArray - 1; i++){
//        if(arr[i] == input){
//            return "TRUE LOCATION: %d" , i;
//        }
//    }
//
//    return "FALSE";
//}
