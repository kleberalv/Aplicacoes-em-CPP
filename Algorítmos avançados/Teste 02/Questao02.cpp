 #include <iostream>

 using namespace std;

 int b, *a, *c;

 int main()
 {
 b = 10;
 a = &b;
 c = a;
 *a = *c + b++;
 b = (*a)++ + ++(*c);
 cout << b << endl;
 return 0;
 }
