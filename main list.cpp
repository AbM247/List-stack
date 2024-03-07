#include "List.h"
#include "List.cpp"

void printList(const slist& myList) {
    Node* current = myList.head;

    cout << "List: ";
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

void printStack(const stack& myStack) {
    cout << "Stack: ";
    for (int value : myStack.stuff) {
        cout << value << " ";
    }
    cout << endl;
}

int main(){
    slist somelist;
    somelist.push_front(10);
    somelist.push_front(7);
    somelist.push_front(8);
    somelist.push_front(6);
    somelist.push_front(2);
    somelist.push_back(3);
    printList(somelist);
    somelist.pop_front();
    printList(somelist);
    somelist.pop_back();
    printList(somelist);
    somelist.front();
    somelist.back();
    somelist.empty();
    somelist.insert(11,2);
    printList(somelist);
    somelist.remove(2);
    printList(somelist);
    somelist.find(6);

    stack somestack;
    somestack.xEmpty();
    somestack.push(3);
    somestack.push(7);
    somestack.push(11);
    somestack.push(5);
    printStack(somestack);
    somestack.pop();
    printStack(somestack);
    somestack.top();
    somestack.avg();
    return 0;
}

