#pragma once

//�w�b�_�[�t�@�C����ǂݍ���
#include "game.h"

//�L�[�{�[�h�̃w�b�_�[�t�@�C��

//�}�N����`
#define KEY_KIND_MAX   256

//�\����

struct KEYBOARD
{
	char TempKeyState[KEY_KIND_MAX];
	int AllKeyState[KEY_KIND_MAX];
	int OldAllKeyState[KEY_KIND_MAX];
};

//�O���̃O���[�o���ϐ�
extern KEYBOARD keyboard;

//�v���g�^�C�v�錾
extern void AllKeyUpdate(void);
extern BOOL KeyDown(int KEY_INPUT_);
extern BOOL KeyUp(int KEY_INPUT_);
extern BOOL KeyClick(int KEY_INPUT_);
extern BOOL KeyDownKeep(int KEY_INPUT_,int millSec);
