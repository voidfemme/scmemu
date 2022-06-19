#pragma once
#include <iostream>
#include <iomanip>
using namespace std;

class Matrix{
	private:
		int matrix_rows_;
		int matrix_columns_;
	public:
		Matrix();
		Matrix(int**,int,int);
		void SetMatrixValues(int**,int,int);
		void GetMatrixValues(int**,int,int);
		void PrintMatrixValues(int**,int,int);
};

class Matrix : MatrixI {
	public:
		setMatrixI(int**, int, int)
};
