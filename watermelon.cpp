#include <cstdio>
#include <iostream>
using namespace std;

int main(){
  int w;

  cin >> w;

  if(w % 2 == 0 && w != 2){
    printf("YES\n");
  }
  else{
    printf("NO\n");
  }
}
