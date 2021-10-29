#include<iostream>
using namespace std;
int main()
{
    float radius;
    float Diameter,Circumference,Area;
    cout<<"Enter the value of radius: ";
    cin>>radius;
    Diameter=2*radius;
    Circumference=2*3.14*radius;
    Area=3.14*(radius*radius);

    cout<<"The value of diameter is: "<<Diameter<<endl;
    cout<<"The value of circumference is: "<<Circumference<<endl;
    cout<<"The value of area is: "<<Area<<endl;

    return 0;
}
