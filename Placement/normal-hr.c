#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include<time.h>
#include <search.h>

/// Leap year

//int main()
//{
//    int y;
//    printf("year:");
//    scanf("%d",&y);
//
//    if(y%4==0 && y%100!=0 || y%400==0)
//    {
//        printf("leap year");
//    }else
//    {
//        printf("not leap year");
//    }
//}

/// Fibonic series

//int main()
//{
//    int a,b,c,i,n;
//    a=0;
//    b=1;
//    scanf("%d",&n);
//    printf("%d %d\n",a,b);
//
//    for(i=0;i<n;i++)
//    {
//        c=a+b;
//        a=b;
//        b=c;
//        printf("%d ",c);
//    }
//}

/// pascal

//int main()
//{
//    int i,j,k,n,c;
//    long x;
//    printf("Rows:");
//    scanf("%d",&n);
//    c=n-1;
//    for(i=0;i<n;i++)
//    {
//        x=1;
//        for(k=0;k<c;k++)
//        {
//            printf("   ");
//        }
//        for(j=0;j<=i;j++)
//        {
//            printf("%6ld",x);
//            x=(x*(i-j)/(j+1));
//        }
//        c--;
//        printf("\n");
//    }
//
//}

/// Right

//int main()
//{
//    int i,n,sum,j;
//    scanf("%d",&n);
//
//    for(i=1;i<=n;i++)
//    {
//        sum=0;
//        for(j=1;j<=i;j++)
//        {
//           sum=sum+j;
//           if(j!=i)
//           {
//               printf("%d + ",j);
//           }else
//           {
//               printf("%d = ",j);
//           }
//        }
//    printf("%d",sum);
//    printf("\n");
//    }
//}


/// factorial using recursion

//long factorial(int n);
//int main()
//{
//    int n;
//    long f;
//    scanf("%d",&n);
//
//    if(n<0)
//    {
//        printf("-ve");
//    }else
//    {
//        f=factorial(n);
//        printf("%ld",f);
//    }
//}
//long factorial(int n)
//{
//    if(n==0)
//    {
//        return 1;
//    }
//    else
//    {
//        return (n*factorial(n-1));
//    }
//}

/// Reverse String

//int main()
//{
//    char str[20],rev[20];
//    int i,l,j=0;
//    printf("enter string: ");
//    gets(str);
//
//    l=strlen(str);
//
//    for(i=l-1;i!=-1;i--)
//    {
//        rev[j]=str[i];
//        j++;
//    }
//
//    rev[j]!='\0';
//    sleep(5);
//    printf("Reverse string is %s",rev);
//}


