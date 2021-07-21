#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//int main(void)
//{
//    char str1[]="A string to be copied";
//    char str2[50];
//
//    strcpy(str2,str1);
//
//    printf("%s\n",str2);
//    return 0;
//}

//int main(void)
//{
//    int i;
//    char mulitple[]="a string";
//    char *p=mulitple;
//
//    for (i=0;i<strlen(mulitple);++i)
//    {
//        printf("multiple[%d]=%c  *(P+%d) =%c  *p+%d=%c &multiple[%d]=%p  p+%d=%p  *p+%d=%p\n",i,mulitple[i],i,*(p+i),i,*p+i,i,&mulitple[i],i,p+i,i,*p+i);
//    }
//}




//int stringlen(char const *str);
//int main()
//{
//    printf("length of string is %d\n",stringlen("I am"));
//    printf("length of string is %d\n",stringlen("I am good"));
//    printf("length of string is %d\n",stringlen("I am good at skills"));
//    printf("length of string is %d\n",stringlen("I am good at skills to get job"));
//}
//
//int stringlen(char const *str)
//{
//    const char *lastaddres=str;
//
//    while(*lastaddres)
//    {
//        ++lastaddres;
//    }
//    return lastaddres-str;
//}





// /* Example pass by values */
//
//void swap(int x,int y)
//{
//    int temp;
//    temp=x;
//    x=y;
//    y=temp;
//    return 0;
//}
//
//int main()
//{
//    int a=100;
//    int b=200;
//
//    printf("before swap a:%d\n",a);
//    printf("before swap b:%d\n",b);
//
//    /* Calling function swap */
//    swap(a,b);
//    printf("after swap a:%d\n",a);
//    printf("after swap b:%d\n",b);
//
//    return 0;
//}



/* Example using poiners to pass data */

//void swap(int *x,int *y)
//{
//    int temp;
//    temp=*x;
//    *x=*y;
//    *y=temp;
//    return;
//}
//
//int main()
//{
//    int a=100;
//    int b=200;
//
//    printf("before swap a:%d\n",a);
//    printf("before swap b:%d\n",b);
//
//    /* Calling function swap */
//    swap(&a,&b);
//    printf("after swap a:%d\n",a);
//    printf("after swap b:%d\n",b);
//
//
//    return 0;
//}

/* Square Number */

//void square(int *const x);
//
//int main()
//{
//    int num=11;
//
//    square(&num);
//    printf("The square of num is %d\n",num);
//
//}
//
//void square(int *const x)
//{
//    *x=(*x)*(*x);
//}

/* Malloc, Calloc, Realloc */

// Example

//int main(void)
//{
//    char *str = NULL;
//
//    str =(char*)malloc(25*sizeof(char));
//
//    strcpy(str,"jason");
//    printf("string = %s ,Address = %p\n",str,str);
//
//    str =(char*)realloc(str,25);
//    strcat(str,".com");
//
//    printf("string = %s ,Address = %p\n",str,str);
//
//    str =(char*)calloc(25,sizeof(char));
//    strcpy(str,"ravi");
//
//    printf("string = %s ,Address = %p\n",str,str);
//
//    free(str);
//    return 0;
//
//}

// Challange - 3

int main()
{
    int size;
    char *text = NULL;

    printf("Enter limit of text :");
    scanf("%d",&size);

    text = (char*)malloc(size*sizeof(char));

    if(text!=NULL)
    {
        printf("Enter some Tex :");

        scanf(" ");
        gets(text);
        printf("Inputted text is:%s\n",text);
    }

    free(text);
    text = NULL;
    return 0;

}
























