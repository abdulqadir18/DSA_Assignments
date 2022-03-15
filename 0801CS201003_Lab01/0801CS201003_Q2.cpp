#include <bits/stdc++.h>
using namespace std;

//base class
class Shape
{
  public:
  Shape()
  {
    cout<<"This is base class\n";
  }
};

//child class
class Circle : public Shape
{
  public:
  Circle()
  {
    cout<<"This is base class\n";
  }

  double area_of_circle(double r)
  {
    return (3.14*r*r);
  }
};

//driver code
int main()
{
  Circle c;
  cout<<c.area_of_circle(2);
  return 0;
}