#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int p1, p2, u1, u2;
    double pr1, pr2;

    cin>> p1>> u1>> pr1;
    cin>> p2>> u2>> pr2;

    double pay= (u1*pr1) + (u2*pr2);

    cout<< fixed<<setprecision(2)<<"VALOR A PAGAR: R$ "<<pay<<endl;


    return 0;
}
