#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void Run(string prog_name) {
	string command = "./" + prog_name;
	system(command.c_str());
}

void Compile(string file_name, string out_file_name) {
	string command = "g++ " + file_name + " -o " + out_file_name;
	system(command.c_str());
}

// int main(int argc, char* argv[]) {
//     cout << "Number of arguments: " << argc << endl;
//     cout << "Argument vector:" << endl;
//     for (int i = 0; i < argc; ++i) {
//         cout << "argv[" << i << "]: " << argv[i] << endl;
//     }
//     return 0;
// }


// int main(int argc, char *argv[]) {
// 	if (argc > 4 || argc == 0) {
// 		cout << "Bad input\n";
// 		return 0;
// 	} else if (argc == 2 && argv[0:2] != "-r"){
// 		Compile(argv[1], argv[2]);
// 	} else {
// 		Compile(argv[1], argv[2]);
// 		Run(argv[2]);
// 	}
// }

int main(int argc, char* argv[]) {
    if (argc == 4 && strcmp(argv[3], "-r") == 0) {
        Compile(argv[1], argv[2]);
        cout << "Compiling success" << endl << "Running the program..." << endl << endl;
        Run(argv[2]);
        return 0;
    } else if (argc == 3){
    	Compile(argv[1], argv[2]);
    	cout << "Compiling success" << endl;
    	return 0;
    }

    cout << "Failed" << endl;
    return 0;
}