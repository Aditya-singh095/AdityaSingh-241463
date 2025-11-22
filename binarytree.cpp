#include <iostream>
using namespace std;

int main() {
    int tree[100];
    int n;
    cout << "Enter number of nodes in binary tree: ";
    cin >> n;
    cout << "Enter elements level-wise (use -1 for no node): ";
    for (int i = 1; i <= n; i++) {
        cin >> tree[i];
    }

    cout << "Binary tree in array form: ";
    for (int i = 1; i <= n; i++) {
        cout << tree[i] << " ";
    }
    return 0;
}
