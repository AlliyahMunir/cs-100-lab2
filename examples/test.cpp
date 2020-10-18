#include <iostream>
using namespace std;

int main() {
    int x=1;		//Begin by adding values to each variable such as x=1, z=2, y = x(1) + 5 = 6
    bool z=2;
    int y = x + 5;
    if (x>5) {		//If statements are written with condition, hence if x >5 then statement will appear 
        cout << "X is non-zero" << endl;		//Statement will not appear because x(1) is not >5
    }
    if (z<4) {		//If statement has condition, if z<4 then statement will output
        cout << "Z is truthy" << endl;			//Statment will appear because z(2) is <4
    }
    else		//If the first two statements appear false, then y will output on screen
    cout << y << endl;	//y will not output on screen because the second if statement is true. 
    return 0;
}
