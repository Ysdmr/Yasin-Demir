#include <iostream>
#include <vector>

template <typename T>//template kullanarak fonk. tan�mlad���m k�s�m
std::vector<std::vector<T>>create_matrix(T x, int rows, int cols) {
	std::vector<std::vector<T>>v1;
	for (int i = 0; i < rows; i++) {
		std::vector<T>v2;
		for (int j = 0; j < cols; j++) {
			v2.push_back(x);
		}
		v1.push_back(v2);
	}
	return v1;
}

int main() {// Sonucumu test etmek i�in matrisi yazd�rabiliece�im ufak bir fonksiyon yazd�m rastgele say�larla denedim.
	for (int i = 0; i < create_matrix(2.3, 7, 4).size(); i++) {
		for (int j = 0; j < create_matrix(2, 7, 4)[i].size(); j++) {
			std::cout << create_matrix(2.3, 7, 4)[i][j]<<" ";
		}
		std::cout << std::endl;
	} 
	return 0;
}
