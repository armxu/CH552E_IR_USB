
/********************************** (C) COPYRIGHT *******************************
* File Name          : Main.C
* Author             : WCH
* Version            : V1.2
* Date               : 2020/6/15
* Description        : 
					   
 ////////////////////////////  < �ص����� >  ////////////////////////////
 
 ****unsigned char ���͵ı����޷�ʹ��printf ��ӡ ****
 
 ****ʹ��UART1��ʱ�� ��Ҫ�ض���purchar  int putchar(int c) ****
 
*******************************************************************************/
#include "includes.h"

#pragma  NOAREGS


void main() 
{
	CfgFsys();			//Freq = 12MHz. 
    mDelaymS(5);        //�ȴ�ϵͳ�ȶ�
	UART1Setup();		//����1��ʼ�� ������ 57600 bps. 	
	USBDeviceInit();    //USB�豸ģʽ��ʼ��
	IR_Init();
	EA = 1;				// ����ȫ���ж�. 
	UEP1_T_LEN = 0;     //Ԥʹ�÷��ͳ���һ��Ҫ���
    UEP2_T_LEN = 0;                     
	//Ԥʹ�÷��ͳ���һ��Ҫ���
	
	FLAG = 0;
    Ready = 0;
    while ( 1 )
    {
		if(Ready) {
			HIDValueHandle();
		}
	}
}