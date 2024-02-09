#include<iostream>
using namespace std;

int main()
{
    int i,a,count=0;
    cout << "ENTER THE NUMBER: ";
    cin >> a;
     for(i=1;i<=a;i++)
    {
          if(a%i==0)
          {
                count++;
          }
    }
    if(count==2)
   {
    cout << "NUMBER IS PRIME";
   }
    else
    cout << "NUMBER IS NOT PRIME";
    return 0;
}