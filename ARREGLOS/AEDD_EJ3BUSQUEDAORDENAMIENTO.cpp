#include <iostream>
#include <ctime>
using namespace std;

#define tm 500

void generar_vec(int v[], int tl);
int elimOrdenar(int v[], int tl, int x);

int main(int argc, char *argv[]) {
	int A[tm] = {};
	int x;
	
	generar_vec(A,tm);
	
	cin >> x;
	
	cout << elimOrdenar(A,tm,x) << endl;
	return 0;
}

void generar_vec(int v[], int tl){
	srand((unsigned)time(NULL));
	for(int i = 0;i<tl;i++){
		v[i] = rand()%300;
	}
}
void merge(int arr[], int left, int mid, int right){
	int n1 = mid - left + 1;
	int n2 = right - mid;
		
	int L[tm], R[tm];
		
	for (int i = 0; i < n1; i++)
		L[i] = arr[left + i];
	for (int j = 0; j < n2; j++)
		R[j] = arr[mid + 1 + j];
		
	int i = 0, j = 0;
	int k = left;

	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		}else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}
	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}
void mergeSort(int arr[], int left, int right){
	if (left >= right)
		return;
	int mid = left + (right - left) / 2;
	mergeSort(arr, left, mid);
	mergeSort(arr, mid + 1, right);
	merge(arr, left, mid, right);
}

int elimOrdenar(int v[], int tl, int x){
	int eliminados = 0;
	mergeSort(v,0,tl-1);
	for(int i = 0; i < tl ; i++){
		if(v[i]%x == 0){
			for (int j = i; j< tl - 1; j++) {
				v[j] = v[ j+1 ];
			}	
			tl--;
			eliminados++;
		}
	}
	return eliminados;
}
	
