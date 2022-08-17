#include <iostream>
#include <iomanip>
#include <cmath>

const char HEXVALUE[16] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
const int DECVALUE[16] = {0,1, 2, 3, 4, 5, 6, 7, 8, 9,10,11,12,13,14,15};
// mapping:
// 	0, 1, 2, 3, 4, 5, 6, 7, 8, 9, a, b, c, d, e, f
// 	1, 2, 3, 4, 5, 6, 7, 8, 9,10,11,12,13,14,15,16

void formatFun(){
	std::cout << std::setw(48) << std::setfill('-') << " " << std::endl;
}

void DecToHex(){
	char userNumHex[16];
	int index = 0;
	int userNum = 0;

	formatFun();
	std::cout << "Enter a decimal number: ";
	std::cin >> userNum; 
	formatFun();

	while(userNum > 0){
		userNumHex[index] = HEXVALUE[userNum % 16];
		userNum = userNum / 16;
		index++;
	}
	for(int i=index-1;i>=0;i--){
		std::cout << userNumHex[i];
	}
	std::cout << std::endl;
	formatFun();
}

void HexToDec(){
	char userHexNum[4];
	int val[4];
	int power = 3;

	std::cout << "enter 4-digit hex value: ";
	for(int i=0;i<4;i++){
		std::cin >> userHexNum[i];
	}

	formatFun();
	std::cout << std::endl;

	for(int i=0;i<4;i++){
		std::cout << userHexNum[i];
		for(int j=0;j<16;j++){
			if(userHexNum[i] == HEXVALUE[j]){
				std::cout << ", 16^" << 3-i << " = ";
				std::cout << pow(16,3-i) << std::endl;
				val[i] = DECVALUE[j] * pow(16,3-i);
				std::cout << userHexNum[i] << " * 16^" << 3-i << " = " << val[i] << std::endl;

			}
		}
	}
	
	for(int i=0;i<4;i++){
		std::cout << "value of val[" << i << "] = " << val[i] << std::endl;
	}
	std::cout << val[0] + val[1] + val[2] + val[3];
	std::cout << std::endl;
	formatFun();
}

int main(){
	DecToHex();
	HexToDec();
	
	// char temp_user_hex_val;
	// std::cout << "enter a val: ";
	// std::cin >> temp_user_hex_val;

	return 0;
}
