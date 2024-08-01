#include<bits/stdc++.h>
using namespace std;
void printp1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void printp2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void printp3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j << " ";
        }
        cout<<endl;
    }
}
void printp4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void printp5(int n){
    for(int i=n;i>0;i--){
        for(int j=i;j>0;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void printp6(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void printp7(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void printp8(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<"-";
        }
        for(int j =0;j<2*i+1;j++){
            cout << "*";
        }
        for(int j =0;j<n-i-1;j++){
            cout<<"-";
        }
        cout << endl;
    }
}
void printp9(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<"-";
        }
        for(int j =0;j<2*n-(2*i+1);j++){
            cout << "*";
        }
        for(int j =0;j<i;j++){
            cout<<"-";
        }
        cout << endl;
    }
}
void printp10(int n){
    for(int i=1;i<2*n-1;i++){
        int stars= i;
        if(i>n) stars= 2*n-i;
        for(int j=1;j<=stars;j++){
            cout<< "*";
        }
        cout<< endl;
    }
}
void printp11(int n){
    int start =1;
    for(int i=0;i<n;i++){
        if(i%2==0) start = 1;
        else start=0;
        for(int j =0;j<=i;j++){
            cout << start <<" ";
            start = 1-start;
        }
        cout<< endl;
    }
}
void printp12(int n){
    int space = 2*(n-1);
    for(int i = 1;i<=n;i++){
        //numbers
        for(int j =1;j<=i;j++){
            cout<< j;
        }
        //space
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        //numbers
        for(int j =i;j>=1;j--){
            cout<< j;
        }
        cout<< endl;
        space -=2;
    }
}
void printp13(int n){
    int num =1;
    for(int i =1;i<=n;i++){
        
        //numbers
        for(int j=1;j<=i;j++){
            cout<< num<<" ";
            num +=1;
        }
        cout<< endl;
    }
}
void printp14(int n){
    
    for(int i=1;i<=n;i++){
        for(char ch ='A';ch<='A'+i;ch++){
            cout<< ch<<" ";
        }
        cout<<endl;
    }
}
void printp15(int n){
    for(int i = n;i>=0;i--){
        for(char ch= 'A';ch<='A'+i;ch++){
            cout<< ch<<" ";
        }
        cout<< endl;
    }
}
void print_p15(int n){
    for(int i = 0;i<n;i++){
        for(char ch= 'A';ch<='A'+(n-i-1);ch++){
            cout<< ch<<" ";
        }
        cout<< endl;
    }
}
void printp16(int n){
    for(int i = 0;i<=n;i++){
        char ch ='A'+i;
        for(int j =0;j<=i;j++){
            cout<< ch<<" ";
        }
        cout<<endl;
    }
}
void printp17(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<"-";
        }
        //char 
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for(int j =1;j<=2*i+1;j++){
            cout<< ch;
            if(j<= breakpoint) ch++;
            else ch--;
        
        }


        // space
        for(int j =0;j<n-i-1;j++){
            cout<<"-";
        }
        cout << endl;
    }
}
void printp18(int n){
    for(int i=0;i<n;i++){
        for(char ch=('A'+n-1-i);ch<='A'+n-1;ch++){
            cout<< ch<< " ";
        }
        cout<<endl;
    }
}
void printp_18(int n){
    for(int i =0;i<n;i++){
        for(char ch='E'-i;ch<='E';ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void printp19(int n){
    int space=0;
    for(int i=0;i<n;i++){
        //stars
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        
        //space
        for(int j=0;j<space;j++){
            cout<<" ";
        }
        //stars
        for(int j =1;j<=n-i;j++){
            cout<<"*";
        }
        space +=2;
        cout<<endl;
    }
    //second half
    space=2*n-2;
    for(int i=1;i<=n;i++){

        for(int j=1;j<=i;j++){
            cout<< "*";
        }
        for(int j=0;j<space;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<< "*";
        }
        space -=2;
        cout<<endl;
    }
}
void printp20(int n){
    int space=2*n-2;
    for(int i=1;i<=2*n-1;i++){
        //stars
        int stars=i;
        if(i > n)  stars = 2*n-i;
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        
        //space
        for(int j=1;j<=space;j++){
            cout<<" ";
        }

        //stars
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout << endl;
        if(i<n) space -=2;
        else space +=2;
    }
}
void printp21(int n){
    for(int i=0;i<n;i++){
        for(int j =0;j<n;j++){
            if(i==0 || j==0 || i== n-1 || j == n-1){
                cout<<"*";
            }
            else cout << " ";
        }
        cout<< endl;
    }
}
void printp22(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j =0;j<2*n-1;j++){
            int top =i;
            int left = j;
            int right = (2*n-2)-j;
            int down = (2*n-2)-i;
            cout << (n-min(min(top,down),min(left,right)));

        }
        cout << endl;

    }
}
int main(){
    int t;
    cout<<"Enter how many times loop will work: ";
    cin>> t;
    for(int i=0;i<t;i++){
    int n;
    cout <<"le re: ";
    cin>> n;
    printp22(n);
    }
    return 0;
}