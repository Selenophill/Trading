// C++ Program to create
// Trading application
#include <bits/stdc++.h>
#include<string.h>
using namespace std;

// Class created for binding
// all account details together
class Account {
	// Basic Variables declared
	int dogecoin, balance;
	int bitcoin;
	int deposit, withdraw;
	int total_equity = 100;
	int predict;
	int dogecoin_value;
	int bitcoin_value;
int crypto_invest;
int crypto_return;

	// Vector declared
	vector<pair<string, int> > transactions;

public:
bool login() {
    string username, password;
    cout << "Enter username: ";
    cin >> username;

    // Replace with actual username and password verification
if (username == "CSE") {
        cout << "Enter password: ";
        cin >> password;
        // Check if the password is correct
        if (password == "UUV") {
            cout << "Login successful!" << endl;
            return true;
        } else {
            cout << "Wrong password." << endl;
            return false;
        }
    } else {
        cout << "Invalid username." << endl;
        return false;
    }
}    
	// Deposit Cash
	bool Deposit(int money)
	{
		deposit += money;
		balance += money;
		transactions.push_back({ "Deposit:", money });
	}

	// Get account Details
	void Get_account_information()
	{

		cout << "Money Details:\n";
		cout << "Bank Balance:" << balance << endl;
		cout << "Dogecoin:" << dogecoin << endl;
		cout << "Bitcoin:" << bitcoin << endl;
	}

	// Withdraw Cash
	bool Withdraw(int money)
	{
		if (money > balance) {
			return false;
		}

		withdraw += money;
		balance -= money;
		transactions.push_back({ "Withdraw:", money });
		return true;
	}

bool buy_crypto() {
    int option;
    cout << "Want to purchase dogecoin press 1 else for bitcoin press 2\n";
    cin >> option;

    // Check equity
    if (total_equity != 0) {
        // No need for random chance here, as we want direct purchase
        if (option == 1) {
            dogecoin += 1;
            balance -= dogecoin_value;
            crypto_invest += (dogecoin) * dogecoin_value;
        } else if (option == 2) {
            bitcoin += 1;
            balance -= bitcoin_value;
            crypto_invest += bitcoin_value;
        } else {
            cout << "Invalid option. Please choose 1 for dogecoin or 2 for bitcoin.\n";
            return false;  // Indicate unsuccessful purchase
        }
    } else {
        cout << "Insufficient equity to purchase cryptocurrency.\n";
        return false;  // Indicate unsuccessful purchase
    }

    cout << "Cryptocurrency purchased successfully!\n";
    return true;
}

	// Selling crypto function
	bool sell_crypto()
	{
		int option;
		cout << "Want to sell dogecoin press 1 else for "
				"bitcoin press 2\n";
		cin >> option;

		if (option == 2) {
			if (bitcoin == 0)
				return false;
			crypto_return += bitcoin_value;
			balance += bitcoin_value;
			transactions.push_back(
				{ "Bitcoin Sold:", bitcoin_value });
			bitcoin -= 1;
		}
		else {
			if (dogecoin == 0)
				return false;
			crypto_return += dogecoin_value;
			balance += dogecoin_value;
			transactions.push_back(
				{ "Dogecoin Sold:", dogecoin_value });
			dogecoin -= 1;
		}

		return true;
	}

	// Checking All Transactions
	void History()
	{
		cout << "Displaying All transactions\n";
		for (auto it : transactions) {
			cout << it.first << " " << it.second << endl;
		}

		char temp;
		cout << "Do you want to clear all transactions:";
		cin >> temp;

		int no = transactions.size();

		// Clearing All transactions
		if (temp == 'Y') {
			transactions.clear();
			cout << "Total transactions cleared:" << no
				<< endl;
		}
		else {
			cout << "Total transaction:" << no << endl;
		}
	}

	Account()
	{
		crypto_invest = 0;
		crypto_return = 0;
		total_equity = 100;

		balance = 50000;
		dogecoin = 0;
		bitcoin = 0;
		withdraw = 0;
		deposit = 0;
		dogecoin_value = 100;
		bitcoin_value = 500;
	}
};

int main() {
    Account person;
    int amount, choice;

    // Indentation corrected for clarity
     while (!person.login()) {
        // Keep prompting for login until successful
     }

    // Trading options menu displayed only after successful login
    while (1) {
        cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
        cout << endl;
        cout << " 1. To view Account Info" << endl;
        cout << " 2. To Deposit money" << endl;
        cout << " 3. To Withdraw money" << endl;
        cout << " 4. To view History" << endl;
        cout << " 5. To Buy Crypto" << endl;
        cout << " 6. To Sell Crypto" << endl;
        cout << "Press any other key to Exit" << endl;
        cout << endl;
        cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";

        cin >> choice;
        int ans;

        switch (choice) {
            case 1:
                person.Get_account_information();
                break;
            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                ans = person.Deposit(amount);
                if (ans) {
                    cout << "Successfully deposited money" << endl;
                } else {
                    cout << "Deposit failed\n";
                }
                break;
            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                ans = person.Withdraw(amount);
                if (ans) {
                    cout << "Successfully withdrawn amount" << endl;
                } else {
                    cout << "Not enough balance\n";
                }
                break;
            case 4:
                person.History();
                break;
            case 5:
                ans = person.buy_crypto();
                if (ans) {
                    cout << "Successful transaction" << endl;
                } else {
                    cout << "Transaction failed\n";
                }
                break;
            case 6:
                ans = person.sell_crypto();
                if (ans) {
                    cout << "Successful transaction" << endl;
                } else {
                    cout << "Not enough cryptocoins\n";
                }
                break;
            default:
                exit(0);
        }
    }

    return 0;
}
