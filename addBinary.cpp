#include<bits/stdc++.h>
using namespace std;
    string addBinary(string a, string b) {
        
        string result;
        int carry=0;
        int f=a.size()-1;
        int s=b.size()-1;
        while(f>=0 || s>=0 || carry!=0){
            int sum = carry;

            if(f>=0){
                sum += a[f]-'0';
                f--;
            }
            if(s>=0){
                sum += b[s]-'0';
                s--;
            }

            result = char(sum % 2+ '0' ) + result;
            carry= sum/2;
        }
        return result ;
    }
