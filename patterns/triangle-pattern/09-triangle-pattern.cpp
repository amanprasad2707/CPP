/*
 * * * * * *
   * * * * *
     * * * *
       * * *
         * *
           *
*/
#include <iostream>
using namespace std;
int main()
{
  int num = 6;
  for (int i = 0; i < num; i++)
  {
    for (int j = 0; j < num; j++)
    {
      if (i > j){
        cout << "  ";
      }
      else{
        cout << " *";
      }
    }
    cout << endl;
  }
}