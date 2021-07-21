/* chat-10 */

#include<stdio.h>
#include<stdbool.h>

int stringLength(const char str[]);
bool equalString(const char s1[],const char s2[]);

int main()
{
    const char w1[]="i am good at skills";
    const char w2[]="i am ready to get job";

    printf("w1 has %d letters and w2 has %d letters\n\n",stringLength(w1),stringLength(w2));

    // Bool Expresion

    printf("%d\n",equalString("12345","12345"));
    printf("%d\n",equalString("54321","54321"));
    printf("%d\n",equalString("12345","54321"));

    return 0;
}

int stringLength(const char str[])
{
    int count=0;
    while(str[count] !=0)
    {
        ++count;
    }
    return count;
}

bool equalString(const char s1[],const char s2[])
{
    int i=0;
    bool isequals;

    while(s1[i]==s2[i] &&
          s1[i] !='\0' &&
          s2[i] !='\0')
        ++i;
    if(s1[i]=='\0' && s2[i]=='\0')
        isequals = true;
    else
        isequals=false;

    return isequals;
}


