class Empresa{
	private:
		// num es el numero de funcionario que tiene;
		int ruc, num;
		char *nombre_empresa;
		Funcionario *f;
	public:
		Empresa(int ruc, char *nombre_empresa,int n);
		~Empresa(void);
		int getRuc(void);
		int getNum(void);
		char* getNombreEmpresa(void);
		void aumento(void);
		void addFuncionario(Funcionario *f);
		/*void removeFuncionario(Funcionario *f); 
		void showFuncionarios(void);*/
};
