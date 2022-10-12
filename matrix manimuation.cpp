#include<iostream>
using namespace std;
void inputmatrix1(int, int);//INPUTMATRIX1
void inputmatrix2(int, int);//INPUTMATRIX2
void print(int**, int, int);//print
void fun1(int**, int, int);//sum of matrix(sum of all values)
void fun2(int**, int, int);//Product of matrix(product of all values)
void fun3(int**, int, int);//Row-wise Average
void fun4(int**, int, int);//Column-wise Average
void fun5(int**, int, int); //Average or whole Matrix
void fun6(int**, int, int);//Row-wise sorting of Matrix
void fun7(int**, int, int);//Column-wise sorting of Matrix
void fun8(int**, int, int);//Scalar Matrix Addition
void fun9(int**, int**, int, int);//Addition of two Matrices
void fun10(int**, int, int);//Scalar Matrix Subtraction
void fun11(int**, int**, int, int);//Subtraction of two Matrices
void fun12(int**, int, int);//Scalar Matrix Multiplication
void fun13(int**, int**, int, int);//Multiplication of two Matrices
void fun14(int**, int, int);//Scalar Matrix Division
void fun15(int**, int, int);//Matrix transpose
void fun16(int**, int, int);//Matrix determinant
void fun17(int**, int, int);//Matrix inverse
int main()
{
	int row, col;
	int choice = 1;
	cout << "=======================================================================================================================" << endl;
	cout << "                                               [ Matrix Manipulator ]                                                  " << endl;
	while (choice != 0)
	{
		cout << "=======================================================================================================================" << endl;
		cout << "  ----------------------------------------              " << endl;
		cout << "   |               MENUE              |    " << endl;
		cout << "  ----------------------------------------              " << endl;
		cout << "1.  Sum of Matrix (sum of all values) \n";
		cout << "2.  Product of Matrix (product of all values) \n";
		cout << "3.  Row-wise Average \n";
		cout << "4.  Column-wise Average \n";
		cout << "5.  Average or whole Matrix \n";
		cout << "6.  Row-wise sorting of Matrix \n";
		cout << "7.  Column-wise sorting of Matrix \n";
		cout << "8.  Scalar Matrix Addition \n";
		cout << "9.  Addition of two Matrices \n";
		cout << "10. Scalar Matrix Subtraction \n";
		cout << "11. Subtraction of two Matrices \n";
		cout << "12. Scalar Matrix Multiplication \n";
		cout << "13. Multiplication of two Matrices \n";
		cout << "14. Scalar Matrix Division \n";
		cout << "15. Matrix transpose \n";
		cout << "16. Matrix determinant \n";
		cout << "17. Matrix Inverse \n";
		cout << "Enter your choice: ";
		cin >> choice;
		cout << "\n";
		cout << "=======================================================================================================================" << endl;

		if (choice == 1)//sum of matrix(sum of all values)
		{
			cout << "\n";
			cout << "Enter NO. of Rows: ";
			cin >> row;
			cout << "Enter No. of Coloumns: ";
			cin >> col;
			int** matrix1;
			matrix1 = new int*[row];
			for (int i = 0; i < row; i++)
			{
				matrix1[i] = new int[col];
			}
			cout << "\n";
			cout << "=======================================================================================================================" << endl;
			cout << "Enter Elements of " << row << "x" << col << " Matrix \n";
			fun1(matrix1, row, col);
		}
		if (choice == 2)//Product of matrix(product of all values)
		{
			cout << "\n";
			cout << "Enter NO. of Rows: ";
			cin >> row;
			cout << "Enter No. of Coloumns: ";
			cin >> col;
			int** matrix2;
			matrix2 = new int*[row];
			for (int i = 0; i < row; i++)
			{
				matrix2[i] = new int[col];
			}
			cout << "\n";
			cout << "=======================================================================================================================" << endl;
			cout << "Enter Elements of " << row << "x" << col << " Matrix. \n";
			fun2(matrix2, row, col);
		}
		if (choice == 3)//Row-wise Average
		{
			cout << "\n";
			cout << "Enter NO. of Rows: ";
			cin >> row;
			cout << "Enter No. of Coloumns: ";
			cin >> col;
			int** matrix1;
			matrix1 = new int*[row];
			for (int i = 0; i < row; i++)
			{
				matrix1[i] = new int[col];
			}
			cout << "\n";
			cout << "=======================================================================================================================" << endl;
			cout << "Enter Elements of " << row << "x" << col << " Matrix \n";
			fun3(matrix1, row, col);
		}
		if (choice == 4)//column-wise Average
		{
			cout << "\n";
			cout << "Enter NO. of Rows: ";
			cin >> row;
			cout << "Enter No. of Coloumns: ";
			cin >> col;
			int** matrix1;
			matrix1 = new int*[row];
			for (int i = 0; i < row; i++)
			{
				matrix1[i] = new int[col];
			}
			cout << "\n";
			cout << "=======================================================================================================================" << endl;
			cout << "Enter Elements of " << row << "x" << col << " Matrix \n";
			fun4(matrix1, row, col);
		}
		if (choice == 5)//Average or whole Matrix
		{
			cout << "\n";
			cout << "Enter NO. of Rows: ";
			cin >> row;
			cout << "Enter No. of Coloumns: ";
			cin >> col;
			int** matrix1;
			matrix1 = new int*[row];
			for (int i = 0; i < row; i++)
			{
				matrix1[i] = new int[col];
			}
			cout << "\n";
			cout << "=======================================================================================================================" << endl;
			cout << "Enter Elements of " << row << "x" << col << " Matrix \n";
			fun5(matrix1, row, col);
		}
		if (choice == 6)//Row-wise sorting of Matrix
		{
			cout << "\n";
			cout << "Enter NO. of Rows: ";
			cin >> row;
			cout << "Enter No. of Coloumns: ";
			cin >> col;
			int** matrix1;
			matrix1 = new int*[row];
			for (int i = 0; i < row; i++)
			{
				matrix1[i] = new int[col];
			}
			cout << "\n";
			cout << "=======================================================================================================================" << endl;
			cout << "Enter Elements of " << row << "x" << col << " Matrix \n";
			fun6(matrix1, row, col);
		}
		if (choice == 7)//Column-wise sorting of Matrix
		{
			cout << "\n";
			cout << "Enter NO. of Rows: ";
			cin >> row;
			cout << "Enter No. of Coloumns: ";
			cin >> col;
			int** matrix1;
			matrix1 = new int*[row];
			for (int i = 0; i < row; i++)
			{
				matrix1[i] = new int[col];
			}
			cout << "\n";
			cout << "=======================================================================================================================" << endl;
			cout << "Enter Elements of " << row << "x" << col << " Matrix \n";
			fun7(matrix1, row, col);
		}
		if (choice == 8)//Scalar Matrix Addition
		{
			cout << "\n";
			cout << "Enter NO. of Rows: ";
			cin >> row;
			cout << "Enter No. of Coloumns: ";
			cin >> col;
			int** matrix1;
			matrix1 = new int*[row];
			for (int i = 0; i < row; i++)
			{
				matrix1[i] = new int[col];
			}
			cout << "\n";
			cout << "=======================================================================================================================" << endl;
			cout << "Enter Elements of " << row << "x" << col << " Matrix \n";
			fun8(matrix1, row, col);
		}
		if (choice == 9)//Addition of two Matrices
		{
			cout << "\n";
			cout << "Enter NO. of Rows: ";
			cin >> row;
			cout << "Enter No. of Coloumns: ";
			cin >> col;
			int** matrix1;
			matrix1 = new int*[row];
			for (int i = 0; i < row; i++)
			{
				matrix1[i] = new int[col];
			}
			int** matrix2;
			matrix2 = new int*[row];
			for (int i = 0; i < row; i++)
			{
				matrix2[i] = new int[col];
			}
			cout << "\n";
			cout << "=======================================================================================================================" << endl;
			cout << "Enter Elements of " << row << "x" << col << " Matrix. \n";
			fun9(matrix1, matrix2, row, col);
		}
		if (choice == 10)//Scalar Matrix Subtraction
		{
			cout << "\n";
			cout << "Enter NO. of Rows: ";
			cin >> row;
			cout << "Enter No. of Coloumns: ";
			cin >> col;
			int** matrix1;
			matrix1 = new int*[row];
			for (int i = 0; i < row; i++)
			{
				matrix1[i] = new int[col];
			}
			cout << "\n";
			cout << "=======================================================================================================================" << endl;
			cout << "Enter Elements of " << row << "x" << col << " Matrix \n";
			fun10(matrix1, row, col);
		}
		if (choice == 11)//Subtraction of two Matrices
		{
			cout << "\n";
			cout << "Enter NO. of Rows: ";
			cin >> row;
			cout << "Enter No. of Coloumns: ";
			cin >> col;
			int** matrix1;
			matrix1 = new int*[row];
			for (int i = 0; i < row; i++)
			{
				matrix1[i] = new int[col];
			}
			int** matrix2;
			matrix2 = new int*[row];
			for (int i = 0; i < row; i++)
			{
				matrix2[i] = new int[col];
			}
			cout << "\n";
			cout << "=======================================================================================================================" << endl;
			cout << "Enter Elements of " << row << "x" << col << " Matrix. \n";
			fun11(matrix1, matrix2, row, col);
		}
		if (choice == 12)//Scalar Matrix Multiplication
		{
			cout << "\n";
			cout << "Enter NO. of Rows: ";
			cin >> row;
			cout << "Enter No. of Coloumns: ";
			cin >> col;
			int** matrix1;
			matrix1 = new int*[row];
			for (int i = 0; i < row; i++)
			{
				matrix1[i] = new int[col];
			}
			cout << "\n";
			cout << "=======================================================================================================================" << endl;
			cout << "Enter Elements of " << row << "x" << col << " Matrix \n";
			fun12(matrix1, row, col);
		}
		if (choice == 13)//Multiplication of two Matrices
		{
			cout << "\n";
			cout << "Enter NO. of Rows: ";
			cin >> row;
			cout << "Enter No. of Coloumns: ";
			cin >> col;
			int** matrix1;
			matrix1 = new int*[row];
			for (int i = 0; i < row; i++)
			{
				matrix1[i] = new int[col];
			}
			int** matrix2;
			matrix2 = new int*[row];
			for (int i = 0; i < row; i++)
			{
				matrix2[i] = new int[col];
			}
			cout << "\n";
			cout << "=======================================================================================================================" << endl;
			cout << "Enter Elements of " << row << "x" << col << " Matrix. \n";
			fun13(matrix1, matrix2, row, col);
		}
		if (choice == 14)//Scalar Matrix Division
		{
			cout << "\n";
			cout << "Enter NO. of Rows: ";
			cin >> row;
			cout << "Enter No. of Coloumns: ";
			cin >> col;
			int** matrix1;
			matrix1 = new int*[row];
			for (int i = 0; i < row; i++)
			{
				matrix1[i] = new int[col];
			}
			cout << "\n";
			cout << "=======================================================================================================================" << endl;
			cout << "Enter Elements of " << row << "x" << col << " Matrix \n";
			fun14(matrix1, row, col);
		}
		if (choice == 15)//Matrix transpose
		{
			cout << "\n";
			cout << "Enter NO. of Rows: ";
			cin >> row;
			cout << "Enter No. of Coloumns: ";
			cin >> col;
			int** matrix1;
			matrix1 = new int*[row];
			for (int i = 0; i < row; i++)
			{
				matrix1[i] = new int[col];
			}
			cout << "\n";
			cout << "=======================================================================================================================" << endl;
			cout << "Enter Elements of " << row << "x" << col << " Matrix \n";
			fun15(matrix1, row, col);
		}
		if (choice == 16)//Matrix determinant
		{
			cout << "\n";
			cout << "Size should be greater or equal to 3." << endl;
			cout << "Enter NO. of Rows: ";
			cin >> row;
			cout << "Enter No. of Coloumns: ";
			cin >> col;
			int** matrix1;
			matrix1 = new int*[row];
			for (int i = 0; i < row; i++)
			{
				matrix1[i] = new int[col];
			}
			cout << "\n";
			cout << "=======================================================================================================================" << endl;
			cout << "Enter Elements of " << row << "x" << col << " Matrix \n";
			fun16(matrix1, row, col);
		}
		if (choice == 17)//Matrix inverse
		{
			cout << "\n";
			cout << "Size should be greater or equal to 3." << endl;
			cout << "Enter NO. of Rows: ";
			cin >> row;
			cout << "Enter No. of Coloumns: ";
			cin >> col;
			int** matrix1;
			matrix1 = new int*[row];
			for (int i = 0; i < row; i++)
			{
				matrix1[i] = new int[col];
			}
			cout << "\n";
			cout << "=======================================================================================================================" << endl;
			cout << "Enter Elements of " << row << "x" << col << " Matrix \n";
			fun17(matrix1, row, col);
		}
		if (choice == 0)//Exit Program
		{
			cout << "=======================================================================================================================" << endl;
			cout << "  Thank you for using system.......:)" << endl;
			cout << "\n";
			cout << "=======================================================================================================================" << endl;
		}
	}
	system("pause");
	return 0;
}
void inputmatrix1(int** m1, int row, int col)//INPUT MATRIX1
{
	cout << "Enter the first matrix element: \n";
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cin >> m1[i][j];
		}
	}
	print(m1, row, col);
}
void inputmatrix2(int** m2, int row, int col)//INPUT MATRIX2
{
	cout << "Enter the second matrix element: \n";
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cin >> m2[i][j];
		}
	}
	print(m2, row, col);
}
void print(int** matrix, int row, int col)//print matrix on console
{
	cout << "=======================================================================================================================" << endl;
	cout << "Matrix: \n";
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << matrix[i][j] << "  ";
		}
		cout << "\n";
	}
}
void fun1(int** matrix1, int r, int c)//sum of Matrix(sum of all values)
{
	int sum = 0;
	inputmatrix1(matrix1, r, c);
	cout << "=======================================================================================================================" << endl;

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			sum = sum + matrix1[i][j];
		}
	}
	cout << "sum of Matrix(sum of all values)= " << sum << endl;
}
void fun2(int** matrix1, int r, int c)//Product of matrix(product of all values)
{
	int product = 1;
	inputmatrix2(matrix1, r, c);
	cout << "=======================================================================================================================" << endl;

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			product *= matrix1[i][j];
		}
	}
	cout << "Product of matrix(product of all values)= " << product << endl;
}
void fun3(int** matrix1, int r, int c)//Row-wise Average
{
	float rsum = 0;
	float avg;
	inputmatrix1(matrix1, r, c);
	cout << "=======================================================================================================================" << endl;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			rsum = rsum + matrix1[i][j];
		}
		avg = rsum / r;

	}
	cout << "Row-wise Average= " << avg << "  " << endl;
}
void fun4(int** matrix1, int r, int c)//column-wise Average
{
	float csum = 0;
	float avg;
	inputmatrix1(matrix1, r, c);
	cout << "=======================================================================================================================" << endl;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			csum = csum + matrix1[i][j];
		}
		avg = csum / c;

	}
	cout << "Column-wise Average= " << avg << "  " << endl;
}
void fun5(int** matrix1, int r, int c)//Average or whole Matrix
{
	float sum = 0;
	float avg = 0;
	inputmatrix1(matrix1, r, c);
	cout << "=======================================================================================================================" << endl;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			sum = sum + matrix1[i][j];
		}
		avg = sum / r + c;
	}
	cout << "Average or whole Matrix= " << avg << endl;
}
void fun6(int** matrix1, int r, int c)//Row-wise sorting of Matrix
{
	inputmatrix1(matrix1, r, c);
	cout << "=======================================================================================================================" << endl;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			for (int k = 0; k < c - j - 1; k++)
			{
				if (matrix1[i][k] > matrix1[i][k + 1])
				{
					swap(matrix1[i][k], matrix1[i][k + 1]);
				} 
			}
		}
	}
	cout << "Row-wise sorting of Matrix= " << endl;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << matrix1[i][j] << "  ";
		}
		cout << endl;
	}
}
void fun7(int** matrix1, int r, int c)//Column-wise sorting of Matrix
{
	inputmatrix1(matrix1, r, c);
	cout << "=======================================================================================================================" << endl;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			for (int k = 0; k < c - j - 1; k++)
			{
				if (matrix1[i][k] > matrix1[i][k + 1])
				{
					swap(matrix1[i][k], matrix1[i][k + 1]);
				}
			}
		}
	}
	cout << "Row-wise sorting of Matrix= " << endl;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << matrix1[i][j] << "  ";
		}
		cout << endl;
	}
}
void fun8(int** matrix1, int r, int c)//Scalar Matrix Addition
{
	int num = 0;
		inputmatrix1(matrix1, r, c);
		cout << "Enter number for scalar matrix Addition :";
		cin >> num;
		cout << "=======================================================================================================================" << endl;
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				matrix1[i][j] = matrix1[i][j] + num;
			}
		}
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				cout << matrix1[i][j] << "  ";
			}
			cout << endl;
		}
}

void fun9(int** matrix1, int** matrix2, int r, int c)//Addition of two Matrices
{
	int sum[10][10];
	inputmatrix1(matrix1, r, c);
	inputmatrix2(matrix2, r, c);
	cout << "=======================================================================================================================" << endl;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			sum[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}
	cout << "=======================================================================================================================" << endl;
	cout << "Addition of two Matrices =\n";
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << sum[i][j] << "  ";
		}
		cout << "\n";
	}
}
void fun10(int** matrix1, int r, int c)//Scalar Matrix Subtraction
{
	int num = 0;
		inputmatrix1(matrix1, r, c);
		cout << "Enter number for scalar matrix Subtraction :";
		cin >> num;
		cout << "=======================================================================================================================" << endl;
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				matrix1[i][j] = matrix1[i][j] - num;
			}
		}
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				cout << matrix1[i][j] << "  ";
			}
			cout << endl;
		}
	
}
void fun11(int** matrix1, int** matrix2, int r, int c)//Subtraction of two Matrices
{
	int sub[10][10];
	inputmatrix1(matrix1, r, c);
	cout << "=======================================================================================================================" << endl;
	inputmatrix2(matrix2, r, c);
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			sub[i][j] = matrix1[i][j] - matrix2[i][j];
		}
	}
	cout << "=======================================================================================================================" << endl;
	cout << "Subtraction of two Matrices =\n";
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << sub[i][j] << "  ";
		}
		cout << "\n";
	}
}
void fun12(int** matrix1, int r, int c)//Scalar Matrix Multiplication
{
	int num = 0;
		inputmatrix1(matrix1, r, c);
		cout << "Enter number for scalar matrix Multiplication :";
		cin >> num;
		cout << "=======================================================================================================================" << endl;
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				matrix1[i][j] = matrix1[i][j] * num;
			}
		}
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				cout << matrix1[i][j] << "  ";
			}
			cout << endl;
		}
	
}
void fun13(int** matrix1, int** matrix2, int r, int c)//Multiplication of two Matrices
{
	int result[10][10];
	inputmatrix1(matrix1, r, c);
	inputmatrix2(matrix2, r, c);
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			result[i][j] = matrix1[i][j] * matrix2[i][j];
		}
	}
	cout << "=======================================================================================================================" << endl;
	cout << "Multiplication of two Matrices =\n";
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << result[i][j] << "  ";
		}
		cout << "\n";
	}
}
void fun14(int** matrix1, int r, int c)//Scalar Matrix Division
{
	int num = 0;
	if (r == c)
	{
		inputmatrix1(matrix1, r, c);
		cout << "Enter number for scalar matrix addition :";
		cin >> num;
		cout << "=======================================================================================================================" << endl;
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				matrix1[i][j] = matrix1[i][j] / num;
			}
		}
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				cout << matrix1[i][j] << "  ";
			}
			cout << endl;
		}
	}
	else
	{
		cout << "Entered matrix is not scalar." << endl;
	}
}
void fun15(int** matrix1, int r, int c)//Matrix transpose
{
	int transpose[10][10];
	inputmatrix1(matrix1, r, c);
	cout << "=======================================================================================================================" << endl;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			transpose[j][i] = matrix1[i][j];
		}
	}
	cout << "Transpose of a matrix =" << endl;
	for (int i = 0; i < c; i++)
	{
		for (int j = 0; j < r; j++)
		{
			cout << transpose[i][j] << "  ";
			if (j == r - 1)
				cout << endl;
	 	}
	}

}
void fun16(int** matrix1, int r, int c)//Matrix determinant
{
		double determinant = 0;
		inputmatrix1(matrix1, r, c);
		if (r==2)
		{
			for (int i = 0; i < r; i++)
				determinant = determinant + (matrix1[0][i] * (matrix1[1][i + 1] % r) - (matrix1[0][1 + 2] % r * matrix1[1][i + 2] % r));
			cout << "Determinant = " << determinant << endl;
		}
		else
		{
			for (int i = 0; i < r; i++)
			{
				determinant = determinant + (matrix1[0][i] * (matrix1[1][(i + 1) % r] * matrix1[2][(i + 2) % r] - matrix1[1][(i + 2) % r] * matrix1[2][(i + 1) % r]));
			}
			cout << "Determinant = " << determinant << endl;
		}
}
void fun17(int** matrix1, int r, int c)//Matrix inverse
{
	double determinant = 0;
	double inverse = 0;
	inputmatrix1(matrix1, r, c);
	if (r == 2)
	{
		for (int i = 0; i < r; i++)
			determinant = determinant + (matrix1[0][i] * (matrix1[1][i + 1] % r) - (matrix1[0][1 + 2] % r * matrix1[1][i + 2] % r));
		cout << "Determinant = " << determinant << endl;
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				inverse = inverse + (((matrix1[(j + 1) % 2][(i + 1) % 2] * matrix1[(j + 2) % 2][(i + 2) % 2]) - (matrix1[(j + 1) % 2][(i + 2) % 2] * matrix1[(j + 2) % 2][(i + 1) % 2])) / determinant);
			}
		}
		cout << "inverse = " << inverse << endl;
	}
	else
	{
		for (int i = 0; i < r; i++)
		{
			determinant = determinant + (matrix1[0][i] * (matrix1[1][(i + 1) % r] * matrix1[2][(i + 2) % r] - matrix1[1][(i + 2) % r] * matrix1[2][(i + 1) % r]));
		}
		cout << "Determinant = " << determinant << endl;
	}
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			inverse = inverse + (((matrix1[(j + 1) % 3][(i + 1) % 3] * matrix1[(j + 2) % 3][(i + 2) % 3]) - (matrix1[(j + 1) % 3][(i + 2) % 3] * matrix1[(j + 2) % 3][(i + 1) % 3])) / determinant);
		}
	}
	cout << "inverse = " << inverse << endl;

}

