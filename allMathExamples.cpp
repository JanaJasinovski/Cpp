#include <iostream>
using namespace std;


void Col_of_discharge();
void Reverse_number();
void Palindrome();
void Prime_number();
void Prime_number_between_low_and_height();
void Max_in_Matrix();
void Add_of_two_matrix();
void Multiply_of_matrix();



int main()
{
	int number;
	while (1)
	{
		cout << ("\n1. Col of discharge \n2. Reverse number.\n3. Palindrome\n4. Prime number \n5. Prime number between low and heigh\n6. Max in Vector\n7. Add of two matrix\n8. Multiply of matrix\n9. Find x\n10. Find z\n11. Find v\n12. Find f\n13. Exit\n");
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
			Max_in_Matrix();
			break;
		case 7:
			Add_of_two_matrix();
			break;
		case 8:
			Multiply_of_matrix();
			break;
		case 99:
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

void Max_in_Matrix(){
	int i,n;
	float arr[100];
	
	cout << "Enter col of elements (1 - 100) ";
	cin >> n;
	cout << endl;
	
	for(i = 0; i < n; ++i)
	{
		cout << "Enter a number " << i + 1 << " : ";
		cin >> arr[i];
	}
	
	for(i =1; i < n; ++i)
	{
		if(arr[0] < arr[i])
			arr[0] = arr[i];
	}
	cout << "Max: " << arr[0] << endl;
}

void Add_of_two_matrix(){
	int r,c, a[100][100], b[100][100], sum[100][100], i, j;
	
	cout << "Enter col of rows (1-100): ";
	cin >> r;
	cout << "Col of elemants columns (1-100): ";
	cin >> c;
	
	for(i = 0; i < r; ++i)
		for(j = 0; j < c; ++j)
		{
			cout << "Enter an element a " << i + 1 << j + 1 << " : ";
			cin >> a[i][j];
		}
	cout << endl << endl << "Enter the elements from second table: " << endl;
	for(i = 0; i < r; ++i)
		for(j = 0; j < c; ++j)
		{
			cout << "Enter the element b: " << i + 1 << j + 1 << " : ";
			cin >> b[i][j];
		}
	
	for(i = 0; i < r; ++i)
		for(j = 0; j < c; ++j)
			sum[i][j] = a[i][j] + b[i][j];
	
	cout << endl << "Sum of matrix: " << endl;
	for(i = 0; i < r; ++i)
		for(j = 0; j < c; ++j)
		{
			cout << sum[i][j] << " ";
			if(j == c - 1)
				cout << endl; 
		}
	cout << endl;
}

void Multiply_of_matrix(){
	int r,c, a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, k ,i, j;
	
	cout << "Enter col of and columns of first matrix: ";
	cin >> r1 >> c1;
	cout << "Enter col of and columns of second matrix: ";
	cin >> r2 >> c2;
	
	for(i = 0; i < r; ++i)
		for(j = 0; j < c; ++j)
		{
			cout << "Enter an element a " << i + 1 << j + 1 << " : ";
			cin >> a[i][j];
		}
	cout << endl << endl << "Enter the elements from second table: " << endl;
	for(i = 0; i < r; ++i)
		for(j = 0; j < c; ++j)
		{
			cout << "Enter the element b: " << i + 1 << j + 1 << " : ";
			cin >> b[i][j];
		}
	
	for(i = 0; i < r; ++i)
		for(j = 0; j < c; ++j)
			sum[i][j] = a[i][j] + b[i][j];
	
	cout << endl << "Sum of matrix: " << endl;
	for(i = 0; i < r; ++i)
		for(j = 0; j < c; ++j)
		{
			cout << sum[i][j] << " ";
			if(j == c - 1)
				cout << endl; 
		}
	cout << endl;
}
