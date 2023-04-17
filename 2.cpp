#include<iostream>
using namespace std;
class P{
    public:
    float temperature;
};
class Q : public P{
    public:
    float a;
    void toFehrenheit(){
        cout<<"Enter temperature to convert into Fehrenheit:";
        cin>>this->temperature;
        a = (1.8*temperature)+32;
        cout<<"Temperature in Fehrenheit is: "<<a<<endl;
    };
};
class R : public Q{
    public:
    float b;
    void toKelvin(){
        b = (a - 32) * 0.55 + 273.15;
        cout<<"Temperature in Kelvin is: "<<b<<endl;
    };
};
int main(){
    R obj1;
    obj1.toFehrenheit();
    obj1.toKelvin();
    return 0;
}