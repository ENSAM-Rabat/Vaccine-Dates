#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int D,L,R;
        cin>>D>>L>>R;
        if(D<L)
            cout<<"Too Early"<<endl;
        else if(D>=L && D<=R)
            cout<<"Take seconde dose now"<<endl;
        else
            cout<<"Too late"<<endl;
    }
    return 0;
}