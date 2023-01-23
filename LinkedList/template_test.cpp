#include "LinkedList.h"

#include <iostream>
using namespace std;

int main() {
	cout << "Lab 6 test" << endl;
    cout << "\n";
    LinkedList<int>test;
    
    test.add(1);
    test.add(2);
    test.insertAt(2,5);
    test.printList();
    cout << "\n";
    bool found = test.findVal(2);
    cout << found;
    cout << "\n";
    test.removeAll();
    test.printList();
    cout << "\n";
    LinkedList<string>testString;
    testString.add("is");
    testString.add("This");
    testString.printList();
    cout << "\n";
    testString.insertAt(3,"lab6");
    testString.printList();
    cout << "\n";
    bool foundString = testString.findVal("This");
    cout << foundString;
    cout << "\n";
    testString.removeAll();
    testString.printList();
    cout << "\n";
	return 0;
}
