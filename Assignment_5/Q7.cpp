#include <iostream>
using namespace std;
class Speedometer
{
    protected:
    int i;
    public:
    void speed(int j)
    {
        i = j;
    }
};
class FuelGuage
{
    protected:
    int j;

public:
    void fuel(int k)
    {
        j = k;
    }
};
class Thermometer
{
    protected:
    int k;

public:
    void temp(int m)
    {
        k = m;
    }
};
class CarDashboard : public Speedometer, public FuelGuage, public Thermometer
{
    public:
    void showdata(){
        cout << "The speed is "<< i<<endl<<"The Fuel is "<<j<<endl<<"The temp is "<<k<<endl;
    }
};
int main()
{
    CarDashboard obj1;
    obj1.fuel(20);
    obj1.speed(50);
    obj1.temp(30);
    obj1.showdata();
    return 0;
}