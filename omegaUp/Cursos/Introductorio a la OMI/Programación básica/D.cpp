// Problem: https://omegaup.com/course/Curso-OMI/assignment/COMI-programacion#problems/COMI-Canchas
#include<iostream>

int main(){
    int x1, y1, x2, y2;
    std::cin>>x1>>y1>>x2>>y2;
    int a1, b1, a2, b2;
    std::cin>>a1>>b1>>a2>>b2;

    int rec1_xmin = std::min(x1, x2);
    int rec1_xmax = std::max(x1, x2);
    int rec1_ymin = std::min(y1, y2);
    int rec1_ymax = std::max(y1, y2);

    int rec2_xmin = std::min(a1, a2);
    int rec2_xmax = std::max(a1, a2);
    int rec2_ymin = std::min(b1, b2);
    int rec2_ymax = std::max(b1, b2);

    int area1 = (rec1_xmax - rec1_xmin) * (rec1_ymax - rec1_ymin);
    int area2 = (rec2_xmax - rec2_xmin) * (rec2_ymax - rec2_ymin);

    int xoverlap = std::max(0, ((std::min(rec1_xmax, rec2_xmax)) - (std::max(rec1_xmin, rec2_xmin))));
    int yoverlap = std::max(0, ((std::min(rec1_ymax, rec2_ymax) - std::max(rec1_ymin, rec2_ymin))));

    int intersection = xoverlap * yoverlap;

    std::cout<<area1+area2-intersection<<"\n";
    
    return 0;
}
