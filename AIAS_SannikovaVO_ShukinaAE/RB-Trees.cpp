//#include <set>
//#include <iterator>
//#include <iostream>
//#include <chrono>
//#include <random>
//using namespace std;
//
//template <typename t>
//	void ptintelem(const t& t) {
//		cout << t;
//	}
//
//int main() {
//	default_random_engine generator(time(0));
//	uniform_int_distribution <int> distribution(0, 1000);
//	set<int> set;
//	std::set<int>::iterator it;
//	int tmp;
//	for (int i = 0; i < 10; i++) {
//		tmp = distribution(generator);
//		set.insert(tmp);
//	}
//	for (it = set.begin(); it != set.end(); ++it) {
//		std::cout << *it << ' ';
//	}
//	cout << endl << endl << "size of set: " << set.size() << endl;
//	cout << endl;
//	tmp = distribution(generator);
//	cout << "element: " << tmp << endl;
//		auto start_time = std::chrono::steady_clock::now();
//	set.insert(tmp);
//	auto finish_time = std::chrono::steady_clock::now();
//	for (it = set.begin(); it != set.end(); ++it) {
//		std::cout << *it << ' ';
//	}
//	cout << endl;
//	auto result_time = std::chrono::duration_cast<std::chrono::microseconds>(finish_time - start_time);
//	cout << "insert time: " << result_time.count() << endl<<endl;
//		start_time = std::chrono::steady_clock::now();
//	set.erase(tmp);
//	finish_time = std::chrono::steady_clock::now();
//	for (it = set.begin(); it != set.end(); ++it) {
//		std::cout << *it << ' ';
//	}
//	cout << endl;
//	result_time = std::chrono::duration_cast<std::chrono::microseconds>(finish_time - start_time);
//	cout << "delete time: " << result_time.count() << endl<<endl;
//		for (it = set.begin(); it != set.end(); ++it) {
//		std::cout << *it << ' ';
//	}
//	cout << endl;
//	start_time = std::chrono::steady_clock::now();
//	set.find(tmp);
//	finish_time = std::chrono::steady_clock::now();
//	auto result = set.find(tmp);
//	if (result!=set.end()) {
//		cout << "element " << tmp << " found" << endl;
//	}
//	else {
//		cout << "element " << tmp << " not found" << endl;
//	}
//	result_time = std::chrono::duration_cast<std::chrono::microseconds>(finish_time - start_time);
//	cout << "find time: " << result_time.count() << endl;
//	cout << "------------------------------" << endl;
//		set.insert(tmp);
//	for (it = set.begin(); it != set.end(); ++it) {
//		std::cout << *it << ' ';
//	}
//	start_time = std::chrono::steady_clock::now();
//	set.find(tmp);
//	finish_time = std::chrono::steady_clock::now();
//	result = set.find(tmp);
//	cout << endl;
//	if (result != set.end()) {
//		cout << "element " << tmp << " found" << endl;
//	}
//	else {
//		cout << "element " << tmp << " not found" << endl;
//	}
//	result_time = std::chrono::duration_cast<std::chrono::microseconds>(finish_time - start_time);
//	cout << "find time: " << result_time.count() << endl;
//	system("pause");
//	return 0;
//}