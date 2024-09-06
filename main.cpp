#include <iostream>

#include "LinkedList.h"
#include "Node.h"
int main() {
    LinkedList* l= new LinkedList();
    l->insertAtStart(5);
    l->insertAtStart(10);
    l->insertAtStart(11);
    l->insertAtFinish(12);
    l->displayList();
    std::cout<<"El índice del 20 es "<<l->findElement(20)<<std::endl;
    l->deleteElement(5);
    l->deleteElement(12);
    l->deleteElement(10);
    l->displayList();
    l->deleteElement(11);
    l->displayList();
    return 0;
}
