#include <iostream>
#include "StudentController.h"
#include "StudentView.h"
#include "StudentViewTwo.h"
#include "Student.h"

using namespace ejemplo_mvc;
using namespace std;

Student retriveStudentFromDatabase() {
	Student s;
	s.setName("Pepito");
	s.setNollNo("10");
	return s;
}

int main() {
	// Recover student from database, actually the Controller should do this
	Student model = retriveStudentFromDatabase();

	// Create the view to print student details
	StudentView view = StudentView();
	// http://en.cppreference.com/w/cpp/language/lambda
	Connection c1 = model.connect([&] (const Student& mo) {
		view.printStudentDetails(mo);
	});

	// Add a second view to the model
	StudentViewTwo viewtwo = StudentViewTwo();

	Connection c2 = model.connect([&] (const Student& mo) {
		viewtwo.printStudentDetails(mo);
	});

	StudentController controller = StudentController(model);

	// Update data
	cout << " ------------------ Actualizamos el modelo (y la vista es notificada) ------------------ "	<< endl;
	controller.setStudentName("Juanito");
	cout << " ------------------ Actualizamos el modelo (y la vista es notificada) ------------------ "	<< endl;
	controller.setStudentName("Pepito");

	// Remove one of the views
	model.disconnect(c1);
	cout << " ------------------ Actualizamos el modelo (y la vista es notificada) ------------------ " << endl;
	controller.setStudentName("Nuevo");

	return 0;
}

