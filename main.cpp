#include "libGraph.h"
#include "iostream"
#include <string>
using namespace std;

int main(){
	string src_path = "G:\\img\\1.jpg";
	string tar_path = "G:\\img\\1gray.jpg";
	Gray(src_path, tar_path, 2);
	system("pause");
	return 0;
}