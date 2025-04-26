#include<bits/stdc++.h>
using namespace std;

int main(){
    int row;
    int col;
    cin>>row>>col;
    vector<vector<int>> arr(row, vector<int>(col));

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j];
        

            if(j==arr[i].size()-1){
                cout<<endl;
            }
            else{
                cout<<" ";
            }
        }
    }
}