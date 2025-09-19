#include <iostream>
#include <cstring> // Library to use string functions
using namespace std;

int main() {
    int size;
    cout << "Enter the maximum length of the string: ";
    cin >> size;
    cin.ignore();

    char *str = new char[size + 1]; // allocate dynamic memory
    cout << "Enter a string: ";
    cin.getline(str, size + 1);

    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    cout << "Reversed string: " << str << endl;

    delete[] str; // free the memory

    return 0;
}
