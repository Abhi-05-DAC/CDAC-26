//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//
//using namespace std;
//
//int main()
//{
//    int rows, cols;
//
//    cout << "Enter Rows and Columns : ";
//    cin >> rows >> cols;
//
//    int** gameMap = new int*[rows];
//
//    for (int i = 0; i < rows; i++)
//    {
//        gameMap[i] = new int[cols];
//    }
//
//    srand(time(0));
//
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            gameMap[i][j] = rand() % 5;
//        }
//    }
//
//    cout << "\n===== GAME MAP (" << rows << " x " << cols << ") =====" << endl;
//
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            cout << gameMap[i][j] << " ";
//        }
//
//        cout << endl;
//    }
//
//    cout << "\nLegend: "<< "0=Grass " << "1=Water " << "2=Mountain "<< "3=Forest " << "4=Dungeon" << endl;
//
//    int count[5] = {0};
//
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            count[gameMap[i][j]]++;
//        }
//    }
//
//    cout << "\nTile Count:" << endl;
//
//    cout << " Grass    : " << count[0] << endl;
//    cout << " Water    : " << count[1] << endl;
//    cout << " Mountain : " << count[2] << endl;
//    cout << " Forest   : " << count[3] << endl;
//    cout << " Dungeon  : " << count[4] << endl;
//
//    for (int i = 0; i < rows; i++)
//    {
//        delete[] gameMap[i];
//    }
//
//    delete[] gameMap;
//
//    return 0;
//}
