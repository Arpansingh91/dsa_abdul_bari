#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;

};
int main()
{
    struct Rectangle r1={10,5};
    struct Rectangle *p;//pointer to a structure
    p=&r1;
    printf("%d\n",r1.length);
    printf("%d\n",p->length);
    printf("%d\n",r1.breadth);
    printf("%d\n",p->breadth);
    p->length=12;
    p->breadth=2;
    cout<<p->length<<endl;
    cout<<p->breadth<<endl;

    //creating a object in heap dynamically
    struct Rectangle *p1;
    p1=(struct Rectangle *)malloc(sizeof(struct Rectangle));
    p1->length=30;
    p1->breadth=20;
    cout<<(p1->length*p1->breadth)<<endl;
    return 0;


}
