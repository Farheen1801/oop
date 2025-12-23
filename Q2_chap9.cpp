#include<iostream>
#include<string.h>
using namespace std;
class String {
protected:
    static const int SZ = 80;
    char str[SZ];
public:
    String() {
        str[0] = '\0';
    }
    
    String(char s[]) {
        strcpy(str, s);
        str[SZ - 1] = '\0';
    }
    
    void display() const {
        cout << str;
    }
    
    void getstr() {
        cin>>str;
    }
};
class Pstring:public String{
         public:
         Pstring(char s[])
{
    if(strlen(s)<SZ)
    strcpy(str,s);
    else{
        int i;
        for(i=0;i<SZ-1;i++){
            str[i]=s[i];
            str[SZ-1]='\0';}
        
    }
}
};

int main() {
     Pstring s1("This is a short string.");
     Pstring s2("This string is designed to surely exceed the width of the screen, which is what the SZ constant represents.");
    Pstring s3("Medium length string here");
    
    cout << "String 1: ";
    s1.display();
    cout << "\n\nString 2 : ";
    s2.display();
    cout << "\n\nString 3: ";
    s3.display();
    cout << endl;
}