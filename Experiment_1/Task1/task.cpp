#include <iostream>
//#include <cmath>

using namespace std;


int main() {
    int day;
    int strangerTotal = 0;
    int millionaireTotal = 0;
    int millionairePerDay = 1; 
    cin >> day;

    if (day < 0 || day > 30) 
    {
        return 1;
    }
    else{
        for (int i= 1; i <= day; ++i) 
        {
        strangerTotal += 100000;
        millionaireTotal += millionairePerDay;
        millionairePerDay *= 2;
        }
    }

    cout<<strangerTotal<<endl;
    cout<<millionaireTotal<<endl;

    return 0;
}
