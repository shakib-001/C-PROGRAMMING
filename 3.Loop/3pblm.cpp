//take input of n different number and calculate the number of even and odd in those inputs.
/*#include<stdio.h>
int main(){
    int n;
    printf("Total input number: ");
    scanf("%d",&n);
    int a;
    int even=0;
    int odd=0;
    for(int i=1;i<=n;i++){
        scanf("%d",&a);
        if(a%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("total even number: %d\n",even);
    printf("total odd number: %d",odd);
    return 0;
} */
//calculation of factorial.
/*#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("Factorial= %d",fact);
    return 0;
} */
//Break & continue statement.
/*#include<stdio.h>
int main(){
    for(int i=1;5>3;i++){
        printf("%d loop\n",i);
        if(i==100){
            break;
        }
    }
    return 0;
} */
/*#include<stdio.h>
int main(){
    for(int i=1;i<=15;i++){
        printf("%d loop\n",i);
        if(i==10){
            break;
        }
    }
    return 0;
} */
/*
#include<stdio.h>
int main(){
    for(int i=1;i<=20;i++){
        if(i==10){
            continue ;
        }
        printf("%d loop\n",i);
    }
    return 0;
} */
//How many digits on a number.********
/*#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int digit=0;
    int temp=n;
    while(temp!=0){
        temp=temp/10;
    digit++;
    //344
    //34
    //3
    //0
    }
    printf("Total digit= %d",digit);
    return 0;
} */

//Tonmoy likes beautiful value. Beautiful numbers are made by teh sum of its all integers square value.suppose if a number 3204 then the beautiful
//value is 3^2+2^2+0^2+4^2=29. Take a input of a integer and print the beautiful value.
/*#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int temp=n;
    int beautiful=0;
    int x;
    while(temp!=0){
        x=temp%10;
        temp=temp/10;
        beautiful+=x*x;
    }
    printf("%d",beautiful);
    return 0;
} */

//check prime number(mowlik shonka)
/*#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int temp=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            temp=1;
        }
    }
    if(temp==1){
        printf("non prime\n");
    }
    else{
        printf("prime");
    }
    reeturn 0;
} */
//write a c program to print all the prime number between 1 to n.
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int j=2;j<=n;j++){
        int temp=0;
    for(int i=2;i<j;i++){
        if(j%i==0){
            temp=1;
        }
    }
    if(temp==0){
        printf("%d ",j);
    }
    }
    return 0;
}
