#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <stdio.h>

using namespace std;

class nodo
{
    public:
    	string _dato;
    	nodo *sig;
		nodo *back;
    	nodo(string a){
            _dato=a;
            sig = NULL;
            back = NULL;
        }
};

class lista
{
    public:
        nodo *primero;
        nodo *ultimo;
        lista(){
            primero = NULL;
            ultimo = NULL;
        }
        void inser(string x){
            if(!primero){ //si es NULL
                primero = new nodo(x); // primero apunta a nodo(x)
                ultimo = primero; // ultimo apunta a primero
            }else{
                nodo *temp;
                temp = ultimo; //temp apunta a ultimo
                ultimo->sig = new nodo(x); //ultimo->sig apunta a nodo(x)
                ultimo = ultimo->sig; //ultimo apunta a ultimo->sig
                ultimo->back = temp; // ultimo->back apunta a temp
            }
        }
        void print(){
            nodo* temp;
            temp=primero;
            while(temp != ultimo->sig){
                cout << temp->_dato << endl;
                temp = temp->sig;
            }
        }
		void print_revez()
        {
            nodo* temp;
            temp=ultimo;
            while(temp != primero->back){
                cout << temp->_dato << endl;
                temp = temp->back;
            }
        }
};
int main()
{
    lista sws;
    sws.inser("Hello world");
    sws.inser("How are you doing");
	sws.inser("Whats up?");
    sws.inser("I'm well");
	cout << endl;
	sws.print_revez();
    return 0;
}

