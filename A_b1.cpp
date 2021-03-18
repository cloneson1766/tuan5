#include <iostream>
using namespace std;
int main()
{
	int a[3];
	char b[3];
	for(int i = 0; i< 3; i++){
		cin >> a[i];
	}
	for(int i = 0; i < 3; i++){
		cin >> b[i];
	}
	for(int i = 0; i< 3; i++){
		cout << &a[i] << " " <<  endl;
	}
	for(int i = 0; i< 3; i++){
		cout << (void*)&b[i] << " " << endl;
	}
}
//kieu int cach nhau 4bit, con char cach nhau 1bit
