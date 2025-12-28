//write a c program to print all the prime number between 1 to n.
/*#include<stdio.h>
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
}*/
/*#include<stdio.h>
int main(){
    for(int i=1;i<=100;i++){
        printf("*\n");
    }
    return 0;
} */
//nested loop
/*#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=10;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
} */

/*#include<stdio.h>
int main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            if(i==j){
                printf("0 ");
            }
            else{
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
} */
/*
#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
                if(i==1 & j==1){
                        printf("* ");
                }
                else if(i==2&&j==1){
                    printf("# ");
                }
                else if(i==5&&j==5){
                    printf("@ ");
                }
                else{
                    printf("0 ");
                }
        }
        printf("\n");
    }
    return 0;
} */
/*
*
**
***
****  */
/*#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
} */
/*
1
1 2
1 2 3
1 2 3 4 */
/*#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
} */
/*
1
2 3
4 5 6
7 8 9 10 */
/*#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }
    return 0;
} */
//facturial

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
            int fact=1;
            for(int j=1;j<=i;j++){
                fact=fact*j;
            }
            printf("%d\n",fact);
    }
    return 0;
}


