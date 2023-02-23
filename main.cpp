#include <iostream>
using namespace std;

int main() {

    //1.feladat

    /*
    cout << "Kérek két számot!" << endl;
    int a, b;
    cin >> a >> b;

    if(a>b){
        cout << "Az első a nagyobb " << a << ">" << b <<endl;
    }else if(a<b){
        cout << "Az második a nagyobb " << a << "<" << b <<endl;

    }else cout <<"Mindkét szám egyenlő " << a << "=" << b <<endl;

    */

    //2.feladat
    int c;
    do{
        cout << "Kérek egy számot!" << endl;
        cin >> c;
        if(c%2==0){
            cout << (c/2) << endl;
        }
    }while(c%2==0);

    //3.feladat

    

    return 0;
}
