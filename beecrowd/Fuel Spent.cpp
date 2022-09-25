#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float spent_time,average_speed,Total_Liter, p_l= 12, fuel_spent;


    cin>> spent_time>> average_speed;

    Total_Liter = average_speed / p_l;

    fuel_spent = spent_time * Total_Liter;

    cout<< fixed<< setprecision(3)<< fuel_spent<<endl;



    return 0;
}
