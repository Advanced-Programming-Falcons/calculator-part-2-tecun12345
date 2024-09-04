#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int num1, num2;
float Answer;
char op;
string His;
int main (void) {
    while (true){

    cout << "Enter Calulcation or 0 h 0 for history or 0 E 0 To end" << endl;
    cin >> num1;
    cin >> op;
    cin >> num2;
    if (op == 'h'){
        cout << His;
    }
    else {
        if (op == '+'){
            Answer = num1 + num2;
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            His += to_string(num1) + " + " +  to_string(num2) + " = " + to_string(Answer) + "\n";
            }
        else if (op == '-'){
            Answer = num1 - num2;
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            His += to_string(num1) + " - " +  to_string(num2) + " = " + to_string(Answer) + "\n";
        }
        else if (op == '*'){
            Answer = num1 * num2;
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            His += to_string(num1) + " * " +  to_string(num2) + " = " + to_string(Answer) + "\n";
        }
        else if (op == '/'){
            Answer = num1 / num2;
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            His += to_string(num1) + " / " +  to_string(num2) + " = " + to_string(Answer) + "\n";
        }
        else if (op == 'E'){
            break;
        }
        else{
            cout << "Something went wrong please enter again";}

     
    }
    }
    return 0;
}
