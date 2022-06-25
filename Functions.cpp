#include<stdio.h>
#include<iostream>
using namespace std;
int add(int a,int b)
{
    int c;
    c=a+b;
    return c;

}
int main()
{
    int x,y,sum;
    x=15;
    y=10;
    sum=add(15,10);
    cout<<sum<<endl;

    return 0;

}
