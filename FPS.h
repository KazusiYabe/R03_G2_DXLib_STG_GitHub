#pragma once

//�w�b�_�t�@�C���̓ǂݍ���
#include "game.h"

//�}�N����`
#define GAME_FPS   60         //FPS
#define GAME_FPS_MAX     240  //FPS�̍ő�l
#define GAME_FPS_MIN     60   //FPS�̍ŏ��l

//FPS�\����
struct FPS
{
	BOOL IsInitFlg = FALSE;   //�ŏ��̑���J�n�t���O
	LONGLONG StarTime = 0;    //����J�n����
	LONGLONG NowTime = 0;     //���݂̎���
	LONGLONG OldTime = 0;     //�ȑO�̎���

	int Value = GAME_FPS;     //FPS�̒l

	float DeltaTime = 0.000001;//�O���܌�
	int Count = 1;
	float DrawValue = 0.0f;
	int SampleRate = GAME_FPS;
};

//�O���[�o���ϐ��̊O���Q��
extern FPS fps;  //FPS�̊Ǘ�
//�v���g�^�C�v�錾
VOID FPSUpdate(VOID);
VOID FPSDraw(VOID);
VOID FPSWait(VOID);