//Convert a number to a string and vice versa.
#include <iostream>
#include <string>
using namespace std;
int main() {
    int numero = 123;
    string numero_str = to_string(numero);
    cout<<"123 como str: " <<numero_str<<endl;
    
    double pi = 3.14159;
    string pi_str = to_string(pi);  // Convert double to string
    cout << "Pi como string: " << pi_str << endl;

    string str1 = "123";
    int num = stoi(str1);  // Convert string to int
    cout << "String to int: " << num << endl;

    string str2 = "3.14";
    double d = stod(str2); // Convert string to double
    cout << "String to double: " << d << endl;

    return 0;
}