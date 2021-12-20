/*
 * Array.cpp
 *
 *  Created on: 2019年12月1日
 *      Author: Reflyer
 */

#include <iostream>
#include <vector>
#include <limits>

using namespace std;

template <typename T>
class Array {
private:
	T* data_;
	int size_;
public:
	Array(vector<T> v) {
	    size_ = v.size();
	    data_ = static_cast<T*> (new T[size_]);
	    for (int i = 0; i < size_; i++) {
	    	data_[i] = v[i];
	    }
	}
	~Array() {
		delete data_;
	}
	void sort() {
		for (int i = 0; i < size_ - 1; i++) {
			for (int j = 0; j < size_ - 1 - i; j++) {
				if (data_[j] > data_[j + 1]) {
					T temp = data_[j];
					data_[j] = data_[j + 1];
					data_[j + 1] = temp;
				}
			}
		}
	}
	int seek(T key) {
		for (int i = 0; i < size_; i++) {
			if (data_[i] == key)
				return i;
		}
		return -1;
	}
	void display() {
	    int i;
	    for (i = 0; i < size_; i++) {
	        cout << data_[i];
	        if (i != size_ - 1)
	            cout << " ";  // 输出一个空格
	    }
	}
};

int main() {
    vector<int> vi;
    int ti;
    vector<double> vd;
    double td;
    vector<char> vc;
    char tc;

    while (cin.get() != '\n') {
        cin.unget();
        cin >> ti;
        vi.push_back(ti);
    }

    while (cin.get() != '\n') {
        cin.unget();
        cin >> td;
        vd.push_back(td);
    }

    while (cin >> tc) {
        vc.push_back(tc);
    }

    Array<int> ai(vi);
    Array<double> ad(vd);
    Array<char> ac(vc);

    cout << ai.seek(10) << endl;
    cout << ad.seek(10.0) << endl;
    cout << ac.seek('a') << endl;

    ai.sort();
    ad.sort();
    ac.sort();

    ai.display();
    cout << endl;
    ad.display();
    cout << endl;
    ac.display();

    // GCC及VC编译器在调试模式下会暂停，便于查看运行结果
#if ( defined(__DEBUG__) || defined(_DEBUG) )
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
#endif
    return 0;
}
