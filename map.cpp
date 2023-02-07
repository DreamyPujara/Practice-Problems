#include<iostream>
#include<map>
#include<string>
using namespace std;

//map is an associative array
int main(){
    
    map<string,int> marksMap;
    marksMap["Alice"] = 98;
    marksMap["Mark"] = 56;
    marksMap["Jack"] = 43;
    
    marksMap.insert({{"Mike",87},{"Rose",54}});
    map<string,int> :: iterator iter;
    for(iter=marksMap.begin();iter!=marksMap.end();iter++){
        cout<< (*iter).first<<" "<<(*iter).second<<"\n";
    }
    
    cout<<"THe size is: "<<marksMap.size()<<endl;
    cout<<"THe max_size is: "<<marksMap.max_size()<<endl;
    cout<<"THe empty's return value is: "<<marksMap.empty()<<endl;
    return 0;
}