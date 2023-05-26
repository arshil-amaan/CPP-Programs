#include<iostream>
using namespace std;   

void show(int (*q)[3], int  row, int  col) {
	int i,j;
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			cout<<"\t"<<*(*(q + i)+j); 
		cout<<"\n";
    cout<<"\n";
}
 
void print(int  q[][4], int row, int col) {
	int i,j; 
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			cout<<"\t"<<q[i][j];
		cout<<"\n";
	cout<<"\n";
}

int main() {
	int  a[3][4] = { 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21} ; 

	int row, col;
	cin>>row>>col;
	int  arr[row][3];

	for(int i=0; i<row;i++)
		for(int j=0; j<col;j++)
			cin>>arr[i][j];
 
 
  show (arr, row, col);
  print (a, 3, 4);
  return 0;
}
