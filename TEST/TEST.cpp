#include<iostream>

using namespace std;

double jiecheng(double n)
{
    if(n<2)
    return 1;
    else
    return jiecheng(n-1)*n;
}

int main()
{
    double n;
    cin>>n;
    cout<<jiecheng(n);
    return 0;
}