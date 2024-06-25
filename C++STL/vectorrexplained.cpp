#include<bits/stdc++.h>
using namespace std;
explainVector(){
    vector<int> vecc ={10,20,30,40};
    for(vector<int>::iterator it=vecc.begin();it !=vecc.end();it++){
        cout<< *(it) <<" ";
    }

    vecc.push_back(1);
    cout<<endl;
     for(vector<int>::iterator it=vecc.begin();it !=vecc.end();it++){
        cout<< *(it) <<" ";
    }
    cout<<endl;
    for(auto it:vecc){
        cout<<(it)<<" ";
    }

    vecc.erase(vecc.begin());
    cout<<endl;
    for(auto it:vecc){
        cout<<(it)<<" ";
    }
    cout<<endl;

    vector<int> vecy(2,100);
    vecy.insert(vecy.begin(),300);
    vecy.insert(vecy.begin()+1,2,10);  //dekh yaha pe +1 positon krke , 2 "100 daal diye.
    vector<int>copy(2,50); // {50,50};
    vecy.insert(vecy.begin(),copy.begin(),copy.end());
    for(auto it:vecy){
        cout<<it<<" ";
    }
    cout<<endl;
    vecy.pop_back();
    for(auto it:vecy){
        cout<<it<<" ";
    }

    cout<<endl;
    cout<<vecy.size(); // tellus the size.

    cout<<endl;
    vecy.pop_back(); // deletes last element.
    for(auto it:vecy){
        cout<<it<<" ";
    }

    cout<<endl;

    vecy.clear(); // erases entire vector
    for(auto it:vecy){
        cout<<it<<" ";
    }

    cout<<endl;
    vecy.swap(vecc); 
    for(auto it:vecy){
        cout<<it<<" ";
    }
    cout<<endl;
    vecy.empty(); // non-empty -> false and vice versa.
    for(auto it:vecy){
        cout<<it<<" ";
    }

    // cout<<vecc.back()<<endl;
    
    // cout<< *(it)<<" "<<endl;
}
int main(){
 explainVector();
}