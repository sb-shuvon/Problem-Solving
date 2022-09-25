#include <iostream>
#include<iomanip>
using namespace std;

int main() {

    float A, B,MEDIA=0;

    cin>> A>> B;

    cout<< showpoint;
    cout<< fixed;
    cout<< setprecision(5);

    A= A*3.5;
    B= B*7.5;

    MEDIA= (A+B)/(3.5+7.5);

    cout<< "MEDIA = "<<MEDIA<<endl;

    return 0;
}
