#include <bits/stdc++.h>
#include<iomanip>
using namespace std;

int main() {
    float a,b;
    cin>>a>>b;
    
    char c;
    cin>>c;
    
    switch(c){
        case '+':{
            cout<<std::setprecision(3)<<(a+b)<<endl;
            break;
        }
        case '-':{
            cout<<std::setprecision(3)<<(a-b)<<endl;
            break;
        }
        case '*':{
            cout<<std::setprecision(3)<<(a*b)<<endl;
            break;
        }
        case '/':{
            cout<<std::setprecision(3)<<(a/b)<<endl;
            break;
        }
        default: break;
    }
    return 0;
}
