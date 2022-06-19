#include <iostream>
#include <iomanip>
using namespace std;

// Some nice formatting
void FormatFun(){
	cout << setw(55) << setfill('-') << "" << endl;
}

// Let's create I!
void MatrixI(int** dynamic_2d_array, int matrix_rows_, int matrix_columns_){
	for(int i=0;i<matrix_rows_;i++){
		dynamic_2d_array[i] = new int[matrix_columns_];
		for(int j=0;j<matrix_columns_;j++){
			if(i==j){
				dynamic_2d_array[i][j] = 1;
			}	
			else{
				dynamic_2d_array[i][j] = 0;
			}
		}
	}
}

// Matrix population 
void SetMatrixValues(int** dynamic_2d_array, int matrix_rows_, int matrix_columns_){
	FormatFun();
	for(int i=0;i<matrix_rows_;i++){
		dynamic_2d_array[i] = new int[matrix_columns_];
		for(int j=0;j<matrix_columns_;j++){
			cout << "Enter value [" << i << "][" << j << "]: ";
			cin >> dynamic_2d_array[i][j];
		}
	}
}

void PrintMatrixValues(int** dynamic_2d_array, int matrix_rows_, int matrix_columns_){
	FormatFun();
	for(int i=0;i<matrix_rows_;i++){
		for(int j=0;j<matrix_columns_;j++){
			cout << "[" << dynamic_2d_array[i][j]<< "] ";
		}
		cout << endl;
	}
	FormatFun();
}

int main(){

	// Dynamic Matrix Allocations:
	int matrix_rows_ = 0;
	int matrix_columns_ = 0;
	int** dynamic_2d_array = new int*[0];
	char printI;

	cout << "Array population 2: multidimensional boogaloo" << endl;
	FormatFun();
	cout << "Enter the number of matrix rows: ";
	cin >> matrix_rows_;
	cout << "Enter the number of Matrix columns: ";
	cin >> matrix_columns_;

	SetMatrixValues(dynamic_2d_array,matrix_rows_,matrix_columns_);
	PrintMatrixValues(dynamic_2d_array,matrix_rows_,matrix_columns_);

	if(matrix_rows_ == matrix_columns_){
		cout << "Reset values and print I for a matrix of size ";
	        cout << matrix_rows_ << "X" << matrix_columns_ << "? ";
		cin >> printI;
		if(printI == 'y'){
				MatrixI(dynamic_2d_array,matrix_rows_,matrix_columns_);
				PrintMatrixValues(dynamic_2d_array,matrix_rows_,matrix_columns_);
		}
	}
	else{
		cout << "matrix I cannot be generated on the specified matrix size." << endl;
		cout << "good bye!" << endl;
		FormatFun();
	}
	return 0;
}
