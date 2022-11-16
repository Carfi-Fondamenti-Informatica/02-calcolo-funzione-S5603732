#include <iostream>
using namespace std;

int main() {
   float a, b, x, y, risultato;
    cin >> a >> b >> x >> y;

    if ( ((x<0)&&(y>0))) {
        risultato =  a*x - b*y;
        cout <<  risultato;
    }else if (((x>=0) && (y<=0))) {
        risultato = a*x*x - b*y;
        cout << risultato;
    } else {
        risultato = a*x + b*y*y;
        cout << risultato;
    }
   return 0;
}
