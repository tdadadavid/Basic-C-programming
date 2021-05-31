#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

    char stdName[] = "";
    char stdDepartment[] = "";
    int matricNo;
    int number;
    int numberOfCourses;
    double result;
    double new;


    printf("Enter your details:\n");
    printf("Name: ");
    scanf("%s" , &stdName);
    printf("Department: ");
    scanf("%s" , &stdDepartment);
    printf("Matric Number: ");
    scanf("%d" , &matricNo);
    

    puts("*********************************");
   
    
    numberOfCourses = scanf("%d" , number);
    new = ToDouble(numberOfCourses);
    result = getResult(numberOfCourses);
    printf("%d" , result);
    
}



double getPoints(double stdScore){
    if(stdScore >= 70 & stdScore <= 100){
        printf("Grade => A");
        return 5.0;
    }
    else if(stdScore >= 60 & stdScore <= 69){
        printf("Grade => B");
        return 4.0;
    }
    else if(stdScore >= 50 & stdScore <= 59){
        printf("Grade => C");
        return 3.0;
    }
    else if (stdScore >= 40 & stdScore <= 49){
        printf("Grade => D");
        return 2.0;
    }
    else if(stdScore >= 35 & stdScore <= 39){
        printf("Grade => E");
        return 1.0;
    }
    else printf("You failed");
}


double getResult(double numberOfCourses){
   
    double scores;
    double stdPoints;
    double totalStdPoints;
    double totalGPA;
    int courseUnit;
    double GPA;
    double CGPA;

    printf("Enter Your Scores and Course Units: ");

    for (int i = 0; i <= numberOfCourses; i++){
        printf("Exam_Score: ");
        scanf("%f " , &scores);
        printf("Course_Units: ");
        scanf("%d" , &courseUnit);

        puts("*******************************");
    
        stdPoints = getPoints(scores);
        totalStdPoints += stdPoints;

        GPA = stdPoints * courseUnit;
        totalGPA += GPA;

    }
        

    CGPA = GPA / totalStdPoints;
    return CGPA;
}
