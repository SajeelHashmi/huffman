#include <iostream>
#include "huffman.h"
using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cout << "Failed to detect Files";
        exit(1);
    }

    huffman f(argv[1], argv[2]);
    f.decompress();
    cout << "Decompressed successfully" << endl;
    cout << "press 1 to view Decompressed file\n";
    char x;
    cin >> x;
    if (x == '1')
        system(argv[2]);
    return 0;
}