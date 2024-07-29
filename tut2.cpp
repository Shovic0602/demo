#include<iostream>
using namespace std;

class binary{
    private:
        string s;
    public:
        void getbin(void);
        void chk_bin(void);
};

void binary :: getbin(){
    cout<<"Enter a binary string"<<endl;
    cin>>s;
}
void binary :: chk_bin(){
    for(int i = 0;i<s.length();i++){
        if(s[i]!= '1' && s[i]!= '0'){
            cout<<"Incorrect binary format"<<endl;
            break;
        }
    }
}

int main(){
    binary b;
    b.getbin();
    b.chk_bin();

    return 0;
}