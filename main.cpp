#include <filesystem>
#include <iostream>

int main(){
    std::string directory;
    std::cout << "Enter the Folder path you'd like to explore: \n";
    std::cin >> directory;

    std::filesystem::path directoryPath = directory;

    if(std::filesystem::exists(directoryPath) && std::filesystem::is_directory(directoryPath)){

        std::filesystem::path zipPath = directoryPath / "Archives/Zip";
        std::filesystem::create_directories(zipPath);

        std::filesystem::path executablesPath = directoryPath / "Executables";
        std::filesystem::create_directories(executablesPath);
   
        std::filesystem::path musicPath = directoryPath / "Music";
        std::filesystem::create_directories(musicPath);

        std::filesystem::path imagesPath = directoryPath / "Images";
        std::filesystem::create_directories(imagesPath);

        std::filesystem::path videosPath = directoryPath / "Videos";
        std::filesystem::create_directories(videosPath);

        std::filesystem::path documentsPath = directoryPath / "Documents";
        std::filesystem::create_directories(documentsPath);

        for(const auto& entry : std::filesystem::directory_iterator(directoryPath)){
            if(std::filesystem::is_directory(entry)){
                std::cout << "Folder: " << entry.path().filename() << '\n';
            }else{
                if(entry.path().extension() == ".jpg" || entry.path().extension() == ".png" || entry.path().extension() == ".jpeg" || entry.path().extension() == ".gif" || entry.path().extension() == ".bmp" || entry.path().extension() == ".tiff" || entry.path().extension() == ".svg"){
                    std::filesystem::path destination = imagesPath / entry.path().filename();
                    std::filesystem::rename(entry.path(), destination);
                    std::cout << "Moved image file: " << entry.path().filename() << " to Images folder.\n";
                }else if(entry.path().extension() == ".mp3" || entry.path().extension() == ".wav" || entry.path().extension() == ".flac" || entry.path().extension() == ".aac" || entry.path().extension() == ".ogg" || entry.path().extension() == ".wma"){
                    std::filesystem::path destination = musicPath / entry.path().filename();
                    std::filesystem::rename(entry.path(), destination);
                    std::cout << "Moved music file: " << entry.path().filename() << " to Music folder.\n";
                }else if(entry.path().extension() == ".mp4" || entry.path().extension() == ".avi" || entry.path().extension() == ".mkv" || entry.path().extension() == ".mov" || entry.path().extension() == ".wmv" || entry.path().extension() == ".flv"  || entry.path().extension() == ".webm"){
                    std::filesystem::path destination = videosPath / entry.path().filename();
                    std::filesystem::rename(entry.path(), destination);
                    std::cout << "Moved video file: " << entry.path().filename() << " to Videos folder.\n";
                }else if(entry.path().extension() == ".pdf" || entry.path().extension() == ".doc" || entry.path().extension() == ".docx" || entry.path().extension() == ".txt"){
                    std::filesystem::path destination = documentsPath / entry.path().filename();
                    std::filesystem::rename(entry.path(), destination);
                    std::cout << "Moved document file: " << entry.path().filename() << " to Documents folder.\n";
                }else if(entry.path().extension() == ".zip" || entry.path().extension() == ".rar" || entry.path().extension() == ".7z" || entry.path().extension() == ".tar" || entry.path().extension() == ".gz"){
                    std::filesystem::path destination = zipPath / entry.path().filename();
                    std::filesystem::rename(entry.path(), destination);
                    std::cout << "Moved archive file: " << entry.path().filename() << " to Archives/Zip folder.\n";
                }else if(entry.path().extension() == ".exe" || entry.path().extension() == ".msi" || entry.path().extension() == ".bat" || entry.path().extension() == ".sh" || entry.path().extension() == ".bin" || entry.path().extension() == ".app" || entry.path().extension() == ".apk" || entry.path().extension() == ".jar" || entry.path().extension() == ".py" || entry.path().extension() == ".pl" || entry.path().extension() == ".rb" || entry.path().extension() == ".php" || entry.path().extension() == ".js" || entry.path().extension() == ".ts" || entry.path().extension() == ".go" || entry.path().extension() == ".rs" || entry.path().extension() == ".swift" || entry.path().extension() == ".dart" || entry.path().extension() == ".c" || entry.path().extension() == ".cpp" || entry.path().extension() == ".h" || entry.path().extension() == ".hpp" || entry.path().extension() == ".cs" || entry.path().extension() == ".vb" || entry.path().extension() == ".m" || entry.path().extension() == ".mm" || entry.path().extension() == ".r" || entry.path().extension() == ".jl" || entry.path().extension() == ".lua" || entry.path().extension() == ".pl" || entry.path().extension() == ".sql" || entry.path().extension() == ".xml" || entry.path().extension() == ".json" || entry.path().extension() == ".yaml" || entry.path().extension() == ".yml" || entry.path().extension() == ".ini" || entry.path().extension() == ".conf" || entry.path().extension() == ".cfg" || entry.path().extension() == ".toml" || entry.path().extension() == ".bat" || entry.path().extension() == ".cmd" || entry.path().extension() == ".ps1" || entry.path().extension() == ".vbs" || entry.path().extension() == ".wsf" || entry.path().extension() == ".hta" || entry.path().extension() == ".cpl" || entry.path().extension() == ".msc" || entry.path().extension() == ".scr" || entry.path().extension() == ".sys" || entry.path().extension() == ".drv" || entry.path().extension() == ".ocx" || entry.path().extension() == ".dll" || entry.path().extension() == ".tlb" || entry.path().extension() == ".ax" || entry.path().extension() == ".bpl" || entry.path().extension() == ".dcu" || entry.path().extension() == ".lib" || entry.path().extension() == ".a" || entry.path().extension() == ".so" || entry.path().extension() == ".dylib" || entry.path().extension() == ".pyd" || entry.path().extension() == ".pdb" || entry.path().extension() == ".ilk" || entry.path().extension() == ".exp" || entry.path().extension() == ".map" || entry.path().extension() == ".sbr" || entry.path().extension() == ".res" || entry.path().extension() == ".rc" || entry.path().extension() == ".rsc" || entry.path().extension() == ".rso" || entry.path().extension() == ".rse" || entry.path().extension() == ".rsi" || entry.path().extension() == ".rsj" || entry.path().extension() == ".rsk" || entry.path().extension() == ".rsl" || entry.path().extension() == ".rsm" || entry.path().extension() == ".rsn" || entry.path().extension() == ".rso" || entry.path().extension() == ".rsp" || entry.path().extension() == ".rsq" || entry.path().extension() == ".rsr" || entry.path().extension() == ".rss" || entry.path().extension() == ".rst" || entry.path().extension() == ".rsu" || entry.path().extension() == ".rsv" || entry.path().extension() == ".rsw" || entry.path().extension() == ".rsx" || entry.path().extension() == ".rsy" || entry.path().extension() == ".rsz" || entry.path().extension() == ".html" || entry.path().extension() == "lnk" || entry.path().extension() == ".url" || entry.path().extension() == ".desktop" || entry.path().extension() == ".webloc" || entry.path().extension() == ".website" || entry.path().extension() == ".appref-ms" || entry.path().extension() == ".appx" || entry.path().extension() == ".appxbundle" || entry.path().extension() == ".msix" || entry.path().extension() == ".msixbundle" || entry.path().extension() == ".xap" || entry.path().extension() == ".xapk" || entry.path().extension() == ".ipa" || entry.path().extension() == ".apk" || entry.path().extension() == ".aab"){
                    std::filesystem::path destination = executablesPath / entry.path().filename();
                    std::filesystem::rename(entry.path(), destination);
                    std::cout << "Moved executable file: " << entry.path().filename() << " to Executables folder.\n";
                }else {
                    std::cout << "File: " << entry.path().filename() << " has an unrecognized extension and will not be moved.\n";
                }
            }
        }
    }else{
        std::cerr << "Folder path not found";
    }
}