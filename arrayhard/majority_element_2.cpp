// if(n==0) return {};
        // vector<int> ls;

        // for(int i = 0;i<n;i++){
        //     if(ls.size()==0 || ls[0] != nums[i]){
        //         int cnt =0;

        //         for(int j = 0;j<n;j++){
        //             if(nums[j]==nums[i]){
        //                 cnt++;
        //             }
        //         }
        //         if(cnt > (n/3)){
        //             ls.push_back(nums[i]);
        //         }
        //     }

        //     if(ls.size()==2) break;
        // }
        // return ls;


// better


 // int mini = (n/3)+1;
        // vector<int> ls;
        // map<int,int> mpp;
        // for(int i =0;i<n;i++){
        //     mpp[nums[i]]++;
        //     if(mpp[nums[i]]== mini){
        //         ls.push_back(nums[i]);
        //     }
        //      ls(ls.size()==2) break;
        // }
        // return ls;

// optimised
// TC ->> O(2N);
//SC ->> O(1);

// vector<int> majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         int cnt1=0,cnt2=0;
//         int el1= INT_MIN;
//         int el2 = INT_MIN;
        
//         for(int i =0;i<n;i++){
//             if(cnt1 ==0 && el2 != nums[i]){
//                 cnt1= 1;
//                 el1 = nums[i];
//             }
//             else if(cnt2==0 && el1 != nums[i]){
//                 cnt2 = 1;
//                 el2 = nums[i];
//             }

//             else if(nums[i] == el1) cnt1++;
//             else if(nums[i] == el2) cnt2++;
//             else{
//                 cnt1--;
//                 cnt2--;
//             }
//         }

//         cnt1=0,cnt2=0;
       
//         for(int i=0;i<n;i++){
//             if(nums[i] == el1) cnt1++;
//             if(nums[i] == el2) cnt2++;
//         }

//         int mini = (int )(n/3)+1;
//         vector<int> ls;
//         if(cnt1 >= mini) ls.push_back(el1);
//         if(cnt2 >= mini ) ls.push_back(el2);
//         return ls;

//     }