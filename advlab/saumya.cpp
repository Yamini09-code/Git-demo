#include <bits/stdc++.h>
#include <vector>


std::vector<int> left_rotation(std::vector<int>& arr, int rotations){
    std::vector<int> rotated_array;
    for (std::size_t i = rotations; i < arr.size(); ++i){
        rotated_array.push_back(arr[i]);
    }
    
    for (std::size_t i = 0; i < rotations; ++i){
        rotated_array.push_back(arr[i]);

    }


    return rotated_array;

}

int main(){

    int numofelements, numofleftrotations;
    std::cin >> numofelements;
    std::cin >> numofleftrotations;
    std::vector<int> input_array(numofelements);
    for (int i = 0; i < numofelements; ++i){
        std::cin >> input_array[i];
    }

    std::vector<int> result_array = left_rotation(input_array, numofleftrotations);

    for (int i = 0; i < numofelements; ++i){
        std::cout << result_array[i] <<" ";
    }

    std::cout << "\n";

}