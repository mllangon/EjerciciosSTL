#include <iostream>

namespace Ciencia {
    namespace Fisica {
        const double VELOCIDAD_DE_LA_LUZ = 299792458; // en metros por segundo

        double energiaDeMasa(double masa) {
            return masa * VELOCIDAD_DE_LA_LUZ * VELOCIDAD_DE_LA_LUZ;
        }
    }
    namespace Quimica {
        const double NUMERO_DE_AVOGADRO = 6.02214076e23; // mol^-1

        double molesDeParticulas(double particulas) {
            return particulas / NUMERO_DE_AVOGADRO;
        }
    }
}