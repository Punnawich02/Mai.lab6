#include <iostream>
#include <cmath>

using namespace std;


double deg2rad(double degree){
    double radiun = (M_PI/180)*degree ;
    return radiun ;
}

double rad2deg(double radiun){
    double degree = (180/M_PI)*radiun ;
    return degree ;
}

double findXComponent(double length_A ,double length_B ,double radiun_A ,double radiun_B){

    double xComponent = (cos(radiun_A)*length_A) + (cos(radiun_B)*length_B) ;
    return xComponent ;
}

double findYComponent(double length_A ,double length_B ,double radiun_A ,double radiun_B){
    
    double yComponent = (sin(radiun_A)*length_A) + (sin(radiun_B)*length_B) ;
    return yComponent ;
}

double pythagoras(double xCompo ,double yCompo){

    double result_length = sqrt( pow(xCompo ,2) + pow(yCompo ,2) );
    return result_length ;
}

void showResult(double result_length ,double result_degree){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" ;
    cout << "\nLength of the resultant vector = " << result_length ;
    cout << "\nDirection of the resultant vector (deg) = " << result_degree ;
    cout << "\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" ;
}


int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);     
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
