#include <glm/glm.hpp>

#include "../Shape.h"
#include "../MatrixStack.h"

using namespace std;

class Program;

class Helicopter 
{
public:
    Helicopter();
    Helicopter(string RESOURCE_DIR);
    virtual ~Helicopter();
    void rotatePropeller(const shared_ptr<Program> prog, shared_ptr<MatrixStack> MV, 
                        double t, glm::vec3 origin, glm::vec3 axis);
    void draw(const shared_ptr<Program> prog, shared_ptr<MatrixStack> MV, double t, bool frozen, 
            glm::vec3 origin = glm::vec3(0.0f), glm::mat4 rotmat = glm::mat4(1.0f));

private:
    Shape body1;
    Shape body2;
    Shape prop1;
    Shape prop2;
    glm::vec3 prop1center;
    glm::vec3 prop2center;
};