#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int en, ewh;
    float ephs, ems;

    cin>> en>> ewh>>ephs;

    ems= ewh * ephs;

    cout<< "NUMBER = "<<en<<endl;
    cout<<fixed<<setprecision(2)<<"SALARY = U$ "<<ems<<endl;


    return 0;
}
