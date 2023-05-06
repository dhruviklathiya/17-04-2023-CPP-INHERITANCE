#include<iostream>
using namespace std;
class X{
    public:
    int a;
    int b;
    int c;
};
class Y : public X{
    public:
    void setData(){
        cout<<"Please enter parameter in a,b,c for getting sum of all three number's cube :"<<endl;
        cout<<"Enter value of a:";
        cin>>a;
        cout<<"Enter value of b:";
        cin>>b;
        cout<<"Enter value of c:";
        cin>>c;
    }
    void getData(){
        int d = a+b+c;
        int e = d*d*d;
        int f = (a*a*a)+(b*b*b)+(c*c*c);
        cout<<"Sum of all three number is: "<<d<<endl;
        cout<<"Sum of all three number’s cubes is: "<<e<<endl;
        cout<<"All three numbers cube's sum is: "<<f<<endl;
    }
};
int main () {
    Y obj1;
    obj1.setData();
    obj1.getData();
    return 0;
}


// WAY 2:
// #include<iostream>
// using namespace std;
// class X{
//     public:
//     int a;
//     int b;
//     int c;
// };
// class Y : public X{
//     public:
//     void inputData(){
//         cout<<"Enter value of a:";
//         cin>>this->a;
//         cout<<"Enter value of b:";
//         cin>>this->b;
//         cout<<"Enter value of c:";
//         cin>>this->c;
//     }
//     void setData(){
//         this->a = a;
//         this->b = b;
//         this->c = c;
//     }
//     void getData(){
//         int d = a + b + c;
//         int e = d * d * d;
//         int f = (a*a*a) + (b*b*b) + (c*c*c);
//         cout<<"All three number sum: "<<d<<endl;
//         cout<<"All three numbers sum's cubes is: "<<e<<endl;
//         cout<<"All three number cube's sum is: "<<f<<endl;
//     }
// };
// int main () {
//     Y obj1;
//     obj1.inputData();
//     obj1.setData();
//     obj1.getData();
//     return 0;
// }
