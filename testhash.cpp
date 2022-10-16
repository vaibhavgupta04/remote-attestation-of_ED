#include<bits/stdc++.h>
// #include"class_decrypt.cpp"
// #include"class_encrypt.cpp"

using namespace std;

const int prime=1031;

int hashFunction(string key) {
    int hashCode = 0;
    for (int i = 0; i < key.length(); i++) {
        hashCode += key[i] * pow(prime, i);
    }
    return hashCode;
}

int main(){
    string s="vaibhav gupta";
    cout<<    
    return 0;
}