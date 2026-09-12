#include <filesystem>
#include <iostream>

int main(){
    std::string directory;
    std::cout << "Enter the Folder path you'd like to explore: \n";
    std::cin >> directory;

    std::filesystem::path directoryPath = directory;

    if(std::filesystem::exists(directoryPath) && std::filesystem::is_directory(directoryPath)){
        for(const auto& entry : std::filesystem::directory_iterator(directoryPath)){
            std::cout << "File: " << entry.path() << '\n';
        }
    }else{
        std::cerr << "Folder path not found";
    }

}