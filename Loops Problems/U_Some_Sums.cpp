#include <iostream>
using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;
    int total_sum = 0;
    
    for (int i = 1; i <= N; ++i) {
        int sum = 0, num = i;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        if (sum >= A && sum <= B) {
            total_sum += i;
        }
    }
    
    cout << total_sum << endl;
    return 0;
}