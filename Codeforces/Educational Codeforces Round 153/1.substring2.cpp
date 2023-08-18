// Another method to solve the same problem

#include <iostream>

using namespace std;


#define ll long long 
#define  pb push_back
#define sg  string




int main(){

    ll t;

    cin >> t;

    while(t--){
            sg s;
            cin >> s;


            sg a="", b="";
            

            for(int i=0; i<s.length(); i++){
                a += "()";
                b.pb('(');
            }

            for(int i=0; i<s.length(); i++){
                b.pb(')');
            }


            if(a.find(s) == string::npos){
                cout << "YES" << endl;
                cout << a << endl;
            }
            else if(b.find(s) == string::npos){
                cout << "YES" << endl;
                cout << b << endl;
            }
            else{
                cout << "NO" << endl;
            }

    }
}