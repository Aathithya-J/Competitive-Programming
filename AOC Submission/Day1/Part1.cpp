#include <fstream>
#include <iostream>
#include <string>
using namespace std;
ifstream data("input.txt");
string mytext;
long int add, sum, bigt;
int main() {
  while (getline(data, mytext)) {
    if (mytext==""){
      if (sum>bigt){
        bigt=sum;
        sum=0;
      }
    }else{
      add=stoi(mytext);
      sum+=add
;    }
  }
  cout<<bigt;
}

