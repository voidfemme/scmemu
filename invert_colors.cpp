#include <iostream>
#include <iomanip>
using namespace std;

const char HEXVALUE[16] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};

//int invertColor(int colorValue){
//	return (255 - colorValue);
//}

//char divideBySixteen(int& quotient,int decNum){
//	char hexReturn;
//	quotient = decNum / 16;
//	int remainder = decNum % 16;
//	return HEXVALUE[remainder];
//}

int main(){
	int userNum = 0;
	int valueA = 0;
	int valueB = 0;
	int test = 0;
	int userNumHex[16];

	cout << "Enter a value greater than 0: ";
	cin >> userNum; 
	valueB = userNum;

	for(int i=0;i<16;i++){
		valueA = valueB / 16;
		userNumHex[i] = valueB % 16;
		valueB = valueA;
		cout << "userNumHex[" << i << "]= " << userNumHex[i] << endl;
		cout << "----------------------------------" << endl;
	}

	cout << endl;

	for (int j=16;j>0;j--){
		test << HEXVALUE[userNumHex[j-1]];
	}
	cout << endl;

	cout << test << endl;

	return 0;
}
