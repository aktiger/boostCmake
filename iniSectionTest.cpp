//
// Created by ubuntu on 5/11/18.
//

#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/ini_parser.hpp>
#include <fstream>
#include <iostream>
using boost::property_tree::ptree;

int main() {
    std::fstream ifs("tiny-yolo.cfg");
    ptree pt;

    read_ini(ifs, pt);
    if(boost::optional<ptree &> oops = pt.get_child_optional("net")) {
        std::cout << "Three is a section oops\n" ;
    } else {

        std::cout << "there is no section oops";
    }

    ptree & sub1 = pt.get_child("net");

    return 0;
}
