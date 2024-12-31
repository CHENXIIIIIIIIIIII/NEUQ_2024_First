#include <iostream>

void swap(int a,int b)
{
    int tem;
    tem=a;
    a=b;
    b=tem;
}
int main()
{
    using namespace std;
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<b;
    return 0;
}