#include <iostream>

using namespace std;
int numberofdigits (int a);
int main()
{
int num,d;

cout<< "Enter Number : ";
cin>>num;

d=numberofdigits (num);

cout<<"\nNumber of Digits in the Entered Number : "<<d;
return 0;
}

int numberofdigits (int a)
{
    int countt=0;
    while (a!=0)
    {
        a=a/10;
        countt++;

    }
    return countt;
}
