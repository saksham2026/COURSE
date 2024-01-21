#include<iostream>
using namespace std;

int main() {
    int num = 10;
    int *ptrtonum = &num;

    cout << ptrtonum << endl;

    // If I want to create a pointer to the pointer itself, then we need to use the asterisk, 2 times.
    int **ptrtoptr = &ptrtonum;
    cout << "Value of num is : " << **ptrtoptr << endl; 

    string me = "Saksham";
    string *charptr = &me;
    cout << *(charptr) << endl;

    const int num2 = 20;
    const int *ptr = &num2;
    cout << "Before ptr1 is : " << ptr << endl;
    const int *ptr2 = &num;
    ptr = ptr2 ;

    // we can change the value of the pointer to a constant int, but we can not change the constant pointers.
    // Declaring a const pointer

    // int *const b ;  This will give error, as constant pointer can not be left unassigned.

    // Dynamic memory allocation in heap
    // To allocate the memory inside the heap, we need to use the new keyword.

    int *c = new int;
    // THis will allocate a memory inside the heap. By default it will have the value 0;

    cout << " Value at address " << c << " is " << *c << endl;

    
    return 0;
}