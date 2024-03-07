#pragma once
#include <string>
#include <typeinfo>
#include <iostream>
#include <vector>

using namespace std;



class Node{
public:

Node(int data);
int data;
Node * next;


};

class slist{
    
public:
Node* head=nullptr;


void push_front(int data); //add to the front
void push_back(int data); //add to the back
void pop_front(); //delete front
void pop_back(); //delete back
void front(); //display front
void back(); //display back
void empty(); // tell if list empty or not
void insert(int data,int index); //insert at index
void remove(int index); //remove at index and tell if succefel or not
void find(int item); //return index if found, else return size of list

};

class stack{

    public:
    vector<int> stuff;
    bool xEmpty();
    void push(int value);
    void pop();
    void top();
    void avg();
};
