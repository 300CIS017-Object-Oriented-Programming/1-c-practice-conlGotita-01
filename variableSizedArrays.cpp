#include <iostream>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    // Create an array of pointers to store the variable-length arrays
    int **arrays = new int*[n];

    // Read the variable-length arrays and store them in the array of pointers
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        arrays[i] = new int[k];
        for (int j = 0; j < k; j++) {
            cin >> arrays[i][j];
        }
    }

    // Process the queries and print the results
    for (int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;
        cout << arrays[a][b] << endl;
    }

    // Deallocate memory for the arrays
    for (int i = 0; i < n; i++) {
        delete[] arrays[i];
    }
    delete[] arrays;

    return 0;
}
