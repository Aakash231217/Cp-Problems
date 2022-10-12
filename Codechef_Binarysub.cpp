#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long int func(int i,string&s,vector<int>& kjgg,map<string,string>& hghg,string hgdgdh,set<string>& hjhjg,long long int jjh){
    if(i<0){
        auto it=hjhjg.find(hgdgdh);
        if(it==hjhjg.end()){
            hjhjg.insert(hgdgdh);
            return 1;
        }
        return 0;
    }
    if(kjgg[i]!=-1){
        return kjgg[i];
    }
    long long int takingone=func(i-1,s,kjgg,hghg,hghg[s.substr(i,+1)+hgdgdh],hjhjg,jjh);
    long long int takingtwo=0;
    if(i-1>=0 && hghg.find(s.substr(i-1,2))!=hghg.end()){
        takingtwo=func(i-2,s,kjgg,hghg,hghg[s.substr(i-1,2)]+hgdgdh,hjhjg,jjh);
    }
    return kjgg[i]=(takingone+takingtwo)%998244353;
}
long long int kjgg(){
    string s;
    cin>>s;
    long long int n=s.length();
    vector<int>kjgg(n,-1);
    map<string,string>hghg{{"a","01"},{"b","10"},{"ab","010"},{"ba","101"}};
    set<string>hjhjg;
    cout<<func(n-1,s,kjgg,hghg,"",hjhjg,998244353)<<endl;
    return 0;
}
int main() {
    long long int kk;
    cin>>kk;
    while(kk--){
        kjgg();
    }
  return 0;
}
