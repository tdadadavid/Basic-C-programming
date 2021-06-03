#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int getPoints(int stdScore); // function prototype
int getResult(int numberOfCourses);



int main(){

    
    char stdFirstName[20];
    char stdLastName[20];
    char stdDepartment[20];
    int matricNo;
    int number;
    int numberOfCourses;
    int result;
    int input;


    printf("Enter your details:\n");
    printf("Name: ");
    scanf("%s%s" , &stdFirstName, &stdLastName);
    printf("Department: ");
    scanf("%s", &stdDepartment);
    printf("Matric Number: ");
    scanf("%d" , &matricNo);
    

    puts("*********************************");
   
    printf("Number OF Courses Offering: ");
    scanf("%d"  , &number);
    puts("*********************************");
    result =  getResult(number);

    printf("Your CGPA is  %d" , result);
}



int getPoints(int stdScore){

    if(stdScore >= 70 & stdScore <= 100){
        return 5;
    }
    else if(stdScore >= 60 & stdScore <= 69){
        return 4;
    }
    else if(stdScore >= 50 & stdScore <= 59){
        return 3;
    }
    else if (stdScore >= 40 & stdScore <= 49){
        return 2;
    }
    else{
        return 1;
    } 
    
}


int getResult(int numberOfCourses){
   
    int scores;
    int studentPoints ;
    int qualityPoints;
    int courseUnit;
    int totalQualityPoints = 0;
    int totalUnits = 0;
    int GPA;
    int CGPA;

    printf("Enter Your Scores and Course Units: \n");

    puts("*********************************");


    
    for (int i = 0; i < numberOfCourses; i++){
        printf("Exam_Score: ");
        scanf("%d" , &scores);
        printf("Course_Units: ");
        scanf("%d" , &courseUnit);

        puts("*****************************");

    
        studentPoints = getPoints(scores);
        printf("%d\n" , studentPoints);
        qualityPoints = studentPoints * courseUnit;

        totalUnits += courseUnit;
        totalQualityPoints += qualityPoints;

        // printf("%d %d" , studentPoints , qualityPoints);

    }

    CGPA = totalQualityPoints / totalUnits;
    return CGPA;

}
