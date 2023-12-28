#ifndef 0
#include <iostream>
#include"Path.h"

using namespace std;

int main() {
    Path path;
    Pose pose1(1.0, 2.0, 3.0);
    Pose pose2(4.0, 5.0, 6.0);
    Pose pose3(7.0, 8.0, 9.0);
    Pose pose4(10.0, 11.0, 12.0);

    path.addPos(pose1);
    path.addPos(pose2);
    path.addPos(pose3);
    path.addPos(pose4);
    path.insertPos(3, pose4);

    path.print();

    cout << path.getPos(1).getX() << endl;

    path.removePos(0);

    path.print();

    cout << path[0].getX()<< endl;

    cout << path;

    cin >> path;

    cout << path;

    return 0;
}
#endif // !0