#include <iostream>
using namespace std;
#define MAX_SIZE 6
void putValues(int mat[][MAX_SIZE], int val, int size, int rowIndex, int colIndex);
int main()
{
	int table[MAX_SIZE][MAX_SIZE];
	for (int i = 0; i < MAX_SIZE; i++)
	{
		for (int j = 0; j < MAX_SIZE; j++)
		{
			table[i][j] = 0;
		}
	}

	for (int i = 0; i < MAX_SIZE; i++)
	{
		for (int j = 0; j < MAX_SIZE; j++)
		{
			cout << table[i][j] << "\t";
		}
		cout << endl;
	}
	putValues(table, 1, 3, 1, 1);
	cout << endl;
	for (int i = 0; i < MAX_SIZE; i++)
	{
		for (int j = 0; j < MAX_SIZE; j++)
		{
			cout << table[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	putValues(table, 2, 3, 4, 4);
	for (int i = 0; i < MAX_SIZE; i++)
	{
		for (int j = 0; j < MAX_SIZE; j++)
		{
			cout << table[i][j] << "\t";
		}
		cout << endl;
	}
	putValues(table, 5, 3, 5, 5);
	cout << endl;

	for (int i = 0; i < MAX_SIZE; i++)
	{
		for (int j = 0; j < MAX_SIZE; j++)
		{
			cout << table[i][j] << "\t";
		}
		cout << endl;
	}

}
void putValues(int mat[][MAX_SIZE], int val, int size, int rowIndex, int colIndex)
{
	for (int i = rowIndex ; i < MAX_SIZE && i < rowIndex + size; i++)
	{
		for (int j = colIndex ; j < MAX_SIZE && j < colIndex + size; j++)
		{
			mat[i][j] = val;
		}
	}

}

