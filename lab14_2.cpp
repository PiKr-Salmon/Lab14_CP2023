#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void inputMatrix(double u[][N]){
    for(int ir = 0; ir < N; ir++){
        cout << "Row " << ir+1 << ": ";
        for(int in = 0; in < N ; in++){
            double inp;
            cin >> inp;
            u[ir][in] = inp;
        }
    }
}

void findLocalMax(const double A[][N], bool B[][N]){
    for(int row = 0; row < N ;row++){
        for(int colum = 0; colum < N ; colum++){
		    if(A[row][colum] >= A[row-1][colum] && A[row][colum] >= A[row+1][colum] && A[row][colum] >= A[row][colum-1] && A[row][colum] >= A[row][colum+1]){
		            B[row][colum] = 1.0 ;
		    }else B[row][colum] = 0.0;
		    if(row == 0 || row == N-1)
                B[row][colum] = 0.0 ;
            else if (colum == 0 || colum == N-1)
                B[row][colum] = 0.0 ;
		}
	}
}

void showMatrix(const bool u[][N]){
   for(int row = 0; row < N ;row++)
        for(int colum = 0; colum < N ; colum++){
            if(colum != N-1){
            cout << u[row][colum] << " " ;
            }else cout << u[row][colum] << endl;
        }
}