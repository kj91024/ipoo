#include <iostream>

using namespace std;
/**
 * printNTimes()
 * 
 * Imprime n veces msg
 *
 * msg [char && pointer]
 * n int
 *
*/
void printNTimes(char *msg,int n){
	for(int i = 0; i < n;++i)
		cout << msg;
}

/**
void printNTimes(char *msg,int n =1){
	for(int i = 0;i < n;++i)
		cout << msg;
}
void printNTimes(char *msg = "\n", int n = 1){
	for(int i=0; i<n ; ++i)
		cout<<msg;
}
*/

int main(){
	char *c;
	cin >> c;
	printNTimes(c,1);
}