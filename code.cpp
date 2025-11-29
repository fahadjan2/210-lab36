// COMSC-210 | Lab 36 | Fahad Fawad Ahmad
// IDE used: Visual Studio
#include <iostream>
#include <fstream>
#include "IntBinaryTree.h"
using namespace std;

int main() {
    IntBinaryTree tree;

    //FIle Opening
    ifstream file;
	file.open("codes.txt");
	if (!file.is_open()) {
	    cout << "Failed to open file" << endl;
	    return 1;
	}
    //Populating values
    string num;
    while (getline(file, num)) {
        tree.insertNode(num);
    };
    file.close();

    int choice = 0;
    while (choice != 5) {
        cout << "[1] Insert code\n[2] Delete code\n[3] Search code\n[4] Display data\n[5] Exit" << endl;
        cin >> choice;
        while (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5) {
            cout << "Choose between 1-5" << endl;
            cin >> choice;
        }

        string value;
        if (choice == 1) {
            cout << "Insert value: ";
            cin >> value;
            tree.insertNode(value);

        } else if (choice == 2) {
            cout << "Deletion value: ";
            cin >> value;
            tree.remove(value);
            
        } else if (choice == 3) {
            cout << "Search value: ";
            cin >> value;
            bool found = tree.searchNode(value);
            if (found) cout << "Found" << endl;
            else cout << "Not Found" << endl;
        } else if (choice == 4) {
            tree.displayPreOrder();
        } 
        cout << endl;
    }
    
    return 0;
}
