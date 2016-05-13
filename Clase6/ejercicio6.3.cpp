/**
 * transpose
 *
 * trasponer arreglos bidimensionales
 *
 * input const | int | array bidimensional
 * putput int | array bidimensional
 *
*/
void transpose(const int input[][LENGHT], int output[][WIDTH]){
	for(int i = 0; i < WIDTH;++i)
		for(int j = 0; j < HEIGHT;++j)
			output[j][i] = input[i][j];
}