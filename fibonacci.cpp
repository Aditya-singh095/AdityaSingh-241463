#include <iostream>
using namespace std;



int fib(int n) {
    if (n <= 1) return n;            
    return fib(n - 1) + fib(n - 2);  
}

int main() {
    int N;

    cout<< "Enter the number"<<endl;
    cin >> N;                        
                

    for (int i = 0; i < N; ++i) {
        cout << fib(i);
        if (i + 1 < N) cout << ' '; 
    }
    cout << '\n';
    return 0;
}