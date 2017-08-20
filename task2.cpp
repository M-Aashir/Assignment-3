#include <iostream>

using namespace std;
int sumofdigits (int num);
int main()
{
    int num,d;

cout<< "Enter Number : ";
cin>>num;

d=sumofdigits (num);

cout<<"\nSum of Digits of Entered Number : "<<d;
return 0;
}

int sumofdigits (int num)
{
 int sum=0;
    while (num!=0)
        {
        sum=sum+(num%10);
        num=num/10;

        }
return sum;
}
