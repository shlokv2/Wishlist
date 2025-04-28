#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
ofstream out; 
out.open("sample60.txt");
out<<"This is me\n"; // write operation(ofstream)
out<<"This is also me\n";
out<<"This is me also\n";
out<<"This is me alsi\n";
out.close();

cout<<endl;

ifstream in;
string st, st2;
in.open("sample60.txt"); // read operation (ifstream) 
// in>>st>>st2;
for(int i=0; i<=4; i++){
     cout<<st<<st2<<endl; // printing what has been read by the compiler
    getline(in, st);
}
//  getline(in, st);
//  getline(in, st);
//  getline(in, st);
//  getline(in, st);
// cout<<st<<st2<<endl;
in.close();

cout<<"\nusing eof() now inside while loop\n";
// using eof
ifstream IN;
string stf;
IN.open("sample60b.txt");
while(IN.eof()==0){
getline(IN,stf);
cout<<stf<<endl;
}
IN.close();
/*
contents of sample60b.txt are as follows:
This is coming from a file
a
b
c
d
*/
return 0;
}