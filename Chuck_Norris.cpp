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
    string MESSAGE;
    getline(cin, MESSAGE);
    //The first bit output
    char a=MESSAGE[0];
    int repeat= (a&(1<<6))?1:0;
    cout<<(repeat?"0":"00")<<" "<<"0";
    
    int begin;
    for(string::size_type index=0; index!=MESSAGE.size(); ++index){
        begin=6;
        if(index==0) begin=5;
        a=MESSAGE[index];
        for(int i=begin; i>-1; --i){
            if((a&(1<<i))==(repeat<<i)) cout<<"0"; 
        
            else{
                repeat=1-repeat;
                cout<<" "<<(repeat?"0":"00")<<" "<<"0";
            }
        }    
    }
    
}
