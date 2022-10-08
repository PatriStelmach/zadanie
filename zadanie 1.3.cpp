#include <iostream>

using namespace std;

int main()
{
    cout << "Wprowadz liczbe calkowita:" ;
    int a=0;
    cin >> a;
  if (a%2==0 & a!=0)
    {
      cout << "Liczba jest parzysta" << endl;
    }
  
  if (a==0)
    {
      cout << "Wpisales 0" << endl;
    }
  
  if (a%2!=0) 
    {
      cout << "Liczba jest nieparzysta" << endl;
    }

  

  
    return 0;
}