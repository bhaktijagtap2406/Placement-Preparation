#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void reverse(vector<char>& s, int start, int end) {
        if(end <= start) return;

        swap(s[start],s[end]);
        reverse(s,start+1,end-1);
    }
    void reverseString(vector<char>& s) {
        reverse(s,0,s.size()-1);
    }
};

  
