#include <iostream>

class Account {
private:
	double balance;
public:
	Account() {
		balance = 0.0;
	}
	Account(double balance_) {
		balance = balance_;
	}
	void deposit(double amount) {
		balance += amount;
	}
	double withdraw(double amount) {
		if(amount > balance) {
			auto temp{balance};
			balance = 0.0;
			return temp;
		} else {
			balance -= amount;
			return amount;
		}
	}
};

int main() {
	Account a1;
	Account a2{100.0};
	a1.deposit(9.0);
	std::cout << a1.withdraw(10.0) << std::endl;
	std::cout << a2.withdraw(52.0) << std::endl;
	std::cout << Account{1000.0}.withdraw(1001.0) << std::endl;
	return 0;
}
