#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

static std::string readStrFromFile(const char* fname) {
    std::ifstream fin { fname };
    if(!fin) {
        std::cerr << "Could not open file " << fname << '\n';
        std::exit(74);
    }
    
    std::stringstream buf;
    buf << fin.rdbuf();
    return buf.str();
}

static void runFile(const char* fname) {
    std::string fileStr { readStrFromFile(fname) };
}

static void runREPL() {
    std::cout << "The Pulsar Programming Language (v0.0.1)\n";
    std::string line;

    while(1) {
        std::getline(std::cin, line);
    }
}

int main(int argc, char* argv[]){ 
    if(argc == 1) {
        runREPL();
    } else if(argc == 2) {
        runFile(argv[1]);
    } else {
        std::cerr << "Usage: pulsar [file_path]\n";
        std::exit(64);
    }
}
