#include <iostream>
#include <cstdio>
using namespace std;

int main(){
  unsigned long long n, m, a;
  unsigned long long num_flags, num_flags_x, num_flags_y;
  unsigned long long squareArea, flagArea;

  cin >> n;
  cin >> m;
  cin >> a;

  squareArea = n * m;
  flagArea = a * a;

  //special case is that the square area is less than flag area
  if(squareArea < flagArea){
    printf("1\n");
    return 0;
  }

  //calculate how much area is used by flags evenly
  num_flags = 0;
  num_flags_x = n / a;
  num_flags_y = m / a;
  num_flags = num_flags_x * num_flags_y;
  
  //if there is leftovers, need enough to make a border around for them
  if(n % a != 0 && m % a != 0){
    num_flags += m / a + 1;
    num_flags += n / a;
  }
  else{
    if(n % a != 0){
    num_flags += m / a;
    }

    if(m % a != 0){
      num_flags += n / a;
    }
  }

  printf("%lld\n", num_flags);
}