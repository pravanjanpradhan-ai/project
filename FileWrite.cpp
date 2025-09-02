#include <iostream>
#include "FileWrite.h"



FileWrite::FileWrite()
{
}
FileWrite::~FileWrite(){
}

void FileWrite::write(std::vector<Point> p)
{
    std::ofstream ofs1 ("coordinates.dat", std::ofstream::out);
    int pSize=p.size();
        
        for (int i=0;i<pSize;i++){
            ofs1<<p[i].x<<" "<<p[i].y<<std::endl;
            
        }


    ofs1.close();
    
}