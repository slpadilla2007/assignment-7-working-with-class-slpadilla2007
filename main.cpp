#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

class Electric_Field {

	private:
		double *E;
	public:
		//Default constructor
		Electric_Field() {
			E = (double*) malloc(sizeof(double)*3);
			//Makes each value 0.1 by default
			for (int i = 0; i < 3; i++) {
				E[i] = 0.1;
			}
		}
		//Overload constructor
		Electric_Field(double x, double y, double z) {
			E = (double*) malloc(sizeof(double)*3);
			E[0] = x;
			E[1] = y;
			E[2] = z;
		}
		//Default destructor
		~Electric_Field() {
			free(E);
		}
		//All setter funcs
		void setX(double x) {
			E[0] = x;
		}
		void setY(double y) {
			E[1] = y;
		}
		void setZ(double z) {
			E[2] = z;
		}
		void setXYZ(double x, double y, double z) {
			E[0] = x;
			E[1] = y;
			E[2] = z;
		}
		//All getter funcs
		double getX() {
			return E[0];
		}
		double getY() {
			return E[1];
		}
		double getZ() {
			return E[2];
		}
		//Magnitude func
		double calcMagnitude() {
			double magnitude;
			//magnitude = sqrt(x^2 + y^2 + z^2)
			magnitude = sqrt((E[0]*E[0])+(E[1]*E[1])+(E[2]*E[2]));
			return magnitude;
		}
		//Inner product func
		double innerProduct() {
			return ((E[0]*E[0])+(E[1]*E[1])+(E[2]*E[2]));
		}

};

class Magnetic_Field {
	
	private:
		double *M;
	public:
		//Default constructor
		Magnetic_Field() {
			M = (double*) malloc(sizeof(double)*3);
			//Makes each value 0.1 by default
			for (int i = 0; i < 3; i++) {
				M[i] = 0.1;
			}
		}
		//Overload constructor
		Magnetic_Field(double x, double y, double z) {
			M = (double*) malloc(sizeof(double)*3);
			M[0] = x;
			M[1] = y;
			M[2] = z;
		}
		//Default destructor
		~Magnetic_Field() {
			free(M);
		}
		//All setter funcs
		void setX(double x) {
			M[0] = x;
		}
		void setY(double y) {
			M[1] = y;
		}
		void setZ(double z) {
			M[2] = z;
		}
		void setXYZ(double x, double y, double z) {
			M[0] = x;
			M[1] = y;
			M[2] = z;
		}
		//All getter funcs
		double getX() {
			return M[0];
		}
		double getY() {
			return M[1];
		}
		double getZ() {
			return M[2];
		}
		//Magnitude func
		double calcMagnitude() {
			double magnitude;
			magnitude = sqrt((M[0]*M[0])+(M[1]*M[1])+(M[2]*M[2]));
			return magnitude;
		}
		//Unit vector funcs
		double unitX() {
			//x divided by magnitude
			return (E[0]/calcMagnitude());
		}
		double unitY() {
			return (E[1]/calcMagnitude());
		}
		double unitZ() {
			return (E[2]/calcMagnitude());
		}

};

int main() {

	//Code will go here
	return 0;

}
