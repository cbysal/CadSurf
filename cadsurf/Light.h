#pragma once
class CLight
{
public:
	CLight(void);
	~CLight(void);
	GLfloat  posiMat[4];
	GLfloat exponent[1];//�۹�ƾ۹�ָ�� 0
	GLfloat cutoff[1];
	//glLightfv(GL_LIGHT0, GL_SPOT_CUTOFF, cutoff);
	BOOL onlight;
};

