#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main(int argc, char* argv[]) {
	ifstream stream(argv[1]);
	string line,word;

	while(getline(stream,line)) {
		if(line.length() > 55) {
			stringstream s(line);
			int num_chars=0;
			string trimmed="";
			for(s; s>>word;){
				num_chars+=word.size();
				if(num_chars>=40){
					if(word.size()>=40&&num_chars-word.size()==0)
						trimmed=word.substr(0,40);
					else
						break;
				}
				else {
					trimmed +=word;
					trimmed +=" ";
					num_chars++;
				}
			}
			size_t found=trimmed.find_last_not_of(' ');
			if(found != string::npos)
				trimmed=trimmed.substr(0,found+1);
			trimmed += "... <Read More>";
			cout << trimmed << endl;
		}
		else {
			cout << line << endl;
		}
	}
	return 0;
}
