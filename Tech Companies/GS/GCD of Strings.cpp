class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int n1=str1.size();
        int n2=str2.size();
        return (str1+str2 != str2+str1) ? "" : str2.substr(0,__gcd(n1,n2));
    }
};
