s#include<bits/stdc++.h>
using namespace std;
// tolower == Z(90) Z-'A'(65)+'a'(97) == z(122);

//  char tolowerChar(char ch){
//     // phele se chota hai.
//     if(ch >='a' && ch<='z'){
//         return ch;
//     }
//     else{
//         char temp = ch- 'A' + 'a';
//         return temp;
//     }
// }

// bool checkpallidrome(char name[],int n){
//     int start = 0;
//     int end = n-1;

//     while(start <= end){

//         if(tolowerChar(name[start] ) !=tolowerChar(name[end]) ){
//             return false;
//         }
//         else{
//             if((name[start] >= 32 && name[start] > 65 ) || (name[start] >= 91 && name[start] >= 97) || (name[start] >= 123 && name[start] >= 126) ||(name[end] >= 32 && name[end] > 65) ||
//             (name[end] >= 91 && name[end] >= 97) || (name[end] >= 123 && name[end] >= 126))
//             {
//                 start++;
//                 end--;
//             }
//         }
//     }

//     return true;
// }

// void reverse_string(char name[], int n){
//     int s = 0;
//     int e = n-1;

//     while( s < e){
//         swap(name[s] , name[e]);
//         s++;
//         e--;
//     }
// }
// int length(char name[]){
//     int cnt= 0;
   
//    while(name[cnt] != '\0'){
//     cnt++;
//    }

//     return cnt;
// }

int main(){

    char name [20];
    cout<<"Enter name: ";
    cin>>name;
    
    cout<<"Length of string: ";
    int len = length(name);
    cout<<len<<endl;

    reverse_string(name,len);
    cout<<"revsered string: "<<name<<endl;
    
    cout<<"Pallindrome or not: "<<checkpallidrome(name,len);
    
}