#include <bits/stdc++.h>
using namespace std;

class OMR
{
  public:
  int x1,x2,y1,y2;
  OMR(int a, int b, int c, int d)
  {
    x1=a, x2=b, y1=c, y2=d;
  }
  
  //method to check whether bloat is present
  void check_blot()
  {
    int flag=0;
    for(int i=x1; i<=x2; i++)
    {
      int no_of_blots=0;
      for(int i=y1; i<=y2; i++)
      {
        //assume 1 to be dark in omr
        if(i=1)
        {
          no_of_blots++;
        }
        //assume others to white
        else
        {
          no_of_blots=0;
        }
      }

      if(no_of_blots>=10)
      {
        flag=1;
      }
    }

    if(flag==1)
    {
      cout<<"YES\n";
    }
    else
    {
      cout<<"NO\n";
    }
  }
};

int main()
{
  //2-d array of OMR to be defined
  //OMR o(x and y coordinates of rectangle);
  //o.check_bloat();
  return 0;
}