#include <iostream>

int way_count(int i)
{
    if(i==1)
    return 1;
    else if(i==2)
    return 2;
    else
    return way_count(i-1)+way_count(i-2); 
}

int main()
{
    using namespace std;
    int i;
    cin>>i;
    cout<<""<<way_count(i)<<endl;
    return 0;
}
