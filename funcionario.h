using namespace std;

class Funcionario{
	private:
		char *nombre, *fecha_ingreso;
		double salario;
	public:
		Funcionario(void);
		Funcionario(char *nombre,char *fecha_ingreso,double salario);
		char *getNombre(void);
		char *getFechaIngreso(void);	
		double getSalario(void);
		
		void setNombre(char *s);
		void setFechaIngreso(char *s);
		void setSalario(int s);
};
