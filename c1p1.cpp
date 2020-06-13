#include <string>
#include <iostream>

using namespace std;

bool isUnqie(string s){
    //If the string is longer than 256, there must be a repeated character
    if(s.size()>256){
        return false;
    }

    //Create a boolean array
    // bool char_set[256];
    // memset(char_set,0,sizeof(char_set));
    
    //If a repeated character is seem , return false.
    bool char_set[256] = {false};
    for(int i=0;i<s.size();i++){
        if(char_set[s[i]]){
            return false;
        }
        char_set[s[i]] = true;
    }

    return true;
}

int main(){
    string s1 = "abcde";
    string s2 = "abbd";

    cout<<isUnqie(s1)<<endl;
    cout<<isUnqie(s2)<<endl;

}