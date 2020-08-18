#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool allCap(string word){
        cout << "In func->1 : " << word << " : ";
        int a = 0;
        for(auto i : word){
            a=0;
            a += i;
            if(a<65 || a > 90){
                return false;
            }
        }
        return true;
    }
    
    bool onlyOneCap(string word){
        cout << "In func->2 : " << word << " : ";
        int a = 0;
        int n = word.length();
        for(int i = 1; i<n; i++){
            a=0;
            a +=word[i];
            //cout << "Ascii : " << a << endl;
            if(a >=65 && a <= 90){
                return false;
            }
        }
        return true;
    }
    
    bool allSmall(string word){
        cout << "In func->3 : " << word << " : ";
        int a = 0;
        for(auto i : word){
            a=0;
            a+=i;
            //cout << "Ascii : " << a << endl;
            if(a >= 65 && a <= 90){
                return false;
            }
        }
        return true;
    }
    
    
    
    bool detectCapitalUse(string word) {
        bool ans;
        int ascii=0;
        string pattern = "";
        
        ascii += word[0];
        if(word.length() == 1) return true;
        if(ascii>=65 && ascii <= 90){
            ascii =0;
            ascii += word[1];
            if(ascii>=65 && ascii <= 90){
                return allCap(word);
            }else{
                return onlyOneCap(word);
            }
        }else{
            return allSmall(word);
        }
        
        return false;
    }
};


int main(){
    Solution s;
    vector<string> v = {"USA", "awesome", "GraY", "GarLanD", "Mouse"};
    for(auto i : v){
        string a = i;
        if(s.detectCapitalUse(a))
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    
}
