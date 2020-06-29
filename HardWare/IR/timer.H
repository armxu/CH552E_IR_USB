#ifndef	__TIMER_H__
#define __TIMER_H__
 
#define mTimer2Clk12DivFsys( ) {T2MOD &= ~ bT2_CLK;C_T2 = 0;}      //��ʱ��,ʱ��=Fsys/12 T2��׼ʱ��
#define mTimer2ClkFsys( )      {T2MOD |= (bTMR_CLK | bT2_CLK);C_T2=0;}         //��ʱ��,ʱ��=Fsys
#define mTimer2Clk4DivFsys( )  {T2MOD &= ~bTMR_CLK;T2MOD |=  bT2_CLK;C_T2 = 0;}//��ʱ��,ʱ��=Fsys/4
#define mTimer2CountClk( )     {C_T2 = 1;}                                     //������,T2���ŵ��½�����Ч

//CH554 Timer2 ��ʼ(SS=1)/����(SS=0)
#define mTimer2RunCTL( SS )    {TR2 = SS ? START : STOP;}
#define mTimer2OutCTL( )       (T2MOD |= T2OE)              //T2���  Ƶ��TF2/2   
#define CAP1Alter( )           {PIN_FUNC |= bT2_PIN_X;}     //CAP1��P10 ӳ�䵽P14
#define CAP2Alter( )           {PIN_FUNC |= bT2EX_PIN_X;}   //CAP2��P11 ӳ��RST


void IR_Init(void);
UINT8 VS1838_Process(void);

#endif