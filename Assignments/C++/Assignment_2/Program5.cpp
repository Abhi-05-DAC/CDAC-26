//#include <iostream>
//using namespace std;
//
//namespace Physics
//{
//    double clamp(double val, double min, double max)
//    {
//        if (val < min)
//            return min;
//
//        if (val > max)
//            return max;
//
//        return val;
//    }
//
//    double lerp(double a, double b, double t)
//    {
//        return a + (b - a) * t;
//    }
//}
//
//namespace GameMath
//{
//    int clamp(int val, int min, int max)
//    {
//        if (val < min)
//            return min;
//
//        if (val > max)
//            return max;
//
//        return val;
//    }
//
//    double lerp(double a, double b, double t)
//    {
//        return a + (b - a) * t;
//    }
//}
//
//int main()
//{
//    double velocity = 150.5;
//
//    cout << "Physics Clamp : "
//         << Physics::clamp(velocity, 0.0, 100.0)
//         << endl;
//
//    int health = 120;
//
//    cout << "GameMath Clamp : "
//         << GameMath::clamp(health, 0, 100)
//         << endl;
//
//    cout << "Physics Lerp : "
//         << Physics::lerp(10.0, 50.0, 0.5)
//         << endl;
//
//    cout << "GameMath Lerp : "
//         << GameMath::lerp(0.0, 100.0, 0.25)
//         << endl;
//
//
//    {
//        using namespace Physics;
//
//        cout << "\nInside Physics Scope:" << endl;
//
//        cout << "Clamp : "
//             << clamp(125.0, 0.0, 100.0)
//             << endl;
//
//        cout << "Lerp : "
//             << lerp(10.0, 30.0, 0.5)
//             << endl;
//    }
//
//
//    cout << "\nOutside Physics Scope:" << endl;
//
//    cout << "GameMath Clamp : "
//         << GameMath::clamp(150, 0, 100)
//         << endl;
//
//    return 0;
//}
