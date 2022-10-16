#include<bits/stdc++.h>
#include"class_decrypt.cpp"
#include"class_encrypt.cpp"

using namespace std;

int main(){
    char msg[1024];
    cin.getline(msg,sizeof(msg));
    Encrypt E(msg);
    E.DoEncrypt();
    Decrypt D;
    D.DoDecrypt();
    return 0;
}