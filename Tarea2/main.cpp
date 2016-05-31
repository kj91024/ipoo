#include <iostream>
using namespace std;
class node{
	public:
	int i;
	node *next;
	node *back;
	node(int i){
		this->i = i;
		this->next = NULL;
		this->back = NULL;
	}
};
class link{
	public:
	node *first;
	node *last;
	
	link(void){
		this->first = NULL;
		this->last = NULL;
	}
	void addValueLink(int i){
		if(this->first == NULL){
			this->first = new node(i);
			this->last = this->first;
		}else{
			node *tmp = last;
			last->next = new node(i);
			last = last->next;
			last->back = tmp;
		}
	}
	void printDes(void){
		node *temp = this->first; 
		while(temp->next != NULL){
			cout << temp->i << endl;
			temp = temp->next;
		}
		cout << temp->i << endl;
	}

	/*Busca en la lista enlazada al que tiene la posicion "x" la retorna y lo quita de la lista*/
	node *pop(int x){
		node *temp = this->first;
		int count = 0;
		while(count < x){
			temp = temp->next;	
			count++;
		}
		node *a = temp->back; // guarda el nodo anterior del nodo actual
		node *b = temp->next; // guarda el nodo siguiente del nodo actual
		
		node *save = a;
		a->next = b;
		b->back = save;

		return temp;
	}
	/*Busca en la lista enlazada al que tiene la posicion "x" e inserta el "i" en esa posicion*/
	void push(int x,int i){
		node *temp = this->first;
		int count = 0;
		while(count < x){
			temp = temp->next;	
			count++;
		}
		node *save_temp = temp;
		node *temp_back = temp->back;

		node *new_node = new node(i);
		new_node->next = temp;
		new_node->back = temp->back;

		temp_back->next = new_node;

		temp->back = new_node;
		/*temp->next = save_temp;*/
	}
	node *queue(void){
		node *temp = this->first;
		
		this->first = temp->next; // guarda el nodo siguiente del nodo actual
		this->first->back = NULL;

		return temp;
	}
	node *stack(void){
		node *temp = this->last;
	
		this->last = temp->back; // guarda el nodo anterior del nodo actual
		this->last->next = NULL; // guarda el nodo siguiente del nodo actual

		return temp;
	}
};
int main(){
	link l;
	l.addValueLink(1);
	l.addValueLink(2);
	l.addValueLink(3);
	l.addValueLink(4);
	l.addValueLink(5);
	l.printDes();
	cout << endl<<endl;
	l.pop(3);/*sacar el nodo de la posicion 3*/
	l.printDes();
	cout << endl<<endl;
	l.push(3,4);
	l.printDes();
	cout << endl<<endl;
	l.queue();
	cout << endl<<endl;
	l.stack();
	cout << endl<<endl;
	l.printDes();
}











