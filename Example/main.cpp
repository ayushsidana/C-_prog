#include<iostream>
using namespace std;
int main()
{
   int x;
   cout<<"Enter a number\n";
   cin>>x;
  if(x%400==0)
  {
      cout<<"This year is a leap year\n";
  }
  else
    if(x%100==0)
  {
      cout<<"This year is not a leap year\n";
  }
  else
    if(x%4==0)
  {
      cout<<"This year is a leap year\n";
  }
  else
    {
        cout<<"This year is not a leap year\n";
  }
  return 0;
}
//codes end here
