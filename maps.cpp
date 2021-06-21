#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

int main(){
	unordered_map<string, int> mymap;
	//insert 
	pair<string, int> p("abc", 1);
	mymap.insert(p); // we can insert like this in the fact
	mymap["def"] = 2; //we can aslo insert like this

	//find or access the items

	cout<< mymap["abc"]<<endl;
	cout<<mymap["def"]<<endl;
	cout<<mymap.at("abc")<<endl;

	//cout<<mymap.at("gef")<<endl;
	//for the size

	cout<<"size: "<<mymap.size()<<endl;

	cout<<mymap["ghi"]<<endl;

	//check presence
	if(mymap.count("ghi") > 0){
		cout<<"ghi is present "<<endl;
	}

	//erase
	mymap.erase("ghi");
	cout<< "size:" << mymap.size()<<endl;
	if(mymap.count("ghi") > 0){
		cout<<"ghi is present" << endl;
	}
}