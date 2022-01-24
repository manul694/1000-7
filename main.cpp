#include <iostream>

using namespace std;
int i,a;
int main()
{
    i = 1000;
    while(i>=0) {
        a=i;
        i=i-7;
        cout << a << " - 7 = " << i << endl;
    }
    return 0;
}
