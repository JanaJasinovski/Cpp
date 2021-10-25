#include <iostream>
using namespace std;


void Col_of_discharge();
void Reverse_number();
void Palindrome();
void Prime_number();
void Prime_number_between_low_and_height();



int main()
{
	int number;
	while (1)
	{
		cout << ("\n1. Col of discharge \n2. Reverse number.\n3. Palindrome\n4. Prime number \n5. Prime number between low and heigh\n6. Find p\n7. Find a\n8. Find q\n9. Find x\n10. Find z\n11. Find v\n12. Find f\n13. Exit\n");
		cout << "Enter a number of operation: ";
		cin >> number;
		switch (number)
		{ 
		case 1:
			Col_of_discharge();
			break;

		case 2:
			Reverse_number();
			break;	
		case 3:
			Palindrome();
			break;
		case 4:
			Prime_number();
			break;
		case 5:
			Prime_number_between_low_and_height();
			break;
		case 6:
			return 0;
	
		}
	}
}

void Col_of_discharge(){
	long long n;
	int count = 0;
	cout << "Enter an integer number: ";
	cin >> n;
	while(n != 0){
  			n /= 10;
  			++count;
  		}
  		cout << "Col of discharge: " << count << endl;
	
	}

void Reverse_number(){
	int n, reveredNumber = 0, remainder;
	cout << "Enter an integer number: ";
	cin >> n;
	while(n != 0){
  			remainder = n % 10;
  			reveredNumber = reveredNumber*10 + remainder;
  			n /= 10;
  		}
  		cout << " Reverse number: " << reveredNumber << endl;
	
	}
	
void Palindrome(){
	int n, reversed = 0, remainder, original;
	cout << "Enter an integer number: ";
	cin >> n;
	original = n;
	while(n != 0){
  			remainder = n % 10;
  			reversed = reversed*10 + remainder;
  			n /= 10;
  		}
  		if(original == reversed)
  			cout << original << "- Palindrome" << endl;
  		else cout << original << "- not a palindrome" << endl;
	
	}

void Prime_number(){
	int n;
	bool isPrime = true;
	cout << "Enter an integer number: ";
	cin >> n;
	for(int i = 2; i <= n / 2; ++i){
		if(n % i == 0)
		{
			isPrime = false;
			break;
		}
	}
	if(isPrime)
		cout << "It's a prime number" << endl;
	else cout << "It's not a prime number" << endl;
	
}

void Prime_number_between_low_and_height(){
	int  heigh, low, flag ;
	bool isPrime = true;
	cout << "Enter heigh and low: ";
	cin >> heigh >> low;
	
	if(low > heigh){
		int temp = low;
		low = heigh;
		heigh = temp;
	}
	while(low < heigh)
	{
		flag = 0;
		for(int i = 2; i <= low / 2; ++i){
		if(low % i == 0)
		{
			flag = 1;
			break;
		}
	}
	if(flag == 0)
		cout << low << endl;
	++low;
	}	
}
