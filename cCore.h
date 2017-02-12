#ifdef __APPLE__
    #include <OpenGL/gl.h>
    #include <OpenGL/glu.h>
    #include <GLUT/glut.h>
#else
    #include "freeglut.h"
#endif

#include "cProtoElectron.h"

class Core{
    public:
        Core();
        ~Core();
        void draw(int type);
        ProtoElectron *neutrons[5],*protons[4];
        float angle;
};
