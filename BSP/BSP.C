#include "includes.h"
extern s32 PreSet_Position[512];
extern u32 FLASH_PAGE_ADDR;
/*
* ��������BSP_Init
* ����  ��ʱ�ӳ�ʼ����Ӳ����ʼ��
* ����  ����
* ���  ����
*/
void BSP_Init(void)
{  
    u16 i;
    SystemInit();       /*����ϵͳʱ��Ϊ72M*/
    SysTick_init();     /*��ʼ����ʹ��SysTick��ʱ��*/
    USART_Config();
//  vSR04Config();
//  vADCConfig();
//  vRTCConfig();
//	MSD0_SPI_Configuration();
//  vAM2305Config();
    //delay_ms(1000);
    vPTOConfig();
    
//////    /*�����������*/
//////    vENCODERConfig(); /*��������ʼ��*/           
//////    TIM6_Int_Init(1000,719);//100Khz����Ƶ�ʣ�������1000Ϊ10ms  ���������Ե��� ������ģʽ�¼���ֵ  ��ȡ����
//////    /*end*/
//////    
//////    /*��ȡFLASH��Ԥ��λ��Ϣ*/
//////    for(i = 0; i < 512; i++)
//////    {
//////        PreSet_Position[i] = *(__IO uint32_t*)(FLASH_PAGE_ADDR + i * 4);
//////    }
    
}

/*
* ��������SysTick_init
* ����  ������SysTick��ʱ��
* ����  ����
* ���  ����
*/
void SysTick_init(void)
{
    SysTick_Config(SystemCoreClock / OS_TICKS_PER_SEC); //��ʼ����ʹ��SysTick��ʱ��
}