#include<stdio.h>
#include<iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
    char c;
};
int main()
{
struct Rectangle r1={10,5}    ;
cout<<r1.length*r1.breadth<<endl;
r1.length=50;
r1.breadth=2;
cout<<sizeof(r1)<<endl;

    printf("%d\n",r1.length*r1.breadth);
}
