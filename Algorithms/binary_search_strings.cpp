#include <iostream>
#include <cstring>
using namespace std;

static int binsearch(char *str[], int max, char *value);

int main(void)
{
 	 char *strings[] = {"audi", "bentley", "bmw", "cadillac", "ford"};
	 int i, asize, result;
	 
	 i = asize = result = 0;
	 
	 asize = sizeof(strings) / sizeof(strings[0]);
	 
	 for(i = 0; i < asize; i++)
	 	cout << i << " " << strings[i] << endl;
	  
	 cout << endl;
	 
	 if((result == binsearch(strings, asize, "mercedes")) != 0)
	 	cout << " mercedes' is found on the position: " << result << endl;
     else
	 	cout << "mercedes; is not found...\n";  

    return 0;
}

static int binsearch(char *str[], int max, char *value){
	int position;
	int begin = 0;
	int end = max - 1;
	int cond = 0;
	
	while(begin <= end){
		position = (begin + end) / 2;
		if((cond = strcmp(str[position], value)) == 0)
			return position;
		else if(cond < 0)
			begin = position + 1;
		else 
			end = position - 1;
		
	}
	return 0;
}

