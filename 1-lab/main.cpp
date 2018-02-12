#include<iostream>
#include<vector>
#include<string>

using namespace std;

int factWithFor(int n){
    int sum = n--;
    for (n; n > 1; n--){
        sum *= n;
    }
    return sum;
}

int factWithWhile(int n){
    int sum = n--;
    while (n > 1){
        sum *= n--;
    }
    return sum;
}

int fact(int n){
    if (n <= 1) return 1;
    else return n * fact(n-1);
}

int fibWithFor(int n){
    
}

int fibWithWhile(int n){
    return n;
}

int fib(int n){
    if (n < 2) return n;
    return fib(n-1) + fib(n-2);
}

int towerRecursive(int n){
    
}

int towerNonRecursive(int n){

}

int main (){
    cout << factWithFor(4) << endl;
    cout << factWithWhile(4) << endl;
    cout << fact(4) << endl;
    cout << fibWithFor(4) << endl;
    cout << fibWithWhile(4) << endl;
    cout << fib(6) << endl;
}
