#include<iostream>
using namespace std;

int main()
{
    long int n;
    int h, f, tw, ten, fv, to, on,temp;

    cin>>n;

    h = n /100;
    temp = n % 100;

    f = temp / 50;
    temp = temp % 50;

    tw = temp / 20;
    temp = temp % 20;

    ten = temp / 10;
    temp = temp % 10;

    fv = temp / 5;
    temp = temp % 5;

    to = temp / 2;
    temp = temp % 2;

    on = temp;

    cout<< n<<endl;
    cout<< h << " nota(s) de R$ 100,00"<<endl;
    cout<< f << " nota(s) de R$ 50,00"<<endl;
    cout<< tw << " nota(s) de R$ 20,00"<<endl;
    cout<< ten << " nota(s) de R$ 10,00"<<endl;
    cout<< fv << " nota(s) de R$ 5,00"<<endl;
    cout<< to << " nota(s) de R$ 2,00"<<endl;
    cout<< on << " nota(s) de R$ 1,00"<<endl;




    return 0;
}
