//#include <iostream>
//#include <cmath>
//using namespace std;				//Drone Navigation Utilities
//
//inline double distanceBetween(double x1, double y1, double x2, double y2)
//{
//    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
//}
//
//inline double toRadians(double degrees)
//{
//    return degrees * (M_PI / 180.0);
//}
//
//inline double clamp(double value, double minVal, double maxVal)
//{
//    if (value < minVal)
//        return minVal;
//
//    if (value > maxVal)
//        return maxVal;
//
//    return value;
//}
//
//inline bool isInSafeZone(double x, double y, double cx, double cy, double radius)
//{
//    double distance = distanceBetween(x, y, cx, cy);
//
//    return distance <= radius;
//}
//
//int main()
//{
//    double homeX = 0.0;
//    double homeY = 0.0;
//
//    double safeRadius = 50.0;
//
//    double x1 = 30.0, y1 = 40.0;
//    double x2 = 60.0, y2 = 20.0;
//    double x3 = -20.0, y3 = 15.0;
//
//    cout << "Drone Navigation Report" << endl;
//    cout << "-----------------------" << endl;
//
//    double distance1 = distanceBetween(homeX, homeY, x1, y1);
//    cout << "Waypoint 1 Distance : " << distance1 << endl;
//    cout << "Waypoint 1 Safe Zone : "
//         << (isInSafeZone(x1, y1, homeX, homeY, safeRadius) ? "Yes" : "No")
//         << endl;
//
//    cout << endl;
//
//    double distance2 = distanceBetween(homeX, homeY, x2, y2);
//    cout << "Waypoint 2 Distance : " << distance2 << endl;
//    cout << "Waypoint 2 Safe Zone : "
//         << (isInSafeZone(x2, y2, homeX, homeY, safeRadius) ? "Yes" : "No")
//         << endl;
//
//    cout << endl;
//
//    double distance3 = distanceBetween(homeX, homeY, x3, y3);
//    cout << "Waypoint 3 Distance : " << distance3 << endl;
//    cout << "Waypoint 3 Safe Zone : "
//         << (isInSafeZone(x3, y3, homeX, homeY, safeRadius) ? "Yes" : "No")
//         << endl;
//
//    cout << endl;
//
//    cout << "90 degrees in radians : " << toRadians(90.0) << endl;
//
//    cout << "Clamp 75 between 0 and 50 : "
//         << clamp(75.0, 0.0, 50.0) << endl;
//
//    return 0;
//}
