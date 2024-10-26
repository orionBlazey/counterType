// counterType.cpp : This is the counterType branch
//

#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

class counterType {
private:
	int counter;

public:
	void setCounter(int c)
	{
		counter = c;
	}

	int getCounter()
	{
		return counter;
	}

	int increment(int c)
	{
		int counter = 0;
		while (counter < c)
		{
			++counter;
		}
		return ++counter;
	}

	int decrement(int c)
	{
		int counter = 0;
		while (counter > c)
		{
			--counter;
		}
		return --counter;
	}
};

int main()
{
	counterType obj1(10);
	int c;
	cout << "Enter the number you want : " << endl;
	cin >> c;
	obj1.setCounter(c);
	cout << "Value of counter initially : " << obj1.getCounter() << endl;
	cout << "Value of counter after incrementing : " << obj1.increment() << endl;
	cout << "Value of counter after decrementing : " << obj1.decrement() << endl;
	cout << endl;
}