//#include <iterator>
//#include <iostream>
//#include <chrono>
//#include <random>
//#include "AVLTree.h"
//
//using namespace std;
//int main() {
//	default_random_engine generator(time(0));
//	uniform_int_distribution <int> distribution(0, 1000);
//	AVL AVLTr;
//
//	int tmp;
//	for (int i = 0; i < 10; i++) {
//		tmp = distribution(generator);
//		AVLTr.Insert(AVLTr.GetRoot(), tmp);
//	}
//	AVLTr.Show(AVLTr.GetRoot());
//
//	/*cout << endl << endl << "size of set: " << set.size() << endl;
//	cout << endl;*/
//	tmp = distribution(generator);
//	cout <<endl<< "New element: " << tmp << endl;
//	auto start_time = std::chrono::steady_clock::now();
//	AVLTr.Insert(AVLTr.GetRoot(),tmp);
//	auto finish_time = std::chrono::steady_clock::now();
//	AVLTr.Show(AVLTr.GetRoot());
//	cout << endl;
//	auto result_time = std::chrono::duration_cast<std::chrono::microseconds>(finish_time - start_time);
//	cout << "insert time: " << result_time.count() << endl << endl;
//	start_time = std::chrono::steady_clock::now();
//	AVLTr.remove(AVLTr.GetRoot(), tmp);
//	finish_time = std::chrono::steady_clock::now();
//	AVLTr.Show(AVLTr.GetRoot());
//	cout << endl;
//	result_time = std::chrono::duration_cast<std::chrono::microseconds>(finish_time - start_time);
//	cout << "delete time: " << result_time.count() << endl << endl;
//	AVLTr.Show(AVLTr.GetRoot());
//	cout << endl;
//	start_time = std::chrono::steady_clock::now();
//	AVLTr.Search(AVLTr.GetRoot(), tmp);
//	finish_time = std::chrono::steady_clock::now();
//	auto result = AVLTr.Search(AVLTr.GetRoot(), tmp);
//	if (result != NULL) {
//		cout << "element " << tmp << " found" << endl;
//	}
//	else {
//		cout << "element " << tmp << " not found" << endl;
//	}
//	result_time = std::chrono::duration_cast<std::chrono::microseconds>(finish_time - start_time);
//	cout << "find time: " << result_time.count() << endl;
//	cout << "------------------------------" << endl;
//	AVLTr.Insert(AVLTr.GetRoot(), tmp);
//	AVLTr.Show(AVLTr.GetRoot());
//	start_time = std::chrono::steady_clock::now();
//	AVLTr.Search(AVLTr.GetRoot(), tmp);
//	finish_time = std::chrono::steady_clock::now();
//	result = AVLTr.Search(AVLTr.GetRoot(), tmp);
//	cout << endl;
//	if (result != NULL) {
//		cout << "element " << tmp << " found" << endl;
//	}
//	else {
//		cout << "element " << tmp << " not found" << endl;
//	}
//	result_time = std::chrono::duration_cast<std::chrono::microseconds>(finish_time - start_time);
//	cout << "find time: " << result_time.count() << endl;
//
//	system("pause");
//	return 0;
//}