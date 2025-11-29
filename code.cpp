#include <iostream>
#include <fstream>
#include "IntBinaryTree.h"
using namespace std;

int main() {
    IntBinaryTree tree;
    cout << "z " << endl; 

    //FIle Opening
    ifstream file;
	file.open("codes.txt");
	if (!file.is_open()) {
	    cout << "Failed to open file" << endl;
	    return 1;
	}
    //Populating values
    string num;
    while (file >> num) {
        tree.insertNode(num);
        cout << num << endl;
    };
    file.close();

    tree.displayInOrder();
    tree.displayPostOrder();
    tree.displayPreOrder();
    
    return 0;
}