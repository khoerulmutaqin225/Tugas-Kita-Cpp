#include <iostream>
#include <fstream>
using namespace std;

int main (){
 std::string line_;
 ifstream file_("NilaiSiswa.txt");
 if(file_.is_open())
 {
  while(getline(file_, line_))
  {
   std::cout << line_ << '\n';
  }
  file_.close();
  
 }
 else 
 std::cout << "File is not open" << '\n';
 std::cin.get();
 return 0;
}