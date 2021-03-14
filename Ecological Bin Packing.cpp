#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int b1,g1,c1,b2,g2,c2,b3,g3,c3;
    cin >> b1 >> g1 >> c1>> b2 >> g2 >> c2>> b3 >> g3 >> c3;

    vector<int>a(6);
    int total = b1+g1+c1+b2+g2+c2+b3+g3+c3;
    a[0] = total-b1-g2-c3;
    a[1] = total-b1-c2-g3;
    a[2] = total-g1-b2-c3;
    a[3] = total-g1-c2-b3;
    a[4] = total-c1-g2-b3;
    a[5] = total-c1-b2-g3;

    auto m = min_element(a.begin(),a.end());
    ans = distance(a.begin(),m);

    if(ans = 0){
        cout<<"BGC";
    }
    else if(ans = 1){
        cout <<"BCG";
    }
    else if(ans = 2){
        cout<<"GBC";
    }
    else if(ans = 3){
        cout<<"GCB";
    }
    else if(ans = 4){
        cout <<"CGB";
    }
    else if(ans = 5){
        cout <<"CBG";
    }



}
