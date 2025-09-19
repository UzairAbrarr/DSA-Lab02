#include <iostream>
using namespace std;

int main() {
    const int size = 20;
    int* salArray = new int[size];  // this is converted from array to pointer ( Dynamic Memory allocation)

    // Get salaries from user using loop
    for (int i = 0; i < size; i++) {
        cout << "Enter Salary for employee " << (i + 1) << ": ";
        cin >> *(salArray + i);
    }

    // Using the same forumla that is given just change the logic 
    for (int i = 0; i < size; i++) {
        *(salArray + i) = *(salArray + i) + (*(salArray + i)) / (i + 1);
    }

    // This code will display the updated salaries
    cout << "\nUpdated Salaries: ";
    for (int i = 0; i < size; i++) {
        cout << *(salArray + i) << " ";
    }
    cout << endl;

    // delete the pointer to free up the space
    delete[] salArray;

    return 0;
}
