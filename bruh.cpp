#include <iostream>
using namespace std;

int main(){
int x;
int y;


cout << "podaj liczbe uczestników imprezy: ";
cin >> x;
cout << "podaj liczbe kawałków pizzy: ";
cin >> y;
int wynik = y / x;
cout << "na każdego uczestnika imprezy przypadają " << wynik << " kawałki pizzy";
return 0;
}   