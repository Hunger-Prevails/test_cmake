# include <iostream>
# include <fstream>
# include <opencv2/core.hpp>
# include <opencv2/imgcodecs.hpp>

# include "person.h"
# include "json.h"

using namespace std;

int main() {

	Person person_a("Alice");
	Person person_b("Bob");

	person_a.greet();
	person_b.greet();

	Json::Value root;

	root["val"] = 25;

	std::ofstream fout("people.json", std::ofstream::binary);

	fout << root;

	fout.close();

	cv::Mat image = cv::imread("/c/Users/ellen/Pictures/Saved Pictures/minecraft.jpg")

	return 0;
}