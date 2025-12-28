/* *
  ***
 *****
******* */
/*#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=(2*i)-1;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
} */
/*   *
    * *
   * * *
  * * * *  */
/*#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}*/
/*    *
   * * *
 * * * * *
* * * * * * *
  * * * * *
   * * *
     *   */
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=(2*i)-1;k++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=n;i>0;i--){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=(2*i)-1;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
//write a c program to print all the Armstrong number between 1 to N. (370=3^3+7^3+0^3=370). all armstrong number 0,1,153,370,371,407,1634,8208,9474.
/*#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int digit=0;
    int temp =n;
    while(temp!=0){
        temp=temp/10;
        digit++;
    }
    temp=n;
    int sum=0;
    while(temp!=0){
        int x=temp%10;
        temp=temp/10;
        sum+=(int) pow(x,digit);
    }
    if(n==sum){
        printf("%d is a Armstrong Number.",sum);
    }
    else{
        printf("%d is not Armstrong Number.",sum);
    }
    return 0;
} */
//write a program to compute the cosine of x, the user should supply x and a positive integer n. we compute the cosine of x using the series and
//the computation should use all terms in the series up through the term involving x"  (cosx=1-x^2/2!+x^4/4!-x^6/6!)
/*#include<stdio.h>
#include<math.h>
int main(){
    int n=6;
    float x=.57;
    float sum=1;
    int sign=-1;
    for(int i=2;i<=6;i+=2){
            int fact=1;
    for(int j=1;j<=i;j++){
        fact=fact*j;
    }
    sum+=sign*pow(x,i)/fact;
    if(sign==-1) sign=1;
    else sign=-1;
    }
    printf("%f",sum);
}*/
