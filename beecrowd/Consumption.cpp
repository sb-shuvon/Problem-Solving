#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int X;
    float Y, consumption ;

    cin>> X >> Y;

    consumption = X/Y;
    cout<< fixed<<setprecision(3)<<consumption << " km/l";


    return 0;
}
