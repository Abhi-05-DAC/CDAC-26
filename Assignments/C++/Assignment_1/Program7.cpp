//#include <iostream>
//
//using namespace std;     //Hardware Register Access
//
//int main()
//{
//    int statusReg  = 0b10110001;
//    int controlReg = 0b00000000;
//    int dataReg    = 0b11001010;
//
//    // regPtr1 : Pointer to Constant Integer
//
//    const int* regPtr1 = &statusReg;
//
//    cout << "Status Register: " << *regPtr1 << endl;
//
//    // *regPtr1 = 10;
//
////      ERROR: Cannot modify the value through regPtr1
////      because regPtr1 is a pointer to const int.
////      The status register must be read-only from
////      the firmware side.
//
//
//    regPtr1 = &dataReg;
//
//    cout << "After Repointing regPtr1: " << *regPtr1 << endl;
//
//
//
//    //regPtr2 : Constant Pointer to Integer
//
//
//    int* const regPtr2 = &controlReg;
//
//    cout << "\nControl Register: " << *regPtr2 << endl;
//
//    *regPtr2 = 25;
//
//    cout << "After Writing controlReg: " << *regPtr2 << endl;
//
//    // regPtr2 = &dataReg;
//
////      ERROR: Cannot change the address stored in regPtr2
////      because regPtr2 is a constant pointer.
////      The control register pointer must always point
////      to the same hardware register address.
//
//
//
//
//    // regPtr3 : Constant Pointer to Constant Integer
//
//
//    const int* const regPtr3 = &statusReg;
//
//    cout << "\nStatus Register using regPtr3: "
//         << *regPtr3 << endl;
//
//    // *regPtr3 = 50;
//
////      ERROR: Cannot modify the value because regPtr3
////      points to const int.
//
//
//    // regPtr3 = &dataReg;
//
////      ERROR: Cannot change the pointer because regPtr3
////     is also a const pointer.
//
//
//
//    return 0;
//}
