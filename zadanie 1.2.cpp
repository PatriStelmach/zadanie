#include <iostream>

using namespace std;

int main()
{
    cout << "Wprowadz dowolna liczbe calkowita:";
    int a=0;
    cin >> a;

    if (a > 0) 
    {
        cout << "Jest to liczba dodatnia" << endl;
    }

    if (a < 0) 
    {
        cout << "Jest to liczba ujemna" << endl;
    }

    else 
    {
        cout << "Wpisales 0" << endl;
    }
    

    return 0;
}