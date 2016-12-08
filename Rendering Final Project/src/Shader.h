#ifndef SHADER_H
#define SHADER_H

#include "GL/glew.h"
#include <iostream>
#include <fstream>

class Shader
{
public:
    Shader();

    virtual void startup () = 0;

    virtual void shutdown () = 0;

	virtual void createFloorVertexBuffer() = 0;
	virtual void createLogsVertexBuffer() = 0;
	virtual void createSkyboxVertexBuffer() = 0;

    virtual void render() = 0;

    virtual ~Shader();

protected:

    virtual GLuint compile_shaders ( const char* vertexFilename, const char* fragmentFilename );
    virtual GLuint compile_shaders( const char* vertexFilename, const char* geometryFilenameconst, const char* fragmentFilename );
	virtual GLuint compile_shaders(const char * vertexFilename, const char * tessContFileName, const char * tessEvalFileName, const char * geometryFilename, const char * fragmentFilename);

	void attachShader(GLuint & program, const char * fileName, GLuint shaderType);

    GLchar* loadshader (std::string filename);

    void unloadshader (GLchar** ShaderSource);

    unsigned long getFileLength (std::ifstream& file);

};

#endif // SHADER_H
