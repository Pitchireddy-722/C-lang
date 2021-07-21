///* Find Max Number */
//
//#include <stdio.h>
//
//int max(int x,int y);
//
//int main()
//{
//    printf("Maximum number : %d\n",max(22,33));
//    printf("Maximum number : %d\n",max(100,99));
//    printf("Maximum number : %d\n",max(-10,-7));
//    printf("Maximum number : %d\n",max(72,25));
//    printf("Maximum number : %d\n",max(110,989));
//    return 0;
//}
//
//int max(int x,int y)
//{
//    int result;
//
//    if (x>y)
//    {
//        result = x;
//    }else
//    {
//        result = y;
//    };
//    return result;
//}


/* Sum Of 2 Numbers */

#include <stdio.h>

int num(int x,int y);

int main()
{
    printf("Sum of Number 0 and 30 is %d\n",num(0,30));
    printf("Sum of Number 20 and 0 is %d\n",num(20,0));
    printf("Sum of Number 20 and 30 is %d\n",num(20,30));
    printf("Sum of Number 55 and 45 is %d\n",num(55,45));
    printf("Sum of Number 99 and 1 is %d\n",num(99,1));
    return 0;
}

int num(int x,int y)
{
    int result;

    if(x!=0 & y!=0)
    {
        result = x+y;
    }

    return result;
}

