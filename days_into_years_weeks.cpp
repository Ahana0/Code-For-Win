#include<iostream>
using namespace std;
int main(){
int days,years,weeks;
cout<<"Enter the number of days: ";
cin>>days;
years=days/365;
weeks=(days%365)/7;
days=days-((years*365)+(weeks*7));
cout<<years<<" year ";
cout<<weeks<<" week ";
cout<<days<<" days";
return 0;
}
