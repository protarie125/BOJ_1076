#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string a, b, c;
	cin >> a >> b >> c;

	ostringstream oss{};

	if ("brown" == a) {
		oss << 1;
	}
	else if ("red" == a) {
		oss << 2;
	}
	else if ("orange" == a) {
		oss << 3;
	}
	else if ("yellow" == a) {
		oss << 4;
	}
	else if ("green" == a) {
		oss << 5;
	}
	else if ("blue" == a) {
		oss << 6;
	}
	else if ("violet" == a) {
		oss << 7;
	}
	else if ("grey" == a) {
		oss << 8;
	}
	else if ("white" == a) {
		oss << 9;
	}

	if ("black" == b) {
		oss << 0;
	}
	else if ("brown" == b) {
		oss << 1;
	}
	else if ("red" == b) {
		oss << 2;
	}
	else if ("orange" == b) {
		oss << 3;
	}
	else if ("yellow" == b) {
		oss << 4;
	}
	else if ("green" == b) {
		oss << 5;
	}
	else if ("blue" == b) {
		oss << 6;
	}
	else if ("violet" == b) {
		oss << 7;
	}
	else if ("grey" == b) {
		oss << 8;
	}
	else if ("white" == b) {
		oss << 9;
	}

	if ("black" == a && "black" == b) {
		cout << 0;
		return 0;
	}

	if ("brown" == c) {
		oss << "0";
	}
	else if ("red" == c) {
		oss << "00";
	}
	else if ("orange" == c) {
		oss << "000";
	}
	else if ("yellow" == c) {
		oss << "0000";
	}
	else if ("green" == c) {
		oss << "00000";
	}
	else if ("blue" == c) {
		oss << "000000";
	}
	else if ("violet" == c) {
		oss << "0000000";
	}
	else if ("grey" == c) {
		oss << "00000000";
	}
	else if ("white" == c) {
		oss << "000000000";
	}

	cout << oss.str();

	return 0;
}