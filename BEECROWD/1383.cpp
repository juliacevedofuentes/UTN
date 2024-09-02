#include <iostream>
#incl
using namespace std;

#define tm 9

void cargar_matriz(int m[][tm],int cf, int cc);
bool sudokuornot(int m[][tm], int c);

int main(int argc, char *argv[]) {
	
	int n;
	bool sudoku;
	
	cin >> n;
	
	for(int i = 1; i<= n; i++){
		int sudo[tm][tm] = {};
		cargar_matriz(sudo,tm,tm);
		sudoku = sudokuornot(sudo,tm); 
		cout << "Instancia " << i << endl;
		if(sudoku == true){
			cout << "SIM" << endl;
		}else{
			cout << "NAO" << endl;
		}
		cout << endl;
	}
	
	return 0;
}

void cargar_matriz(int m[][tm],int cf,int cc){
	int i,j;
	for (i =0; i < cf; i++){
		for ( j=0 ; j < cc ; j++){
			cin >> m [i][j];
		}
	}
}
	
bool sudokuornot(int m[][tm], int c){
	for (int i = 0; i < 9; ++i) {
		set<int> row, col, box;
		for (int j = 0; j < 9; ++j) {
			if (board[i][j] != 0 && !row.insert(board[i][j]).second) return false;
			if (board[j][i] != 0 && !col.insert(board[j][i]).second) return false;
			int boxRow = 3 * (i / 3) + j / 3;
			int boxCol = 3 * (i % 3) + j % 3;
			if (board[boxRow][boxCol] != 0 && !box.insert(board[boxRow][boxCol]).second) return false;
		}
	}
	return true;
}
