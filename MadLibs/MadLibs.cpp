#include <iostream>
#include "MadLib.h"
using namespace std;

int main() {
    Lib madLib = Lib();
    madLib.Read();
    madLib.Write();
    return 0;
}