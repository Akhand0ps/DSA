#include<bits/stdc++.h>
using namespace std;


class node{

    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data = data;
        left = right = nullptr;
    }
};


vector<vector<int>>vertical(node* root){
    //map to store by vertical and level
    // key will be vertical ->> x and value will be map of y(key) and nodes(value);

    map<int,map<int,multiset<int>>nodes;
// to store nodes based of BFS 

    queue<pair<node*,pair<int,int>> q;