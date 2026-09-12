#include <iostrea>
#include <filesystem>
#include <string>

namespace fs = std::filesystem;

struct obj {
    std::string name;
    int id;

    obj(const std::string& name, int id) {
        this->id = id;
        this->name = name;
        std::cout << "Obj name is " << name << " and it id is " << id << std::endl;
    }
};

int add_folder() {
    fs::path cur = fs::current_path();
    fs::path newDir = cur / "HEHEHEHHEHEHEHE";
    try {
        fs::create_directories(newDir);
    }
    catch(...) {}
    
    return 0;
}


int main() {
    obj MyOBJ();
    return add_folder();
}