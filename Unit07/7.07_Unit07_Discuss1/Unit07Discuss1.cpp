/*
 * Unit07Discuss1.cpp
 *
 *  Created on: 2019年11月8日
 *      Author: Reflyer
 */

#include <iostream>
#include <fstream>

class SyncOStream {
private:
	std::ostream &os1, &os2;
public:
	SyncOStream(std::ostream& os1,std::ostream& os2) : os1{os1}, os2{os2} {}
	template <typename T>
	friend SyncOStream& operator<<(SyncOStream& sos, T t);
};

template <typename T>
SyncOStream& operator<<(SyncOStream& sos, T t) {
	sos.os1 << t;
	sos.os2 << t;
	return sos;
}

int main() {
	std::ofstream output{"scores.txt"};
	SyncOStream sos{std::cout, output};

	double lileiScore{86.7};
	int hanmeimeiScore{91};

	sos << "LiLei" << ' ' << lileiScore << '\n';
	sos << "HanMeimei" << ' ' << hanmeimeiScore << '\n';

	output.close();
	return 0;
}
