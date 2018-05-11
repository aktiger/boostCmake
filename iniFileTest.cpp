//
// Created by ubuntu on 5/10/18.
//
#include <iostream>
#include <boost/filesystem.hpp>
#include <boost/property_tree/ini_parser.hpp>
using namespace boost;
using namespace std;

//
class CIniFile 
{
  //
  string m_path;
  property_tree::ptree m_data;

public: 
  //
  CIniFile(const string & filename)
  {
    //m_path = exe_directory(filename);
      m_path = "/home/ubuntu/CLionProjects/boostCmake/" + filename;
    property_tree::ini_parser::read_ini(m_path, m_data);
  }

  ~CIniFile()
  {
    Write();
  }

  //
  void Write(const string & path="")
  {
    //string save_path = (path.length() ? exe_directory(path) : m_path);
    string save_path = "/home/ubuntu/CLionProjects/boostCmake/yolo.cfg_new";
    property_tree::ini_parser::write_ini(save_path, m_data);
  }

  //
  template <typename T>
  T Get(const string & key)
  {
    return m_data.get<T>(key);
  }

  //
  template <typename T>
  void Set(const string & key, const T & value){
    m_data.put(key, value);
  }
};

int main() {
    CIniFile ini("tiny-yolo.cfg");
    cout << ini.Get<string>("net.batch") << endl;
    ini.Set("convolutional_0.size", 9999);
    ini.Write();
}


