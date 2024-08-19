#include <iostream>
using namespace std;
int somatoria(int n) {
 if (n > 1) {
 return n + somatoria(n-1);
 } else {
 return 1;
 }
}
int main()
{
 int n, s;
 cout << "Digite N: ";
 cin >> n;
 s = somatoria(n);
 cout << "Somatoria: " << s << endl;
 return 0;
}