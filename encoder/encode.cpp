#include "huffman.h"
using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cout << "failed to detect files";
		exit(1);
	}
    
    huffman f(argv[1], argv[2]);
    f.compress();
    ifstream fileOrg(argv[1], ios::binary);
    fileOrg.seekg(0, ios::end);
    float sizeOrg = fileOrg.tellg();
    cout << "Size of the file before compression is" << " " << sizeOrg/1024 << " kilo bytes"<<endl;
    ifstream fileComp(argv[2], ios::binary);
    fileComp.seekg(0, ios::end);
    float sizeComp = fileComp.tellg();
    cout << "Size of the compressed file is" << " " << sizeComp/1024 << " kilo bytes" << endl;
    cout << (sizeOrg - sizeComp)/(1024) << " Kilo bytes saved" << endl;
    cout << "press 1 to view Compressed file\n";
    char x;
    cin >> x;
    if (x == '1')
        system(argv[2]);
    return 0;
}