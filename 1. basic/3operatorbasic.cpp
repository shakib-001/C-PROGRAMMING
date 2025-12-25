/*
#include<stdio.h>
using namespace std;
int main(){
    int rem= 5*4+6/5+5*4;
    printf("rem=%d",rem);
    return 0;
} */


/*
// type custing
#include<stdio.h>
using namespace std;
int main () {
    //float rem =3.0/2;
    float rem =(float)3/2;
    printf("rem=%f",rem);
    return 0;
} */

/*
#include<stdio.h>
using namespace std;
int main () {
    int a=7;
    int b=4;
    float dev= (float)a/b;
    printf("the value is: %f",dev);
    return 0;
} */

/*
#include<stdio.h>
using namespace std;
int main () {
    char alfa = 'c';
    printf ("%c\n",alfa);
    printf("ascii value of c = %d\n",alfa);
    return 0;
} */

/*
#include<stdio.h>
using namespace std;
int main () {
    char alfa;
    scanf ("%c",&alfa);
    char alfa1= (int)alfa-32;
    printf("%c",alfa1);
    return 0;
}

*/
/*
#include<stdio.h>
using namespace std;
int main () {
    //int a=34;
    //int b=a;
    float a=34.76;
    int b=a;
    printf("%d",b);
    return 0;
} */

//relational operator
/*
#include<stdio.h>
int main(){
    int a =5;
    int b=5;
    printf("%d\n",a>b);
    printf("%d\n",a==b);
    printf("%d\n",a<=b);
    printf("%d\n",a!=b);
    printf("%d\n",a<b);
    return 0;
} */


//logical operator...
/*
#include<stdio.h>
int main() {

    printf("%d\n",1&&1);
    printf("%d\n",1&&0);
    printf("%d\n",(5>6)&&(4<9));
    printf("%d\n",1||0);
}

*/
//assignment operator
/*
#include<stdio.h>
int main(){
    int a=5;
    //a=a+10;
    a+=15;
    a-=10;
    a*=2;
    a/=5;
    a++;
    a--;
    printf("%d\n",a);
    return 0;
}
*/
//bitwise operator
/*
#include<stdio.h>
int main(){
    printf("%d\n",4&&3);
    printf("%d\n",4&7);
    printf("%d\n",9&3);
    printf("%d\n",~9);
} */


#include<stdio.h>
#include<math.h>
int main(){
    //int temp = pow(base,power);
    int temp= pow(2,5);
    printf("%d\n",temp);
    double str= sqrt (temp);
    printf("%lf\n",str);
    return 0;
}
