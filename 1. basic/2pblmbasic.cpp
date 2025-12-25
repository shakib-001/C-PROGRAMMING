//pblm 2:- write a c program to print your name , date of birth and mobile number.
/*
#include<stdio.h>
using namespace std;
int main () {
    printf("Name: Shakib Mozumder\n");
    printf("Date of Birth: 28/08/2002\n");
    printf("Mobile number: 01610157038");
    return 0;
} */


//pblm 3:- write a c program to take 2 inputs and display their sum.
/*
#include<stdio.h>
using namespace std;
int main () {
    float a;
    float b;
    //scanf("%f %f", &a,&b);
    printf("The 1st Number is: ");
    scanf("%f",&a);
    printf("The 2nd Number is: ");
    scanf("%f",&b);
    float sum=a+b;
    printf("the sum is=%.2f",sum);
    return 0;
} */



//pblm 4 :- write the c program to take 2 inputs and display their multiple calculations sum, division , sub, mul, remainder;
/*
#include<stdio.h>
int main(){
    float a;
    float b;
    printf ("The 1st Number is: ");
    scanf("%f",&a);
    printf("The 2nd Number is: ");
    scanf("%f",&b);

    printf("addition= %0.2f\n",a+b);
    printf("subtraction= %.2f\n",a-b);
    printf("multiplication= %.2f\n",a*b);
    printf("divition= %.2f\n",a/b);
    printf("remainder=%.2f\n",a%b);
    return 0;
} */





//pblm 5:- write a c program to compute the perimeter and area of a rectangle with a height of 7 inches, and width of 5 inches.
/*
#include<stdio.h>
int main (){
    float height,width;
    printf("please enter your height= ");
    scanf("%f",&height);
    printf("please enter your width= ");
    scanf("%f",&width);
    float area= height*width;
    float per= 2*(height+width);
    printf("Area= %.2f\n",area);
    printf("Perimerer= %.2f",per);
    return 0;
} */


//pblm 6 :- write a c  program to compute the perimeter and area of a circle with a given radius 7.
/*
#include<stdio.h>
using namespace std;
int main () {

    return 0;
}
*/



//pblm 7:- write a c program to compute the value of 'a'| take two integer input of a*b and b .
/*
#include<stdio.h>
using namespace std;
int main () {
    int ab=22;
    int a= 6;
    float b= (float)ab/a;
    printf("%.2f",b);
    return 0;
}  */ /*
#include<stdio.h>
int main(){
    int ab;
    int a;
    printf("AB value is: ");
    scanf("%d",&ab);
    printf("A value is: ");
    scanf("%d",&a);
    float b=(float)ab/a;
    printf("%.2f",b);

} */



//pblm 8:- write a c program to display speed in m/s with input km/h.
/*
#include <stdio.h>
int main(){
    double kmh,ms;
    printf("the kmh value is: ");
    scanf("%lf",&kmh);
    ms = kmh*1000/3600;
    printf("the ms value is: %.3lf",ms);
    return 0;
} */



//pblm 9 :- write a c program to convert a given integer (in days) to years , months and days , assumes that all months have 30 days and all years have 365 days.
/*
#include<stdio.h>
int main(){
    int total_days;
    printf("Please input your total days: ");
    scanf("%d",&total_days);
    int years,month,days;
    years= total_days/365;
    total_days= total_days%365;
    month= total_days/30;
    total_days=total_days%30;
    days= total_days;
    printf("Your total years: %d\n",years);
    printf("Your total mounth: %d\n",month);
    printf("Your total days: %d\n",days);
    return 0;
}
*/
//pblm 10: write a c program to covert a given integer (in seconds) to hours, minutes, and seconds.
/*
#include<stdio.h>
int main(){
    int total_second;
    printf("The total second is: ");
    scanf("%d",&total_second);
    int hours,minutes, seconds;
    hours=total_second/3600;
    total_second= total_second%3600;
    minutes= total_second/60;
    total_second=total_second%60;
    seconds=total_second;
    printf("total hours: %d\n",hours);
    printf("total minute: %d\n",minutes);
    printf("total secounds: %d\n",seconds);
    return 0;
}
*/

//pblm 11: write a c program to display temp in farenhite scale while input is in celsius.

//pblm 12:write a c program that accepts two items weight (floting points values) and number of purchase(floating points values) and calculate the average value of the items.

//pblm 13 :- write a c program theat accepts a 2 digit integer and shows the total multiplications of all it's digit.
/*
#include<stdio.h>
int main(){
    int n;
    printf("The value is: ");
    scanf("%d",&n);
    int digit1=n/10;
    int digit2=n%10;
    printf("your multiflication = %d",digit1*digit2);
    return 0;
} */

/*
pblm *** :- tonmoy likes beautiful value. beautiful numbers are made by the sum of its all integers square value. suppose if a number
is 3204 then the beautiful value is 3^2+2^2+0^2+4^2=29. take a input of a integer nd print the beautiful vlaue. assume user will give you a 4 digit integer.*/
/*
#include<stdio.h>
int main (){
    int n;
    printf("The input number is: ");
    scanf("%d",&n);
    int digit1,digit2,digit3,digit4,sum;
    digit1=n/1000;
    n= n%1000;
    digit2 =n/100;
    n= n%100;
    digit3=n/10;
    digit4= n%10;
    printf("%d\n",digit1);
    printf("%d\n",digit2);
    printf("%d\n",digit3);
    printf("%d\n",digit4);
    return 0;

} */

