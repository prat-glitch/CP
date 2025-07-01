#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> sushi(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> sushi[i];
    }
    
    vector<int> counts;
    int current_count = 1;
    
    for (int i = 1; i < n; ++i) {
        if (sushi[i] == sushi[i - 1]) {
            current_count++;
        } else {
            counts.push_back(current_count);
            current_count = 1;
        }
    }
    counts.push_back(current_count);
    
    int max_length = 0;
    for (int i = 1; i < counts.size(); ++i) {
        max_length = max(max_length, 2 * min(counts[i], counts[i - 1]));
    }
    
    cout << max_length << endl;
    return 0;
}
