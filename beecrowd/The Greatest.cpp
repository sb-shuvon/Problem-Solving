#include<iostream>
using namespace std;

int main()
{
    int a,b,c,MinorAB,minor;

    cin>> a>> b>>c ;

    MinorAB = (a+b+abs(a-b))/2;

    minor = (MinorAB+c + abs(MinorAB-c))/2;

    cout<< minor << " eh o maior"<<end;



    return 0;
}
