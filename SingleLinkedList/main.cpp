#include "SingleLinkedList.h"



void main() {

	SingleLinkedList<int> l;
	l.push_back(5);
	l.push_back(4);
	l.push_back(6);
	l.push_back(9);
	l.push_back(10);
	l.print();
	l.insert(12, 2);
	l.print();
	l.erase(2);
	l.print();	
	SingleLinkedList<int> l1;
	l1 = l;
	l1.print();
	system("pause");

}