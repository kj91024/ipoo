#include <iostream>
using namespace std;
int length(char *);

int main(){
	int n;
	char s[] = "lasd";
	n = length(s);
	cout<<n<<endl;
}
/**
 * length()
 *
 * calcula el tamaño de una cadena
 *
 * s char | direccion de memoria
*/
int length(char *s){
	int i = 0;
	for(; *(s + i++) != '\0';)
		;
	return i-1;
}