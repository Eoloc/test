#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
   ifstream fluxReadme("Readme.txt".c_str());
   string textReadme;
   
   while(getline(fluxReadme, textReadme))
   {
      cout << textReadme << endl;
   }
   
   return 0;
}
