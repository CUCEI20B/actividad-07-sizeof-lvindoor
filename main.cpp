#include <iostream>

using namespace std;

int main() {

    string tipoDato;
    cin >> tipoDato;

    if(tipoDato.compare("int")==0) {
        cout << sizeof(int) << endl;
    } else if (tipoDato.compare("char")==0) {
        cout << sizeof(char) << endl;
    } else if (tipoDato.compare("short")==0) {
        cout << sizeof(short) << endl;
    } else if (tipoDato.compare("float")==0) {
        cout << sizeof(float) << endl;
    } else if (tipoDato.compare("double")==0) {
        cout << sizeof(double) << endl;
    } else if (tipoDato.compare("long")==0) {
        cout << sizeof(long) << endl;
    }

    return 0;
}
