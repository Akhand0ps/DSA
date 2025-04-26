#include<bits/stdc++.h>
using namespace std;


int main() {
    string str;

    // Take input
    cin >> str;

   
    bool valid = true;
    for (char ch : str) {
        if (ch != 'A' && ch != 'T' && ch != 'G' && ch != 'C') {
            valid = false;
            break;
        }
    }

    
    if (valid) {
        

    //    stack<pair<char, vector<int>>>st;
    // for (int i = 0; i < str.size(); i++) {
    //     if (!st.empty() && st.top().first == str[i]) {
    //         // If the character is the same as the top, add its index
    //         st.top().second.push_back(i);
    //     } else {
    //         // Otherwise, create a new pair and push it
    //         vector<int> positions = {i};
    //         st.push({str[i], positions});
    //     }
    // }
     
    //     int maincout=0;

    //     while(!st.empty()){
    //         auto it = st.top();
    //         st.pop();
    //         int cnt =0;
    //         int size = it.second.size();

    //         vector<int>nums(size);
    //         int i=0;
    //        for(auto itt:it.second){
    //          nums[i] = itt;
    //          i++;
    //        }

    //        for(int i=0;i<size-1;i++){

    //             if(nums[i] != nums[i+1]-1){
    //                 break;
                   
    //             }
    //             else  {
    //                 cnt++;
    //                 maincout = max(maincout,cnt);
    //             }
    //        }
            
    //     }

    // cout<<maincout+1;
    int max_len = 0, current_len = 1;
for (int i = 1; i < str.size(); i++) {
    if (str[i] == str[i - 1]) {
        current_len++;
    } else {
        max_len = max(max_len, current_len);
        current_len = 1;
    }
}
max_len = max(max_len, current_len); // Final update
cout << max_len << endl;




    } else {
        return 0;
    }

    return 0;
}



// 1 2 3 

// i i+1 
//   i   i+1
//       i   i+1


// 4    5   6 

// cnt= 1;
// cnt = 2;

