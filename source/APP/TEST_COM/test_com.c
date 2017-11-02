
#include "test_com.h"
#include "Timer_Config.h"
/*
 * 函数名：soft_delay_us
 * 描述  ：软件阻塞延时10us 个数
 * 输入  ：dly_us 个数
 * 输出  ：无
 * 返回  ：无
 */
void cs_delay_us(int time)
{
	int i = 0;
	
	while(time--)
	{
		i = 10; //自己定义
		
		while(i--);
	}
}
void cs_delay_ms(int time)
{
	int i = 0;
	
	while(time--)
	{
		i = 12000;  //自己定义
		while(i--);
	}
}

/*
 * 函数名：close_test_timer
 * 描述  ：关闭测试定时器
 * 输入  ：无
 * 输出  ：无
 * 返回  ：无
 */
void close_test_timer(void)
{
    bsp_tim2_close();/* 关定时器 */
}
/*
 * 函数名：open_test_timer
 * 描述  ：打开测试定时器
 * 输入  ：无
 * 输出  ：无
 * 返回  ：无
 */
void open_test_timer(void)
{
    bsp_tim2_open();/* 开定时器 */
}

