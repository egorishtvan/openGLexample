#include "scene.h"


#include <QCoreApplication>
#include <QMatrix4x4>

scene::scene(QWidget *parent)
    : QOpenGLWidget(parent)
{
}

scene::~scene()
{
}

void scene::initializeGL()
{
   /* initializeOpenGLFunctions();
    glClearColor(1.0, 1.0, 1.0, 1.0);

    // Initialize shaders if necessary
    shaderProgram.addShaderFromSourceCode(QOpenGLShader::Vertex,
        "attribute vec2 posAttr;\n"
        "void main() {\n"
        "   gl_Position = vec4(posAttr, 0.0, 1.0);\n"
        "}\n");

    shaderProgram.addShaderFromSourceCode(QOpenGLShader::Fragment,
        "uniform lowp vec4 color;\n"
        "void main() {\n"
        "   gl_FragColor = color;\n"
        "}\n");

    shaderProgram.link();
    shaderProgram.bind();*/
    initializeOpenGLFunctions();
        glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black background color
}

void scene::resizeGL(int nWidth, int nHeight)
{
    //glViewport(0, 0, nWidth, nHeight);
    glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        glViewport(0, 0, nWidth, nHeight);
}

void scene::paintGL()
{
    /*glClear(GL_COLOR_BUFFER_BIT);

    // Triangle
    GLfloat triangleVertices[] = {
        0.0f, 0.0f,
        1.0f, 1.0f,
        1.0f, 0.0f
    };

    shaderProgram.enableAttributeArray("posAttr");
    shaderProgram.setAttributeArray("posAttr", triangleVertices, 2);

    shaderProgram.setUniformValue("color", QVector4D(0.25, 0.87, 0.81, 1.0));
    glDrawArrays(GL_TRIANGLES, 0, 3);

    // Quad
    GLfloat quadVertices[] = {
        0.0f, 0.5f,
        0.0f, 1.0f,
        0.5f, 1.0f,
        0.5f, 0.5f
    };

    shaderProgram.setAttributeArray("posAttr", quadVertices, 2);

    shaderProgram.setUniformValue("color", QVector4D(0.13, 0.56, 0.13, 1.0));
    glDrawArrays(GL_QUADS, 0, 4);

    // Line Strip
    GLfloat lineVertices[] = {
        0.0f, 0.5f,
        0.5f, 1.0f,
        1.0f, 0.5f,
        0.5f, 0.0f,
        0.0f, 0.5f
    };

    shaderProgram.setAttributeArray("posAttr", lineVertices, 2);

    shaderProgram.setUniformValue("color", QVector4D(0.65, 0.16, 0.16, 1.0));
    glLineWidth(2.0);
    glDrawArrays(GL_LINE_STRIP, 0, 5);

    shaderProgram.disableAttributeArray("posAttr");*/

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        glOrtho(0, 400, 400, 0, 1, 0);
        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

        //qglColor(Qt::white);

        drawPolygons();

        //swapBuffers();

}

void scene::drawPolygons()
{
    /*glBegin(GL_POLYGON);
    glColor4f(1, 1, 1, 1);
    glVertex2f(66, 290);
    glVertex2f(66, 60);
    glVertex2f(100, 175);
    glVertex2f(175, 245);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4f(1, 1, 1, 1);
    glVertex2f(66, 60);
    glVertex2f(215, 60);
    glVertex2f(100, 175);
    glVertex2f(175, 245);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4f(1, 1, 1, 1);
    glVertex2f(66, 290);
    glVertex2f(175, 245);
    glVertex2f(250, 175);
    glVertex2f(330, 290);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4f(1, 1, 1, 1);
    glVertex2f(250, 175);
    glVertex2f(250, 80);
    glVertex2f(330, 130);
    glVertex2f(330, 290);
    glEnd();*/





    glBegin(GL_POLYGON);
    glColor4f(1, 1, 1, 1);
    glVertex2f(0, 0);
    glVertex2f(0, 250);
    glVertex2f(45, 115);
    glVertex2f(150, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4f(1, 1, 1, 1);
    glVertex2f(0, 250);
    glVertex2f(45, 115);
    glVertex2f(110, 180);
    glVertex2f(250, 250);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4f(1, 1, 1, 1);
     glVertex2f(175, 120);
    glVertex2f(110, 180);
    glVertex2f(250, 250);

    glVertex2f(250, 70);//250 70
    glEnd();

    glBegin(GL_POLYGON);
    glColor4f(1, 1, 1, 1);
    glVertex2f(175, 120);
    glVertex2f(250, 70);
    glVertex2f(180, 30);

    glEnd();
}
