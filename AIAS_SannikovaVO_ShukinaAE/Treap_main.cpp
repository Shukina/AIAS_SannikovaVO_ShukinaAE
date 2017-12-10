#include <iterator>
#include <iostream>
#include <chrono>
#include <random>
#include "treap.h"

using namespace std;




int main() {
	default_random_engine generator(time(0));
	uniform_int_distribution <int> distribution(0, 1000);
	Treap TreapTr;
	int size;
	cout << "Size : ";
	cin >> size;
	int tmp;
	for (int i = 0; i < 10; i++) {
		tmp = distribution(generator);
		TreapTr.insert(tmp);
	}
	TreapTr.Show(TreapTr.GetRoot(),0);
	
	/*cout << endl << endl << "size of set: " << set.size() << endl;
	cout << endl;*/
	tmp = distribution(generator);
	cout <<endl<< "New element: " << tmp << endl;
	auto start_time = std::chrono::steady_clock::now();
	TreapTr.insert(tmp);
	auto finish_time = std::chrono::steady_clock::now();
	TreapTr.Show(TreapTr.GetRoot(), 0);
	cout << endl;
	auto result_time = std::chrono::duration_cast<std::chrono::microseconds>(finish_time - start_time);
	cout << "insert time: " << result_time.count() << endl << endl;
	start_time = std::chrono::steady_clock::now();
	TreapTr.remove(tmp);
	finish_time = std::chrono::steady_clock::now();
	TreapTr.Show(TreapTr.GetRoot(), 0);
	cout << endl;
	result_time = std::chrono::duration_cast<std::chrono::microseconds>(finish_time - start_time);
	cout << "delete time: " << result_time.count() << endl << endl;
	TreapTr.Show(TreapTr.GetRoot(), 0);
	cout << endl;
	start_time = std::chrono::steady_clock::now();
	TreapTr.Search(TreapTr.GetRoot(), tmp);
	finish_time = std::chrono::steady_clock::now();
	auto result = TreapTr.Search(TreapTr.GetRoot(), tmp);
	if (result != NULL) {
		cout << "element " << tmp << " found" << endl;
	}
	else {
		cout << "element " << tmp << " not found" << endl;
	}
	result_time = std::chrono::duration_cast<std::chrono::microseconds>(finish_time - start_time);
	cout << "find time: " << result_time.count() << endl;
	cout << "------------------------------" << endl;
	TreapTr.insert(tmp);
	TreapTr.Show(TreapTr.GetRoot(), 0);
	start_time = std::chrono::steady_clock::now();
	TreapTr.Search(TreapTr.GetRoot(), tmp);
	finish_time = std::chrono::steady_clock::now();
	result = (TreapTr.Search(TreapTr.GetRoot(), tmp));
	cout << endl;
	if (result != NULL) {
		cout << "element " << tmp << " found" << endl;
	}
	else {
		cout << "element " << tmp << " not found" << endl;
	}
	result_time = std::chrono::duration_cast<std::chrono::microseconds>(finish_time - start_time);
	cout << "find time: " << result_time.count() << endl;

	system("pause");
	return 0;
}