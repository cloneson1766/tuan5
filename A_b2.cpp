#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 1){
		return 1;
    }else{
        cout << "n = " << n <<" at " << &n << endl;
        return n * factorial(n - 1);
    }
}
int main()
{
    int n;
    cout << "nhap so nguyen n: ";
    cin >> n;
    cout << factorial(n);
    return 0;
}
