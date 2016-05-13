#include <iostream>
using namespace std;
void reverse(char*,int);

int main(){
	char s[] = {'a','s','d','f'};
	reverse(s,4);
}
/**
 * reverse()
 *
 * voltea todo el string
 * 
 * s 		char | array
 * len 		int
 * return 	void
*/
void reverse(char s[],int len){
	int max = --len;
	char t;
	for(int i = 0;max >= 0 && max > i; i++,max--){
		t = *(s + max);
		*(s + max) = *(s + i);
		*(s + i) = t;
	}
}