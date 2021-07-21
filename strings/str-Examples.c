/* Baics */

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//   // int strlen=0;
//    char str[100]="Reddy";
//    char m[10]="Ramuji";
//    char size[]="Raju Is Good Boy";
//
//    printf("so string is %s\n",str);
//    printf("%zu\n",strlen(size));
////    printf("Enter String:");
////    scanf("%s\n",st);
//    printf("%s",m);
//
//    return 0;
//}

/* Length */

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//    char m[]="my String";
//    printf("The length of string :%zu",strlen(m));
//
//    return 0;
//}

/* Part 2 */

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//    char m[] ="reddy";
//
//    printf("%d",strlen(m));
//    return 0;
//
//}

/* Count String */

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//    char str1[] ="To be or not to be";
//    char str2[] =",That is the question";
//    unsigned int count = 0;
//
//    while (str1[count]!='\0')
//    {
//        printf("No of character is %d\n\n",count);
//        ++count;
//    }
//    count =0;
//    while (str2[count] !=0)
//    {
//        printf("No of character is %d\n\n",count);
//        ++count;
//    }
//    return 0;
//}

/* Define */

//#include<stdio.h>
//#include<string.h>
//
//#define TAXRATE 11
//
//int main()
//{
//    int n=10;
//    int r=12;
//    int result1=0;
//    int result2=0;
//
//    result1 = n*r;
//    result2 = TAXRATE*n;
//
//    printf("%d\n",result1);
//    printf("%d",result2);
//    return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//    // Length
//
//    char m[] ="reddy";
//    printf("%d\n\n",strlen(m));
//
//    // strcpy() Copying
//
//    char src[50],dest[50];
//
//    strcpy(src,"I am Preparing");
//    strcpy(dest,"For Getting A Job");
//
//
//    printf("%s has %d\n",src,strlen(src));
//    printf("%s has %d\n\n",dest,strlen(dest));
//
//    // StrnCpy Copying
//
//    char s[50],d[50];
//
//    strncpy(src,"I am Preparing",2);
//    strncpy(dest,"For Getting A Job",12);
//
//    printf("%s has %d\n",src,strlen(s));
//    printf("%s has %d\n\n",dest,strlen(d));
//
//    // Concat strcat()
//
//    printf("%s\n",strcat(src,dest));
//    printf("%s\n",strncat(src,dest,8));
//    printf("%s\n\n",strncat(src,dest,sizeof(dest)-1));
//
//    // Comparing Strings
//
//    printf("Strcmp(\"A\",\"A\") is ");
//    printf("%d\n",strcmp("A","A"));
//
//    printf("Strcmp(\"A\",\"a\") is ");
//    printf("%d\n",strcmp("A","a"));
//
//    printf("Strcmp(\"a\",\"A\") is ");
//    printf("%d\n",strcmp("a","A"));
//
//    printf("Strcmp(\"A\",\"B\") is ");
//    printf("%d\n",strcmp("A","B"));
//
//    printf("Strcmp(\"C\",\"A\") is ");
//    printf("%d\n",strcmp("A","C"));
//
//    printf("Strcmp(\"Aa\",\"A\") is ");
//    printf("%d\n",strcmp("Aa","A"));
//
//    printf("Strcmp(\"Aa\",\"Aa\") is ");
//    printf("%d\n",strcmp("Aa","Aa"));
//
//    printf("Strcmp(\"Aa\",\"aA\") is ");
//    printf("%d\n",strcmp("Aa","aA"));
//
//
//    return 0;
//}

/* Using IF for Comparision */

//#include <stdio.h>
//
//int main()
//{
//    char s[]="astro";
//
//    if(strncmp("astrology",s,5)==0)
//    {
//        printf("Found : Astrology");
//    }
//    if(strncmp("ast
//               ounding",s,5)==0)
//    {
//        printf("Found : astrounding");
//    }
//
//    return 0;
//}

/* Searching ,Tokenizing and Analyzing Strings */

/* Searching Strings */

// With Character strchr()
//
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//    char str[]="The quick brown fox";
//    char ch = 'b';
//    char *pGot_char= NULL;
//    pGot_char =strchr(str,ch);
//
//    printf("%s\n",pGot_char);
//    return 0;
//}

//With String strstr()
//#include<stdio.h>
//
//int main()
//{
//    char str[]="Every dog has his day";
//    char word[] = "dog";
//    char *pGot_char= NULL;
//
//    pGot_char = strstr(str,word);
//
//    printf("%s\n",pGot_char);
//
//    return 0;
//}

///* Tokenizing String */
//
//#include<stdio.h>
//
//int main()
//{
//    char str[]="Hello-How are You-I am Good";
//    char word[2] = "-";
//    char *token;
//
//    token = strtok(str,word);
//
//    while(token != NULL)
//    {
//        printf("%s\n",token);
//        token =strtok(NULL,word);
//    }
//
//    return 0;
//}

///* Analysis Strings */

//#include <stdio.h>
//#include<string.h>
//
//int main()
//{
//    char but[100];
//    int nletter =0;
//    int ndigit =0;
//    int npunct =0;
//
//    printf("Enter an inserting string less then %d Characters:",100);
//    scanf("%s\n",but);
//
//    int i=0;
//    while(but[i])
//    {
//        if(isalpha(but[i]))
//            ++nletter;
//        else if(isdigit(but[i]))
//            ++ndigit;
//        else if(ispunct(but[i]))
//            ++npunct;
//        ++i;
//    }
//
//    printf("\n This String Contain %d letters,%d Digits and %d Puncations marks\n",nletter,ndigit,npunct);
//
//    return 0;
//}

/* String Conversion */
//#include<stdio.h>
//#include<stdio.h>
//
//int main()
//{
//    char text[100]="i am preparing for job";
//    char sub[40]="I GOT WONDERFUL JOB";
//    int i;
//
////    printf("Enter Text:");
////    scanf("%s\n\n",text);
////
////    printf("Enter substring:");
////    scanf("%s\n\n",sub);
//
//
//
//    printf("First String:%s\n",text);
//    printf("Second String:%s\n",sub);
//
//    for(i=0;(text[i]=(char)toupper(text[i]))!='\0';++i){
//        printf("%s\n",text);
//        ++i;
//    }
//    for(i=0;(sub[i]=(char)tolower(sub[i]))!='\0';++i){
//        printf("%s\n",sub);
//        ++i;
//    }
//
////    printf("Second string %s found in first.",((strstr(text,sub)==NULL)?"was not";"was"));
//    return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int main() {
//   char s[100];
//   int i;
//   printf("\nEnter a string : ");
//   scanf("%s",s);   //  gets(s);
//
//   for (i = 0; s[i]!='\0'; i++) {
//      if(s[i] >= 'A' && s[i] <= 'Z') {
//         s[i] = s[i] + 32;
//      }
//   }
//   printf("\nString in Upper Case = %s", s);
//   return 0;
//}

/*************************************************/

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//   float value =0.0;
//
//   char str[]="3.5 2.5 1.26";
//   char const s[2]=" ";
//   char *value;
//   char *pstr = str;
//   char *ptr=NULL;
//
//   value=strtok(str,s);
//
//   while(value!=NULL)
//   {
//       values=strtoi
//       printf("value=%s\n",value);
//       value=strtok(NULL,s);
//   }
//    return 0;
//}


//#include<stdio.h>
//#include <stdlib.h>
//
//int main() {
//    // Converting a numeric string
//    char str[10] = "122";
//    int x = atoi(str);
//    float f=atof(str);
//    long l=atol(str);
//
//    printf("Converting '122': %d\n", x);
//    printf("Converting '122': %.2f\n", f);
//    printf("Converting '122': %li\n\n\n", l);
//
//    // Converting an alphanumeric string
//    char str2[10] = "Hello!";
//    x = atoi(str2);
//    f=atof(str2);
//    printf("Converting 'Hello!': %d\n", x);
//    printf("Converting 'Hello!': %.2f\n\n", f);
//
//    // Converting a partial string
//    char str3[10] = "99Hello!";
//    x = atoi(str3);
//    f=atof(str3);
//
//    printf("Converting '99Hello!': %.2f\n", f);
//    printf("Converting '99Hello!': %d\n", x);
//    return 0;
//}













