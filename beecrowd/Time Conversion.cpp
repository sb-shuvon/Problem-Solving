
#include<iostream>
using namespace std;

int main()
{
    int N,h, m, s, temp;

    cin>> N;

    h = N / (60*60);
    temp = N % (60*60);

    m = temp / 60;
    s = temp % 60;

    cout<< h << ":" << m << ":" << s<<endl;


    return 0;
}
