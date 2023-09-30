#include <iostream>
using namespace std;
main()
{
int a, b, c;

  cout<<"wypisz liczbe numer 1" << endl;
  cin>>a;
  cout<<"wypisz liczbe numer 2" << endl;
  cin>>b;
  cout<<"wypisz liczbe numer 3" << endl;
  cin>>c;

  if (a>b && a>c)
  {
  cout<<a<<" jest najwieksza";
  }
  else if (b>a && b>c)
  {
    cout<<b<<" jest najwieksza";
  }
  else if (c>a && c>b)
  {
  cout<<c<<" jest najwieksza";
  }
  return 0;
}
