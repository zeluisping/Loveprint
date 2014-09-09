#ifndef KIRA_FRAMEWORK_OPENGL11_DEFINES
#define KIRA_FRAMEWORK_OPENGL11_DEFINES

#define GL_FALSE						0
#define GL_TRUE							1

// glClear
#define GL_COLOR_BUFFER_BIT				0x00004000
#define GL_DEPTH_BUFFER_BIT				0x00000100
#define GL_STENCIL_BUFFER_BIT			0x00000400


// glBlendFunc
#define GL_ZERO							0
#define GL_ONE							1
#define GL_SRC_ALPHA					0x0302
#define GL_ONE_MINUS_SRC_ALPHA			0x0303
#define GL_DST_ALPHA					0x0304
#define GL_ONE_MINUS_DST_ALPHA			0x0305
#define GL_DST_COLOR					0x0306
#define GL_ONE_MINUS_DST_COLOR			0x0307
#define GL_SRC_ALPHA_SATURATE			0x0308

//#define GL_ZERO
//#define GL_ONE
#define GL_SRC_COLOR					0x0300
#define GL_ONE_MINUS_SRC_COLOR			0x0301
//#define GL_SRC_ALPHA
//#define GL_ONE_MINUS_SRC_ALPHA
//#define GL_DST_ALPHA
//#define GL_ONE_MINUS_DST_ALPHA


// glBindTexture
#define GL_TEXTURE_1D					0x0DE0
#define GL_TEXTURE_2D					0x0DE1


// glCullFace
#define GL_FRONT						0x0404
#define GL_BACK							0x0405
#define GL_FRONT_AND_BACK				0x0408


// glEnable/glDisable
#define GL_ALPHA_TEST					0x0BC0
#define GL_BLEND						0x0BE2
#define GL_COLOR_MATERIAL				0x0B57
#define GL_CULL_FACE					0x0B44
#define GL_DEPTH_TEST					0x0B71
#define GL_SCISSOR_TEST					0x0C11
#define GL_STENCIL_TEST					0x0B90
//#define GL_TEXTURE_1D
//#define GL_TEXTURE_2D


// glFrontFace
#define GL_CW							0x0900
#define GL_CCW							0x0901


// glPolygonMode
//#define GL_FRONT
//#define GL_BACK
//#define GL_FRONT_AND_BACK

#define GL_POINT						0x1B00
#define GL_LINE							0x1B01
#define GL_FILL							0x1B02


// glTexParameteri
//#define GL_TEXTURE_1D
//#define GL_TEXTURE_2D

#define GL_TEXTURE_MAG_FILTER			0x2800
#define GL_TEXTURE_MIN_FILTER			0x2801
#define GL_TEXTURE_WRAP_S				0x2802
#define GL_TEXTURE_WRAP_T				0x2803

#define GL_NEAREST						0x2600
#define GL_LINEAR						0x2601
#define GL_NEAREST_MIPMAP_NEAREST		0x2700
#define GL_LINEAR_MIPMAP_NEAREST		0x2701
#define GL_NEAREST_MIPMAP_LINEAR		0x2702
#define GL_LINEAR_MIPMAP_LINEAR			0x2703
#define GL_CLAMP						0x2900
#define GL_REPEAT						0x2901


// glTexImage2D
//#define GL_TEXTURE_2D
#define GL_PROXY_TEXTURE_2D				0x8064

#define GL_ALPHA						0x1906
#define GL_ALPHA4						0x803B
#define GL_ALPHA8						0x803C
#define GL_ALPHA12						0x803D
#define GL_ALPHA16						0x803E
#define GL_LUMINANCE					0x1909
#define GL_LUMINANCE4					0x803F
#define GL_LUMINANCE8					0x8040
#define GL_LUMINANCE12					0x8041
#define GL_LUMINANCE16					0x8042
#define GL_LUMINANCE_ALPHA				0x190A
#define GL_LUMINANCE4_ALPHA4			0x8043
#define GL_LUMINANCE6_ALPHA2			0x8044
#define GL_LUMINANCE8_ALPHA8			0x8045
#define GL_LUMINANCE12_ALPHA4			0x8046
#define GL_LUMINANCE12_ALPHA12			0x8047
#define GL_LUMINANCE16_ALPHA16			0x8048
#define GL_INTENSITY					0x8049
#define GL_INTENSITY4					0x804A
#define GL_INTENSITY8					0x804B
#define GL_INTENSITY12					0x804C
#define GL_INTENSITY16					0x804D
#define GL_R3_G3_B2						0x2A10
#define GL_RGB							0x1907
#define GL_RGB4							0x804F
#define GL_RGB5							0x8050
#define GL_RGB8							0x8051
#define GL_RGB10						0x8052
#define GL_RGB12						0x8053
#define GL_RGB16						0x8054
#define GL_RGBA							0x1908
#define GL_RGBA2						0x8055
#define GL_RGBA4						0x8056
#define GL_RGB5_A1						0x8057
#define GL_RGBA8						0x8058
#define GL_RGB10_A2						0x8059
#define GL_RGBA12						0x805A
#define GL_RGBA16						0x805B

#define GL_COLOR_INDEX					0x1900
#define GL_RED							0x1903
#define GL_GREEN						0x1904
#define GL_BLUE							0x1905
//#define GL_ALPHA
//#define GL_RGB
//#define GL_RGBA
//#define GL_LUMINANCE
//#define GL_LUMINANCE_ALPHA

#define GL_BYTE							0x1400
#define GL_UNSIGNED_BYTE				0x1401
#define GL_SHORT						0x1402
#define GL_UNSIGNED_SHORT				0x1403
#define GL_INT							0x1404
#define GL_UNSIGNED_INT					0x1405
#define GL_FLOAT						0x1406


// glEnableClientState/glDisableClientState
#define GL_VERTEX_ARRAY					0x8074
#define GL_NORMAL_ARRAY					0x8075
#define GL_COLOR_ARRAY					0x8076
#define GL_INDEX_ARRAY					0x8077
#define GL_TEXTURE_COORD_ARRAY			0x8078
#define GL_EDGE_FLAG_ARRAY				0x8079


// glColorPointer
//#define GL_BYTE
//#define GL_UNSIGNED_BYTE
//#define GL_SHORT
//#define GL_UNSIGNED_SHORT
//#define GL_INT
//#define GL_UNSIGNED_INT
//#define GL_FLOAT


// glVertexPointer
//#define GL_SHORT
//#define GL_INT
//#define GL_FLOAT


// glTexCoordPointer
//#define GL_SHORT
//#define GL_INT
//#define GL_FLOAT


// glDrawElements
#define GL_POINTS						0x0000
#define GL_LINES						0x0001
#define GL_LINE_LOOP					0x0002
#define GL_LINE_STRIP					0x0003
#define GL_TRIANGLES					0x0004
#define GL_TRIANGLE_STRIP				0x0005
#define GL_TRIANGLE_FAN					0x0006
#define GL_QUADS						0x0007
#define GL_QUAD_STRIP					0x0008
#define GL_POLYGON						0x0009


// glMatrixMode
#define GL_MODELVIEW					0x1700
#define GL_PROJECTION					0x1701
#define GL_TEXTURE						0x1702


// BUFFER OBJECTS BLABLYDO
#define GL_STREAM_DRAW					0x88E0
#define GL_STATIC_DRAW					0x88E4
#define GL_DYNAMIC_DRAW					0x88E8

#define GL_ARRAY_BUFFER					0x8892
#define GL_ELEMENT_ARRAY_BUFFER			0x8893
#define GL_ARRAY_BUFFER_BINDING			0x8894
#define GL_ELEMENT_ARRAY_BUFFER_BINDING	0x8895

// SHADERS
#define GL_FRAGMENT_SHADER                               0x8B30
#define GL_VERTEX_SHADER                                 0x8B31
#define GL_MAX_VERTEX_ATTRIBS                            0x8869
#define GL_MAX_VERTEX_UNIFORM_VECTORS                    0x8DFB
#define GL_MAX_VARYING_VECTORS                           0x8DFC
#define GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS              0x8B4D
#define GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS                0x8B4C
#define GL_MAX_TEXTURE_IMAGE_UNITS                       0x8872
#define GL_MAX_FRAGMENT_UNIFORM_VECTORS                  0x8DFD
#define GL_SHADER_TYPE                                   0x8B4F
#define GL_DELETE_STATUS                                 0x8B80
#define GL_LINK_STATUS                                   0x8B82
#define GL_VALIDATE_STATUS                               0x8B83
#define GL_ATTACHED_SHADERS                              0x8B85
#define GL_ACTIVE_UNIFORMS                               0x8B86
#define GL_ACTIVE_UNIFORM_MAX_LENGTH                     0x8B87
#define GL_ACTIVE_ATTRIBUTES                             0x8B89
#define GL_ACTIVE_ATTRIBUTE_MAX_LENGTH                   0x8B8A
#define GL_SHADING_LANGUAGE_VERSION                      0x8B8C
#define GL_CURRENT_PROGRAM                               0x8B8D

// ErrorCode
#define GL_NO_ERROR                                      0
#define GL_INVALID_ENUM                                  0x0500
#define GL_INVALID_VALUE                                 0x0501
#define GL_INVALID_OPERATION                             0x0502
#define GL_OUT_OF_MEMORY                                 0x0505

// ActiveTexture
#define GL_TEXTURE0                                      0x84C0
#define GL_TEXTURE1                                      0x84C1
#define GL_TEXTURE2                                      0x84C2
#define GL_TEXTURE3                                      0x84C3
#define GL_TEXTURE4                                      0x84C4
#define GL_TEXTURE5                                      0x84C5
#define GL_TEXTURE6                                      0x84C6
#define GL_TEXTURE7                                      0x84C7
#define GL_TEXTURE8                                      0x84C8
#define GL_TEXTURE9                                      0x84C9
#define GL_TEXTURE10                                     0x84CA
#define GL_TEXTURE11                                     0x84CB
#define GL_TEXTURE12                                     0x84CC
#define GL_TEXTURE13                                     0x84CD
#define GL_TEXTURE14                                     0x84CE
#define GL_TEXTURE15                                     0x84CF
#define GL_TEXTURE16                                     0x84D0
#define GL_TEXTURE17                                     0x84D1
#define GL_TEXTURE18                                     0x84D2
#define GL_TEXTURE19                                     0x84D3
#define GL_TEXTURE20                                     0x84D4
#define GL_TEXTURE21                                     0x84D5
#define GL_TEXTURE22                                     0x84D6
#define GL_TEXTURE23                                     0x84D7
#define GL_TEXTURE24                                     0x84D8
#define GL_TEXTURE25                                     0x84D9
#define GL_TEXTURE26                                     0x84DA
#define GL_TEXTURE27                                     0x84DB
#define GL_TEXTURE28                                     0x84DC
#define GL_TEXTURE29                                     0x84DD
#define GL_TEXTURE30                                     0x84DE
#define GL_TEXTURE31                                     0x84DF
#define GL_ACTIVE_TEXTURE                                0x84E0

#endif