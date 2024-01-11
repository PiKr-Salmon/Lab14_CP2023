#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T a[],int N);


int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}

template <typename T>
void insertionSort(T a[],int N){
	for(T i = 1; i < N ; i++){
		for(T r = 0;r <= i;r++ ){
			for(T j = r-1 ; a[j] < a[r] && j >= 0; j--){
				T srt = a[r];
				a[r] = a[j];
				a[j] = srt;
				r--;
			}
		}
		cout << "Pass " << i << ":" ;
		for(int num = 0; num < N ;num ++)cout << a[num] << " ";
		cout << endl;
	}
}
