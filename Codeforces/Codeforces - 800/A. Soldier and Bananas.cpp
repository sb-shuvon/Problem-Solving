#include<iostream>
#include<string>
using namespace std;

int main()
{
    int k, n, w;
    cin>> k>> n>> w;

    int sum= 0;
    for(int i=1; i<=w; i++)
    {
        sum = sum+i;
    }
    int d= (sum * k)-n;

    if(d<0)cout<< "0"<<endl;
    else cout<< d<<endl;


    return 0;
}




