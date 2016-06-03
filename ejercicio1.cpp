#include "funcionario.h"
#include "empresa.h"
#include <iostream>
#include <string.h>
using namespace std;
/*Funcionarios*/
Funcionario::Funcionario(void){
	strcpy(this->nombre,"");
	strcpy(this->fecha_ingreso, "");
	this->salario = 0;
}
Funcionario::Funcionario(char *nombre,char *fecha_ingreso,double salario){
	strcpy(this->nombre,nombre);
	strcpy(this->fecha_ingreso,fecha_ingreso);	
	this->salario = salario;
}
char *Funcionario::getNombre(void){ return this->nombre; }
char *Funcionario::getFechaIngreso(void){ return this->fecha_ingreso; }	
double Funcionario::getSalario(void){ return this->salario; }
void Funcionario::setNombre(char *s){strcpy(this->nombre,s);}
void Funcionario::setFechaIngreso(char *s){strcpy(this->fecha_ingreso,s);}
void Funcionario::setSalario(int s){this->salario = s;}

/*Empresa*/
int Empresa::getRuc(void){return this->ruc;}
int Empresa::getNum(void){return this->num;}
char* Empresa::getNombreEmpresa(void){return this->nombre_empresa;}
Empresa::Empresa(int ruc, char *nombre_empresa,int n){
	this->f = new Funcionario[n];
	for(int i =0; i < n;i++){
		this->f[i].setNombre("");
		this->f[i].setFechaIngreso("");
		this->f[i].setSalario(0);
	}	
	this->ruc = ruc;
	this->n = n;
	strcopy(this->nombre_empresa,nombre_empresa);	
}
Empresa::~Empresa(void){delete[] this->f;}
void Empresa::addFuncionario(Funcionario *f){
	int i = 0;
	for(;i<this->n && this->f[i].getNombre() != "";i++)
		;
	if(i < this->n){
		this->f[i].setNombre(f.getNombre());
		this->f[i].setFechaIngreso(f.getFechaIngreso());
		this->f[i].setSalario(f.getSalario());
	}
}
/*void Empresa::removeFuncionario(Funcionario *f){
	
}*/ 
/*void Empresa::showFuncionarios(void){

}*/
void Empresa::aumento(void){
	int i = 0;
	for(;i<this->n && this->f[i].getNombre() != "";i++){
		s_temp = this->f[i].getSalario();
		this->f[i].setSalario(s_temp + s_temp*(10/100));
	}
}

