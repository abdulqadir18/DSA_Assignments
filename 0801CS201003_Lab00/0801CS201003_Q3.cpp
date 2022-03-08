#include <bits/stdc++.h>
using namespace std;

//list class
class List
{
  public:

  //method to get size of list
  void get_size(vector<int>l)
  {
    cout<<"size of list is "<<l.size()<<"\n";
  }

  //method to print list
  void print_list(vector<int>l)
  {
    for(int i=0; i<l.size(); i++)
    {
      cout<<l[i]<<" ";
    }
    cout<<"\n";
  }

  //method to get any index
  void get_index(vector<int>l, int k)
  {
    cout<<"element at kth index is "<<l[k]<<"\n";
  }

  //method to insert element
  void insert_element(vector<int>l, int k, int val)
  {
    l.insert(l.begin()+k,val);
    print_list(l);
  }

  //method to erase element
  void erase_element(vector<int>l, int k)
  {
    l.erase(l.begin()+k);
    print_list(l);
  }

};

//driver code
int main()
{
  int n=5;
  vector<int>a(n);
  a={1,2,3,4,5};

  List obj;
  obj.get_size(a);
  obj.print_list(a);
  obj.get_index(a,3);
  obj.insert_element(a,2,100);
  obj.erase_element(a,2);
  return 0;
}