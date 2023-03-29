#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>> s;
    int up= 0, lo= 0;


    for(int i=0; i<s.size(); i++)
    {
        if( isupper (s[i]))
        {
            up++;
        }
        else
        {
            lo++;
        }
    }
    if(up < lo)
    {
        for(int i=0; i<s.size(); i++)
        {
            s[i] = towlower(s[i]);
        }
    }
    else if(up > lo)
    {
        for(int i=0; i<s.size(); i++)
        {
            s[i] = towupper(s[i]);
        }
    }
    else
        for(int i=0; i<s.size(); i++)
            {
                s[i] = towlower(s[i]);
            }

    cout<< s <<endl;


    return 0;
}
