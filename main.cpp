#include <iostream>
using namespace std;
int max2(int, int);

int main() {
    int a, b, c, d;

    // max2 max2
    //   max2

    cout << "enter 4 grades" << endl;
    cin >> a >> b >> c >> d;
    cout << "Biggest grade = "<< max2(max2(a,b), max2(c,d))<<endl;
    return 0;
}

// x=a , y=b;

int max2(int x, int y)
{
    if(x>y) return x;
       else return y;
}


