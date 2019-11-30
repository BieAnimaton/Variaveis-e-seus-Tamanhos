#include <iostream>

using namespace std;

int main() {

    int varInt = 100;
    char c = 'r';
    double pFloat = 5.99;

    cout << "O valor da variavel varInt eh: " << varInt << endl;
    cout << "O valor da variavel c eh: " << c << endl;
    cout << "O valor da variavel flutuante eh: " << pFloat << endl;
    cout << endl;
    cout << "Memoria da varivel varInt: " << sizeof(varInt) << " bytes" << endl;
    cout << "Memoria da varivel c: " << sizeof(c) << " bytes" << endl;
    cout << "Memoria da varivel flutuante: " << sizeof(pFloat) << " bytes" << endl;

    return 0;
}
