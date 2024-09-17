#include <iostream>
#include <vector>


void printMatrix(const std::vector<std::vector<int> >& matrix, int rowsToPrint, int colsToPrint) {
    std::cout << "Scattered Matrix (partial output):" << std::endl;
    for (int i = 0; i < rowsToPrint; ++i) {
        for (int j = 0; j < colsToPrint; ++j) 
        { 
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}


int main() {
    using namespace std;
    const int rows = 128;
    const int cols = 128;
    vector<vector<int> > matrix(rows, vector<int>(cols, 0));
    const int num_samples = 1000;
    vector<int> x_indices(num_samples);
    vector<int> y_indices(num_samples);
    vector<float> data_samples(num_samples);

    for (int i = 0; i < num_samples; ++i) {
        x_indices[i] = rand() % rows;
        y_indices[i] = rand() % cols; 
        data_samples[i] = rand() % 100 + 1; 
    }

    for (int i = 0; i < num_samples; ++i) {
        int x = x_indices[i];
        int y = y_indices[i];
        matrix[x][y] += data_samples[i];
    }
    printMatrix(matrix,10,10);
    
}

