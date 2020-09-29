/*
HumanoidsTitleHelper.cpp
Joel Goodman
07/26/2020

@brief
Groupees names the files in the Humanoids bundle the ISBN, not the actual title. This utility
renames the files for you so you don't have to do it by hand if you download all of them in one
shot.
*/

#include <iostream>
#include <string>
#include <filesystem>
#include <sstream>

#include "HumanoidsTitles.hpp"


using std::string;
namespace fs = std::filesystem;


int main()
{
  fs::path path = fs::current_path();
  std::cout << "Groupees Humanoids Bundle Naming Helper STARTING\n";

  unsigned int count = 0;

  for(const auto& file : std::filesystem::directory_iterator(path))
  {
    string f = file.path().filename().string();
    const FileExtention e = file.path().extension().string();

    if(f.front() == '9')
    {
      std::stringstream ss;
      if(f.substr(f.size()-2, 2) == "_r")
        ss = std::stringstream(f.substr(0, f.size() - 2));
      else
        ss = std::stringstream(f);
      
      ISBN i;
      ss >> i;
      const Title fixedFilename = HumanoidsTitles::getTitle(i) + e;
      fs::rename(path/f, path/fixedFilename);
      ++count;
    }
  }
  
  std::cout << "Renamed " << count << " titles.\n";
  std::cout << "Groupees Humanoids Bundle Naming Helper DONE\n";
}

