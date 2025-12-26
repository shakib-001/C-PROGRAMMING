//8. write a c program to determine eligiblity for adimssion to a professional cource based of the following criteria.
/*
#include<stdio.h>
int main(){
    int phy,che,math;
    printf("Enter your physics number: ");
    scanf("%d",&phy);
    printf("Enter your chemistry number: ");
    scanf("%d",&che);
    printf("Enter your math number: ");
    scanf("%d",&math);
    if((math>=65)&&(phy>=55)&&(che>=50)&&(phy+che+math)>=190){
        printf("You are Eligibile");
    }
    else if((math+phy)>=140){
        printf("You are Eligibile");
    }
    else{
        printf("You are Not Eligibile");
    }
    return 0;
}
*/
//9. write a c program to calculate the root of a quadratic equation.
/*
#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    //float det= pow(b,2)-4*a*c;
    float det=b*b-4*a*c;
    if(det==0){
        printf("Roots are equal\n");
        printf("x1= %f\n",-b/(2*a));
        printf("x2= %f\n",-b/(2*a));
    }
    else if(det>0){
        printf("roots are real but not equal\n");
        float x1=(-b+sqrt(det))/(2*a);
        float x2=(-b-sqrt(det))/(2*a);
        printf("x1= %f\n",x1);
        printf("x2=%f\n",x2);
    }
    else if(det<0){
        printf("roots are img\n");
        float x1=(-b+sqrt(det))/(2*a);
        float x2=(-b-sqrt(det))/(2*a);
        printf("x1= %f\n",x1);
        printf("x2=%f\n",x2);
    }
    return 0;
} */

/*10. write a c program to read temperature in centigrade and display a suitable message according to the temperature state below:
    temp<0 then freezing weather
    temp 0-10 then very cold weather
    temp 10-20 then cold weather
    temp 20-30 then normal in temp
    temp 30-40 then its hot
    temp >=40 then its very hot
    solution:-*/
/*
    #include<stdio.h>
    int main(){
        int temp;
        printf("Enter the today temp: ");
        scanf("%d",&temp);
        if(temp<0){
            printf("Freezing weather");
        }
        else if(temp<=10){
            printf("very cold weather");
        }
        else if(temp<=20){
            printf("cold weather");
        }
        else if(temp<=30){
            printf("normal in temp");
        }
        else if(temp<=40){
            printf("its hot weather");
        }
        else if(temp>40){
            printf("its very very hot weather");
        }
        return 0;
    } */
//11. write a c program to check whether a trigngle is Equilateral, Isosceles or Scalene.
/*
#include<stdio.h>
int main(){
    float a,b,c;
    printf("The value of A: ");
    scanf("%f",&a);
    printf("The value of B: ");
    scanf("%f",&b);
    printf("The value of C: ");
    scanf("%f",&c);
    if((a==b)&&(b==c)){
        printf("this is Equilateral");
    }
    else if((a==b)||(b==c)||(a==c)){
        printf("This is Isosceles");
    }
    else{
        printf("This is Scalene");
    }
    return 0;
}
*/
/*
12. write a program in c to calculate and print the electricity bill of a given customer.unit consumed by the user
should be coptured from the keyboard the display the total amount to be paid to the costomer
unit              -----    charge/unit
upto 199          ---            1.20
200 and above but less than 400  ----- 1.5
400 and above but less than 600 -----  1.8
600 and above   --------------------    2.00
if bill exceeds rs.400 then a surcharge of 15% will be charged and the minimun bill should be of Rs. 100/- */


#include<stdio.h>
int main(){
    float used_unit, total_bill,unit_price;
    printf("Enter the use unit: ");
    scanf("%f",&used_unit);
    if(used_unit<200){
        unit_price=1.2;
    }
    else if(used_unit<400){
        unit_price=1.5;
    }
    else if(used_unit<600){
        unit_price=1.8;
    }
    else{
        unit_price=2.0;
    }
    total_bill=unit_price*used_unit;
    float charge;
    if(total_bill>=400){
        charge= total_bill*.15;
    }
    total_bill= total_bill+charge;
    //total_bill+=charge
    if(total_bill<100){
        total_bill=100;
    }
    printf("total use unit: %.2f\n",used_unit);
    printf("Amount of charge: %.2f\n",unit_price);
    printf("Surchage Amount: %.2f\n",charge);
    printf("Net amount : %.2f\n",total_bill);
    return 0;
}
