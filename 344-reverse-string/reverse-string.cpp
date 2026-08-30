class Solution {
public:
    void reverseString(vector<char>& s) {
        int low = 0;
        int heigh = s.size()-1;
        while(low<heigh){
            swap(s[low++],s[heigh--]);
        }
    }
};