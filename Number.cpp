#include <vector>
#include "Number.h"

N::N(unsigned int n){
    unsigned int o=n;
    while(o>0){
        v.insert(begin(v),o%10);
        o/=10;
    }
}
N::N(const N &i){
    v=i.v;
    _symbol=i._symbol;
}
N::N(const std::string &s){
    int k=s.length()-1;
    for(int i=0;i<=k;i++){
        v.push_back(s[i]-'0');
    }
}

N N::operator+(const N &i){
    N n=*this;
    int j=0;
    int l=i.v.size()-1;
    int k=n.v.size()-1;
    if(k<l){
        for(;k<l;k++){
            n.v.insert(begin(n.v),0); 
        }
    }
    int add=0;
    for(l;l>=0;l--){
        add=(n.v[k]+i.v[l]+j)%10;
        j=((n.v[k]+i.v[l]+j)-add)/10;
        n.v[k]=add;
        k--;
    }
    if(j>0){
       n.v.insert(begin(n.v),j); 
    }
    return n;
}
void N::readv(){
    auto i = begin(v);  
    auto e = end(v)-1;
    for(;i<=e;i++){
        std::cout<<*(i);
    }
    std::cout<<std::endl;
}