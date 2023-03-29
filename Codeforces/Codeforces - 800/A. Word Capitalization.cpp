#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>> s;

    for(int i=0; i<s.size(); i++)
    {
        s[0] = towupper(s[0]);
    }
    cout<< s <<endl;


    return 0;
}
