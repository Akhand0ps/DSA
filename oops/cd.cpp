// #include <bits/stdc++.h>
// using namespace std;

// class phone {
// public:
//     string model_name;
//     int price;

//     // Default constructor
//     phone() {}

//     // Parameterized constructor
//     phone(const string &name, int cost) {
//         model_name = name;
//         price = cost;
//     }

//     // Copy constructor
//     phone(const phone &iphone) {
//         model_name = iphone.model_name;
//         price = iphone.price;
//     }

//     // Display method
//     void display() {
//         cout << model_name<<endl;
//         cout<<price << endl;
//     }
// };

// int main() {
//     // Using the parameterized constructor
//     phone poco("m4 pro", 1499);

//     // Display the phone details
//     poco.display();
//     phone iphone("16 pro",149000);
//     iphone.display();

//     return 0;
// }



// class smartphone {    
//     // Data Members(Properties)    
//     string model;    
//     int year_of_manufacture;    
//     bool _5g_supported;        

// public:    
//     // Default constructor    
//     smartphone() {        
//         model = "unknown";        
//         year_of_manufacture = 0;        
//         _5g_supported = false;    
//     }    

//     // Parameterized constructor    
//     smartphone(string model_string, int manufacture, bool _5g_) {        
//         // Initialising data members        
//         model = model_string;        
//         year_of_manufacture = manufacture;        
//         _5g_supported = _5g_;    
//     }        

//     // Copy constructor    
//     smartphone(smartphone &obj) {        
//         // Copies data of the obj parameter        
//         model = obj.model;        
//         year_of_manufacture = obj.year_of_manufacture;        
//         _5g_supported = obj._5g_supported;    
//     }
// };

// int main() {    
//     // Creating objects of smartphone class        
//     // Using default constructor    
//     smartphone unknown;
        
//     // Using parameterized constructor    
//     smartphone iphone("iphone 11", 2019, false);        

//     // Using copy constructor    
//     smartphone iphone_2(iphone);
// }


#include <iostream>
using namespace std;

class Guided_path {
public:
    // Constructor
    Guided_path() {
        cout << "Constructor is called" << endl;
        cout << "Welcome to Guided Path" << endl;
    }
    
    // Destructor
    ~Guided_path() {
        cout << "Happy Learning" << endl;
        cout << "Destructor is called" << endl;
    }
};

int main() {
    // Object created
    Guided_path obj;
    // At the end, object destructed
}
