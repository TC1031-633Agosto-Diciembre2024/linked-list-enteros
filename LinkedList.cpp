//
// Created by Andrés Torres on 06/09/24.
//
#include <iostream>
#include "LinkedList.h"
using namespace std;

void LinkedList::insertAtStart(int value) {
    Node* n= new Node(value);
    if(head==nullptr) {
        head= n;
    }else {
        n->setNext(head);
        head=n;
    }
}

void LinkedList::insertAtFinish(int value) {
    Node* n= new Node(value);
    if(head==nullptr) {
        head=n;
    }else {
        Node* current= head;
        while(current->getNext()!= nullptr) {
            current= current->getNext();
        }
        current->setNext(n);
    }
}


void LinkedList::displayList() {
    Node* current=head;
    cout<<"[";
    while(current!= nullptr) {
        cout<<current->getData()<<" ,";
        current= current->getNext();
    }
    cout<<"]"<<endl;
}

int LinkedList::findElement(int value) {
    Node* current=head;
    int index=0;
    while(current!= nullptr) {
        if(current->getData()==value) {
            return index;
        }
        current= current->getNext();
        index+=1;
    }
    return -1;
}

void LinkedList::deleteElement(int value) {
    if (head==nullptr) {
        return;
    }
    if(head->getData()==value) {
        Node* temp= head;
        head= head->getNext();
        delete temp;
        return;
    }
    Node* current= head;
    while(current->getNext()!= nullptr && current->getNext()->getData()!=value) {
        current=current->getNext();
    }
    if(current->getNext()!=nullptr) {
        Node* temp= current->getNext();
        current->setNext(current->getNext()->getNext());
        delete temp;
    }
}
