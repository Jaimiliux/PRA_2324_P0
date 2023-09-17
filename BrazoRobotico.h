using namespace std;
class BrazoRobotico{
	private:
		double Cx;
		double Cy;
		double Cz;
		bool sujetar;
	public:	
		BrazoRobotico(double Cx, double Cy, double Cz, bool sujetar);
		double getCx();
	        double getCy();
		double getCz();
		bool sujetar();
		void coger();
		void soltar();
		void mover(double x, double y, double z);
}



