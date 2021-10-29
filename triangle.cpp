#include<iostream>
using namespace std;
int main(){
int firstangle, secondangle, thirdangle;
cout<<"Enter the first angle: ";
cin>>firstangle;
cout<<"Enter the 2nd angle: ";
cin>>secondangle;
thirdangle=180-(firstangle+secondangle);
cout<<"The third angle is: "<<thirdangle;

return 0;
}
