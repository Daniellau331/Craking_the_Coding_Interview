using namespace std;

/* Check Permutation:
    Given two strings, write a method to decide if one is a permutation of
    the other.
 */

 /* Solution
    comfirm some details with the interviewer
    case sensitive
    whitespace

    assuming that the comparsion is case sensitive and whitespace is significant.

    strings of different lengths cannot be permutations of each other.
 
  */

bool isPermutation(string s1, string s2){

    if(s1.size()!=s2.size()) return false;

    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());


}


int main(){


}