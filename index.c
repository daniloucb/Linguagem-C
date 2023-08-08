#include <stdio.h>

float calculateAvarageGrade(float grades);
void checkStatus(float gradeAvarege);
float setGrades();

int main() 
{
    
    float grades = setGrades();
    float gradeAvarege = calculateAvarageGrade(grades);

    checkStatus(gradeAvarege);
    
    return 0;
};

float setGrades() 
{
    float grade1;
    float grade2;
    float grade3;

    printf("Digite 3 notas: \n");

    printf("Nota 1: ");
    scanf("%f", &grade1);
    
    printf("Nota 2: ");
    scanf("%f", &grade2);
    
    printf("Nota 3: ");
    scanf("%f", &grade3);

    
    float grades = grade1 + grade2 + grade3;
    return grades;
}

float calculateAvarageGrade(float grades) 
{
    float avarageGrade = grades / 3;
    return avarageGrade;
};

void checkStatus(float gradeAvarege)
{
    if (gradeAvarege >= 7)
    {
        gradeAvarege >= 9 ? printf("Nice!!") : printf("Aprovado");
    } else {
        printf("Reprovado");
    }
}

