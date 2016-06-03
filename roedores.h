class Roedores{
	private:
		char* genero, nombre_cientifico;
		double size;
		int edad;
	public:
		Roedores(char *genero, char *nombre, double size,int edad);
		char *getGenero(void);
		char *getNombreCientifico(void);
		double getSize(void);
		int getEdad(void);

		void setGenero(char *genero);
		void setNombreCientifico(char *nombre);
		void setSize(int size);
		void setEdad(int edad);

		void Saltar(void);
		void Correr(void);
};
