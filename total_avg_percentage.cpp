#include<iostream>
using namespace std;
int main(){
float sub1,sub2,sub3,sub4,sub5;
float total, avg, percentage;
cout<<"Enter the marks of 5 subjects: ";
cin>>sub1;
cin>>sub2;
cin>>sub3;
cin>>sub4;
cin>>sub5;
total=sub1+sub2+sub3+sub4+sub5;
avg= total/5;
percentage=(total/500)*100;
cout<<total<<endl;
cout<<avg<<endl;
cout<<percentage<<endl;

return 0;
}
