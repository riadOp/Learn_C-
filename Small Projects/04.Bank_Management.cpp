#include<iostream>

// Function declarations
double Deposite(double Balance);
double Withdraw(double Balance);

int main() {
    double Balance = 0.0; 
    int choice;

    do {
        std::cout << "********************** Welcome to Fontain Bank *********************\n";
        std::cout << "                                                                  \n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter Your Choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Your current Balance: $" << Balance << '\n';
                break;

            case 2:
                Balance = Deposite(Balance); // Update Balance using Deposite function
                break;

            case 3:
                Balance = Withdraw(Balance); // Update Balance using Withdraw function
                break;

            case 4:
                std::cout << "Exiting...\n";
                break;

            default:
                std::cout << "Invalid choice! Please enter a number between 1 and 4.\n";
        }

    } while (choice != 4);

    return 0;
}

// Function definitions
double Deposite(double Balance) {
    double amount;
    std::cout << "Enter amount to deposit: ";
    std::cin >> amount;
    Balance += amount;
    return Balance;
}

double Withdraw(double Balance) {
    double amount;
    std::cout << "Enter amount to withdraw: ";
    std::cin >> amount;
    
    if (amount > Balance) {
        std::cout << "Insufficient balance!\n";
    } else {
        Balance -= amount;
        std::cout << "Withdrawn $" << amount << " successfully.\n";
    }
    
    return Balance;
}
