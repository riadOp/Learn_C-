#include <iostream>
#include <algorithm>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;
        
        int count_A = 0, count_B = 0, count_C = 0, count_D = 0;
        std::string answers;
        std::cin >> answers;

        // Count occurrences of each answer
        for (char ch : answers) {
            if (ch == 'A') count_A++;
            else if (ch == 'B') count_B++;
            else if (ch == 'C') count_C++;
            else if (ch == 'D') count_D++;
        }

        // Calculate the number of correct answers
        int max_A = std::min(count_A, n);
        int max_B = std::min(count_B, n);
        int max_C = std::min(count_C, n);
        int max_D = std::min(count_D, n);

        // Calculate the total correct answers from known answers
        int total_correct = max_A + max_B + max_C + max_D;

        std::cout << total_correct << std::endl;
    }

    return 0;
}

