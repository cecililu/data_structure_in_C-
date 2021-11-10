//Implementing linked list
#include <iostream>
using namespace std;
class LL{
    private:
    struct node{
        int data;
        node * link;
        };
    node * p;
    public:
    LL();
    void append(int num);
    void add_at_beg(int num);
    void print();
};
//p is a pointer that point to the head of LL
//conctructor that initialize head to null for initial case
LL::LL(){
    p=NULL;
}
//making a function append that extends the linked list at the end.
void LL:: append(int num){
    //creating a  new node
    node * temp,* temp1;
    //check case for empty case
    if(p==NULL){
    temp=new node();
    temp->data=num;
    temp->link=NULL;
   // p->link=temp
    }
    else{
        //go to last node
    temp=p;
    
    while(temp->link!=NULL){
       temp=temp->link;}
    //temp has last node in it
    temp1=new node();
    temp->link=temp1;
    temp1->data=num;
    
    
    }
}
void LL:: add_at_beg(int num){
    node * temp=new node();
    if (p!=NULL){
        temp->data=num;
        temp->link=p;
        p=temp;
    }
    else{
    temp->data=num;
    temp->link=NULL;
    p=temp;
    }
}
void LL::print(){
    node * temp;
    temp=p;
     while(temp!=NULL){
       cout<<temp->data<<endl;
       temp=temp->link;
        
    }
}
    

int main(){
LL c;
c.add_at_beg(5);
c.add_at_beg(6);
c.print();
}