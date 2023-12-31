/*
**@file     : gpt_private.h
**@brief    : this is header file for GPT registers usage 
**@author   : sharpel
**@date     : 21 june 2023
**@version  : 0.1
*/


#ifndef GPT_PRIVATE_H_
#define GPT_PRIVATE_H_

/*GPT REGISTERS*/




#define GPT_OFFSET(x)         (x<8?((0x40030000)+((x)*0x1000)):((0x4004C000)+((x-8)*0x1000)))



#define GPTMCFG(x)            (*(VUint32_t*)(GPT_OFFSET(x)+(0x000)))
#define GPTMTAMR(x)           (*(VUint32_t*)(GPT_OFFSET(x)+(0x004)))
#define GPTMTBMR(x)           (*(VUint32_t*)(GPT_OFFSET(x)+(0x008)))
#define GPTMCTL(x)            (*(VUint32_t*)(GPT_OFFSET(x)+(0x00C)))
#define GPTMSYNC(x)           (*(VUint32_t*)(GPT_OFFSET(x)+(0x010)))
#define GPTMIMR(x)            (*(VUint32_t*)(GPT_OFFSET(x)+(0x018)))
#define GPTMRIS(x)            (*(VUint32_t*)(GPT_OFFSET(x)+(0x01C)))
#define GPTMMIS(x)            (*(VUint32_t*)(GPT_OFFSET(x)+(0x020)))
#define GPTMICR(x)            (*(VUint32_t*)(GPT_OFFSET(x)+(0x024)))
#define GPTMTAILR(x)          (*(VUint32_t*)(GPT_OFFSET(x)+(0x028)))
#define GPTMTBILR(x)          (*(VUint32_t*)(GPT_OFFSET(x)+(0x02C)))
#define GPTMTAMATCHR(x)       (*(VUint32_t*)(GPT_OFFSET(x)+(0x030)))
#define GPTMTBMATCHR(x)       (*(VUint32_t*)(GPT_OFFSET(x)+(0x034)))
#define GPTMTAPR(x)           (*(VUint32_t*)(GPT_OFFSET(x)+(0x038)))
#define GPTMTBPR(x)           (*(VUint32_t*)(GPT_OFFSET(x)+(0x03C)))
#define GPTMTAPMR(x)          (*(VUint32_t*)(GPT_OFFSET(x)+(0x040)))
#define GPTMTBPMR(x)          (*(VUint32_t*)(GPT_OFFSET(x)+(0x044)))	
#define GPTMTAR(x)            (*(VUint32_t*)(GPT_OFFSET(x)+(0x048)))
#define GPTMTBR(x)            (*(VUint32_t*)(GPT_OFFSET(x)+(0x04C)))		
#define GPTMTAV(x)            (*(VUint32_t*)(GPT_OFFSET(x)+(0x050)))
#define GPTMTBV(x)            (*(VUint32_t*)(GPT_OFFSET(x)+(0x054)))		
#define GPTMRTCPD(x)          (*(VUint32_t*)(GPT_OFFSET(x)+(0x058)))	
#define GPTMTAPS(x)           (*(VUint32_t*)(GPT_OFFSET(x)+(0x05C)))	
#define GPTMTBPS(x)           (*(VUint32_t*)(GPT_OFFSET(x)+(0x060)))	
#define GPTMTAPV(x)           (*(VUint32_t*)(GPT_OFFSET(x)+(0x064)))
#define GPTMTBPV(x)           (*(VUint32_t*)(GPT_OFFSET(x)+(0x068)))
#define GPTMPP(x)             (*(VUint32_t*)(GPT_OFFSET(x)+(0xFC0)))	
	



#define RCGCTIMER             (*(VUint32_t*)(0x400FE604))
#define RCGCWTIMER            (*(VUint32_t*)(0x400FE65C))
	

// REGs values and Bits Names 

#define GPTMCTL_TAEN          (0U)
#define GPTMIMR_TATOIM        (0U)
#define GPTMRIS_TATORIS       (0U)
#define GPTMICR_TATOCINT      (0U)



#define GPTMCFG_SINGLE        (0x4)
#define GPTMCFG_DOUBLE        (0x0)
#define ONE_SHOT_VALUE        (0x1)
#define PERIODIC_VALUE        (0x2)



// MACROS

#define CLK_FREQ             16000000.0
#define MICRO_CONVERTER      1000000.0
#define MILLI_CONVERTER      1000.0
#define ONE_F                1.0
#define ZERO_F               0.0



#endif




