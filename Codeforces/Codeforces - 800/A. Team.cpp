#include<iostream>
using namespace std;

int main()
{
    int T, a,b,c,count=0;
    cin>> T;

    for(int i=0; i<T; i++)
    {
        cin>> a>> b>> c;

        if(a+b+c >= 2)
        {
            count++;
        }
    }
    cout<<count<<endl;



    return 0;
}
