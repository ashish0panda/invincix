#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{   
    vector<string> input;
    vector<string> s;
    int n;
    string temp;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp;
        input.insert(input.end(),temp);
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        if(find(s.begin(),s.end(),input[i]) != s.end()){
            cout<<"D-"<<input[i]<<endl;
        }else{
            s.insert(s.end(),input[i]);
            cout<<input[i]<<endl;
        }
    }
    return 0;
}