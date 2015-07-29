#include <iostream>
#include <fstream>
#include <sstream>
#include <set>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char* argv[]) {
	ifstream stream(argv[1]);
	string line, list, num;
	while(getline(stream,line)) {
		stringstream s(line);
		set <int> list1, list2, intersect;
		
		getline(s,list,';');
		stringstream s2(list);

		while(getline(s2,num,',')) {
			list1.insert(stoi(num));
		}

		getline(s,list,';');
		stringstream s3(list);
		while(getline(s3,num,',')) {
			list2.insert(stoi(num));
		}
		set_intersection(list1.begin(), list1.end(), list2.begin(), list2.end(), insert_iterator<set<int>> (intersect, intersect.begin()));
		if (intersect.empty())
			cout << endl;
		else {	
			set<int>::iterator iter;
			for(iter=intersect.begin(); iter!=intersect.end(); ++iter) {
				cout << *iter;
				if(distance(iter,intersect.end())==1)
					 cout << endl;
				else
                			cout << ",";
			}

		}
	}
	
	return 0;
}
