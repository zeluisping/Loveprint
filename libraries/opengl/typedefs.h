#ifndef PROC
#	define PROC(type, name, args) typedef type (__stdcall * PROC_##name) args
#endif

#ifndef NEVA_TYPEDEFS_H
#define NEVA_TYPEDEFS_H
	typedef int GLsizeiptr;
	typedef char GLchar;
	typedef unsigned int GLenum;
	typedef unsigned char GLboolean;
	typedef unsigned int GLbitfield;
	typedef signed char GLbyte;
	typedef int GLint;
	typedef int GLsizei;
	typedef unsigned char GLubyte;
	typedef unsigned short GLushort;
	typedef unsigned int GLuint;
	typedef float GLfloat;
	typedef float GLclampf;
	typedef void GLvoid;
	typedef double GLdouble;
#endif

// Fixed Function Pipeline
PROC(void, glBegin, (GLenum mode));
PROC(void, glVertex2f, (GLfloat x, GLfloat y));
PROC(void, glEnd, (void));
PROC(void, glOrtho, (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble nearVal, GLdouble farVal));
PROC(void, glMatrixMode, (GLenum mode));
PROC(void, glPushMatrix, (void));
PROC(void, glPopMatrix, (void));
PROC(void, glLoadIdentity, (void));
PROC(void, glRotatef, (GLfloat angle, GLfloat x, GLfloat y, GLfloat z));
PROC(void, glScalef, (GLfloat x, GLfloat y, GLfloat z));
PROC(void, glTranslatef, (GLfloat x, GLfloat y, GLfloat z));
PROC(void, glColor4ub, (GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha));
PROC(void, glColor4f, (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha));

// General
PROC(GLenum, glGetError, (void));
PROC(void, glClear, (GLbitfield mask));
PROC(void, glClearColor, (GLfloat r, GLfloat g, GLfloat b, GLfloat a));
PROC(void, glEnable, (GLenum cap));
PROC(void, glDisable, (GLenum cap));
PROC(void, glBlendFunc, (GLenum sfactor, GLenum dfactor));
PROC(void, glFrontFace, (GLenum mode));
PROC(void, glScissor, (GLint x, GLint y, GLsizei width, GLsizei height));
PROC(void, glCullFace, (GLenum mode));
PROC(void, glViewport, (GLint x, GLint y, GLsizei width, GLsizei height));
PROC(void, glPolygonMode, (GLenum face, GLenum mode));

// Textures
PROC(void, glGenTextures, (GLsizei n, GLuint * textures));
PROC(void, glDeleteTextures, (GLsizei n, const GLuint * textures));
PROC(void, glTexParameteri, (GLenum target, GLenum pname, GLint param));
PROC(void, glTexImage2D, (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid * pixels));
PROC(void, glBindTexture, (GLenum target, GLuint texture));
PROC(void, glActiveTexture, (GLenum texture));

// Drawing
PROC(void, glDrawElements, (GLenum mode, GLsizei count, GLenum type, const GLvoid * indices));
PROC(void, glDrawArrays, (GLenum mode, GLsizei stride, GLsizei count));

// Vertex Arrays
PROC(void, glBindVertexArray, (GLuint array));
PROC(void, glVertexAttrib3f, (GLuint index, GLfloat v0, GLfloat v1, GLfloat v2));
PROC(void, glBindBuffer, (GLenum target, GLuint buffer));
PROC(void, glGenVertexArrays, (GLsizei n, GLuint * arrays));
PROC(void, glGenBuffers, (GLsizei n, GLuint * buffers));
PROC(void, glBufferData, (GLenum target, GLsizeiptr size, const GLvoid * data, GLenum usage));
PROC(void, glVertexAttribPointer, (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid * pointer));
PROC(void, glEnableVertexAttribArray, (GLuint index));
PROC(void, glDeleteBuffers, (GLsizei n, const GLuint * buffers));
PROC(void, glDeleteVertexArrays, (GLsizei n, const GLuint * arrays));

// Programs & Shaders
PROC(GLuint, glCreateProgram, (void));
PROC(GLuint, glCreateShader, (GLenum shaderType));
PROC(void, glShaderSource, (GLuint shader, GLsizei count, const GLchar ** string, const GLint * length));
PROC(void, glCompileShader, (GLuint shader));
PROC(void, glAttachShader, (GLuint program, GLuint shader));
PROC(void, glDetachShader, (GLuint program, GLuint shader));
PROC(void, glDeleteShader, (GLuint shader));
PROC(void, glDeleteProgram, (GLuint program));
PROC(void, glLinkProgram, (GLuint program));
PROC(void, glUseProgram, (GLuint program));
PROC(void, glBindAttribLocation, (GLuint program, GLuint index, const GLchar * name));
PROC(void, glBindFragDataLocation, (GLuint program, GLuint colorNumber, const GLchar * name));
PROC(GLint, glGetUniformLocation, (GLuint program, const GLchar * name));
PROC(void, glUniform1ui, (GLint location, GLuint x));
PROC(void, glUniform1f, (GLint location, GLfloat x));
PROC(void, glUniform2f, (GLint location, GLfloat x, GLfloat y));
PROC(void, glUniform3f, (GLint location, GLfloat x, GLfloat y, GLfloat z));
PROC(void, glUniform4f, (GLint location, GLfloat x, GLfloat y, GLfloat z, GLfloat w));
PROC(void, glUniform1i, (GLint location, GLint x));
PROC(void, glUniform2i, (GLint location, GLint x, GLint y));
PROC(void, glUniform3i, (GLint location, GLint x, GLint y, GLint z));
PROC(void, glUniform4i, (GLint location, GLint x, GLint y, GLint z, GLint w));
PROC(void, glUniformMatrix4fv, (GLint location, GLsizei count, GLboolean transpose, const GLfloat * value));
PROC(void, glGetProgramInfoLog, (GLuint program, GLsizei maxLength, GLsizei * length, GLchar * infoLog));
PROC(void, glValidateProgram, (GLuint program));
PROC(void, glGetShaderInfoLog, (GLuint shader, GLsizei maxLength, GLsizei * length, GLchar * infoLog));
PROC(void, glGetProgramiv, (GLuint program, GLenum pname, GLint * params));

#undef PROC