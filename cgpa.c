#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int getResult(int numberOfCourses); // function prototype
int getPoints(int stdScore); // function prototype


int main(void){

    char stdName[] = "";
    char stdDepartment[] = "";
    int matricNo;
    int number;
    int numberOfCourses;
    int result;
    int input;


    printf("Enter your details:\n");
    printf("Name: ");
    scanf("%s" , &stdName);
    printf("Department: ");
    scanf("%s" , &stdDepartment);
    printf("Matric Number: ");
    scanf("%d" , &matricNo);
    

    puts("*********************************");
   
    printf("Number OF Courses Offering: ");
    scanf("%d"  , &number);
    puts("*********************************");
    result =  getResult(number);


    printf("%d" , result);
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
    int stdPoints;
    int totalStdPoints;
    int totalGPA;
    int courseUnit;
    int GPA;
    int CGPA;

    printf("Enter Your Scores and Course Units: \n");

    puts("*********************************");

    for (int i = 1; i <= numberOfCourses; i++){
        printf("Exam_Score: ");
        scanf("%d" , &scores);
        printf("Course_Units: ");
        scanf("%d" , &courseUnit);

    
        stdPoints = getPoints(scores);
        printf("students points: %d\n" , stdPoints);
        totalStdPoints += stdPoints;
        printf("This is totalStudentPoints: %d\n" , totalStdPoints);

        puts("*********************************");

        GPA = (stdPoints * courseUnit);
        totalGPA += GPA;
        printf("This is totalGPA: %d\n" , totalGPA );
        
        // the totalGPA , Gpa , totalstdPoints , are
        // giving wrong values

    }

    CGPA = totalGPA / totalStdPoints;
    printf("This is GPA: %d\n" , GPA );
    printf("This is studentsPoints: %d\n" , stdPoints );
    return  CGPA;
}
