#include <iostream>
using namespace std;
class Stocks {
     
  public:
      int PE;
    Stocks ();
};
Stocks::Stocks () {
 
}

int main() 
{
    Stocks s1;
    Stocks s2;
    s1.PE=1;
    s2.PE=4;
    if(s1.PE<s2.PE)
       cout << "S1 is best";
    else
        cout << "S2 is best";
    return 0;
}
