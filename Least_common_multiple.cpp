#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	
	int num1, num2, LCM;
	
	cout << "Enter two numbers: ";
	cin >> num1 >> num2;
	
	LCM = (num1 > num2) ? num1 : num2;
	
	while(1){
		if(LCM % num1 == 0 && LCM % num2 == 0){
			cout << "Least common multiple: " << LCM << "\n";
			break;
		}
		++LCM;
	}
	cout << endl;
	return 0;
}

