
/*  1  */

//#include <stdio.h>
//
//int main()
//{
//    int integer = 22;
//   float floatvar = 22.45;
//   double doublevar = 22.39e+1;
//   char charvar ='w';
//   _Bool boolvar = 0;
//
//   printf("Integer var is : %d\n",integer);
//   printf("Float var f is : %f\n",floatvar);
//   printf("Float var g is : %g\n",floatvar);
//   printf("Double var is : %g\n",doublevar);
//   printf("Double var is : %e\n",doublevar);
//   printf("character var is: %c\n",charvar);
//   printf("Boolean var is :%i\n",boolvar);
//    return 0;
//}

//// Float and Double

//#include <stdio.h>
//
//int main()
//{
//   float floatvar = 22.45;
//   double doublevar = 22.39e+1;
//;
//   printf("Float var f is : %f\n",floatvar);
//   printf("Float var e is : %e\n",floatvar);
//   printf("Float var g is : %g\n",floatvar);
//   printf("Float var a is : %a\n",floatvar);
//   printf("******************\n\n");
//   printf("Double var f is : %f\n",doublevar);
//   printf("Double var e is : %e\n",doublevar);
//   printf("Double var g is : %g\n",doublevar);
//   printf("Double var a is : %a\n",doublevar);
//    return 0;
//}
////////////////////////////////////////////////////////
//#include <stdio.h>
//
//int main()
//{
//    char nam='\n';
//    char n='a';
//    printf("%c",nam);
//    printf("%c",n);
//}

/*  2  */

//#include <stdio.h>
//
//int main()
//{
//    float x=3.99999,y=3.123456789;
//
//    printf("%.2f\n",x);
//    printf("%.5f\n",y);
//    printf("%.6f\n",y);
//
//    return 0;
//}

/*  3  */


//#include <stdio.h>
//#include <stdbool.h>
//
//int main()
//{
//    bool myboolean = true;
//    bool anotherBoolean = false;
//
//    printf("Bool cases \ntrue = %i \nfalse = %i", myboolean, anotherBoolean);
//
//    return 0;
//}


/*  4  */

//#include <stdio.h>
//#include <stdbool.h>
//
//int main()
//{
//    enum gender {female,male};
//
//    enum gender PitchiReddy = male;
//    enum gender She = female;
//    printf("Pitchi Reddy is %i and Rakshitha is %i",PitchiReddy, She);
//
//    return 0;
//}

///////////////////////////////
//#include <stdio.h>
//#include <stdbool.h>
//
//int main()
//{
//    enum gender {female,male};
//
//    enum gender mygen;
//    mygen=male;
//
//    enum gender another=female;
//
//    bool ismale=(mygen==another);
//    printf("%d",ismale);
//
//    return 0;
//}
///*  5  */

//#include <stdio.h>
//
//int main(int argc, char *argv[])
//{
//    int noofArguments = argc;
//    char *argument1 = argv[0];
//    char *argument2 = argv[1];
//
//    printf("No of Arguments : %i\n", noofArguments);
//    printf("Argument1 is program name : %s\n", argument1);
//    printf("Arugment 2 is common line arument : %s\n", argument2);
//
//    return 0;
//}

/* CHALLENGE -1  */
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    double width = 12.6;
//    double Height = 23.8;
//    double parameter = 0.0;
//    double area = 0.0;
//
//    parameter = 2 *(width+Height);
//    area =width*Height;
//
//    printf("Parameter of Rectangle = %g\n", parameter);
//    printf("Area of Rectangle = %g\n",area);
//
//    return 0;
//}

/* Method-2 */



/* Challenge 2 */

// Method-1

//#include <stdio.h>
//
//int main()
//{
//    enum company {GOOGLE,FACEBOOK,XEROX,YAHOO,EBAY,MICROSOFT};
//
//    enum company var1 = XEROX;
//    enum company var2 = GOOGLE;
//    enum company var3 = EBAY;
//
//    printf("Positions of Companies \nXEROX is %i\nGOOGLE is %i\nEBAY is %i\n", var1, var2, var3);
//
//    return 0;
//}


// Method-1

//#include <stdio.h>
//
//int main()
//{
//    enum company {GOOGLE,FACEBOOK,XEROX,YAHOO=10,EBAY,MICROSOFT};
//
//    enum company var1 = XEROX;
//    enum company var2 = GOOGLE;
//    enum company var3 = EBAY;
//
//    printf("Positions of Companies \nXEROX is %i\nGOOGLE is %i\nEBAY is %i\n", var1, var2, var3);
//
//    return 0;
//}


