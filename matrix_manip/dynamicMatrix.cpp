#include <iostream>
#include <iomanip>
using namespace std;

// Some nice formatting
void formatFun(){
	cout << setw(55) << setfill('-') << "" << endl;
}

// Let's create I!
void MatrixI(int** dynMatrix, int mRows, int mColumns){
	formatFun();
	for(int i=0;i<mRows;i++){
		dynMatrix[i] = new int[mColumns];
		for(int j=0;j<mColumns;j++){
			if(i==j){
				dynMatrix[i][j] = 1;
			}	
			else{
				dynMatrix[i][j] = 0;
			}
		}
	}
}

// Matrix population 
void populateMatrix(int** dynMatrix, int mRows, int mColumns){
	formatFun();
	for(int i=0;i<mRows;i++){
		dynMatrix[i] = new int[mColumns];
		for(int j=0;j<mColumns;j++){
			cout << "Enter value [" << i << "][" << j << "]: ";
			cin >> dynMatrix[i][j];
		}
	}
}

void printMatrixValues(int** dynMatrix, int mRows, int mColumns){
	formatFun();
	for(int i=0;i<mRows;i++){
		for(int j=0;j<mColumns;j++){
			cout << "[" << dynMatrix[i][j]<< "] ";
		}
		cout << endl;
	}
	formatFun();
}

// A leftover function from an old school assignment to use as a template:
//void arraySummary(int* p, int arr_sz){
//	int largestNum = p[0];
//	int smallestNum = p[0];
//	for(int i=0;i<arr_sz;i++){
//		if(p[i] >= largestNum){
//			largestNum = p[i];
//		}
//		if(p[i] <= smallestNum){
//			smallestNum = p[i];
//		}
//	}
//	cout << "The largest number you entered was: " << largestNum << endl;
//	formatFun();
//	cout << "The smallest number you entered was: " << smallestNum << endl;
//	formatFun();
//}

int main(){

	// Dynamic Matrix Allocations:
	int mRows = 0;
	int mColumns = 0;
	int** dynMatrix = new int*[0];
	char printI;

	cout << "Array population 2: multidimensional boogaloo" << endl;
	formatFun();
	cout << "Enter the number of matrix rows: ";
	cin >> mRows;
	cout << "Enter the number of Matrix columns: ";
	cin >> mColumns;

	populateMatrix(dynMatrix,mRows,mColumns);
	printMatrixValues(dynMatrix,mRows,mColumns);

	if(mRows == mColumns){
		cout << "Reset values and print I for a matrix of size ";
	        cout << mRows << "X" << mColumns << "? ";
		cin >> printI;
		if(printI == 'y'){
				MatrixI(dynMatrix,mRows,mColumns);
				printMatrixValues(dynMatrix,mRows,mColumns);
		}
	}
	else{
		cout << "matrix I cannot be generated on the specified matrix size." << endl;
		cout << "good bye!" << endl;
		formatFun();
	}
	return 0;
}
