/*  1  */

/*
#include <stdio.h>

int main()
{
    int a = 30;
    int b = 11;
    int sum = 0;
    int sub = 0;
    int mul = 0;
    float div = 0;

    sum = a+b;
    sub = a-b;
    mul = a*b;
    div = a/b;

    printf("a + b = %d\n",sum);
    printf("a - b = %d\n",sub);
    printf("a * b = %d\n",mul);
    printf("a / b = %f\n",div);

    return 0;

}

*/

/*  2  */

/*

#include <stdio.h>

int main()
{
 int a =33;

 printf("a++ of 9 is %d\n", a++);
 printf("++a of 9 is %d\n", ++a);
 printf("a-- of 9 is %d\n", a--);
 printf("--a of 9 is %d\n", --a);

 return 0;
}

*/

/*  3  */
/*
#include <stdio.h>

int main()
{
    _Bool a = 0;
    _Bool b = 1;

    _Bool result;
    _Bool result2;
    _Bool result3;

    result = a && b;
    result2 = a || b;
    result3 = !a;

    printf("%d\n",result);
    printf("%d\n",result2);
    printf("%d\n",result3);

    return 0;

}

*/

/*  3  */
/*

#include <stdio.h>

int main()
{
    unsigned int a =60;
    unsigned int b = 13;
    int res  = 0;
    int res2 = 0;
    int res3 = 0;
    int res4 = 0;
    int res5 = 0;
    int res6 = 0;

    res  = a&b;
    res2 = a|b;
    res3 = a^b;
    res4 =~a;
    res5 = a<<b;
    res6 = a>>b;

    printf("result of & is %d\n",res);
    printf("result of | is %d\n",res2);
    printf("result of ^ is %d\n",res3);
    printf("result of ~ is %d\n",res4);
    printf("result of << is %d\n",res5);
    printf("result of >> is %d\n",res6);

    return 0;

}

*/

/*  CHALLENGE -1 */

// Convert minutes to Days and Years

#include <stdio.h>
int main()
{
    int MinEntered = 0;
    double Years = 0.0;
    double Days = 0.0;
    double MinInYears = 0.0;

    printf("Enter Number of Minutes : ");

    //Get input user
    scanf("%d",&MinEntered);

    MinInYears = (60 * 24 * 365);

    Years =(MinEntered/MinInYears);
    Days = (MinEntered/60.0) / 24.0;

    printf("%d Minutes = %f Years and %f Days\n",MinEntered,Years,Days);

    return 0;
}


















