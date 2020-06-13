#include <string>
#include <iostream>
using namespace std;

/* Queston: Check Permutation
    Given two strings, write a method to decide if one is a permutation of
    the other.
 */

 /* Solution 
    comfirm some details with the interviewer
    case sensitive
    whitespace

    assuming that the comparsion is case sensitive and whitespace is significant.

    strings of different lengths cannot be permutations of each other.
 

    solution #1: Sort the strings and see whether they are the same string

    solution #2: Check if the two strings have identical character counts
    counting how many times each character appears. Then, we compare the two arrays.
  */

bool isPermutation(string s1, string s2){

    if(s1.size()!=s2.size()) return false;

    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

   
    if(s1.compare(s2)==0){
        //if two strings are equal
        return true;
    }

    return false;

}

bool isPermutation2(string s1, string s2){
    if(s1.size()!=s2.size()) return false;


    int letter[128] = {0};

    for(auto c : s1){
        letter[c]++;
    }

    for(auto c:s2){
        letter[c]--;
        if(letter[c]<0) return false;
    }

    return true;
}


int main(){
    
    string s1 = "God";
    string s2 = "dog";

    cout<<"isPermutation "<<isPermutation(s2,s2)<<endl;
    cout<<"isPermutation2 "<<isPermutation2(s2,s2)<<endl;

}