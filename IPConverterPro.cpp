#include <cstdlib>

int main() {
    const char* comando = "java -jar IPConverterPro.jar";

    int resultado = system(comando);

    if (resultado == 0) {
        // El comando se ejecutó exitosamente
        return 0;
    } else {
        // Hubo un error al ejecutar el comando
        return 1;
    }
}
