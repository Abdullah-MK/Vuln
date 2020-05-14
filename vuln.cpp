#include <iostream>
#include <cstring>
using namespace std;

void shell(){
	system("/bin/dash");
}

int main(int argc, char *argv[])
{
    char name[30];
    strcpy(name, argv[1]);
    cout << "Welcome Mr." << name << endl;
    
    return 0;
}
