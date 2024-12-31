#include <iostream>

int main()
{
    using namespace std;
    int n;
    cin>>n;
    int output=0,tem=n,store=0; 
    if(n<100 ||n>999)
    cout<<-1<<endl;
    else
    {
        for(int i=0;i<3;i++)
        {
        store=tem%10;
        output=10*output+store;
        tem=tem/10;
         }
    cout<<output<<endl;
    }
    return 0;
}
