#include "libGraph.h"
#include "iostream"
#include <string>
using namespace std;

int main(){
	string src_path = "E:\\img\\1.JPG";
	string tar_path = "E:\\img\\1gray.JPG";
	Gray(src_path, tar_path, 5);
	system("pause");
	return 0;
}