#include <iostream>

using namespace std;

 int r, *y, s;

 int main()
 {
 r = 5;
 s = r + 2;
 y = &s;
 *y = ++(*y) + (s)++ + (r)++;
 cout << *y << endl;
 return 0;
 }
