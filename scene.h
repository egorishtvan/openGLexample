#ifndef SCENE_H
#define SCENE_H

//#include <QGLWidget>
#include <QOpenGLWidget>
#include<QOpenGLFunctions>
#include<QOpenGLShaderProgram>

class scene : public QOpenGLWidget, protected QOpenGLFunctions
{
    Q_OBJECT

private:
QOpenGLShaderProgram shaderProgram;
private slots:

protected:
    void initializeGL();
    void resizeGL(int nWidth, int nHeight);
    void paintGL();
    void drawPolygons();

public:
    scene(QWidget *parent=nullptr);

    ~scene();
};

#endif // SCENE_H
