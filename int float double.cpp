
#include<iostream>
using namespace std;  // Corrected "name space" to "namespace"

int main()
{
    int num1;
    float num2;
    double num3;

    cout << "Enter your num1: ";  // Corrected "inter" to "Enter"
    cin >> num1;

    cout << "Enter your num2: ";  // Corrected "inter" to "Enter"
    cin >> num2;

    cout << "Enter your num3: ";  // Corrected "inter" to "Enter"
    cin >> num3;

    cout << "Integer number is: " << num1 << endl;  // Added '<<' and 'endl' for better formatting
    cout << "Float number is: " << num2 << endl;    // Added '<<' and 'endl' for better formatting
    cout << "Double number is: " << num3 << endl;   // Added '<<' and 'endl' for better formatting

    return 0;  // Added return statement to indicate successful execution
}
