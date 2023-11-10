#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int countValidPermutations(int N) {
    vector<int> numbers;
    for (int i = 1; i <= N; i++) {
        if (!isPrime(i) || i <= 3) {
            numbers.push_back(i);
        }
    }

    int count = 0;
    do {
        bool valid = true;
        for (int i = 0; i < numbers.size(); i++) {
            for (int j = 0; j < i; j++) {
                if (numbers[i] % numbers[j] == 0) {
                    valid = false;
                    break;
                }
            }
            if (!valid) break;
        }
        if (valid) count++;
    } while (next_permutation(numbers.begin(), numbers.end()));

    return count;
}

int main() {
    int N;
    cin >> N;

    int result = countValidPermutations(N);
    cout << result << endl;

    return 0;
}
