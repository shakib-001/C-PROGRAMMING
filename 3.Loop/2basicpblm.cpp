//write a c program to print 1 2 3 .....n tems.
/*
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d\n",i);
    }
    return 0;
}*/
/*
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
   int i=1;
   while(i<=n){
    printf("%d\t",i);
    i++;
   }
    return 0;
} */
//odd number print
/*#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i+=2){
        printf("%d\n",i);
    }
    return 0;
} */
//even number print
/*#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i+=2){
        printf("%d\n",i);
    }
    return 0;
} */
//write a c program to print 1+2+3+4+5 series up to n terms.
/*#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
            if(i<n){
        printf("%d+",i);
    }
    else{
        printf("%d",i);
    }
    }
    return 0;
} */
//write a c program calculate the sum of n natural number (1+2+3+4+5+6=21);
/*#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    printf("%d",sum);
} */

//write a c program calculate the sum of odd number(1+3+5=9)
/*#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i+=2){
        sum+=i;
    }
    printf("%d",sum);
} */
//3 ar gonitok ar jogpol.
/*#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=3;i<=n;i+=3){
        sum+=i;
    }
    printf("%d",sum);
} */
//n shonkok odd number ar jogpol.
/*#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    int odd=1;
    for(int i=1;i<=n;i++){
        sum+=odd;
        odd=odd+2;
    }
    printf("%d",sum);
    return 0;
} */
//write a c program to print 2,4,8,16,32,64 series up to n termms.
/*#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int temp=2;
    for(int i=1;i<=n;i++){
        printf("%d,",temp);
        temp=temp*2;
    }
    return 0;
} */
//write a c program calculate the sum given series unit nth term, (1^2+2^2+3^2=14)
/*#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
    sum=sum+(i*i);
    }
    printf("%d",sum);
    return 0;
} */
//use do while loop.
/*#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i=1;
    int sum=0;
    do{
        sum+= (i*i);
        i++;
    }
    while(i<=n);
    printf("%d",sum);
    return 0;
} */

