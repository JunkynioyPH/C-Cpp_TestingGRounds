#include <iostream>
using namespace std;

int print(string inputString, float inputfloat=0) {
    cout << inputString << inputfloat << "\n";
}

int main() {
    string x; float y;
    print("Test Gaming",1);
    print("Test Gaming",2);
    cout << "input a string >> ";
    cin >> x;
    cout << "input a float >> ";
    cin >> y;
    print(x,y);
    return 0;
}