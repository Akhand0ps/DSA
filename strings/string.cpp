#include <bits/stdc++.h> 
using namespace std;


// char tolowerChar(char ch){
//     if(ch >= 'a' && ch <= 'z'){
//         return ch;
//     }
//     else{
//         char temp = ch- 'A' + 'a';
//         return temp;
//     }
// }


// bool isAlphaNumeric(char ch){
//     if((ch >= 'A' && ch <= 'Z')||
//         (ch >= 'a'&& ch <= 'z')||
//         (ch >= '0' && ch<= '9')){
//             return true;
//     }
//     return false;// its a symbol;
// }

// string skipSymBOLANDspaces(const string &name){
//     string result = "";

//     for(char ch:name){
//         if(isAlphaNumeric(ch)){
//             result = result+ ch;
//         }
//     }

//     return result;
// }
// bool checkPalindrome(const string &name)
// {
//     // Write your code here.
//     string clean = skipSymBOLANDspaces(name);
//     int start = 0;
//     int end = clean.length()-1;


//     while(start <= end){
//         if(tolowerChar(clean[start]) != tolowerChar(clean[end])){
//             return false;
//         }

//         else{
//             start++;
//             end--;
//         }

        
//     }

//     return true;
    
// }

int main() {
    string name;
    cout << "Enter name: ";
    getline(cin, name); // Get entire string input

    // int len = name.length(); // Length of the original string
    // cout << "Length of string: " << len << endl;
cout<<name;
    // Reverse the original string for display
    string originalName = name; // Keep a copy of the original for reversing
    // reverse_string(originalName);
    // cout << "Reversed string: " << originalName << endl;

    // Check if the string is a palindrome
    // cout << "Palindrome or not: " << (checkPalindrome(name) ? "Yes" : "No") << endl;

    return 0;
}
