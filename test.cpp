// /*
//     @author: princebansal_
// */

// // #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;
// #define nl '\n'
// #define ll long long
// #define repn(i, a, b) for (int i = a; i <= b; ++i)
// #define rep(i, a, b) for (int i = a; i < b; ++i)

// int main()
// {

//     if (__cplusplus == 202002L)
//         cout << "C++20\n";
//     else if (__cplusplus == 201703L)
//         cout << "C++17\n";
//     else if (__cplusplus == 201402L)
//         cout << "C++14\n";
//     else if (__cplusplus == 201103L)
//         cout << "C++11\n";
//     else if (__cplusplus == 199711L)
//         cout << "C++98\n";
//     else
//         cout << "pre-standard C++\n";
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;
class BankAccount {
private:
    string name;
    int accountNum;
    double balance;

public:
    BankAccount(string n, int ac, double bal)
    {
        name = n;
        accountNum = ac;
        balance = bal;
    }
    string getName()
    {
        return name;
    }
    int getAccountNum()
    {
        return accountNum;
    }
    double getBalance()
    {
        return balance;
    }
    void deposit(double amount)
    {
        balance = balance + amount;
    }
    void withdraw(double amount)
    {
        if (balance >= amount) {
            balance = balance - amount;
            cout << "\t\tWithdraw Successfully..." << endl;
        } else {
            cout << "\t\tInsufficient Balance...." << endl;
        }
    }
};
class BankManagement {
private:
    vector<BankAccount> accounts;

public:
    void AddAccount(string name, int accountNum, double balance)
    {
        accounts.push_back(BankAccount(name, accountNum, balance));
    }
    void showAllAccounts()
    {
        cout << "\t\tAll Account Holders " << endl;
        for (int i = 0; i < accounts.size(); i++) {
            cout << "Name :" << accounts[i].getName() << " Account Number :" << accounts[i].getAccountNum() << " Balance :" << accounts[i].getBalance() << endl;
        }
    }
    void searchAccount(int account)
    {
        cout << "\t\tAccount Holder " << endl;
        for (int i = 0; i < accounts.size(); i++) {
            if (accounts[i].getAccountNum() == account) {
                cout << "Name :" << accounts[i].getName() << " Account Number :" << accounts[i].getAccountNum() << " Balance :" << accounts[i].getBalance() << endl;
            }
        }
    }
    BankAccount* findAccount(int accountNum)
    {
        for (int i = 0; i < accounts.size(); i++) {
            if (accounts[i].getAccountNum() == accountNum) {
                return &accounts[i];
            }
        }
    }
};
int main()
{

    BankManagement bank;
    int choice;
    char op;
    do {
        system("clear");
        cout << "\t\t::Bank Management System" << endl;
        cout << "\t\t\tMain Menu" << endl;
        cout << "\t\t1. Creat New Account" << endl;
        cout << "\t\t2. Show All Account" << endl;
        cout << "\t\t3. Search Account" << endl;
        cout << "\t\t4. Deposit Money" << endl;
        cout << "\t\t5. Withdraw Money" << endl;
        cout << "\t\t6. Exit" << endl;
        cout << "\t\t-------------------------------" << endl;
        cout << "\t\tEnter Your Choice :";
        cin >> choice;
        switch (choice) {
        case 1: {
            string name;
            int accountNum;
            double balance;
            cout << "\t\tEnter Name :";
            cin >> name;
            cout << "\t\tEnter Account Number :";
            cin >> accountNum;
            cout << "\t\tEnter Initial Balance :";
            cin >> balance;
            bank.AddAccount(name, accountNum, balance);
            cout << "\t\tAccount Created Successfully...." << endl;
            break;
        }
        case 2: {
            bank.showAllAccounts();
            break;
        }
        case 3: {
            int accountNum;
            cout << "Enter Account Number :";
            cin >> accountNum;
            bank.searchAccount(accountNum);
            break;
        }
        case 4: {
            int accountNum;
            double amount;
            cout << "\t\tEnter Account Number to Deposit Money :";
            cin >> accountNum;
            BankAccount* account = bank.findAccount(accountNum);
            if (account != NULL) {
                cout << "\t\tEnter Amount to Deposit :";
                cin >> amount;
                account->deposit(amount);
                cout << "\t\t" << amount << " Deposit Successfully ...." << endl;
            } else {
                cout << "\t\tAcount Not Found ..." << endl;
            }
            break;
        }
        case 5: {
            int accountNum;
            double amount;
            cout << "\t\tEnter Account Number to Withdraw Money :";
            cin >> accountNum;
            BankAccount* account = bank.findAccount(accountNum);
            if (account != NULL) {
                cout << "\t\tEnter Amount to withdraw :";
                cin >> amount;
                account->withdraw(amount);

            } else {
                cout << "\t\tAcount Not Found ..." << endl;
            }
            break;
        }
        case 6: {
            exit(1);
            break;
        }
        }
        cout << "\t\tDo You Want to Countinue or Exit [Yes/No] ??";
        cin >> op;

    } while (op == 'y' || op == 'Y');
    return 0;
}