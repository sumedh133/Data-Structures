#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <conio.h>
//modular programming (functions)
int main();
void array();
#define maxArrSize 1000

void acceptArray();
void displayArr();
void insertEndArr();
void insertPosArr();
void deleteAnyElementArr();
void deleteLastElementArr();
void reverseArr();
void maxArr();
void minArr();
void searchArr();
void linearSearchArr();
void binarySearchArr();
int binarySearchArrRec();
void sortArr();
void bubbleSortArr();
void bubbleSortArr_forBinarySearchArr();
void insertionSortArr();
void selectionSortArr();
void quickSortArrRecNoPartition();
void quickSortArr();
void quickSortArrRec();
int partition_QuickSortArr();
void mergeSortArr();
void merge_mergeSortArr();
void mergeSortArrRec();

void array(int n,int a[])
{
    sleep(1);
    system("cls");
    sleep(1);
    printf("\nOPERATIONS:\n");
    printf("1.View array elements\n");
    printf("2.Insert an element at end\n");
    printf("3.Insert an element at any position\n");
    printf("4.Delete Element at any position\n");
    printf("5.Delete last element\n");
    printf("6.Find minimum element\n");
    printf("7.Find maximum element\n");
    printf("8.Reverse the array\n");
    printf("9.Search an element in array\n");
    printf("10.Sort the array\n");
    printf("11.Go back to Data Structures selection screen\n");
    start:
    printf("Enter what operation(index) you want to perform?");
    int choice;
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
            displayArr(n,a);
            break;
        }
        case 2:
        {
            insertEndArr(n,a);
            break;
        }
        case 3:
        {
            insertPosArr(n,a);
            break;
        }
        case 4:
        {
            deleteAnyElementArr(n,a);
            break;
        }
        case 5:
        {
            deleteLastElementArr(n,a);
            break;
        }
        case 6:
        {
            minArr(n,a);
            break;
        }
        case 7:
        {
            maxArr(n,a);
            break;
        }
        case 8:
        {
            reverseArr(n,a);
            break;
        }
        case 9:
        {
            searchArr(n,a);
            break;
        }
        case 10:
        {
            sortArr(n,a);
            break;
        }
        case 11:
        {
            main();
            break;
        }
        default:
        {
            printf("invalid input");
            goto start;
        }
    }
    return ;
}
void acceptArray()
{
    sleep(1);
    system("cls");
    sleep(1);
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int a[maxArrSize];
    int i;
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    array(n,a);
    return;
}
void deleteLastElementArr(int n,int a[])
{
    sleep(1);
    system("cls");
    sleep(1);
    n--;
    printf("Last element deleted");
    getch();
    array(n,a);
    return;
}
void maxArr(int n,int a[])
{
    sleep(1);
    system("cls");
    sleep(1);
    int i;
    int max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    printf("maximum element is %d",max);
    getch();
    array(n,a);
    return;
}
void minArr(int n,int a[])
{
    sleep(1);
    system("cls");
    sleep(1);
    int i;
    int min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
        min=a[i];
    }
    printf("mainimum element is %d",min);
    getch();
    array(n,a);
    return;
}
void reverseArr(int n,int a[])
{
    sleep(1);
    system("cls");
    sleep(1);
    int i,temp;
    for(i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
    printf("Array has been reversed");
    getch();
    array(n,a);
    return;
}
void displayArr(int n,int a[])
{
    sleep(1);
    system("cls");
    sleep(1);
    printf("array has %d elements\n",n);
    printf("Elements in arrray are:\n");
    int i;
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    getch();
    array(n,a);
    return;
}
void insertEndArr(int n,int a[])
{
    sleep(1);
    system("cls");
    sleep(1);
    int x;
    n=n+1;
    printf("Enter element to insert at end:");
    scanf("%d",&x);
    a[n-1]=x;
    printf("inserted");
    getch();
    array(n,a);
    return;
}
void insertPosArr(int n,int a[])
{
    sleep(1);
    system("cls");
    sleep(1);
    printf("enter element to insert:");
    int x;
    scanf("%d",&x);
    printf("Elements in arrray are:\n");
    int i;
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    printf("\nenter which index to enter at:");
    int ind;
    scanf("%d",&ind);
    n++;
    for(i=n;i>ind;i--)
    a[i]=a[i-1];
    a[ind]=x;
    printf("\ninserted");
    getch();
    array(n,a);
    return;
}
void deleteAnyElementArr(int n,int a[])
{
    sleep(1);
    system("cls");
    sleep(1);
    printf("Elements in arrray are:\n");
    int i,ind;
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    printf("\nEnter index of element to delete:");
    scanf("%d",&ind);
    for(i=ind;i<n;i++)
    a[i]=a[i+1];
    n--;
    printf("\ndeleted");
    getch();
    array(n,a);
    return;
}
void searchArr(int n,int a[])
{
    sleep(1);
    system("cls");
    sleep(1);
    printf("\nSEARCH ALGORITHMS:\n");
    printf("1.Linear Search\n");
    printf("2.Binary Search\n");
    printf("3.Go back to Operation selection screen\n");
    start:
    printf("Enter what Algorithm(index) you want to perform?");
    int choice;
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
            linearSearchArr(n,a);
            break;
        }
        case 2:
        {
            binarySearchArr(n,a);
            break;
        }
        case 3:
        {
            array(n,a);
            break;
        }
        default:
        {
            printf("invalid input");
            goto start;
        }
    }
    return ;
}
void linearSearchArr(int n,int a[])
{
    sleep(1);
    system("cls");
    sleep(1);
    int x;
    printf("enter element to search:");
    scanf("%d",&x);
    int pos=-1;
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        pos=i;
    }
    if(pos==-1)
    printf("\nElement is not present in the array");
    else
    printf("\nElement is present at index %d",pos);
    getch();
    array(n,a);
    return;
}
int binarySearchArrRec(int a[],int beg,int end,int x)
{
    if(end>beg)
    {
        int mid=(beg+end)/2;
        if(a[mid]==x)
        return mid;
        else if(a[mid]>x)
        return binarySearchArrRec(a,beg,mid-1,x);
        else 
        return binarySearchArrRec(a,mid+1,end,x);
    }
    return -1;
}
void binarySearchArr(int n,int a[])
{
    sleep(1);
    system("cls");
    sleep(1);
    int x;
    printf("enter element to search:");
    scanf("%d",&x);
    int pos=-1;
    bubbleSortArr_forBinarySearchArr(n,a);
    if(binarySearchArrRec(a,0,n-1,x)==-1)
    printf("\nElement is not present in the array");
    else
    printf("\nElement is present ");//no giving index in binary search as it will be index of sorted array
    getch();
    array(n,a);
    return;
}
void sortArr(int n,int a[])
{
    sleep(1);
    system("cls");
    sleep(1);
    printf("\nSORT ALGORITHMS:\n");
    printf("1.Bubble sort\n");
    printf("2.Insertion sort\n");
    printf("3.Selection sort\n");
    printf("4.Quick sort\n");
    printf("5.Merge sort\n");
    printf("6.Go back to Operation selection screen\n");
    start:
    printf("Enter what Algorithm(index) you want to perform?");
    int choice;
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
            bubbleSortArr(n,a);
            break;
        }
        case 2:
        {
            insertionSortArr(n,a);
            break;
        }
        case 3:
        {
            selectionSortArr(n,a);
            break;
        }
        case 4:
        {
            quickSortArr(n,a);
            break;
        }
        case 5:
        {
            mergeSortArr(n,a);
            break;
        }
        case 6:
        {
            array(n,a);
            break;
        }
        default:
        {
            printf("invalid input");
            goto start;
        }
    }
    return ;
}
void bubbleSortArr_forBinarySearchArr(int n,int a[])
{
    int i,j,temp,swap;
    for(i=0;i<n-1;i++)
    {
        swap=0;
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swap++;
            }
        }
        if(swap==0)
        break;
    }
    printf("Array has been sorted in ascending order using bubble sort");
    return;
}
void bubbleSortArr(int n,int a[])
{
    sleep(1);
    system("cls");
    sleep(1);
    int i,j,temp;
    int swap;
    for(i=0;i<n-1;i++)
    {//this is optimized bubble swap with best case time complexity =O(n)
        swap=0;
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swap++;
            }
        }
        if(swap==0)
        break;
    }
    printf("Array has been sorted in ascending order using selection sort");
    printf("\nBest case time complexity is O(n)\nWorst case time complexity is O(n square)");
    getch();
    array(n,a);
    return;
}
void insertionSortArr(int n,int a[])
{
    sleep(1);
    system("cls");
    sleep(1);
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
    printf("Array has been sorted in ascending order using insertion sort");
    printf("\nBest case time complexity is O(n)\nWorst case time complexity is O(n square)");
    getch();
    array(n,a);
    return;
}
void selectionSortArr(int n,int a[])
{
    sleep(1);
    system("cls");
    sleep(1);
    int i, j, min_idx,temp;
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
        {
            if (a[j] < a[min_idx])
            min_idx = j;
        }
        if (min_idx!=i)
        {
            temp=a[min_idx];
            a[min_idx]=a[i];
            a[i]=temp;
        }      
    }
    printf("Array has been sorted in ascending order using selection sort");
    printf("\nBest case time complexity is O(n square)\nWorst case time complexity is O(n square)");
    getch();
    array(n,a);
    return;
}
void quickSortArr(int n,int a[])
{
    sleep(1);
    system("cls");
    sleep(1);
    printf("1.Quick sort method 1 i.e. using no seperate function for partition\n");
    printf("2.Quick sort method 2 i.e. using seperate function for partition\n");
    printf("3.Go back to Sorting algorithm selection screen\n");
    start:
    printf("Enter what Method(index) you want to perform?");
    int choice;
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
            quickSortArrRecNoPartition(a,0,n-1);
            break;
        }
        case 2:
        {
            quickSortArrRec(a,0,n-1);
            break;
        }
        case 3:
        {
            sortArr(n,a);
            break;
        }
        default:
        {
            printf("invalid input");
            goto start;
        }
    }
    printf("Array has been sorted in ascending order using quick sort");
    printf("\nBest case time complexity is O(n log n)\nWorst case time complexity is O(n square)");
    getch();
    array(n,a);
    return;
}
void quickSortArrRecNoPartition(int a[],int start,int end)
{
    sleep(1);
    system("cls");
    sleep(1);
    int i,j,pivot,temp;
    pivot=end;
    i=start;
    j=end;
    if(start<end)
    {
        while(i<j)
        {
            while(a[i]<=a[pivot] && i<end)
            i++;
            while(a[j]>a[pivot] && j>0)
            j--;
            if(i<j)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        temp=a[pivot];
        a[pivot]=a[i];
        a[i]=temp;
        quickSortArrRecNoPartition(a,start,j-1);
        quickSortArrRecNoPartition(a,j+1,end);
    }
    return;
} 
int partition_QuickSortArr(int a[], int start, int end)
{
    int pivot=a[end];
    int i=start-1;
    for(int j=start;j<=end-1;j++)
    {
        if(a[j]<pivot)
        {
            i++;
            int t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    int t=a[i+1];
    a[i+1]=pivot;
    pivot=t;
    return i+1;
}
void quickSortArrRec(int a[],int start,int end)
{
    if(start<end)
    {
        int p=partition_QuickSortArr(a,start,end);
        quickSortArrRec(a,start,p-1);
        quickSortArrRec(a,p+1,end);
    }
    return;
}
void mergeSortArr(int n,int a[])
{
    sleep(1);
    system("cls");
    sleep(1);
    mergeSortArrRec(a,0,n-1);
    printf("Array has been sorted in ascending order using merge sort");
    printf("\nBest case time complexity is O(n log n)\nWorst case time complexity is O(n log n)");
    getch();
    array(n,a);
    return;
}
void mergeSortArrRec(int a[],int l,int r)
{
    if(l<r)
    {
        int m = l + (r - l)/2;
        mergeSortArrRec(a, l, m);
        mergeSortArrRec(a, m + 1, r);
        merge_mergeSortArr(a, l, m, r);
    }
    return;
}
void merge_mergeSortArr(int a[],int l,int m,int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = a[l + i];
    for (j = 0; j < n2; j++)
        R[j] = a[m + 1 + j];
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        a[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        a[k] = R[j];
        j++;
        k++;
    }
    return;
}



void linkedList();

void acceptLL();
void insertElementEndSLL();
void insertElementStartSLL();
void insertElementAnyPosSLL();
void acceptSLL();
void displaySLL();
void countNodesSLL();
void insertElementEndSLL();
void insertElementStartSLL();
void insertElementAnyPosSLL();
void deleteFirstNodeSLL();
void deleteLastNodeSLL();
void deleteAnyNodeSLL();
void maxElementSLL();
void minElementSLL();
void reverseSLL();

void acceptDLL();
void doublyLinkedList();
void displayDLL();
void insertElementEndDLL();
void insertElementStartDLL();
void insertElementAnyPosDLL();
void deleteFirstNodeDLL();
void deleteLastNodeDLL();
void deleteAnyNodeDLL();
void maxElementDLL();
void minElementDLL();
void reverseDLL(); 

void acceptCLL();
void circularLinkedList();
void displayCLL();
void insertElementEndCLL();
void insertElementStartCLL();
void insertElementAnyPosCLL();
void deleteElementEndCLL();
void deleteElementStartCLL();
void deleteElementAnyPosCLL();

struct node
{
    int data;
    struct node *link;
};
void LinkedList(struct node *head)
{
    sleep(1);
    system("cls");
    sleep(1);
    printf("\nOPERATIONS ON SLL:\n");
    printf("1.View Linked List elements elements\n");
    printf("2.Insert an element at beginning of list\n");
    printf("3.Insert an element at end of list \n");
    printf("4.Insert an element at any position in the list\n");
    printf("5.Delete first node in linked list\n");
    printf("6.Delete last node in linked list\n");
    printf("7.Delete nth node in linked list\n");
    printf("8.View maximum element in list\n");
    printf("9.View mainimum element in list\n");
    printf("10.Reverse the list\n");
    printf("11.Go back to Data Structures selection screen\n");
    start:
    printf("Enter what operation(index) you want to perform?");
    int choice;
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
            displaySLL(head);
            break;
        }
        case 2:
        {
            insertElementEndSLL(head);
            break;
        }
        case 3:
        {
            insertElementStartSLL(head);
            break;
        }
        case 4:
        {
            insertElementAnyPosSLL(head);
            break;
        }
        case 5:
        {
            deleteFirstNodeSLL(head);
            break;
        }
        case 6:
        {
            deleteLastNodeSLL(head);
            break;
        }
        case 7:
        {
            deleteAnyNodeSLL(head);
            break;
        }
        case 8:
        {
            maxElementSLL(head);
            break;
        }
        case 9:
        {
            minElementSLL(head);
            break;
        }
        case 10:
        {
            reverseSLL(head); 
            break;
        }
        case 11:
        {
            main();
            break;
        }
        default:
        {
            printf("invalid input\n");
            goto start;
        }
    }
    return ;
}
void acceptLL()
{
    sleep(1);
    system("cls");
    sleep(1);
    printf("LINKED LISTS\n\n");
    printf("1.Singly linked list\n");
    printf("2.Doubly linked list\n");
    printf("3.Circular Linked list\n");
    printf("4.Go back to Data Structure selection screen\n");
    start:
    printf("Enter your choice:");
    int choice;
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
            acceptSLL();
            break;
        }
        case 2:
        {
            acceptDLL();
            break;
        }
        case 3:
        {
            acceptCLL();
            break;
        }
        case 4:
        {
            main();
            break;
        }
        default:
        {
            printf("invalid input\n");
            goto start;
        }
    }
    return ;
}
void addNewNodeSLL(struct node *ptr,char ch)
{  
    if(ch=='n')
    {
        ptr->link=NULL;
        return;
    }
    else
    {
        struct node *temp=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter number:");
        scanf("%d",&(temp->data));
        ptr->link=temp;
        ptr=ptr->link;

        printf("Enter \"y\" to enter one more number or \"n\" to stop:");
        char  ch;
        scanf(" %c",&ch);
        addNewNodeSLL(ptr,ch);
        return;
    } 
}
void acceptSLL()
{
    sleep(1);
    system("cls");
    sleep(1);
    printf("SINGLY LINKED LIST\n\n");
    struct node *head=(struct node*)malloc(sizeof(struct node));
    printf("Enter number in 1st node:");
    scanf("%d",&(head->data));
    printf("Enter \"y\" to enter one more number or \"n\" to stop:");
    char ch;
    scanf(" %c",&ch);
    addNewNodeSLL(head,ch);
    LinkedList(head);
    return;
}
void displaySLL(struct node *head)
{
    sleep(1);
    system("cls");
    sleep(1);
    if(head==NULL)
    printf("Linked List is empty");
    else
    {
        printf("Elements in list are:\n");
        struct node *ptr=head;
        while(ptr!=NULL)
        {
            printf("%d ",ptr->data);
            ptr=ptr->link;
        }
        getch();
        LinkedList(head);
        return;
    }
}
void insertElementEndSLL(struct node *head)
{
    sleep(1);
    system("cls");
    sleep(1);
    struct node *ptr=head;
    while(ptr->link!=NULL)
    ptr=ptr->link;
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter number to join at end:");
    scanf("%d",&(temp->data));
    temp->link=NULL;
    ptr->link=temp;
    printf("Data inserted at end of list");
    getch();
    LinkedList(head);
    return;
}
void insertElementStartSLL(struct node *head)
{
    sleep(1);
    system("cls");
    sleep(1);
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter number to join at start:");
    scanf("%d",&(temp->data));
    temp->link=head;
    head=temp;
    printf("Data inserted at first place in list");
    getch();
    LinkedList(head);
    return;
}
void insertElementAnyPosSLL(struct node *head)
{
    sleep(1);
    system("cls");
    sleep(1);
    struct node *ptr=head;
    printf("Enter which node you want to keep data in(start counting from 1) \nyou cant insert in node 1 using this function:");
    int n;
    scanf("%d",&n);
    int i=1;
    while(i<n-1)
    {
    ptr=ptr->link;
    i++;
    }//cant be used to insert in 1st position as head is not updated
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter number to insert at node number %d(starting from 1):",n);
    scanf("%d",&(temp->data));
    temp->link=ptr->link;
    ptr->link=temp;//but it works to insert at last position 
    printf("inserted");
    LinkedList(head);
    return;
}
void deleteFirstNodeSLL(struct node * head)
{
    sleep(1);
    system("cls");
    sleep(1);
    printf("Deleting first node and updating head\n");
    struct node *ptr=head;
    head=ptr->link;
    free(ptr);
    sleep(1);
    printf("deleted first element");
    getch();
    LinkedList(head);
    return;
}
void deleteLastNodeSLL(struct node * head)
{
    sleep(1);
    system("cls");
    sleep(1);
    printf("Deleting last node... \n");
    struct node* ptr=head;
    while(ptr->link->link!=NULL)
    ptr=ptr->link;
    free(ptr->link);
    ptr->link=NULL;
    sleep(1);
    printf("deleted last element");
    getch();
    LinkedList(head);
    return;
}
void deleteAnyNodeSLL(struct node * head)
{
    sleep(1);
    system("cls");
    sleep(1);
    struct node *ptr=head;
    int n;
    int i=1;
    printf("Enter which node to delete \n cant be used for last and first node(starts from 1):");
    scanf("%d",&n);
    while(i<(n-1))
    {
    ptr=ptr->link;
    i++;
    }
    struct node * temp=ptr->link;
    ptr->link=ptr->link->link;
    free(temp);
    
    printf("\ndeleted node number %d",n);
    getch();
    LinkedList(head);
    return;
}
void maxElementSLL(struct node *head)
{
    sleep(1);
    system("cls");
    sleep(1);
    struct node *ptr=head;
    int max=head->data;
    while(ptr!=NULL)
    {
        if(ptr->data>max)
        max=ptr->data;
        ptr=ptr->link;
    }
    printf("Maximum Element is %d",max);
    getch();
    LinkedList(head);
    return;
}
void minElementSLL(struct node *head)
{
    sleep(1);
    system("cls");
    sleep(1);
    struct node *ptr=head;
    int min=head->data;
    while(ptr!=NULL)
    {
        if(ptr->data<min)
        min=ptr->data;
        ptr=ptr->link;
    }
    printf("Minimum Element is %d",min);
    getch();
    LinkedList(head);
    return;
}
void reverseSLL(struct node *head)
{
    sleep(1);
    system("cls");
    sleep(1);
    struct node* temp1=NULL;
    struct node* temp2=NULL;
    while(head!=NULL)
    {
        temp2=head->link;
        head->link=temp1;
        temp1=head;
        head=temp2;
    }
    head=temp1;
    printf("Link list has been reversed");
    getch();
    LinkedList(head);
    return;
} 


struct nodeDLL{
    struct nodeDLL *prev;
    int data;
    struct nodeDLL *next;
};
void doublyLinkedList(struct nodeDLL *head)
{
    sleep(1);
    system("cls");
    sleep(1);
    printf("\nOPERATIONS ON DLL:\n");
    printf("1.View Linked List elements \n");
    printf("2.Insert an element at end of list\n");
    printf("3.Insert an element at beginning of list \n");
    printf("4.Insert an element at any position in the list\n");
    printf("5.Delete first node in linked list\n");
    printf("6.Delete last node in linked list\n");
    printf("7.Delete nth node in linked list\n");
    printf("8.View maximum element in list\n");
    printf("9.View minimum element in list\n");
    printf("10.Reverse the list\n"); 
    printf("11.Go back to Data Structures selection screen\n");
    start:
    printf("Enter what operation(index) you want to perform?");
    int choice;
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
            displayDLL(head);
            break;
        }
        case 2:
        {
            insertElementEndDLL(head);
            break;
        }
        case 3:
        {
            insertElementStartDLL(head);
            break;
        }
        case 4:
        {
            insertElementAnyPosDLL(head);
            break;
        }
        case 5:
        {
            deleteFirstNodeDLL(head);
            break;
        }
        case 6:
        {
            deleteLastNodeDLL(head);
            break;
        }
        case 7:
        {
            deleteAnyNodeDLL(head);
            break;
        }
        case 8:
        {
            maxElementDLL(head);
            break;
        }
        case 9:
        {
            minElementDLL(head);
            break;
        }
        case 10:
        {
            reverseDLL(head); 
            break;
        } 
        case 11:
        {
            main();
            break;
        }
        default:
        {
            printf("invalid input\n");
            goto start;
        }
    }
    return ;
}
void addNewNodeDLL(struct nodeDLL *ptr,char ch)
{  
    if(ch=='n')
    {
        ptr->next=NULL;
        return;
    }
    else
    {
        struct nodeDLL *temp=(struct nodeDLL*)malloc(sizeof(struct nodeDLL));
        printf("\nEnter number:");
        scanf("%d",&(temp->data));
        temp->prev=ptr;
        ptr->next=temp;
        ptr=ptr->next;
        printf("Enter \"y\" to enter one more number or \"n\" to stop:");
        char  ch;
        scanf(" %c",&ch);
        addNewNodeDLL(ptr,ch);
        return;
    } 
}
void acceptDLL()
{
    sleep(1);
    system("cls");
    sleep(1);
    printf("DOUBLY LINKED LIST\n");
    struct nodeDLL *head=(struct nodeDLL*)malloc(sizeof(struct nodeDLL));
    printf("Enter number in 1st node:");
    scanf("%d",&(head->data));
    head->prev=NULL;
    printf("Enter \"y\" to enter one more number or \"n\" to stop:");
    char ch;
    scanf(" %c",&ch);
    addNewNodeDLL(head,ch);
    doublyLinkedList(head);
    return;
}
void displayDLL(struct nodeDLL *head)
{
    sleep(1);
    system("cls");
    sleep(1);
    if(head==NULL)
    printf("Linked List is empty");
    else
    {
        printf("Elements in list are:\n");
        struct nodeDLL *ptr=head;
        while(ptr!=NULL)
        {
            printf("%d ",ptr->data);
            ptr=ptr->next;
        }
        getch();
        doublyLinkedList(head);
        return;
    }
}
void insertElementEndDLL(struct nodeDLL *head)
{
    sleep(1);
    system("cls");
    sleep(1);
    struct nodeDLL *ptr=head;
    while(ptr->next!=NULL)
    ptr=ptr->next;
    struct nodeDLL *temp=(struct nodeDLL*)malloc(sizeof(struct nodeDLL));
    printf("Enter number to join at end:");
    scanf("%d",&(temp->data));
    temp->next=NULL;
    temp->prev=ptr;
    ptr->next=temp;
    printf("Data inserted at end of list");
    getch();
    doublyLinkedList(head);
    return;
}
void insertElementStartDLL(struct nodeDLL *head)
{
    sleep(1);
    system("cls");
    sleep(1);
    struct nodeDLL *temp=(struct nodeDLL*)malloc(sizeof(struct nodeDLL));
    printf("Enter number to join at start:");
    scanf("%d",&(temp->data));
    temp->prev=NULL;
    temp->next=head;
    head=temp;
    printf("Data inserted at first place in list");
    getch();
    doublyLinkedList(head);
    return;
}
void insertElementAnyPosDLL(struct nodeDLL *head)
{
    sleep(1);
    system("cls");
    sleep(1);
    struct nodeDLL *ptr=head;
    printf("Enter which node you want to keep data in(start counting from 1) \nyou cant insert in node 1 using this function:");
    int n;
    scanf("%d",&n);
    int i=1;
    while(i<n-1)
    {
    ptr=ptr->next;
    i++;
    }//cant be used to insert in 1st position as head is not updated
    struct nodeDLL *temp=(struct nodeDLL*)malloc(sizeof(struct nodeDLL));
    printf("Enter number to insert at node number %d(starting from 1):",n);
    scanf("%d",&(temp->data));
    temp->prev=ptr;
    temp->next=ptr->next;
    ptr->next=temp;//but it works to insert at last position 
    printf("inserted");
    getch();
    doublyLinkedList(head);
    return;
}
void deleteFirstNodeDLL(struct nodeDLL * head)
{
    sleep(1);
    system("cls");
    sleep(1);
    printf("Deleting first node and updating head...\n");
    head=head->next;
    free(head->prev);
    head->prev=NULL;
    sleep(1);
    printf("deleted first element");
    getch();
    doublyLinkedList(head);
    return;
}
void deleteLastNodeDLL(struct nodeDLL * head)
{
    sleep(1);
    system("cls");
    sleep(1);
    printf("Deleting last node... \n");
    struct nodeDLL* ptr=head;
    while(ptr->next->next!=NULL)
    ptr=ptr->next;
    free(ptr->next);
    ptr->next=NULL;
    sleep(1);
    printf("deleted last element");
    getch();
    doublyLinkedList(head);
    return;
}
void deleteAnyNodeDLL(struct nodeDLL * head)
{
    sleep(1);
    system("cls");
    sleep(1);
    struct nodeDLL *ptr=head;
    int n;
    int i=1;
    printf("Enter which node to delete \n cant be used for last and first node(starts from 1):");
    scanf("%d",&n);
    while(i<(n-1))
    {
    ptr=ptr->next;
    i++;
    }
    struct nodeDLL * temp=ptr->next;
    ptr->next=ptr->next->next;
    temp->next->prev=ptr;
    free(temp);
    
    printf("\ndeleted node number %d",n);
    getch();
    doublyLinkedList(head);
    return;
}
void maxElementDLL(struct nodeDLL *head)
{
    sleep(1);
    system("cls");
    sleep(1);
    struct nodeDLL *ptr=head;
    int max=head->data;
    while(ptr!=NULL)
    {
        if(ptr->data>max)
        max=ptr->data;
        ptr=ptr->next;
    }
    printf("Maximum Element is %d",max);
    getch();
    doublyLinkedList(head);
    return;
}
void minElementDLL(struct nodeDLL *head)
{
    sleep(1);
    system("cls");
    sleep(1);
    struct nodeDLL *ptr=head;
    int min=head->data;
    while(ptr!=NULL)
    {
        if(ptr->data<min)
        min=ptr->data;
        ptr=ptr->next;
    }
    printf("Minimum Element is %d",min);
    getch();
    doublyLinkedList(head);
    return;
}
void reverseDLL(struct nodeDLL * head)
{
    sleep(1);
    system("cls");
    sleep(1);
    if (head == NULL || head->next == NULL) {
        printf("There is only 1 or no elements in the list");
        getch();
        doublyLinkedList(head);
    }

    struct nodeDLL* current = head;
    struct nodeDLL* temp = NULL;

    while (current != NULL) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }

    head=temp->prev;
    printf("The doubly linked list has been reversed");
    getch();
    doublyLinkedList(head);
    return;
}


struct nodeCLL{
    int data;
    struct nodeCLL *link;
};
void circularLinkedList(struct nodeCLL *tail)
{
    sleep(1);
    system("cls");
    sleep(1);
    printf("\nOPERATIONS ON CLL:\n");
    printf("1.View Linked List elements \n");
    printf("2.Insert an element at end of list\n");
    printf("3.Insert an element at beginning of list \n");
    printf("4.Insert an element at any position in the list\n");
    printf("5.Delete first node in linked list\n");
    printf("6.Delete last node in linked list\n");
    printf("7.Delete nth node in linked list\n");
    printf("8.Go back to Data Structures selection screen\n");
    start:
    printf("Enter what operation(index) you want to perform?:");
    int choice;
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
            displayCLL(tail);
            break;
        }
        case 2:
        {
            insertElementEndCLL(tail);
            break;
        }
        case 3:
        {
            insertElementStartCLL(tail);
            break;
        }
        case 4:
        {
            insertElementAnyPosCLL(tail);
            break;
        }
        case 5:
        {
            deleteElementStartCLL(tail);
            break;
        }
        case 6:
        {
            deleteElementEndCLL(tail);
            break;
        }
        case 7:
        {
            deleteElementAnyPosCLL(tail);
            break;
        } 
        case 8:
        {
            main();
            break;
        }
        default:
        {
            printf("invalid input\n");
            goto start;
        }
    }
    return ;
}
struct nodeCLL* addNewNodeCLL(struct nodeCLL *ptr,struct nodeCLL *head,char ch)
{  
    if(ch=='n')
    {
        ptr->link=head;
        return ptr;
    }
    else
    {
        struct nodeCLL *temp=(struct nodeCLL*)malloc(sizeof(struct nodeCLL));
        printf("\nEnter number:");
        scanf("%d",&(temp->data));
        ptr->link=temp;
        ptr=ptr->link;

        printf("Enter \"y\" to enter one more number or \"n\" to stop:");
        char  ch;
        scanf(" %c",&ch);
        addNewNodeCLL(ptr,head,ch);
    }
}
void acceptCLL()
{
    sleep(1);
    system("cls");
    sleep(1);
    printf("CIRCULAR LINKED LIST\n\n");
    struct nodeCLL *head=(struct nodeCLL*)malloc(sizeof(struct nodeCLL));
    printf("Enter number in 1st node:");
    scanf("%d",&(head->data));
    printf("Enter \"y\" to enter one more number or \"n\" to stop:");
    char ch;
    scanf(" %c",&ch);
    struct nodeCLL* tail=addNewNodeCLL(head,head,ch);
    circularLinkedList(tail);
    return;
}
void displayCLL(struct nodeCLL*tail)
{
    sleep(1);
    system("cls");
    sleep(1);
    if(tail==NULL)
    printf("Linked List is empty");
    else
    {
        printf("Elements in list are:\n");
        struct nodeCLL *ptr=tail->link;
        do
        {
            printf("%d ",ptr->data);
            ptr=ptr->link;
        }
        while(ptr!=tail->link);
        getch();
        circularLinkedList(tail);
        return;
    }
}
void insertElementEndCLL(struct nodeCLL *tail)
{
    sleep(1);
    system("cls");
    sleep(1);
    struct nodeCLL *ptr=tail->link;
    while(ptr!=tail)
    ptr=ptr->link;
    struct nodeCLL *temp=(struct nodeCLL*)malloc(sizeof(struct nodeCLL));
    printf("Enter number to join at end:");
    scanf("%d",&(temp->data));
    temp->link=tail->link;
    ptr->link=temp;
    tail=tail->link;
    printf("Data inserted at end of list");
    getch();
    circularLinkedList(tail);
    return;
}
void insertElementStartCLL(struct nodeCLL *tail)
{
    sleep(1);
    system("cls");
    sleep(1);
    struct nodeCLL *temp=(struct nodeCLL*)malloc(sizeof(struct nodeCLL));
    printf("Enter number to join at start:");
    scanf("%d",&(temp->data));
    temp->link=tail->link;
    tail->link=temp;
    printf("Data inserted at first place in list");
    getch();
    circularLinkedList(tail);
    return;
}
void insertElementAnyPosCLL(struct nodeCLL *tail)
{
    sleep(1);
    system("cls");
    sleep(1);
    struct nodeCLL *ptr=tail->link;
    printf("Enter which node you want to keep data in(start counting from 1) \nyou cant insert in node 1 using this function:");
    int n;
    scanf("%d",&n);
    int i=1;
    while(i<n-1)
    {
    ptr=ptr->link;
    i++;
    }
    struct nodeCLL *temp=(struct nodeCLL*)malloc(sizeof(struct nodeCLL));
    printf("Enter number to insert at node number %d(starting from 1):",n);
    scanf("%d",&(temp->data));
    temp->link=ptr->link;
    ptr->link=temp; 
    printf("inserted");
    circularLinkedList(tail);
    return;
}  
void deleteElementEndCLL(struct nodeCLL* tail) {
    sleep(1);
    system("cls");
    sleep(1);
    
    if (tail == NULL) {
        printf("Linked List is empty\n");
        getch();
        circularLinkedList(tail);
        return;
    }
    
    if ((tail)->link == tail) {
        free(tail);
        tail = NULL;
    } else {
        struct nodeCLL* ptr = (tail)->link;
        struct nodeCLL* prev = tail;
        
        while (ptr!= tail) {
            prev = ptr;
            ptr = ptr->link;
        }
        
        prev->link = (tail)->link;
        free(ptr);
        tail=prev;
    }
    
    printf("Data deleted from the end of the list\n");
    getch();
    circularLinkedList(tail);
}
void deleteElementStartCLL(struct nodeCLL* tail) {
    sleep(1);
    system("cls");
    sleep(1);
    
    if (tail == NULL) {
        printf("Linked List is empty\n");
        getch();
        circularLinkedList(tail);
        return;
    }
    
    struct nodeCLL* ptr = tail->link;
    
    if (ptr == tail) {
        free(ptr);
        tail = NULL;
    } else {
        tail->link = ptr->link;
        free(ptr);
    }
    
    printf("Data deleted from the beginning of the list\n");
    getch();
    circularLinkedList(tail);
}
void deleteElementAnyPosCLL(struct nodeCLL* tail) {
    sleep(1);
    system("cls");
    sleep(1);
    
    if (tail == NULL) {
        printf("Linked List is empty\n");
        getch();
        circularLinkedList(tail);
        return;
    }
    
    printf("Enter the position of the node to delete (starting from 1): ");
    int pos;
    scanf("%d", &pos);
    
    if (pos < 1) {
        printf("Invalid position\n");
        getch();
        circularLinkedList(tail);
        return;
    }
    
    if (pos == 1) {
        deleteElementStartCLL(tail);
        circularLinkedList(tail);
        return;
    }
    
    struct nodeCLL* ptr = tail->link;
    struct nodeCLL* prev = tail;
    int count = 1;
    
    while (count < pos && ptr != tail) {
        prev = ptr;
        ptr = ptr->link;
        count++;
    }
    
    if (count != pos) {
        printf("Invalid position\n");
        getch();
        circularLinkedList(tail);
        return;
    }
    
    prev->link = ptr->link;
    
    if (ptr == tail) {
        tail = prev;
    }
    
    free(ptr);
    
    printf("Data deleted from position %d in the list\n", pos);
    getch();
    circularLinkedList(tail);
}



int topa=-1;
void stackArr();
void acceptStack();
void stackList();

struct nodeSTK {
    int info;
    struct nodeSTK *ptr;
};
struct nodeSTK* top;
int count = 0;
// Push() operation on a  stack
void pushStackList() {
    printf("Enter value to push:");
    int data;
    scanf("%d",&data);
    if (top == NULL)
    {
        top =(struct nodeSTK *)malloc(sizeof(struct nodeSTK));
        if(top==NULL)
        {
            printf("Stack Overflow");
            getch();
            return ;
        }
        top->ptr = NULL;
        top->info = data;
    }
    else
    {
        struct nodeSTK* temp =(struct nodeSTK *)malloc(sizeof(struct nodeSTK));
        temp->ptr = top;
        temp->info = data;
        top = temp;
    }
    count++;
}
int popStackList() {
     struct nodeSTK* top1 = top;
 
    if (top1 == NULL)
    {
        printf("\nStack Underflow\n");
        return -1;
    }
    else
        top1 = top1->ptr;
    int popped = top->info;
    free(top);
    top = top1;
    count--;
    return popped;
}
void showStackList() {
    // Display the elements of the stack
    struct nodeSTK* top1 = top;
 
    if (top1 == NULL)
    {
        printf("\nNo element in stack\n");
        getch();
        return;
    }
    
    printf("The stack is:");
    while (top1 != NULL)
    {
        printf("%d  ", top1->info);
        top1 = top1->ptr;
    }
    getch();
}

void pushStackArr(int stack[],int n)
{
    if (topa == n )   
    {
        printf("\n Overflow");   
        getch();
        return ;
    }
    else   
    {  
        int data;
        printf("Enter value to push:");
        scanf("%d",&data);
        printf("\n");
        topa = topa +1;   
        stack[topa] = data;   
    }
} 
int popStackArr (int stack[])  
{   
    if(topa == -1)   
    {  
        printf("Underflow");  
        return 0;  
    }  
    else   
    return stack[topa--];    
}   
void showStackArr(int stack[])  
{  
    printf("Elements in stack are:");
    int i;
    for (i=topa;i>=0;i--)  
    {  
        printf("%d  ",stack[i]);  
    }  
    printf("\n");
    if(topa == -1)   
    {  
        printf("Stack is empty\n");  
    }  
    getch();
}  

void acceptStack()
{
    sleep(1);
    system("cls");
    sleep(1);
    printf("Stack\n\n");
    printf("1.Array implementation\n");
    printf("2.Linked list implementation\n");
    printf("3.Go back to Data Structure selection screen\n");
    start:
    printf("Enter your choice:");
    int choice;
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
            stackArr();
            break;
        }
        case 2:
        {
            stackList();
            break;
        }
        case 3:
        {
            main();
            break;
        }
        default:
        {
            printf("invalid input\n");
            goto start;
        }
    }
    return ;
}
void stackArr()
{
    sleep(1);
    system("cls");
    sleep(1);
    printf("STACK IMPLEMENTATION USING ARRAY\n");
    printf("Enter size of stack:");
    int n;
    scanf("%d",&n);
    int stack[n];
    int choice;
    while(choice != 4)  
    {  
        system("cls");
        printf("Chose one from the below options...\n");  
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");  
        printf("\nEnter your choice: ");        
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            {   
                pushStackArr(stack,n);  
                break;  
            }  
            case 2:  
            {  
                printf("popped element =%d",popStackArr(stack));  
                getch();
                break;  
            }  
            case 3:  
            {  
                showStackArr(stack);  
                break;  
            }  
            case 4:   
            {  
                printf("Exiting....");  
                acceptStack();
                break;   
            }  
            default:  
            {  
                printf("Please Enter valid choice ");  
            }   
        };  
    }  
    return;
}
void stackList()
{
    sleep(1);
    system("cls");
    sleep(1);
    int choice;
    while(choice != 4)  
    {  
        system("cls");
        printf("STACK IMPLEMENTATION USING LINKED LIST\n");
        printf("Chose one from the below options...\n");  
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");  
        printf("\nEnter your choice: ");        
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            {   
                pushStackList();  
                break;  
            }  
            case 2:  
            {  
                printf("popped element =%d",popStackList());  
                getch();
                break;  
            }  
            case 3:  
            {  
                showStackList();  
                break;  
            }  
            case 4:   
            {  
                printf("Exiting....");  
                acceptStack();
                break;   
            }  
            default:  
            {  
                printf("Please Enter valid choice ");  
            }   
        };  
    }  
    return;
}



int front=-1,rear=-1;
void acceptQueue();
void enqueueArr(int queue[],int n)
{
    if ((rear+1)%n== front )   
    {
        printf("\n Overflow");  
        getch(); 
        return ;
    }
    printf("Enter value to enqueue:");
    int val;
    scanf("%d",&val);
    if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
        queue[rear]=val;
    }
    else
    {  
        rear=(rear+1)  %n;
        queue[rear]=val;
    }
    return;
}
void dequeueArr(int queue[],int n)
{
    if(front==-1 && rear==-1)
    printf("Underflow\n");
    else if(front==rear)
    {
        printf("Dequeued element is %d",queue[rear]);
        front=-1;
        rear=-1;
    }
    else
    {
        printf("Dequeued element is %d",queue[front]);
        front=(front+1)%n;
    }
    getch();
    return;
}
void displayQueueArr(int queue[],int n)
{
    int i=front;
    if(rear==-1 && front==-1)
    {
        printf("Queue is empty");
        getch();
    }
    else
    {
        printf("Elements in queue are:");
        while(i<rear){
            printf("%d  ",queue[i]);
            i=(i+1)%n;
        }
        getch();
    }
    return;
}
void queueArr()
{
    sleep(1);
    system("cls");
    sleep(1);
    printf("QUEUE IMPLEMENTATION USING ARRAY\n");
    printf("Enter size of queue:");
    int n;
    scanf("%d",&n);
    int queue[n];
    int choice;
    while(choice != 4)  
    {  
        system("cls");
        printf("Chose one from the below options...\n");  
        printf("\n1.Enqueue\n2.Dequeue\n3.Peek\n4.Exit");  
        printf("\nEnter your choice: ");        
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            {   
                enqueueArr(queue,n);  
                break;  
            }  
            case 2:  
            {  
                dequeueArr(queue,n);  
                break;  
            }  
            case 3:
            {
                displayQueueArr(queue,n);
                break;
            }
            case 4:   
            {  
                printf("Exiting....");  
                acceptQueue();
                break;   
            }  
            default:  
            {  
                printf("Please Enter valid choice ");  
            }   
        };  
    }  
    return;
}


struct nodeQUE{
    int data;
    struct nodeQUE* link;
};
struct nodeQUE* frontnode=NULL;
struct nodeQUE* rearnode=NULL;
void enqueueList()
{
    printf("Enter value to push:");
    int data;
    scanf("%d",&data);
    struct nodeQUE* temp=(struct nodeQUE *)malloc(sizeof(struct nodeQUE));
    if (temp == NULL)
    {
        printf("Overflow\n");
        getch();
        return;
    }
    temp->data=data;
    temp->link=NULL;
    if(frontnode==NULL && rearnode==NULL)
    {
        frontnode=rearnode=temp;
        return;
    }
    rearnode->link=temp;
    rearnode=temp;
}
void dequeueList()
{
    struct nodeQUE* temp=frontnode;
    if(frontnode==NULL)
    {
        printf("Underflow");
        getch();
        return;
    }
    if(frontnode==rearnode)
    {
        frontnode=rearnode=NULL;
    }
    else
    {
        frontnode=frontnode->link;
    }
    printf("Dequeued element is %d",temp->data);
    free(temp);
    getch();
}
void displayQueueList()
{
    if(frontnode==NULL)
    {
        printf("Queue Underflow");
    }
    else
    {
        printf("Elements in queue are:");
        struct nodeQUE* temp=frontnode;
        while(temp!=NULL)
        {
            printf("%d  ",temp->data);
            temp=temp->link;
        }
    }
    getch();
    return;
}
void queueList()
{
    sleep(1);
    system("cls");
    sleep(1);
    int choice;
    while(choice != 4)  
    {  
        system("cls");
        printf("QUEUE IMPLEMENTATION USING LINKED LIST\n");
        printf("Chose one from the below options...\n");  
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");  
        printf("\nEnter your choice: ");        
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            {   
                enqueueList();  
                break;  
            }  
            case 2:  
            {  
                dequeueList();  
                break;  
            }  
            case 3:
            {
                displayQueueList();
                break;
            }
            case 4:   
            {  
                printf("Exiting....");  
                acceptQueue();
                break;   
            }  
            default:  
            {  
                printf("Please Enter valid choice ");  
            }   
        };  
    }  
    return;
}
void acceptQueue()
{
    sleep(1);
    system("cls");
    sleep(1);
    printf("QUEUE\n\n");
    printf("1.Array implementation\n");
    printf("2.Linked list implementation\n");
    printf("3.Go back to Data Structure selection screen\n");
    start:
    printf("Enter your choice:");
    int choice;
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
            queueArr();
            break;
        }
        case 2:
        {
            queueList();
            break;
        }
        case 3:
        {
            main();
            break;
        }
        default:
        {
            printf("invalid input\n");
            goto start;
        }
    }
    return ;
}

struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct TreeNode* createTreeNode(int value) {
    struct TreeNode* newTreeNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newTreeNode->data = value;
    newTreeNode->left = newTreeNode->right = NULL;
    return newTreeNode;
}

struct TreeNode* insertTreeNode(struct TreeNode* root, int value) {
    if (root == NULL) {
        return createTreeNode(value);
    }

    if (value < root->data) {
        root->left = insertTreeNode(root->left, value);
    } else if (value >= root->data) {
        root->right = insertTreeNode(root->right, value);
    }

    return root;
}

void inorderTraversal(struct TreeNode* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

void preorderTraversal(struct TreeNode* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

void postorderTraversal(struct TreeNode* root) {
    if (root != NULL) {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("%d ", root->data);
    }
}

struct TreeNode* searchTreeNode(struct TreeNode* root, int value) {         
    if (root == NULL || root->data == value) {
        return root;
    }

    if (value < root->data) {
        return searchTreeNode(root->left, value);
    }

    return searchTreeNode(root->right, value);
}

struct TreeNode* findMinimum(struct TreeNode* TreeNode) {
    struct TreeNode* current = TreeNode;
    while (current && current->left != NULL) {
        current = current->left;
    }
    return current;
}

struct TreeNode* deleteTreeNode(struct TreeNode* root, int value) {
    if (root == NULL) {
        return root;
    }

    if (value < root->data) {
        root->left = deleteTreeNode(root->left, value);
    } else if (value > root->data) {
        root->right = deleteTreeNode(root->right, value);
    } else {
        if (root->left == NULL) {
            struct TreeNode* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct TreeNode* temp = root->left;
            free(root);
            return temp;
        }

        struct TreeNode* temp = findMinimum(root->right);
        root->data = temp->data;
        root->right = deleteTreeNode(root->right, temp->data);
    }

    return root;
}

void Tree() {
    sleep(1);
    system("cls");
    sleep(1);
    struct TreeNode* root = NULL;
    int choice, value;
    struct TreeNode* result;

    while (1) {
        printf("\nBinary Search Tree Operations:\n");
        printf("1. Insert a Node\n");
        printf("2. Delete a Node\n");
        printf("3. Search for a Node\n");
        printf("4. View inorder traversal\n");
        printf("5. View preorder traversal\n");
        printf("6. View postorder traversal\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to be inserted: ");
                scanf("%d", &value);
                root = insertTreeNode(root, value);
                printf("Node inserted successfully.\n");
                getch();
                system("cls");
                break;
            case 2:
                printf("Enter the value to be deleted: ");
                scanf("%d", &value);
                root = deleteTreeNode(root, value);
                printf("Node deleted successfully.\n");
                getch();
                system("cls");
                break;
            case 3:
                printf("Enter the value to be searched: ");
                scanf("%d", &value);
                result = searchTreeNode(root, value);
                if (result != NULL) {
                    printf("Node found in the tree.\n");
                } else {
                    printf("Node not found in the tree.\n");
                }
                getch();
                system("cls");
                break;
            case 4:
                printf("Inorder Traversal of the Binary Search Tree: ");
                inorderTraversal(root);
                printf("\n");
                getch();
                system("cls");
                break;
            case 5:
                printf("Preorder Traversal of the Binary Search Tree: ");
                preorderTraversal(root);
                printf("\n");
                getch();
                system("cls");
                break;
            case 6:
                printf("Postorder Traversal of the Binary Search Tree: ");
                postorderTraversal(root);
                printf("\n");
                getch();
                system("cls");
                break;
            case 7:
                printf("Exiting the program...\n");
                getch();
                system("cls");
                exit(0);
            default:
                printf("Invalid choice! Please enter a valid option.\n");
                getch();
                system("cls");
        }
    }

    return;
}


int main()
{
    //sleep(1);
    //system("cls");
    printf("DATA STRUCTURES:\n");
    printf("1.Array\n");
    printf("2.Linked List\n");
    printf("3.Stack\n");
    printf("4.Queue\n");
    printf("5.Tree\n"); 
    printf("6.Exit\n"); 
    start:  
    printf("Which data structure do you want to implement?:");
    int choice;
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
            acceptArray();
            break;
        }
        case 2:
        {
            acceptLL();
            break;
        }
        case 3:
        {
            acceptStack();
            break;
        }
        case 4:
        {
            acceptQueue();
            break;
        }
        case 5:
        {
            Tree();
            break;
        }
        case 6:
        {
            printf("Thank You");
            break;
        }
        default:
        {
            printf("Invalid input. Try again\n");
            goto start;
        }
    }
    return 0;
}


