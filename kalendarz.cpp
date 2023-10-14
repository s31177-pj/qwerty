#include <iostream>
using namespace std;

int main()
{
    int mc;
    cout << "Podaj liczbe od 1 do 12.\n";
    cin >> mc;
    switch (mc)
    {
    case 1:
        cout << "Styczen, 31 dni, pochmurno ";
        break;
    case 2:
        cout << "Luty, 28 dni, pochmurno ";
        break;
    case 3:
        cout << "Marzec, 31 dni, pochmurno ";
        break;
    case 4:
        cout << "Kwiecien, 30 dni, słonecznie ";
        break;
    case 5:
        cout << "Maj, 31 dni, słonecznie ";
        break;
    case 6:
        cout << "Czerwiec, 30 dni, słonecznie ";
        break;
    case 7:
        cout << "Lipiec, 31 dni, słonecznie ";
        break;
    case 8:
        cout << "Sierpień, 31 dni, słonecznie ";
        break;
    case 9:
        cout << "Wrzesień, 30 dni, słonecznie ";
        break;
    case 10:
        cout << "Październik, 31 dni, pochmurno ";
        break;
    case 11:
        cout << "Listopad, 30 dni, pochmurno ";
        break;
    case 12:
        cout << "Grudzień, 31 dni, pochmurno ";
        break;
        default:
        cout << "wybrałes liczbe spoza zakresu";

    }
    return 0;
}