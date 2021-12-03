#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	
	int n, t1 = 0, t2 = 1, next = 0;
	
	cout << "Enter n: ";
	cin >> n;
	
	cout << "Fibonaccis numbers: ";
	
	for(int i = 1; i <= n; ++i)
	{
		if(i == 1)
		{
			cout << " " << t1;
			continue;
		}
		if(i == 2)
		{
			cout << t2 << " ";
			continue;
		}
		next = t1 + t2;
		t1 = t2;
		t2 = next;
		
		cout << next << " ";
	} 
	cout << endl;
	return 0;
}

