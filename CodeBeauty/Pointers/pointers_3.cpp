#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	/*int luckNumbers[5] = {2, 3, 5, 7, 9};
	cout << luckNumbers << endl; // address of luckNumbers
	cout << &luckNumbers[0] << endl; // address of luckNumbers[0] = address of luckNumbers
	cout << luckNumbers[2] << endl; // value of index 2 = 5
	cout<<*(luckNumbers+2)<<endl; // value of index 2 = 5*/
	
	int luckNumbers[5];
	for(int i=0; i<=4;i++){
		cout<<"Number: ";
		cin>>luckNumbers[i];
	}
	for(int i=0; i<=4;i++){
		cout<<*(luckNumbers+i)<<" ";
	}
	
	
	return 0;
}
