#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> markrow(vector<vector<int>> &matrix,int m,int i){
	for(int j=0;j<m;j++){
		if(matrix[i] [j] != 0){
			matrix[i][j]= -1;
		}
	}
	return matrix;
}

vector<vector<int>> markcol(vector<vector<int>> &matrix,int n,int j){
	for(int i=0;i<n;i++){
		if(matrix[i] [j] != 0){
			matrix[i][j]= -1;
		}
	}
	return matrix;
}
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	// Write your code here.
	for(int i=0;i<n;i++){
		for(int j =0;j<m;j++){
			if(matrix[i] [j] == 0){
				markrow(matrix,m,i);
				markcol(matrix,n,j);
			}
		}
	}

	for(int i =0;i<n;i++){
		for(int j =0;j<m;j++){
			if(matrix [i][j] ==-1){
				matrix[i] [j]= 0;
			}
		}
	}
	return matrix;
}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;

    // vector<vector<int>> matrix(n,m);
	vector<vector<int>> matrix(n, vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>> matrix[i][j];
        }
    }

    vector<vector<int>> res= zeroMatrix(matrix,n,m);
	cout<<"output"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<< res[i][j]<<" ";
        }
		cout<<endl;
    }
    
}