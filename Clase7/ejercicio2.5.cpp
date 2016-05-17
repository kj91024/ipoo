#include <iostream>
using namespace std;
int main()
{	int size;
	int a;
	cin >> size;
	int *nums = new int[size];
	for(int i= 0; i<size;++i){
		cin >> nums[i];
	}
	delete[] nums;
	for(int i=0;i<size;i++)
		cout << nums[i];
}	