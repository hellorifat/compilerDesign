#include <bits/stdc++.h>
using namespace std;

string iverify(string pstring){
    
    string opstr="Hurray! It's a valid";
    int pstrlen=pstring.length();
    int cdigit=0;
    int imatch;
    
    
    int icav=int(pstring[0]);
    
    if (icav>=48 && icav<=57){
                    opstr="Invalid! First Character is a digit.";
                    cdigit=1;
                }
    
    if(cdigit==0){
        if (pstring[0]=='a' || pstring[0]=='b' || pstring[0]=='c' || pstring[0]=='d' || pstring[0]=='e' 
           || pstring[0]=='f' || pstring[0]=='g' || pstring[0]=='h' 
           || pstring[0]=='i' || pstring[0]=='j' || pstring[0]=='k' || pstring[0]=='l' || pstring[0]=='m' || pstring[0]=='n' 
           || pstring[0]=='o' || pstring[0]=='p' || pstring[0]=='q' || pstring[0]=='r' || pstring[0]=='s' || pstring[0]=='t' 
           || pstring[0]=='u' || pstring[0]=='v' || pstring[0]=='w' || pstring[0]=='x' || pstring[0]=='y' || pstring[0]=='z'  
           || pstring[0]=='A' || pstring[0]=='B' || pstring[0]=='C' || pstring[0]=='D' || pstring[0]=='E' || pstring[0]=='F' 
           || pstring[0]=='G' 
           || pstring[0]=='H' || pstring[0]=='I' || pstring[0]=='J' || pstring[0]=='K' || pstring[0]=='L' || pstring[0]=='M' 
           || pstring[0]=='N' || pstring[0]=='O' || pstring[0]=='P' || pstring[0]=='Q' || pstring[0]=='R' || pstring[0]=='S' 
           || pstring[0]=='T' || pstring[0]=='U' || pstring[0]=='V' || pstring[0]=='W' || pstring[0]=='X' || pstring[0]=='Y' 
           || pstring[0]=='Z' || pstring[0]=='_')
           
           {
               imatch=1;
           }
           else {
               opstr="Invalid! First Character is not an alaphabet or an underscore.";
               
           }
        }
        
    if (imatch==1 && pstrlen>1){
        for (int i=1; i<=pstring.length()-1; ++i){
            
                int fcc=int(pstring[i]);
                if (fcc==95){
                    opstr ="Hurray! It's a valid string.";
                }
                else if (fcc>=48 && fcc<=57){
                    opstr="Hurray! It's a valid string.";
                }
                else if (fcc>=65 && fcc<=90){
                    opstr="Hurray! It's a valid string.";
                }
                else if(fcc>=97 && fcc<=122){
                    opstr="Hurray! It's a valid string.";
                }
                else {
                    opstr="Soooory! It doesn't comply but you can always try again.";
                    break;
                }
            }
    }
                
    return opstr;
}

int main(){
    
    string gstring;
    cin>>gstring;
    //int n=gstring.length();
    cout<<iverify(gstring);
    //cout<<int(gstring[1]);
    
    
}