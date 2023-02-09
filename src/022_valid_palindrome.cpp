class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.size()-1;
        while(i<j){
            while(isalnum(s[i])==false && i<j) i++;
            while(isalnum(s[j])==false && i<j) j--;
            if(tolower(s[i]) != tolower(s[j]))
                return false;
            i++;j--;
        }

        return true;
    }
};

// WORKING
// class Solution {
// public:
//     bool isPalindrome(string s) {
//         string t;
//         for(auto c : s){
//             if(isalnum(c)){
//                 t+=tolower(c);
//             }
//         }
//         string trev(t);
//         reverse(trev.begin(), trev.end());
//         return t==trev;
//     }
// };

// failed at 0P
// string old_string = "";
// string rev_string = "";
// // cout << "Given " << s << endl;

// for(int i = 0; i<=s.size(); i++){
//     if((s[i]>='A' || s[i]>='a') && (s[i]<='Z' || s[i]<'z')){
//         string c(1, tolower(s[i]));
//         old_string = old_string+c;
//         rev_string = c+rev_string;
//     }
        
// }

// cout << old_string << endl;
// cout << rev_string << endl;

// return old_string==rev_string;


// python
class Solution:
    // def isPalindrome(self, s: str) -> bool:
    //     # replcedstr = ''.join(e for e in s if e.isalnum()).lower()
    //     replcedstr = re.sub('[^A-Za-z0-9]+', '', s).lower()
    //     return replcedstr[::-1] == replcedstr