#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

//14.3 km/s
//1,235,520 km/day
//8.90 mi/s
//768,960 mi/day
//37.33 AU away on day 0
//radio waves travel at 299,792,458 m/s

double days_since_launch; 
float distance_in_km, initial_distance_km;

int main() {
    cout << std::fixed << std::setprecision(2);

    //cin >> days_since_launch
    days_since_launch = 3000;
    distance_in_km = (days_since_launch * 1235520);
    initial_distance_km = (37.33 * 149598000);

    cout << (days_since_launch * 1235520) + (37.33 * 149598000) << endl;
    cout << (days_since_launch * 768960) + (37.33 * 92955800) << endl;
    cout << ((((distance_in_km*1000) + ((37.33 * 149598000) * 1000))/ 299792458) * 2) / 3600 << endl;
    
    // Your code here


  return 0;
}
