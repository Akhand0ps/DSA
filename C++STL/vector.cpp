#include<bits/stdc++.h>
using namespace std;
void explainVector(){
    //pair
    pair <int,int> p={1,3};
    cout<<p.first<<" "<<p.second<<endl;

    // nested pair to store more than one pair like {1,{1,3}}
    pair <int,pair<int,int>> s={1,{3,4}};
    cout<<s.first<<" "<<s.second.first<<" "<<s.second.second<<endl;

    // pairs inm array:
    pair<int, int> arr[]={{1,2},{2,5},{4,8},{7,8}};
    cout<< arr[0].second;

    //vector

    vector<int>v;
    v.push_back(1);
    v.emplace_back(2);

    vector of a pair data type
    vector<pair<int,int>>> vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);

    //declare container with lot of elements
    vector<int> vs(5,100);    // 5=size ,100=elements. mtlb 5 bar 100.
    vector<int> vp(5); // 5 bar zero(0);
    //increase the size

    vp.push_back(1); // hence vp(5) -> vp(6);


    // now howw to access elements

    // we use iterator:-
    vector<int> vecc ={10,20,30,40};
    vector<int>:: iterator it=vecc.begin();
    it++;
    cout<< *(it)<<" "<<endl;

    //more iterators.
    vecc.end(); //points rigth after last elements // last elements ke  liye (it--) kro;
    vecc.rend(); //reverse the end; // aur reverse krke first element ke rigth side point krti hai ^{10,20} . ^ hai wahi
    // to access f_ele do it++; 
    // use reverse_iterator and do it-- to get first element

    vecc.rbegin(); // directly points last element // if we do it++ . it'll move rigth to left.
    // use reverse_iterator nd to get s_lst elemnet use it++ as it moves from right to left.

    // Now print the whole vector together
    for(vector<int>::iterator it=v.begin();it !=v.end();it++){
        cout<< *(it) <<" ";
    }

    // altternative1 
    for(auto it=vecc.begin();it != v.end();it++){
        cout<< *(it)<<" ";     // auto apne pata lag leta hai ki konsa data tyep . here auto = int 
    }
    //alternative2
    for(auto it:vecc){
        cout<<it<<" ";
    }
    // delettion in vector
    vecc.erase(vecc.begin());
    vecc.erase(vecc.begin()+2);

    // inserting
    vector<int> vecy(2,100);
    vecy.insert((vecy.begin(),300));
    vecy.insert(vecy.begin+1,2,10);  //dekh yaha pe +1 positon krke , 2 100 daal diye.
    vector<int>copy(2,50); // {50,50};
    vecy.insert(vecy.begin());
    

    // few more function
    vecy.size(); // tellus th e size.
    vecy.pop_back(); // deletes last element.
    vecy.clear(); // erases entire vector
    vecy.swap(vecc); 
    vecy.empty(); // non-empty -> false and vice versa.
}

int main(){
    explainVector();
    return 0;
}