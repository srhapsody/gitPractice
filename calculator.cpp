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
        case '+' : addition(a,b);
        case '-' : subtraction(a,b);
        case '*' : multiplication(a,b);
        case '/' : division(a,b);
    }

    return 0;
}