#include <iostream>
using namespace std;

int main() {
    int x = 10;
    cout << x << endl;

    return 0;
} 

/* #include <iostream>
using namespace std;

 int main() {
    int x;
    bool z;
    int y = x + 5;
    if (x) {
        cout << "X is non-zero" << endl;
    }
    if (z) {
        cout << "Z is truthy" << endl;
    }
    cout << y << endl;
    return 0;
} 

#include <iostream>

void foo(int x)
{
    std::cout<<x<<std::endl;
}

int main()
{
    int x;
    int r=4;
    int y=x+r;
    if(x) x++; // uninitialized error reported here
    if(r) r++;
    if(y) y++; // uninitialized error reported here

    foo(y);
    
    return 0;
} */
