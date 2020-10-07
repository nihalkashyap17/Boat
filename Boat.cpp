#include <iostream>
#include <cmath>
using namespace std;

int weight [4] = {30, 60, 20, 10};
int people [9] = { 70, 68, 97, 50, 40, 85, 60, 70, 60};
int n, result=0;
int k, result1=0;
int result3=0;
int cap=140,tot;
double Minround;

int main ()
{
  for ( n=0 ; n<4 ; ++n )
  {
    result += weight[n];
  }
  cout <<"Total weight people cerrying is= "<< result<<endl;
   for ( n=0 ; n<9 ; ++n )
  {
    result1 += people[n];
  }
  cout << "Total weight of people is = "<<result1<<endl;
  cout<<"Boat capacity is= "<<cap<<endl;
  tot=result+result1;
  cout<<"Total weight is(People+Baggage)= "<<tot<<endl;
  Minround=tot/cap;
  
  Minround=Minround+1;
  result3 = round(Minround);
  cout<<Minround;
  return 0;
}
