/**********************************************************************************
 * 淘宝    ：https://shop192945717.taobao.com
**********************************************************************************/

#include "stm32f10x.h"
#include "Led.h"

void Delay(u32 dly);

/*******************************************************************************
* 函数名  : main
* 描述    : 主函数，用户程序从main函数开始运行
* 输入    : 无
* 输出    : 无
* 返回值  : int:返回值为一个16位整形数
* 说明    : 无
*******************************************************************************/
int main(void)
{
	LED_GPIO_Config();	//LED IO配置

	while (1)
	{
		LED_ON();		    //点亮LED.PA8
		Delay(1000000);	//延时
		LED_OFF();		  //关闭LED.PA8
		Delay(1000000);	//延时	
	}
}

/*******************************************************************************
* 函数名  : Delay
* 描述    : 软件延时函数
* 输入    : dly：32位的整形数
* 输出    : 无
* 返回值  : 无
* 说明    : 无
*******************************************************************************/
void Delay(u32 dly)	 
{
	for(; dly > 0; dly--);
} 