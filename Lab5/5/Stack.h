#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

struct Stack {
	struct Link {
		double data;
		Link* next;
		
		void initialize(double dat, Link* nxt){
			data = dat;
			next = nxt;
		}
	}* head;
	
    Stack(){
        initialize();
    }

    Stack(double x){
        double temp = x/4;
        initialize();
        for(int i = x; 0 < i; i--){
            push(temp);
            temp = temp + 0.1;
        }
        for(int i = x; 0 < i; i--){
        cout << peek() << " ";
        pop();
        }
    }

	void initialize(){
		head = 0;
	}
	
	void push(double dat){
		Link* newLink = new Link;
		newLink->initialize(dat, head);
		head = newLink;
	}
	
	double peek(){
		if (head == 0){
			std::cout << "Stack is empty";
		}
		return head->data;
	}
	
	double pop(){
		if(head == 0)
			return 0;
		
		double result = head->data;
		Link* oldHead = head;
		head = head->next;
		delete oldHead;
		return result;
	}
	
	void cleanup(){
		if (head == 0){
			std::cout << "Stack is empty";
		}
		else {
			std::cout << "Stack is not empty";
		}
	}
};
#endif