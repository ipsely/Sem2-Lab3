#include <iostream>
using namespace std;

// creating nodes with a data and 2 pointers

struct node{
int data;
node *n;
node *p;

};

//creating a class linked list

class dlink{
private:  // declaring head and tail in private;
node *head;
node * tail;

public:
// assigning a default value of head and tail as NULL
dlink(){

head = NULL;
tail = NULL;
}
// adding member functions
 void insert(int n);
 void display();
 void displayr();
 void count();
 void Delete();
 void insertat(int pos, int n);
 void Deleteat(int pos);

};
// defining the member function to insert node at the end

void dlink::insert(int n){
node *temp = new node;
temp->data = n;
temp->n = NULL;
if(head == NULL){
head = temp;
tail = temp;
}
else{
tail->n = temp;
temp->p =tail;
tail = temp;


}


}

// defining the member function to display all elements

void dlink::display(){

node *temp = new node;

temp = head;


if(head == NULL){

cout<<"The list is EMPTY";

}

else{
    while(temp != NULL){
    cout<<" -> "<<temp->data;
    temp=temp->n;
    }
    cout<<"-> NULL";
}



}

// defining member function to display things in the reverse order

void dlink::displayr(){
node *temp = new node;
temp = tail;
if(head==NULL){
cout<<"The list is EMPTY";
}
else{while(temp!=NULL){
cout<<"-> "<<temp->data;
temp = temp->p;
}
cout<<" -> NULL";
}
}
// defining function to count the number of elements
void dlink::count(){
int x;
x=0;
node *temp = new node;
temp = head;
while(temp != NULL){
temp = temp->n;
 x++;
}
cout<<"There are "<<x<<" elements in the list"<<endl;

}
// defining function to delete the last element

void dlink::Delete(){
if(head == NULL){
cout<<"There is no elements in the list";
}
else if(head==tail){

}
else {
node *temp;
temp = tail->p;
tail->p = NULL;
temp->n = NULL;
tail =temp;
}

}
//function to insert at a position
void dlink::insertat(int pos, int n){



}


int main(){

dlink a;
a.insert(1);
a.Delete();
a.insert(2);
a.insert(3);
a.insert(4);
a.insert(5);
a.Delete();
a.display();




    return 0;
}
