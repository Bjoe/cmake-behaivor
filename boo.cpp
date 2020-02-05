#include <botan/version.h>
#include <iostream>

int main () {
   std::cout << "Version: " << Botan::version_string() << '\n';
   return 0;
}
