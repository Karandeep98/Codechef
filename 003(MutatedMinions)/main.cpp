#include <iostream>

using namespace std;

int main()
{
    int t,n,k,a;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>k;
        int count=0;
        for(int j=0;j<n;j++){
            cin>>a;
            if((a+k)%7==0){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
