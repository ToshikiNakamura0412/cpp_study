#include <iostream>
#include <Eigen/Dense>

using namespace std;

int main()
{
    Eigen::Vector3d point1(3.0, 4.0, 3.0);
    cout << "Dist to point: " << point1.segment(0, 2).norm() << endl;
    return 0;
}
