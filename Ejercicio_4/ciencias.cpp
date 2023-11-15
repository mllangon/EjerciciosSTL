#include <iostream>

namespace Ciencia {
    namespace Fisica {
        const double VELOCIDAD_DE_LA_LUZ = 299792458; // en metros por segundo

        double energiaDeMasa(double masa) {
            return masa * VELOCIDAD_DE_LA_LUZ * VELOCIDAD_DE_LA_LUZ;
        }
    }