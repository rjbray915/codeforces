#include <string>
#include <vector>
#include <iostream>
#include <cstdio>
using namespace std;

int main(){
  int i, num;
  vector<string> words;

  //input num words, then take all the words.
  //then replace them at the same time
  cin >> num;
  words.resize(num);
  for(i = 0; i < num; i++){
    cin >> words.at(i);
  }

  //now go through and print
  for(i = 0; i < num; i++){
    if(words.at(i).size() > 10){
      printf("%c%d%c\n", words.at(i).at(0), words.at(i).size()-2, words.at(i).at( words.at(i).size()-1 ) );
    }
    else{
      printf("%s\n", words.at(i).c_str() );
    }
  }
}
