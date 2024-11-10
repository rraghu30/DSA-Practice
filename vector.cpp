#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int> v;

    vector<int> a(5, 11);

    vector<int> last(a);

    cout<<"print last"<<endl;
    for(int i:last) {
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Capacity ->"<<v.capacity()<<endl;
     
     v.push_back(1);
     cout<<"Capacity"<<v.capacity()<<endl;

     v.push_back(2);
     cout<<"Capacity"<<v.capacity()<<endl;

     v.push_back(3);
     cout<<"Capacity"<<v.capacity()<<endl;

     cout<<"size ->"<<v.size()<<endl;

     cout<<"Element at 2nd INdex" <<v.at(2)<<endl;

     cout<<"front "<<v.front()<<endl;
     cout<<"back"<<v.back()<<endl;

     cout<<"before pop "<<endl;
     for(int i: v) {
        cout<<i<<" ";
     }

     
    
    
}