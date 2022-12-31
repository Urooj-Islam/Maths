//To Find Squareroot of any number
#include<iostream>
#include<cmath>    //header file for pow()
using namespace std;
int main()
{
float num;
int a;
cout<<"Enter any number";
cin>>num;
cout<<"Enter power";
cin>>a;
cout<<num<<"^"<<a<<" = "<<pow(num,a);
return 0;

}
