#include <list>
#include <iostream>
using namespace std;
typedef list<int> INTLIST; // int list
int display(const INTLIST& c)
{
int z = 0; // Counter
list<int>::const_iterator pos; // Iterator
for( pos = c.begin(); pos != c.end(); pos++, z++)
cout << *pos << endl;
cout << endl;
return z;
}