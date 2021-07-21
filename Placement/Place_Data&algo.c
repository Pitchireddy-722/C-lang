
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


/// Data Stru & Algo ////////////

/// Linked list //

//struct node
//{
//    int data;
//    struct node* next;
//};
//struct node* head;
//
//void Insert(int x)
//{
//    struct node* temp=(struct node*)malloc(sizeof(struct node*));
//    temp->data=x;
//    temp->next=head;
//    head=temp;
//}
//
//void print()
//{
//    struct node* temp=head;
//    while(temp!=NULL)
//    {
//        printf("%d",temp->data);
//        temp=temp->next;
//    }
//    printf("\n");
//}
//
//int main()
//{
//    head=NULL;
//    printf("How many Numbers: ");
//    int n,i,x;
//    scanf("%d",&n);
//    for(i=0;i<n;i++)
//    {
//        printf("Number = ");
//        scanf("%d",&x);
//        Insert(x);
//        print();
//    }
//}


/// insert Linked
//
//struct node
//{
//    int data;
//    struct node* next;
//};
//
//struct node* head;
//
//void Insert(int data,int n)
//{
//    struct node* temp1=(struct node*)malloc(sizeof(struct node*));;
//    temp1->data=data;
//    temp1->next=NULL;
//
//    if(n==1)
//    {
//        temp1->next=head;
//        head=temp1;
//        return;
//    }
//
//    struct node* temp2=head;
//    int i;
//
//    for(i=0;i<n-2;i++)
//    {
//        temp2=temp2->next;
//    }
//    temp1->next=temp2->next;
//    temp2->next=temp1;
//}
//
//void print()
//{
//    struct node* temp=head;
//
//    while(temp!=NULL)
//    {
//        printf("%d\t",temp->data);
//        temp=temp->next;
//    }
//    printf("\n");
//}
//
//int main()
//{
//    head=NULL;
//    Insert(2,1);
//    Insert(3,2);
//    Insert(4,1);
//    Insert(5,2);
//    print();
//}


/// Delete Node

//struct node
//{
//    int data;
//    struct node* next;
//};
//
//struct node* head;
//
//void Insert(int x)
//{
//    struct node* temp=(struct node*)malloc(sizeof(struct node*));
//    temp->data=x;
//    temp->next=head;
//    head=temp;
//}
//
//void print()
//{
//    struct node* temp=head;
//    while(temp!=NULL)
//    {
//        printf("%d\t",temp->data);
//        temp=temp->next;
//    }
//    printf("\n");
//}
//
//void Delete(int n)
//{
//    struct node* temp1=head;
//    if(n==1)
//    {
//        head=temp1->next;
//        free(temp1);
//        return;
//    }
//    int i;
//    for(i=0;i<n-2;i++)
//    {
//        temp1=temp1->next;
//    }
//    struct node* temp2=temp1->next;
//    temp1->next=temp2->next;
//    free(temp2);
//}
//
//int main()
//{
//    head=NULL;
//    Insert(1);
//    Insert(2);
//    Insert(3);
//    Insert(4);
//    Insert(5);
//    Insert(6);
//    print();
//    int n;
//    printf("enter delete node : ");
//    scanf("%d",&n);
//    Delete(n);
//    print();
//}


/// Search 1st and last

int binarysearch(int a[],int n,int x,bool search)
{
    int low=0,high=n-1,result=-1;

    while(low<=high)
    {
        int mid=(low+high)/2;


        if(a[mid]==x)
        {
            result=mid;
            if(search)
            {
                high=mid-1;
            }else
            {
                low=mid+1;
            }
        }
        else if(x<a[mid])
            high=mid-1;
        else
            low=mid+1;
    }
    return result;
}

int main()
{
    int a[]={1,1,3,3,7,5,5,5,9,9,11};
    int n=sizeof(a)/sizeof(a[0]);
    int x;
    printf("enter no: ");
    scanf("%d",&x);



    int F_index=binarysearch(a,n,x,true);
    printf("count of %d is %d\n",x,F_index);

    int l_index=binarysearch(a,n,x,false);
    printf("count of %d is %d\n",x,l_index);
}


/// Index of element

//int binarysearch(int a[],int n,int x)
//{
//    int low=0,high=n-1;
//
//    while(low<=high)
//    {
//        int mid=(low+high)/2;
//
//
//        if(a[mid]==x)
//        {
//            return x = mid;
//        }
//        else if(x<a[mid])
//            high=mid-1;
//        else
//            low=mid+1;
//    }
//}
//
//int main()
//{
//    int a[]={1,1,3,3,5,5,5,9,9,11};
//    int n=sizeof(a)/sizeof(a[0]);
//    int x;
//    printf("enter no: ");
//    scanf("%d",&x);
//
//
//
//    int F_index=binarysearch(a,n,x);
//    printf("count of %d is %d\n",x,F_index);
//
//}
