#include "List.h"



Node::Node(int x):data(x),next(NULL){}


void slist::push_front(int data){
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;

}

void slist::push_back(int data){
    Node* newNode = new Node(data);
    if (head ==NULL){
        head = newNode;

    } else{
        Node* current = head;
        while(current->next != NULL){
            current = current->next; 
        }
        current->next = newNode;
    }
}

void slist::pop_front(){
    Node* temp1 = head;
    head = head->next; 
    delete temp1;
}

void slist::pop_back(){
     if (head == NULL) {
        cout << "List is empty. Cannot pop back." << endl;
        return;
    }

    Node* temp1 = head;
    Node* temp2 = NULL;
    while (temp1->next != NULL) {
        temp2 = temp1;
        temp1 = temp1->next;
    }

    delete temp1;
    if (temp2 != NULL) {
        temp2->next = NULL;
    } else {
        head = NULL; // If there was only one element in the list
    }
}

void slist::front(){
    if (head != nullptr) {
        cout << "First obeject is " << head->data << endl;
    } else {
        cout << "Cannot display, list is empty" << endl;
    }
}

void slist::back(){
if (head != nullptr) {
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        cout << "Last object is " << current->data << endl;
    } else {
        cout << "Cannot display, list is empty" << endl;
    }
}


void slist::empty(){
    if(head==NULL){
        cout << "List empty" << endl;
    
    }else{
        cout << "Not Empty" << endl;
    }

    
}

void slist::insert(int data,int index){
    if (index < 0) {
        cout << "Invalid index. Cannot insert." << endl;
        return;
    }
    
    Node* newNode = new Node(data); 
      if (index == 0) {
        // Insert at the beginning
        newNode->next = head;
        head = newNode;
        cout << "Element inserted at index " << index << " successfully." << endl;
        return;
    }

    int current_index = 0;
    Node* current = head;
    Node* previous = NULL;
     while (current != NULL && current_index < index) {
        previous = current;
        current = current->next;
        ++current_index;
    }
    if (current == NULL && current_index < index) {
        previous->next = newNode;
        cout << "Element inserted at the end of the list successfully." << endl;
        return;
    }
}

void slist::remove(int index){
    if (head == NULL) {
        cout << "List is empty. Cannot remove." << endl;
        return;
    }

    if (index == 0) {
        // Remove the first node
        Node* temp = head;
        head = head->next;
        delete temp;
        cout << "Element at index " << index << " removed successfully." << endl;
        return;
    }

    int current_index = 0;
    Node* current = head;
    Node* previous = NULL;

    // Traverse the list to find the node at the specified index
    while (current != NULL && current_index < index) {
        previous = current;
        current = current->next;
        current_index++;
    }

    if (current == NULL) {
        cout << "Index out of bounds. Cannot remove." << endl;
        return;
    }

    // Remove the node at the specified index
    previous->next = current->next;
    delete current;

    cout << "Element at index " << index << " removed successfully." << endl;
}


void slist::find(int item){
    int size = 0;
    Node* current = head;

    while (current != nullptr && current->data != item) {
        current = current->next;
        ++size;
    }

    if (current != nullptr && current->data == item) {
        cout << "Item found at index: " << size << endl;
    } else {
        cout << "Item not found in the list." << endl;
    }
}

bool stack::xEmpty(){
    return stuff.empty();
}

void stack::push(int value){
    stuff.push_back(value);
}
void stack::pop(){
    if(!stuff.empty()){
        stuff.pop_back();
    } else{
        cout<< stuff.empty() << endl;
    }
}

void stack::top(){
    if(!stuff.empty()){
        cout << "Top of stack is " << stuff.back() << endl;

    }else{
        cout << "Stack empty"<< endl;
    }
}

void stack::avg(){
    int sum = 0;
    for (int value : stuff) {
        sum += value;
    }

    if (!stuff.empty()) {
        cout<< "Average is " << sum / stuff.size() << endl;
    } else {
        cout << "Stack empty" << endl;
    }
}
