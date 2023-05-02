#include <iostream>
using namespace std;

int print(string inputString, float inputfloat=0, string end="\n") {
    cout << inputString << inputfloat << end;
    return 0;
}

// int inputInt(string message)
//     int intValue;
//     cout << message;
//     getline (cin, intValue);
//     return intValue;
// }

string inputStr(string message="") {
    string strValue;
    cout << message;
    getline (cin, strValue);
    return strValue;
}

int main() {
    string x; float y;
    print("Test Gaming",1);
    print("Test Gaming",2); // test recreation of print() from py
    x = inputStr("Insert String Value >> "); // recreation of input() from py, however this is specific to one data type
    cout << "input a float >> ";
    cin >> y;
    print(x,y);
    return 0;
}