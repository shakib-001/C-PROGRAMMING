//1. write a c program to accept two integers and check whether they are equal or not.
/*
#include<stdio.h>
int main() {
   int num1,num2;
   //scanf("%d %d",&num1,&num2);
     printf("The 1st value is: ");
     scanf("%d",&num1);
     printf("The 2nd value is: ");
     scanf("%d",&num2);
    if(num1==num2){
        printf("Number 1 & Number 2 are Equal");
    }
    else{
        printf("Number 1 & Number 2 are not Equal");
    }
    return 0;
} */

//2.write a c program to check whether a given number is even or odd.
/*
#include<stdio.h>
int main(){
    int num;
    printf("Please enter your number: ");
    scanf("%d",&num);
    if((num%2)==0){
        printf("The number is even");
    }
    else{
        printf("The number is odd");
    }
    return 0;
} */

//3.write a c program to find whether a given year is a leap year or not.
/*
#include<stdio.h>
int main(){
    int year;
    printf("Enter your year: ");
    scanf("%d",&year);
    if(((year%400)==0)||(((year%100)!=0)&&(year%4)==0)){
        printf("this year is leap year");
    }
    if((year%400)==0){
        printf("This year is leap year");
    }
    else if(((year%100)!=0)&&(year%4)==0){
        printf("this year is leap year");
    }
    else{
        printf("This year is not leap Year");
    }
    return 0;
} */

//4. write a c program to read the value of an integer m and display the value of is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0.
/*
#include<stdio.h>
int main(){
    int m;
    printf("please enter your number: ");
    scanf("%d",&m);
    if(m>0){
        printf("m is larger than 0");
    }
    else if(m==0){
        printf("m is 0");
    }
    else if(m<0){
        printf("m is less than 0");
    }
    return 0;
} */

//5. write a c program to find the largest of three number.
/*
#include<stdio.h>
int main(){
    int num1,num2,num3;
    //scanf("%d %d %d", &num1, &num2 , &num3);
    printf("Enter your 1st number: ");
    scanf("%d",&num1);
    printf("Enter your 2nd number: ");
    scanf("%d",&num2);
    printf("Enter your 3rd number: ");
    scanf("%d",&num3);
    if((num1>num2)&&(num1>num3)){
        printf("the largest number is: %d\n",num1);
    }
    else if(num2>num3){
        printf("the largest number is: %d\n",num2);
    }
    else{
        printf("the largest number is: %d\n",num3);
    }
    return 0;
}  */


//write a c program to accept a coordinate point in an xy coordinate system and determine in which quadrant the coordinate point lies.

#include <stdio.h>

int main() {
    float x, y;

    // Input coordinates
    printf("Enter the x-coordinate: ");
    scanf("%f", &x);
    printf("Enter the y-coordinate: ");
    scanf("%f", &y);

    // Determine quadrant
    if (x > 0 && y > 0)
        printf("The point (%.2f, %.2f) lies in the first quadrant.\n", x, y);
    else if (x < 0 && y > 0)
        printf("The point (%.2f, %.2f) lies in the second quadrant.\n", x, y);
    else if (x < 0 && y < 0)
        printf("The point (%.2f, %.2f) lies in the third quadrant.\n", x, y);
    else if (x > 0 && y < 0)
        printf("The point (%.2f, %.2f) lies in the fourth quadrant.\n", x, y);
    else if (x == 0 && y == 0)
        printf("The point (%.2f, %.2f) is at the origin.\n", x, y);
    else if (x == 0)
        printf("The point (%.2f, %.2f) lies on the y-axis.\n", x, y);
    else
        printf("The point (%.2f, %.2f) lies on the x-axis.\n", x, y);

    return 0;
}

/*7. a programmer is writing a program to find the roots of a quadratic equation of the from ax^2+bx+c=0, where a,b,c are constants x is the variable.
the user gives a,b,c as input.we know thaat if a=b=c=0 no equation is possible.write a conditional statement in c to print no equation is possible
if this case arises. no input or other code is required.*/
/*
#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((a==0)&&(b==0)&&(c==0)){
        printf("No Equation Possible");
    }
    return 0;
} */


