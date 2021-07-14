#include <iostream>

using namespace std;

int main(){
    int a,b;
    cout<<"first number : ";
    cin >> a;

    cout<<"second number : ";
    cin >> b;

    cout<<"what operator do you want ? (+ - * /)"<<endl;

    char op;

    switch(op){
        case '+' : addition(a,b);break;
        case '-' : subtraction(a,b);break;
        case '*' : multiplication(a,b);break;
        case '/' : division(a,b);break;
    }

    return 0;
}

void multiplication(int a, int b) {
	cout << a * b << endl;
}

void addition(int a, int b){
    cout<<a+b<<endl;
}

void division(int a, int b){
    cout<< a/b <<endl;
}