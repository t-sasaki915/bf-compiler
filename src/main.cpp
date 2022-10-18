#include <filesystem>
#include <fstream>
#include <iostream>
#include <sstream>

int main(int argc, char* argv[]) {
	using namespace std;

	if (argc < 2) {
 		cout << "no input." << endl;

    		return 1;
  	}

  	ifstream source_file;
  	source_file.open(argv[1], ios::in);
  	if (source_file.fail()) {
    		cout << "failed to open input file." << endl;
		
		return 1;
  	}

	stringstream source_stream;
	source_stream << source_file.rdbuf();
	source_file.close();

	string source = source_stream.str();

	cout << source << endl;
  
 	return 0;
}
