#include <iostream>
using namespace std;
int printArray(const int ar[],const int len);

int main(){
	int ar[] = {1,2,3};
	printArray(ar,3);
	return 0;
}
int printArray(const int ar[],const int len){
	for(int i=0; i<len; i++){
		cout<<ar[i];
		if(i < len - 1)
			cout << ", ";
		else
			cout << endl;
	}
	return 0;
}