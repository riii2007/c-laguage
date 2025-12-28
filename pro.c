#include<stdio.h>
int main(){
int mark;
char grade;
printf("Enter your mark: ");
    scanf("%d", &mark);

grade = (mark >= 90) ? 'A' :
       (mark >= 75) ? 'B' :
       (mark >= 60) ? 'C' :
       (mark >= 45) ? 'D' :
       (mark >= 33) ? 'E' : 
       (mark < 33) ? 'F' :
 
     printf("Your grade is: %c", grade);

   
switch (grade)
{
case 'A':
    printf("Excellent work!");
    break;

case 'B':
    printf("well done!");
    break;

case 'C':
    printf("good job!");
    break;

case 'D':
    printf("you passed!");
    break;

case 'E':
    printf("you passed but need improvement!");
    break;

case 'F':
    printf("You failed. Better luck next time!");
    break;

default:
    printf("Invalid grade");
    break;
}

if (grade>='A' && grade<='F') {
    printf("congratulations! You are eligible for the next level.");

}else{
    printf("try again to improve your grade.");
}
}