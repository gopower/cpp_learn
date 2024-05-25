#include <iostream>
#include <fstream>
#include <yaml-cpp/yaml.h>

int main() {
    YAML::Node config = YAML::LoadFile("config.yaml");

    if (config["title"]) {
        std::cout << "标题: " << config["title"].as<std::string>() << std::endl;
    }

    return 0;
}
