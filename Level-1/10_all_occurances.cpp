#include <bits/stdc++.h>
using namespace std;

//  This is recursive code to return vector of indices of all occurances
void all_occurances(const vector <int> &arr, int num, int i, vector <int > &ans){
    if(i == arr.size()) return;
    if(arr[i]==num) ans.push_back(i);
    all_occurances(arr,num,i+1,ans); 
}

vector <int> all_occ(const vector <int> & arr, int num, int i, int fsf){
    
}

int main(){
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i = 0; i<n;i++){
        cin>>v[i];
    }
    int num;
    cin>>num;

    vector <int > ans;
    all_occurances(v,num,0,ans);
    
    if(ans.size()==0) {
        cout<<"-1"<<endl;
        return 0;
    }

    for(auto &i:ans){
        cout<<i<<" ";
    }
    cout<<endl;


    return 0;
}