#include <iostream>
#include <iomanip>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char** argv) {
	int n = 0;
	cout << "How many integers do you want to sum:";
	cin >> n ;
	
	int sum = 0 ;
	int i = 0;
	while(i <= n){
		cout << std::setw(5) << i;
		if(i%10 == 0){
			cout << endl;
		}
		i++;
	}
	
	return 0;
}
