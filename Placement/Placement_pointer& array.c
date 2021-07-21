
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


/// Pointers ///

//int main()
//{
//    int n=10,re=0;
//    int *p=NULL;
//    printf("N addres is %p\n",n);
//    printf("P addres is %p\n",p);
//    printf("*****************************\n");
//    p=&n;
//    printf("P addres is %p\n",p);
//    printf("P is %d\n",*p);
//    printf("P is %d\n",&p);
//    printf("P is %d\n",p);
//
//   re=*p+10;
//   printf("%d\n",re);
//
//}

/// Differcence between Address of value and pointer

//int main()
//{
//    int r=40;
//    int *p;
//    p=&r;
////    int x=p;
//    printf("%d is the addres of %d\n",p,r);
//    printf("%d is tne value of r\n",*p);
//    printf("%d is addres of pointer\n",&p);
//    printf("%d is the addres of value",&*p);
//    return 0;
//}

//int main()
//{
//    int r=40;
//    int *p=&r;
//    int *x=&p;
//    printf("%d is the addres of %d\n",p,x);   /// Here P is the address of r  &&  X is the address of p
//    printf("%d is the addres of %d",&p,&x);
//    return 0;
//}

/// Address of the pointer

//int main()
//{
//    int r=40;
//    int s=41,u=42;
//    int *p=&r,*x=&s,*y=&u;
//    printf("%p\n",p);
//    printf("%d is the addres of %d\n",p,r);
//    printf("%d is the addres of %d\n",x,s);
//    printf("%d is the addres of %d",y,u);
//    return 0;
//}

/// sum of array

//int arraysum(int array[],int n)
//{
//    int sum=0,*i;
//    int *const arrayend=array+n;
//
//    for(i=&array[0];i<arrayend;++i)
//    {
/////        printf("%d -- %d\n",i,arrayend);     arrayend = Memory size
//
//        sum=sum+*i;
//    }
//    return sum;
//}
//int main()
//{
//    int arraysum(int array[],int n);
//    int values[]={1,210,3,4,5,6,7,8,9,10};
//    printf("Sum is %i\n",arraysum(values,10));
//}

//int arraysum(int array[])
//{
//    int sum=0,i;
//
//    for(i=array[0];i<=array[8];++i)
//    {
//        printf("%d\n",i);
//        sum=sum+i;
//    }
//    return sum;
//}
//int main()
//{
//    int arraysum(int array[]);
//    int values[]={1,2,3,4,5,6,7,8,9};
//    printf("Sum is %i\n",arraysum(values));
//}


/// Arrays ///

//int main()
//{
//    int days[12]={31,29,31,30,31,30,31,31,30,31,30,31};
//    int index;
//
//    for(index=0;index<12;index++)
//    {
//        printf("%d has %d\n",index+1,days[index]);
//    }
//}


//int main()
//{
//    int days[12]={30,29,[4]=32,30,31,[1]=31};
//    int index;
//
//    for(index=0;index<12;index++)
//    {
//        printf("%d has %d\n",index+1,days[index]);
//    }
//}

/// Square Number

//int main()
//{
//    int arr[10]={0,1,4,9,16};
//    int i;
//
//    for(i=5;i<=10;i++)
//    {
//        arr[i]=i*i;
//    }
//
//    for(i=0;i<=10;i++)
//    {
//        printf("arr[%i] = %i\n",i,arr[i]);
//    }
//}

/// Am of 101 to 200

//int main()
//{
//
//    int n[200];
//    int i;
//    float sum=0;
//    float mean;
//
//    for(i=1;i<100;i++)
//    {
//        n[i]=100+i;
//    }
//
//    for(i=1;i<100;i++)
//    {
//        sum=sum+n[i];
//    }
//
//    mean=sum/100;
//    printf("sum is %.2f .mean is %.2f\n",sum,mean);
//}


//int main()
//{
//    int a[4][2] = {{0,0},{2,1},{4,3},{5,2}};
//    int i,j;
//
//    for(i=0;i<4;i++)
//    {
//        for(j=0;j<2;j++)
//        {
//            printf("a[%d] [%d] = %d\n",i,j,a[i][j]);
//        }
//    }
//}
