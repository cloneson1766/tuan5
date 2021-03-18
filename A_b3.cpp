#include <iostream>
using namespace std;
void passbyvalue(int n){ //truyen tham tri
    n++;
    cout << "\nDia chi cua n: " << &n;
}
void passbyreference(int &n){ // truyen tham chieu
    n++;
    cout << "\nDia chi cua n: " << &n;
}

int main(){
    int value;
    cout << "\nNhap value = ";
    cin >>value;
    //truyen tham tri
    cout <<"\nDia chi cua n: " << &value;
    cout <<"\nTruoc khi goi ham value =" << value;
    passbyvalue(value);
    cout <<"\nSau khi goi ham value = " << value;
    //truyen tham chieu
    cout << "\n \n";
    cout <<"\nDia chi cua n: " << &value;
    cout <<"\nTruoc khi goi ham value =" << value;
    passbyreference(value);
    cout <<"\nSau khi goi ham value = " << value;

}
