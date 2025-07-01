#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;  // Read the dimensions of the table

    vector<vector<char>> table(n, vector<char>(m));  // Create a 2D vector to store the table

    // Read each row and column of the table
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> table[i][j];
        }
    }

    int minX = INT_MAX, maxX = INT_MIN, minY = INT_MAX, maxY = INT_MIN;

    // Find the boundaries of the black square
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (table[i][j] == 'B') {
                minX = min(minX, i);
                minY = min(minY, j);
                maxX = max(maxX, i);
                maxY = max(maxY, j);
            }
        }
    }

    // Calculate the center of the black square
    int centerX = (minX + maxX) / 2 + 1;
    int centerY = (minY + maxY) / 2 + 1;

    // Output the center coordinates
    cout << centerX << ' ' << centerY << endl;

    return 0;
}
