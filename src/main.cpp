#include <iostream>
#include <cstring>

using namespace std;

void help(){
    string help = 
    " \
    USAGE \
    $ mirage install pacakge \n \
    OPTION \
    install                 To install a package \
    uninstall               To uninstall a package \
    help                    Show this menu \n \
    FLAGS \
    -i, --info              More info about the package \
    ";

    cout << help;
    
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
