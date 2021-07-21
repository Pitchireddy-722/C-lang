#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>
#include <search.h>

//#include <stdio.h>
//
//int main()
//{
//    char r='ru',s[5]="ru";
//    printf("%c\n",r);
//    printf("%s",s);
//    return 0;
//}



/// Size of datatypes ///
//int main()
//{
//    int a=12;
//    float b=12.04;
//    double c=12.04;
//    char d='a';
//    char e[]="abcdef";
//
//    printf("%d\n",sizeof(a));
//    printf("%d\n",sizeof(b));
//    printf("%d\n",sizeof(c));
//    printf("%d\n",sizeof(d));
//    printf("%d\n",sizeof(e));
//
//    printf("*****************");
//    printf("\nvar of type short ocuupy %u",sizeof(short));
//    printf("\nvar of type long ocuupy %u",sizeof(long));
//}


                                /// Control Flow ////

///  Sum Of Char in string  ///
//int main()
//{
//    char n[]="reddy";
//    int sum,i;
//    sum=0;
//
//    for(i=0;i<strlen(n);i++)
//    {
//        if(n[i]!=' ')
//            sum++;
//
//    }
//    printf("%d",sum);
//}

//int main()
//{
//    char st[]="i'm Okay now!!!";
//
//    int count=0;
//    while(st[count]!='\0')
//    {
//        count++;
//    }
//    printf("%d",count);
//}

/// StrCmp //

//int main()
//{
//    printf("%d\n",strcmp("1","2"));
//    printf("%d\n",strcmp("A","a"));
//}

/// Sum Of Digits ///

//int main()
//{
//    int n=123456,count=0;
//    int num=n;
//
//    while(n>0)
//    {
//        count++;
//        n=n/10;
//    }
//    printf("No of digits in %d is: %d",num,count);
//    return 0;
//}


/// prime or not ///

//int main()
//{
//    int n,i;
//    scanf("%d",&n);
//    for(i=2;i<n;i++)
//    {
//        if(n%i==0)
//            break;
//    }
//
//    printf("%d\n",i);
//    printf("%d\n",n/2);
//    if(i>n/2)
//    {
//        printf("prime");
//    }else
//    {
//        printf("Not a prime");
//    }
//}


/// Reverse number ////

//int main()
//{
//    int num,i,rev,res;
//    printf("Number: ");
//    scanf("%d",&num);
//    rev=0;
//    res=num;
//
//    while(num>0)
//    {
//        rev=(rev*10)+num%10;
//        num=num/10;
//    }
//    printf("Reverse Number of %d is %d ",res,rev);
//    return 0;
//}

///  Even or Odd ///
//int main()
//{
//    int y;
//    scanf("%d",&y);
//    if(y%2==0){
//        printf("even");
//    }else{
//        printf("Odd");
//    }
//}

/// Ternary Operator ////
//int main()
//{
//    int y;
//    char *x;
//    scanf("%d",&y);
//    x=y%2==0?"Even":"Odd";
//
//    printf("%s",x);
//}


/// GoTo ///

//int main()
//{
//    int n,i=1;
//
//    printf("For which table:");
//    scanf("%d",&n);
//
//    table:
//        printf("%d x %d = %d\n",n,i,n*i);
//        i++;
//    if(i<=10)
//    {
//        goto table;
//    }
//}


/// GCD & LCM ///
//
//int main()
//{
//    int a,b,x,y,t,lcm,gcd;
//    scanf("%d",&x);
//    scanf("%d",&y);
//    a=x;
//    b=y;
//
//    while(b!=0)
//    {
//        t=b;
//        b=a%b;
//        a=t;
//    }
//
//    gcd=a;
//    lcm=(x*y)/gcd;
//    printf("Gcd = %d\n",gcd);
//    printf("LCM = %d",lcm);
//
//    return 0;
//}

/// Loops Examples ///

/// Pascal Triangle //

//int main()
//{
//    int i,j,k,rows,count;
//    long x;
//
//    printf("Rows:");
//    scanf("%d",&rows);
//    count=rows-1;
//
//    for(i=0;i<rows;i++)
//    {
//        x=1;
//        for(k=0;k<=count;k++)
//        {
//            printf("   ");
//        }
//        for(j=0;j<=i;j++)
//        {
//            printf("%6ld",x);
//            x=(x*(i-j)/(j+1));
//        }
//        count--;
//        printf("\n");
//    }
//}

/// Floyyds Triangle ///
//int main()
//{
//    int n,i,j,k=1;
//    printf("Row:");
//    scanf("%d",&n);
//
//    for(i=0;i<n;i++)
//    {
//        for(j=0;j<=i;j++)
//        {
//            printf("%d ",k);
//            k=k+1;
//        }
//        printf("\n");
//    }
//}


/// Spiral Pattern//

////// Int /////
//int main()
//{
//    int i,row,j=1;
//    printf("Row :");
//    scanf("%d",&row);
//
//    for(i=1;i<row*2;i+=2)
//    {
//        if(j%2==1)
//        {
//            printf("%3d %3d",i,i+1);
//            j++;
//        }else
//        {
//            printf("%3d %3d",i+1,i);
//            j++;
//        }
//        printf("\n");
//    }
//}

int main()
{
    int i,row,j=1;
    printf("enter Rows: ");
    scanf("%d",&row);

    for(i=1;i<row*2;i+=2)
    {
        if(j%2==1)
        {
            printf("%3c %3c",i+64,i+65);
            j++;
        }else
        {
            printf("%3c %3c",i+65,i+64);
            j++;
        }
        printf("\n");
    }

}

/// Sum of rows ///
//
//int main()
//{
//    int i,j,rows,sum;
//    printf("Rows: ");
//    scanf("%d",&rows);
//
//    for(i=1;i<=rows;i++)
//    {
//        sum=0;
//        for(j=1;j<=i;j++)
//        {
//            sum+=j;
//            if(j!=i)
//            {
//                printf("%d + ",j);
//            }else
//            {
//                printf("%d = ",j);
//            }
//        }
//        printf(" %d",sum);
//    printf("\n");
//    }
//}


/// Roots ///

//int main()
//{
//    int a,b,c,d;
//    double root1,root2,r1,r2;
//
//    printf("a,b,c = ");
//    scanf("%d %d %d",&a,&b,&c);
//
//    d=b*b-4*a*c;
//    r1= -b/(double)(2*a);
//    r2= sqrt(-d)/(2*a);
//
//    if(d<0)
//
//    {
//        printf("1st Root = %.2lf + i%.2lf\n",r1,r2);
//        printf("2nd Root = %.2lf - i%.2lf\n",r1,r2);
//    }else
//    {
//        root1=(-b+sqrt(d))/(2*a);
//        root2=(-b-sqrt(d))/(2*a);
//
//        printf("1st root = %.2lf\n",root1);
//        printf("2nd root = %.2lf\n",root2);
//    }
//    return 0;
//}

/// Factorial //

//int main()
//{
//    int n,i;
//    long f=1;
//
//    printf("F: ");
//    scanf("%d",&n);
//
//    for(i=1;i<=n;i++)
//    {
//        f=f*i;
//    }
//    printf("%d! = %d ",n,f);
//}


//long factorial(int);
//int main()
//{
//    int n;
//    printf("Number : ");
//    scanf("%d",&n);
//
//    printf("%d! = %d\n",n,factorial(n));
//
//    return 0;
//}
//
//long factorial(int n)
//{
//    int i;
//    long f=1;
//    for(i=1;i<=n;i++)
//        f=f*i;
//    return f;
//}


/// Guess number

//int main()
//{
//    int randomnumber =0;
//    int guess =0;
//    int maximumNumberofguess=5;
//    int numberofguess=0;
//    time_t t;
//
//    srand((unsigned) time(&t));
//    randomnumber = rand()%21;
//    printf("\n This is a guessing game .");
//    printf("\n I have choosen a number between 0 and 20,which you must guess.\n");
//    for(numberofguess=5;numberofguess>0;--numberofguess)
//    {
//        printf("\n you have %d tr%s left.",numberofguess,numberofguess==1?"y":"ies");
//        printf("\n enter a guess number :");
//        scanf("%d",&guess);
//        if(guess==randomnumber)
//        {
//            printf("\n congrats you guessed it:\n");
//            break;
//        }
//        else if(guess<0 || guess>20)
//        printf("opps ,I said the number between 0 & 20 \n");
//        else if(randomnumber>guess)
//        printf("sorry , %d is wrong , My number is greater than that\n",guess);
//        else if (randomnumber<guess)
//        printf("sorry, %d is wrong my number is lesser than that\n",guess);
//    }
//    printf("\n You have had five tries and failed .The number was %d \n",randomnumber);
//
//    return 0;
//}

/// Armstrong

//int main()
//{
//    int n,i,t,a,re=0;
//    scanf("%d",&n);
//
//    t=n;
//    for(i=0;i<n;i++)
//    {
//        a=n%10;
//        re=re+(a*a*a);
//        n=n/10;
//    }
//    if(re==t)
//    {
//        printf("Armstrong");
//    }else
//    {
//        printf("not a Armstrong");
//    }
//}

/// Pronic Numbers

//int main()
//{
//    int i,num,f=0;
//
//    scanf("%d",&num);
//
//    for(i=1;i<=num;i++)
//    {
//        if(i*(i+1)==num)
//        {
//            f=1;
//            break;
//        }
//    }
//    if(f==1)
//    {
//        printf("%d has pronic %d and %d\n",num,i,i+1);
//    }else
//    {
//        printf("Not a pronic");
//    }
//}
















