#include<stdio.h>
#include<stdlib.h>

//struct date
//{
//    int day;
//    int month;
//    int year;
//};
//
//int main()
//{
//    struct date today;
//
//    today.day=23;
//    today.month=2;
//    today.year=2021;
//
//    printf("Today's Date is %i/%i/%i. \n",today.day,today.month,today.year%100);
//
//    return 0;
//
//}

//struct date
//{
//    int day;
//    int month;
//    int year;
//}today;
//
//int main()
//{
//    today.day=23;
//    today.month=2;
//    today.year=2021;
//
//    printf("Today's Date is %i/%i/%i. \n",today.day,today.month,today.year%100);
//
//    return 0;
//
//}
//struct date
//{
//    int day;
//    int month;
//    int year;
//};
//
//int main()
//{
//    struct date today={23,2,2021};;
//
//    printf("Today's Date is %i/%i/%i. \n",today.day,today.month,today.year%100);
//
//    return 0;
//
//}

//struct date
//{
//    int day;
//    int month;
//    int year;
//};
//
//int main()
//{
//    struct date today={23,2,2021};
//    struct date tdy={30,5};
//
//    printf("Today's Date is %i/%i/%i. \n",today.day,today.month,today.year%100);
//    printf("Today's Date is %i/%i. \n",tdy.day,tdy.month);
//    printf("Today's Date is %i/%i. \n",tdy.month,tdy.day);
//    printf("Today's Date is %i/%i. \n",tdy.month,tdy.year%100);
//
//    return 0;
//
//}


//struct date {int month; int day; int year;};
//
//int main()
//{
//    struct date today ={12,23,2021};
//    printf("%d",today.month);
//    return 0;
//}


//struct date
//{
//    int day;
//    int month;
//    int year;
//};
//
//int main()
//{
//    struct date mydate[5] ={{12,10,1998},{23,10,2021},{03,11,2020}};
//
//    printf("days = %d,%d,%d \n",mydate[0].day,mydate[1].day,mydate[2].day);
//
//    printf("New date = %d-%d-%d ",mydate[0].day,mydate[1].month,mydate[2].year);
//    return 0;
//}


//#include<string.h>
//
//struct date
//{
//    char name[10];
//    int byear;
//};
//
//int main()
//{
//    struct date mydate[5] ={{"reddy",1998},{"Harish",2021},{"Raja",2020}};
//
//    printf("days = %s - %d \n",mydate[0].name,mydate[0].byear);
//    printf("days = %s - %d \n",mydate[1].name,mydate[1].byear);
//    printf("days = %s - %d \n",mydate[2].name,mydate[2].byear);
//
//    return 0;
//}

/*   NESTED STRUCTURE   */


//struct time
//{
//    struct date
//    {
//        int day;
//        int month;
//        int year;
//        int hour;
//        int min;
//        int sec;
//    }dob;
//};
//
//int main()
//{
//    struct date dob ={05,05,1998,05,42,23};
//
//    printf("%d-%d-%d  %d:%d:%d",dob.day,dob.month,dob.year,dob.hour,dob.min,dob.sec);
//
//  //  printf("%d",stime.hour);
//
//    return 0;
//}



//struct time
//{
//    struct date
//    {
//        int day;
//        int month;
//        int year;
//    };
//
//    int hour;
//    int min;
//    int sec;
//};
//
//int main()
//{
//    struct date dob ={05,05,1998};
//    struct time stime={05,42,23};
//
//    printf("%d-%d-%d  %d:%d:%d",dob.day,dob.month,dob.year,stime.hour,stime.min,stime.sec);
//
//    return 0;
//}


//
//struct address
//{
//    char city[20];
//    int pin;
//    char phone[14];
//};
//struct employee
//{
//    char name[20];
//    struct address add;
//};
//void main ()
//{
//    struct employee emp;
//    printf("Enter employee information?\n");
//    scanf("%s %s %d %s",emp.name,emp.add.city, &emp.add.pin, emp.add.phone);
//    printf("Printing the employee information....\n");
//    printf("name: %s\nCity: %s\nPincode: %d\nPhone: %s",emp.name,emp.add.city,emp.add.pin,emp.add.phone);
//}



//struct time
//{
//    int hour;
//    int min;
//    int sec;
//};
//
//struct date
//{
//    int day;
//    int month;
//    int year;
//
//    struct time stime;
//};
//
//int main()
//{
//    struct date dob ={05,05,1998,05,42,23};
//
//    printf("%d-%d-%d  %d:%d:%d",dob.day,dob.month,dob.year,dob.stime.hour,dob.stime.min,dob.stime.sec);
//
//    return 0;
//}




//struct time
//{
//    int hour;
//    int min;
//    int sec;
//};
//
//struct date
//{
//    int day;
//    int month;
//    int year;
//};
//
//struct sdate
//{
//    struct date sdate;
//    struct time stime;
//};
//
//int main()
//{
//    struct sdate dob ={05,05,1998,05,42,23};
//
//    printf("%d-%d-%d  %d:%d:%d",dob.sdate.day,dob.sdate.month,dob.sdate.year,dob.stime.hour,dob.stime.min,dob.stime.sec);
//
//    return 0;
//}


/* Structures and Pointers */

//struct date
//{
//    int month;
//    int day;
//    int year;
//};
//
//int main()
//{
//    struct date today,*dp;
//    dp =&today;
//
//    dp -> month =2;
//    dp -> day =23;
//    dp -> year =2021;
//
//    printf("Today is %d-%d-%d",dp->day,dp->month,dp->year);
//
//    return 0;
//}

//
//struct name
//{
//    char first[20];
//    char last[20];
//};
//
//struct pname
//{
//    char *first;
//    char *last;
//};
//
//void main()
//{
//    struct name veep ={"Talia","summer"};
//    struct pname treas ={"Talia","summer"};
//
//    printf("%s and %s\n\n",veep.first,treas.first);
//
//    printf("%s array has %d bytes and %s pointer has %d bytes\n",veep.first,sizeof(veep.first),treas.first,sizeof(treas.first));
//    printf("%s array has %d bytes and %s pointer has %d bytes\n\n",veep.last,sizeof(veep.last),treas.last,sizeof(treas.last));
//
//
////    printf("\n%d bytes",sizeof(veep.first));
////    printf("\n%d bytes",sizeof(treas.first));
//
//    return ;
//}


//void getinfo(struct names *pst)
//{
//    char tem[10];
//    printf("please enter 1st name:\n");
//    s_gest(tem);
//
//    // allocate memory to hold name
//    pst ->fname =(char*)malloc(strlen(tem)+1*sizeof(char));
//
//    //copy name to allocated memory
//    strcpy(pst ->fname,tem);
//    printf("please enter last name: \n");
//    s_gets(tem);
//
//
//    pst ->lname= (char*)malloc(strlen(tem)+1);
//    strcpy(pst->lname,tem);
//
//
//}


/* Structures and Functions */

//struct funds
//{
//    char bank[100];
//    double bankfund;
//    char save[100];
//    double savefund;
//};
//
//double sum(struct funds moolah)
//{
//    return (moolah.bankfund+moolah.savefund);
//}
//
//int main()
//{
//    struct funds stan = {"reddy-melonBank",100.455,"Lucky's saving bank",900.255};
//
//    printf("stan total of $ %.2f.\n",sum(stan));
//
//    return 0;
//}


//   Challenge - 1  //

//struct employee
//{
//    char name[30];
//    char date[15];
//    float salary;
//};
//
//int main()
//{
//    struct employee emp = {"Pitchi Reddy","06-06-2022",65000.568};
//
//    printf("Name :%s\n",emp.name);
//    printf("Date :%s\n",emp.date);
//    printf("Salary :%.2f\n\n\n",emp.salary);
//
//    printf("Enter Name :");
//    scanf("%s",emp.name);
//    printf("Enter Date :");
//    scanf("%s",emp.date);
//    printf("Enter Salary :");
//    scanf("%f",&emp.salary);
//
//
//    printf("\n\nName :%s\n",emp.name);
//    printf("Date :%s\n",emp.date);
//    printf("Salary :%.2f\n",emp.salary);
//
//    return 0;
//}































