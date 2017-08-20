#include <iostream>

using namespace std;
int reverse_(int &num);
int main()

{
int num,d;
cout<<"Enter Number : ";
cin>>num;
cout<<"\nOriginal Number : "<<num;



cout<<"\nReversed Number : "<<reverse_(num); //calling function
}
int reverse_(int &num)
{
int rev=0,r;
while(num!=0)
{
    r=num%10;
    rev=rev*10+r;
    num=num/10;
}
return rev;
}
