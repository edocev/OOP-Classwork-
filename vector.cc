#include <iostream> 
#include <vector> 
using namespace std; 

void print_vector(vector<int>& v){ 
	for(vector<int>::iterator it=v.begin(); it!=v.end(); ++it){ 
		cout << *it << ' '; 
	} 
	cout<< endl;
}

int main(){

	int a[] = {1,2,3,4,5,6,7,8,9};
	vector<int> v1(a, a+10);
	print_vector(v1);
	
	v1.push_back(10);
	cout << "size = " << v1.size() << endl;
	print_vector;
	cout << v1.front() << " " << v1.back() << endl;

	v1.pop_back();
	print_vector(v1);
	for(int i=0; i<v1.size(); ++i){
		cout<< "v[" << i << "]" << v1[i] << endl;
	}

	print_vector;

	//v1.push_front(-1); //ne baca.

	v1.insert(v1.begin(), -1);
	v1.insert(v1.end(), 11);



	v1.insert(v1.begin(), -1);
	v1.insert(v1.end(), 11);

	v1.insert(v1.begin() +5, 5);
	print_vector(v1);

	cout << v1[1024] << endl;
	cout << v1.at(1024) << endl;



return 0;
}










