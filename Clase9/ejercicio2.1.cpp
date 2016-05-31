#include <iostream>
using namespace std;
template <typename T>
T _min(T t1,T t2){
	/*if(t1 < t2){
		return t1
	}else{
		return t2;
	}*/
	return t1 < t2 ? t1: t2;
}

int main(){
	cout << _min<int>(1,2)<<endl;
}