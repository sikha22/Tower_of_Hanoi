#include<iostream>
#include<conio.h>
using namespace std;
void TOH(int n,char BEG, char AUX,char END){
    if(n==1){
        cout<<"\n"<<BEG<<"->"<<END;
        return ;
    }
    TOH(n-1,BEG,END,AUX);
    cout<<"\n"<<BEG<<"->"<<END;
    TOH(n-1,AUX,BEG,END);
}
int main(){
    TOH(3,'A','B','C');
    getch();
    return 0;
    }