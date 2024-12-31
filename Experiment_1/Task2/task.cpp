#include <iostream>
#include <iomanip>

int main()
{
    using namespace std;
    float SalaryBeforeTax,SAT;
    cin>>SalaryBeforeTax;
    if(SalaryBeforeTax<1000)
    SAT=SalaryBeforeTax;
    else if(SalaryBeforeTax<2000)
    SAT=SalaryBeforeTax*0.9;
    else if(SalaryBeforeTax<3000)
    SAT=SalaryBeforeTax*0.85;
    else if(SalaryBeforeTax<4000)
    SAT=SalaryBeforeTax*0.8;
    else 
    SAT=SalaryBeforeTax*0.75;
    cout<<fixed<<setprecision(2)<<SAT<<endl;
    return 0;
    }
    