#include <iostream>
#include <cstring>

using namespace std;

void help(){
    cout << "";
}

void removeBinary(char **bin, int len){
    for(int i=0;i<len;i++)
        cout<<bin[i]<<endl; /* do stuff to delete binary*/
}

void downloadBinary(char **bin, int len){
    for(int i=0;i<len;i++)
        cout<<bin[i]<<endl; /* do stuff to install binary*/
}

int main(int argc, char **argv){
    if(argc){
        if(strcmp(argv[1], "install")){
            cout<<2;
            downloadBinary(&argv[2], argc-2);
        }
        else if(strcmp(argv[1], "uninstall")){
            removeBinary(&argv[2], argc-2);
        }
        else{
            help();
        }
    }
    else{
        help();
    }
    return 0;
}
