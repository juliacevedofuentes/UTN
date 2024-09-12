#include <iostream>
#include <ctime>
#include <algorithm>

using namespace std;

#define tm 500

void generar_vec(int v[], int tl);
void elimOrdenar(int v[], int tl);
void quickSortdes(int v[], int inicio, int final);
int divisiondes(int v[], int ini, int fin);
bool busbin(int v[],int tl,int x);
int Uno(int k[], int a[],int b[], int ta, int tb, bool c);

int main(int argc, char *argv[]) {
	int A[tm] = {};
	int B[tm] = {};
	int k[tm] = {};
	int ta,tb;
	bool c;
	
	cin >> ta >> tb >> c; 
	
	generar_vec(A,ta);
	generar_vec(B,tb);
	
	int tk = Uno(k,A,B,ta,tb,c);
	
	for(int i = 0; i < tk ; i++){
		cout << k[i] << endl;
	}
	
	return 0;
}

void generar_vec(int v[], int tl){
	srand((unsigned)time(NULL));
	for(int i = 0;i<tl;i++){
		v[i] = rand()%300;
	}
}

int Uno(int k[], int a[],int b[], int ta, int tb, bool c){
	int j = 0;
	
	elimOrdenar(a,ta);
	elimOrdenar(b,tb);
	
	for(int i = 0; i<tb ; i++){
		if(busbin(a,ta,b[i]) == true){
			k[j] = b[i];
			j++;
		}
	}
	
	if(c == false)quickSortdes(k,0,j);
	
	return j;
}

void quickSortdes(int v[], int inicio, int final) {
	if (inicio < final) {
		int pi = divisiondes(v, inicio, final);  
		quickSortdes(v, inicio, pi - 1); 
		quickSortdes(v, pi + 1, final);
	}
}
int divisiondes(int v[], int ini, int fin) {
	int pivot = v[fin];  
	int i = (ini - 1);  
		
	for (int j = ini; j <= fin - 1; j++) {
		if (v[j] >= pivot) {
			i++;  
			swap(v[i], v[j]);
		}
	}
	swap(v[i + 1], v[fin]);
	return (i + 1);
}
	
bool busbin(int v[],int tl,int x){
	int izq,der,pm;
	bool encontrado = false;
	
	izq = 0;
	der = tl-1;
	
	while(izq <= der  and !encontrado){
		pm = (int)((izq + der)/2);
		if(v[pm] == x){
			encontrado = true;
		}else if(x > v[pm]){
			izq = pm+1;
		}else{
			der = pm -1;
		}
	}

	return encontrado;
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
	
void elimOrdenar(int v[], int tl){
	mergeSort(v,0,tl-1);
	for(int i = 0; i < tl ; i++){
		if(v[i] == v[i+1]){
			for (int j = i; j< tl - 1; j++) {
				v[j] = v[ j+1 ];
			}	
		tl--;
		}
	}
}
				
				
