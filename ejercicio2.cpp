#include "roedores.h";
#include "raton.h";
#include "hamster.h";
#include "arregloRoedor.h";
#include <iostream>
#include <string.h>
using namespace std;
/*Roedores*/
Roedores::Roedores(char *genero, char *nombre, double size,int edad){
	strcopy(this->genero,genero);
	strcopy(this->nombre_cientifico,nombre);
	this->size = size;
	this->edad = edad;
}
char *Roedores::getGenero(void){return this->genero;}
char *Roedores::getNombreCientifico(void){return this->nombre_cientifico;}
double Roedores::getSize(void){return this->size;}
int Roedores::getEdad(void){return this->edad;}

void Roedores::setGenero(char *genero){strcpy(this->genero,genero);}
void Roedores::setNombreCientifico(char *nombre){strcpy(this->nombre_cientifico,nombre);}
void Roedores::setSize(int size){this->size = size;}
void Roedores::setEdad(int edad){this->edad = edad;}

void Roedores::Saltar(void){cout << "Estoy saltando";}
void Roedores::Correr(void){cout << "Estoy corriendo";}

/*Raton*/
void Raton::comerQueso(void){cout << "Comiendo Queso"; }
void Raton::dejardeComerQueso(void){cout << "Ya no esta comiendo queso";}
void Raton::moverCola(void){cout << "Moviendo la cola";}

/*Hamster*/
void Hamster::correrEnlaBola(void){cout << "Corriendo en la bola";}
void Hamster::dejardeCorrerEnlaBola(void){cout << "Deje de correr en la bola";}

