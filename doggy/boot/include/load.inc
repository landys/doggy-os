
; ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
;                               load.inc
; ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
;                                                     wjd,szh,zx,tr, 2007
; ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


BaseOfLoader		equ	 09000h	; LOADER.BIN �����ص���λ�� ----  �ε�ַ
OffsetOfLoader		equ	  0100h	; LOADER.BIN �����ص���λ�� ---- ƫ�Ƶ�ַ

BaseOfLoaderPhyAddr	equ	BaseOfLoader * 10h	; LOADER.BIN �����ص���λ�� ---- ������ַ (= BaseOfLoader * 10h)


BaseOfKernelFile	equ	 08000h	; KERNEL.BIN �����ص���λ�� ----  �ε�ַ
OffsetOfKernelFile	equ	     0h	; KERNEL.BIN �����ص���λ�� ---- ƫ�Ƶ�ַ

BaseOfKernelFilePhyAddr	equ	BaseOfKernelFile * 10h
KernelEntryPointPhyAddr	equ	030400h	; ע�⣺1�������� MAKEFILE �в��� -Ttext ��ֵ���!!
					;       2�����Ǹ���ַ���ǽ����Ǹ�ƫ�ƣ���� -Ttext ��ֵΪ 0x400400��������ֵҲӦ���� 0x400400��

BaseofFileName		equ	07e0h	; Ŀ¼��, ��ʼ�ļ���������ڴ��ַ, 7e0h*10h=7e00h
BaseofFileNamePhyAddr	equ	BaseofFileName * 10h
SizeOfFileItem		equ	14h	; 20���ֽ�
SizeOfAllFileItems	equ	400h	; Ŀ¼���ܴ�С
BaseOfExeFile		equ	 0820h	; Exe �����ص���λ�� ----  �ε�ַ, 820h*10h=8200h
BaseOfExeFilePhyAddr	equ	BaseOfExeFile * 10h
OffsetOfExeFile		equ	     0h	; Exe �����ص���λ�� ---- ƫ�Ƶ�ַ
ExeEntryPointPhyAddr	equ	0100000h	; ����EXE�ļ��ڱ���ģʽ�����±������ĵط�
ExeContentPhyAddr	equ	0100400h	; ����EXE�ļ������ڱ���ģʽ�����±������ĵط�


;BaseOfPaFile		equ	 04000h	; PA �����ص���λ�� ----  �ε�ַ
;OffsetOfPaFile		equ	     0h	; PA �����ص���λ�� ---- ƫ�Ƶ�ַ

;BaseOfPaFilePhyAddr	equ	BaseOfPaFile * 10h
;PaEntryPointPhyAddr	equ	0150000h

;BaseOfZxshFile		equ	 07E0h	; PA �����ص���λ�� ----  �ε�ַ
;OffsetOfZxshFile		equ	     0h	; PA �����ص���λ�� ---- ƫ�Ƶ�ַ

;BaseOfZxshFilePhyAddr	equ	BaseOfZxshFile * 10h
;ZxshEntryPointPhyAddr	equ	0100000h

PageDirBase		equ	200000h	; ҳĿ¼��ʼ��ַ:		2M
PageTblBase		equ	201000h	; ҳ����ʼ��ַ:			2M + 4K
