#include <iostream>
using namespace std;

void analyze_pointer(int *ptr) {
    cout << "Memory Address: " << ptr << endl;
    cout << "Value: " << *ptr << endl;
}

int main() {
    //Stack allocation
    int iValue = 42; // allocate on stack
    cout << "Stack Allocation " << endl;
    analyze_pointer(&iValue);

    //Heap allocation
    int *pHeap = new int(99); 
    cout << "\nHeap Allocation " << endl;
    analyze_pointer(pHeap);

    
    delete pHeap;

    return 0;
}
