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


// Another way
// #include<iostream>
// using namespace std;
// class P {
//     public:
//     float temperature;
//     void display(){
//         cout<<"Temprature in p class is:"<<temperature<<endl;
//     }
// }; 
// class Q : public P{
//     public:
//     float ftemp = (this->temperature * 1.8)+32;
//     void toFehrenheit(){
//         cout<<"Temprature in Q class is:"<<this->temperature<<endl;
//         cout<<"temprature in fehrenhit is: "<<((this->temperature * 1.8)+32)<<endl;
//     }
// }; 
// class R : public Q{
//     public:
//     void toKelvin(){
//         cout<<"temprature in kelvin is: "<<(0.55*((this->temperature * 1.8)+32))+459.67<<endl;
//     }
// }; 
// int main (){
//     int aaa;
//     R obj1;
//     cout<<"ENTER temprature in celcius";
//     cin>>obj1.P::temperature;
//     obj1.display();
//     // AA:
//     cout<<"ENTER NUMBER FROM 1 TO 10 TO CONVERT TEMPRATURE INTO KELVIN:";
//     cout<<"ENTER NUMBER FROM 11 TO 20 TO CONVERT TEMPRATURE INTO FEHRENHIT:";
//     cin>>aaa;
//     switch (aaa)
//     {
//     case 1:
//         obj1.toKelvin();
//         break;
//     case 2:
//         obj1.toFehrenheit();  
//         break;
//     default:
//         break;
//     }
//     // goto AA;
//     return 0;
// }
