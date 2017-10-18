#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int L;
    cin >> L; cin.ignore();
    int H;
    cin >> H; cin.ignore();
    string T;
    getline(cin, T);
    int N = T.size();
    cerr<<L<<endl;
    cerr<<T<<endl;
    for (int i = 0; i < H; i++) {
        string ROW;
        getline(cin, ROW);
        for (int j = 0; j < N; ++j){ //loop the total number of charactor
            cerr<<"here"<<endl;
            int index = (T[j]>='A' && T[j] <='Z')?(T[j]-'A'):(T[j]>='a' && T[j] <='z')?(T[j]-'a'):26;
            cerr<<index<<endl;
            for (int k = index*L; k < (index+1)*L; ++k){ //loop each element in the character
                cout<<ROW[k];
            }
        }
        cout<<endl;
    }
    
}
