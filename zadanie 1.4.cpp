#include <iostream>

using namespace std;

int main()
{
  int a;
  int b;
  int c;

  cout << "Wprowadz 3 liczby calkowite, a ja powiem ci, ktora jest najwieksza:" << endl;
  cout << "a:";
  cin >> a;
  cout << "b:";
  cin >> b;
  cout << "c:";
  cin >> c;

  if (a>c & a>b)
  {
    cout << "Najwieksza jest a" << endl;
  }

  if (b>c & b>a)
  {
    cout << "Najwieksza jest b" << endl;
  }

  if (c>a & c>b)
  {
    cout << "Najwieksza jest c" << endl;
  }

  
  return 0;
}
