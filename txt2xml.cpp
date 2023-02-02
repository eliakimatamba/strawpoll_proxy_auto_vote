#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char* argv[]){

    ofstream outxml("proxy.xml",ios::app|ios::in);

    ifstream intxt(argv[1]);
    string line;
    while(getline(intxt,line))
        outxml<<"\t<para>"<<line<<"</para>"<<endl;
    
    return 0;

}