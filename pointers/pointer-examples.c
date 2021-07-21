#include<stdio.h>
#include<stddef.h>

//int main()
//{
//    int num=15,*pointer=&num,result=0,x;
//
//    x=*pointer;
//
//    result = *pointer+5;
//
//    printf("result = %d\n",result);
//    printf("adrres = %p\n",&num);
//    printf("value =%d ,value of pointer =%p and pointe value address =%p\n",*pointer,pointer,&pointer);
//
//    printf("pointer size = %i\n",sizeof(pointer));
//    printf("x value = %d\n",x);
//
//    return 0;
//}

//
//int main()
//{
//   int num=15,sum=40,*pnum,*po
//   inter=&num,x,y,z,s,t,u;
//
//   s=pointer;
//   t=pnum;
//   u=pointer-num;
//
//   x=num+pointer;
//   y=num+*pointer;
//   z=pointer+*pointer;
//
////   s=z-num;
////   t=pointer-num;
////   u=pointer-pnum;
//
//   printf("pointer value = %d\n",pointer);
//   printf("s value = %d\n",s);
//   printf("t value = %d\n",t);
//   printf("u value = %d\n",u);
//
//   printf("x value = %d\n",x);
//   printf("y value = %d\n",y);
//   printf("z value = %d\n",z);
//
//    return 0;
//}
//
//int main()
//{
//    long num1=0L;
//    long num2=0L;
//    long *pnum=NULL;
//
//    pnum = &num1;
//    *pnum = 2L;
//
//
//    num2=num2+1;  //++num2
//    num2 +=*pnum;
//    pnum=&num2;
//
//    *pnum=*pnum+1;
//
//    printf("num1=%ld  num2=%ld *pnum=%ld *pnum+num2=%ld \n",num1,num2,*pnum,*pnum+num2);
//
//    return 0;
//}

//int main()
//{
//    int i=25;
//    float f=20.252;
//    char c='p';
//    void *point;
//
//    point =&i;
//    printf("int : %d\n",*(int*)point);
//
//    point =&f;
//    printf("float : %.3f\n",*(float*)point);
//
//    point =&c;
//    printf("Character : %c\n",*(char*)point);
//
//
//}

//int arraysum(int array[],const int n);

//int main(void)
//{
//    int values[10]={3,7,-9,3,6,-1,7,9,1,-5};
//    printf("the sum is %i\n",arraysum(values,10));
//    return 0;
//}
//
//int arraysum(int array[],const int n)
//{
//    int sum=0,*ptr;
//    int  arrayend =array+n;
//
//    printf("ptr : %d , n has %d values and arrayend %d\n",ptr,n,arrayend);
//
//    for(ptr=&array[0];*ptr<arrayend;++ptr)
//        sum =sum+*ptr;
//    return sum;
//}

/* With Pointer */

//int arraysum(int *ptr,const int n);
//
//int main(void)
//{
//    int values[10]={3,7,-9,3,6,-1,7,9,1,-5};
//    printf("the sum is %i\n",arraysum(values,10));
//    return 0;
//}
//
//int arraysum(int *ptr,const int n)
//{
//    int sum=0;
//    int  *const arrayend = ptr+n;
//
//    printf("ptr : %d  and arrayend %d\n",ptr,arrayend);
//
//    for(;ptr<arrayend;++ptr)
//        sum =sum+*ptr;
//    return sum;
//}

#include<string.h>
int main(void)
{
    int i;
    char multiple[]="a string";
    char *p=multiple;

    for(i=0;i<strlen(multiple);++i)
        printf("multiple[%d]=%c *(p+%d)=%c &multiple[%d]=%p p+%d=%p \n",i,multiple[i],i,*(p+i),i,&multiple[i],i,p+i);

    return 0;
}

















