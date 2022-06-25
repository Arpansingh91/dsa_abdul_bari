#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
struct Rectangle
{

int length;
int breadth;
};
int main()
{
//pointer to an integer
int a=10;
int *p;
p=&a;
cout<<*p<<endl;
cout<<p;
cout<<(sizeof(p))<<endl;
printf("%d %d",a,*p);
printf("\n");
//pointer to an array
int A[5]={10,15,20,1,24};
int *p1;
p1=A;//address of an array is same as the array name,so we csn use pointer
//name in place of array name
for(int i=0;i<5;i++)
{

    cout<<p1[i]<<endl;

}
//pointer to an array using malloc function
int *p2;
p2=(int*)malloc(5*sizeof(int));//in c++ we use new int[5] to allocate memory in the heap
p2[0]=11;
p2[1]=12;
p2[2]=13;
p2[3]=14;
p2[4]=15;
for(int i=0;i<5;i++)
{

    printf("%d",p2[i]);
    printf(" ,");
}
//different types of pointers
int *p3;
char *p4;
float *p5;
double *p6;
struct Rectangle *p7;

cout<<sizeof(p3)<<endl;
cout<<sizeof(p4)<<endl;
cout<<sizeof(p5)<<endl;
cout<<sizeof(p6)<<endl;
cout<<sizeof(p7)<<endl;
//pointers take constant memory for any datatype
return 0;
}
