#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;

int main()
{
    string name;
    cin>>name;
    double ss, ts,TOTAL;

    cin>> ss>> ts;

    TOTAL= ts*15/100;

    TOTAL = TOTAL + ss;

    cout<< fixed<<setprecision(2)<< "TOTAL = R$ "<<TOTAL<<endl;


    return 0;
}
