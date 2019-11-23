#include <iostream>
#include <vector>
using namespace std;

int main() {
    int r=20;
    int l=20;
    vector<vector<string>> vv;
    //wall
    for(int i=0;i<r;i++){
        vector<string> v;
        for(int j=0;j<l;j++) {
            v.push_back("02");
        }
        vv.push_back(v);
    }

    //inside
    for(int i=1;i<vv.size()-1;i++){
        for(int j=1;j<vv[0].size()-1;j++){
            vv[i][j]="00";
            vv[i][j+1]="01";
            vv[i+1][j]="10";
            vv[i+1][j+1]="11";
            j++;
        }
        i++;
    }

    //print
    for(int i=0;i<vv.size();i++){
        for(int j=0;j<vv[0].size();j++){
            if(j==vv[0].size()-1){
                cout<<vv[i][j];
            }else{
                cout<<vv[i][j]<<",";
            }
        }
        cout<<endl;
    }
    cout<<endl;



    return 0;
}