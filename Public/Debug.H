/* ���� */
/* �ṩprintf�ӳ������ʱ���� */

#ifndef	__DEBUG_H__
#define __DEBUG_H__

//���庯������ֵ
#ifndef  SUCCESS
#define  SUCCESS  0
#endif
#ifndef  FAIL
#define  FAIL    0xFF
#endif

//���嶨ʱ����ʼ
#ifndef  START
#define  START  1
#endif
#ifndef  STOP
#define  STOP    0
#endif

#define	 FREQ_SYS	     12000000	     //ϵͳ��Ƶ12MHz
#define  OSC_EN_XT     0                 //�ⲿ����ʹ�ܣ�Ĭ�Ͽ����ڲ�����

#ifndef  UART0_BUAD
#define  UART0_BUAD    57600
#define  UART1_BUAD    57600
#endif
#ifndef  DE_PRINTF                      //����Pirntf�������
#define  DE_PRINTF     1
#endif

void	CfgFsys( );                        //CH552ʱ��ѡ�������
void	mDelayuS( UINT16 n );              // ��uSΪ��λ��ʱ
void	mDelaymS( UINT16 n );              // ��mSΪ��λ��ʱ
void    CH552UART0Alter();                 //CH552����0����ӳ�䵽P1.2/P1.3
void	mInitSTDIO( );                      //T1��Ϊ�����ʷ�����
UINT8   CH552UART0RcvByte( );              //CH552 UART0��ѯ��ʽ����һ���ֽ�
void    CH552UART0SendByte(UINT8 SendDat); //CH552UART0����һ���ֽ�

void	UART1Setup( );                     //CH552����1��ʼ��
UINT8   CH552UART1RcvByte( );              //CH552 UART1��ѯ��ʽ����һ���ֽ�
void    CH552UART1SendByte(UINT8 SendDat); //CH552UART1����һ���ֽ�

void    CH552WDTModeSelect(UINT8 mode);     //CH552���Ź�ģʽ����
void    CH552WDTFeed(UINT8 tim);            //CH552���Ź�ι��

// void CH552SoftReset( );                  //CH552����λ
// void CH552USBDevWakeup( );               //CH552��USB�豸��������
//
#endif