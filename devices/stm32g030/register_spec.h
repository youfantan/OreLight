#pragma once

constexpr static u32 ADC_BASE = 1073816576;
constexpr static u32 ADC_ADC_ISR_BASE = ADC_BASE + 0;
constexpr static RegisterFieldDescriptor ADC_ADC_ISR_ADRDY = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_ISR_EOSMP = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_ISR_EOC = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_ISR_EOS = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_ISR_OVR = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_ISR_AWD1 = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_ISR_AWD2 = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_ISR_AWD3 = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_ISR_EOCAL = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_ISR_CCRDY = { 13, 1, 0 };


constexpr static u32 ADC_ADC_IER_BASE = ADC_BASE + 4;
constexpr static RegisterFieldDescriptor ADC_ADC_IER_ADRDYIE = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_IER_EOSMPIE = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_IER_EOCIE = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_IER_EOSIE = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_IER_OVRIE = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_IER_AWD1IE = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_IER_AWD2IE = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_IER_AWD3IE = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_IER_EOCALIE = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_IER_CCRDYIE = { 13, 1, 0 };


constexpr static u32 ADC_ADC_CR_BASE = ADC_BASE + 8;
constexpr static RegisterFieldDescriptor ADC_ADC_CR_ADEN = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CR_ADDIS = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CR_ADSTART = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CR_ADSTP = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CR_ADVREGEN = { 28, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CR_ADCAL = { 31, 1, 0 };


constexpr static u32 ADC_ADC_CFGR1_BASE = ADC_BASE + 12;
constexpr static RegisterFieldDescriptor ADC_ADC_CFGR1_DMAEN = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CFGR1_DMACFG = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CFGR1_SCANDIR = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CFGR1_RES = { 3, 2, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CFGR1_ALIGN = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CFGR1_EXTSEL = { 6, 3, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CFGR1_EXTEN = { 10, 2, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CFGR1_OVRMOD = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CFGR1_CONT = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CFGR1_WAIT = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CFGR1_AUTOFF = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CFGR1_DISCEN = { 16, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CFGR1_CHSELRMOD = { 21, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CFGR1_AWD1SGL = { 22, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CFGR1_AWD1EN = { 23, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CFGR1_AWD1CH = { 26, 5, 0 };


constexpr static u32 ADC_ADC_CFGR2_BASE = ADC_BASE + 16;
constexpr static RegisterFieldDescriptor ADC_ADC_CFGR2_OVSE = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CFGR2_OVSR = { 2, 3, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CFGR2_OVSS = { 5, 4, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CFGR2_TOVS = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CFGR2_LFTRIG = { 29, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CFGR2_CKMODE = { 30, 2, 0 };


constexpr static u32 ADC_ADC_SMPR_BASE = ADC_BASE + 20;
constexpr static RegisterFieldDescriptor ADC_ADC_SMPR_SMP1 = { 0, 3, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_SMPR_SMP2 = { 4, 3, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_SMPR_SMPSEL0 = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_SMPR_SMPSEL1 = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_SMPR_SMPSEL2 = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_SMPR_SMPSEL3 = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_SMPR_SMPSEL4 = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_SMPR_SMPSEL5 = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_SMPR_SMPSEL6 = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_SMPR_SMPSEL7 = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_SMPR_SMPSEL8 = { 16, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_SMPR_SMPSEL9 = { 17, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_SMPR_SMPSEL10 = { 18, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_SMPR_SMPSEL11 = { 19, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_SMPR_SMPSEL12 = { 20, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_SMPR_SMPSEL13 = { 21, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_SMPR_SMPSEL14 = { 22, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_SMPR_SMPSEL15 = { 23, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_SMPR_SMPSEL16 = { 24, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_SMPR_SMPSEL17 = { 25, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_SMPR_SMPSEL18 = { 26, 1, 0 };


constexpr static u32 ADC_ADC_AWD1TR_BASE = ADC_BASE + 32;
constexpr static RegisterFieldDescriptor ADC_ADC_AWD1TR_LT1 = { 0, 12, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_AWD1TR_HT1 = { 16, 12, 0 };


constexpr static u32 ADC_ADC_AWD2TR_BASE = ADC_BASE + 36;
constexpr static RegisterFieldDescriptor ADC_ADC_AWD2TR_LT2 = { 0, 12, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_AWD2TR_HT2 = { 16, 12, 0 };


constexpr static u32 ADC_ADC_CHSELR_0_BASE = ADC_BASE + 40;
constexpr static RegisterFieldDescriptor ADC_ADC_CHSELR_0_CHSEL0 = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CHSELR_0_CHSEL1 = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CHSELR_0_CHSEL2 = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CHSELR_0_CHSEL3 = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CHSELR_0_CHSEL4 = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CHSELR_0_CHSEL5 = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CHSELR_0_CHSEL6 = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CHSELR_0_CHSEL7 = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CHSELR_0_CHSEL8 = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CHSELR_0_CHSEL9 = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CHSELR_0_CHSEL10 = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CHSELR_0_CHSEL11 = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CHSELR_0_CHSEL12 = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CHSELR_0_CHSEL13 = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CHSELR_0_CHSEL14 = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CHSELR_0_CHSEL15 = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CHSELR_0_CHSEL16 = { 16, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CHSELR_0_CHSEL17 = { 17, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CHSELR_0_CHSEL18 = { 18, 1, 0 };


constexpr static u32 ADC_ADC_CHSELR_1_BASE = ADC_BASE + 40;
constexpr static RegisterFieldDescriptor ADC_ADC_CHSELR_1_SQ1 = { 0, 4, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CHSELR_1_SQ2 = { 4, 4, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CHSELR_1_SQ3 = { 8, 4, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CHSELR_1_SQ4 = { 12, 4, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CHSELR_1_SQ5 = { 16, 4, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CHSELR_1_SQ6 = { 20, 4, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CHSELR_1_SQ7 = { 24, 4, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CHSELR_1_SQ8 = { 28, 4, 0 };


constexpr static u32 ADC_ADC_AWD3TR_BASE = ADC_BASE + 44;
constexpr static RegisterFieldDescriptor ADC_ADC_AWD3TR_LT3 = { 0, 12, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_AWD3TR_HT3 = { 16, 12, 0 };


constexpr static u32 ADC_ADC_DR_BASE = ADC_BASE + 64;
constexpr static RegisterFieldDescriptor ADC_ADC_DR_DATA = { 0, 16, 1 };


constexpr static u32 ADC_ADC_AWD2CR_BASE = ADC_BASE + 160;
constexpr static RegisterFieldDescriptor ADC_ADC_AWD2CR_AWD2CH0 = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_AWD2CR_AWD2CH1 = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_AWD2CR_AWD2CH2 = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_AWD2CR_AWD2CH3 = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_AWD2CR_AWD2CH4 = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_AWD2CR_AWD2CH5 = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_AWD2CR_AWD2CH6 = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_AWD2CR_AWD2CH7 = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_AWD2CR_AWD2CH8 = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_AWD2CR_AWD2CH9 = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_AWD2CR_AWD2CH10 = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_AWD2CR_AWD2CH11 = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_AWD2CR_AWD2CH12 = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_AWD2CR_AWD2CH13 = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_AWD2CR_AWD2CH14 = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_AWD2CR_AWD2CH15 = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_AWD2CR_AWD2CH16 = { 16, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_AWD2CR_AWD2CH17 = { 17, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_AWD2CR_AWD2CH18 = { 18, 1, 0 };


constexpr static u32 ADC_ADC_AWD3CR_BASE = ADC_BASE + 164;
constexpr static RegisterFieldDescriptor ADC_ADC_AWD3CR_AWD3CH0 = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_AWD3CR_AWD3CH1 = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_AWD3CR_AWD3CH2 = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_AWD3CR_AWD3CH3 = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_AWD3CR_AWD3CH4 = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_AWD3CR_AWD3CH5 = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_AWD3CR_AWD3CH6 = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_AWD3CR_AWD3CH7 = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_AWD3CR_AWD3CH8 = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_AWD3CR_AWD3CH9 = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_AWD3CR_AWD3CH10 = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_AWD3CR_AWD3CH11 = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_AWD3CR_AWD3CH12 = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_AWD3CR_AWD3CH13 = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_AWD3CR_AWD3CH14 = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_AWD3CR_AWD3CH15 = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_AWD3CR_AWD3CH16 = { 16, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_AWD3CR_AWD3CH17 = { 17, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_AWD3CR_AWD3CH18 = { 18, 1, 0 };


constexpr static u32 ADC_ADC_CALFACT_BASE = ADC_BASE + 180;
constexpr static RegisterFieldDescriptor ADC_ADC_CALFACT_CALFACT = { 0, 7, 0 };


constexpr static u32 ADC_ADC_CCR_BASE = ADC_BASE + 776;
constexpr static RegisterFieldDescriptor ADC_ADC_CCR_PRESC = { 18, 4, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CCR_VREFEN = { 22, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CCR_TSEN = { 23, 1, 0 };
constexpr static RegisterFieldDescriptor ADC_ADC_CCR_VBATEN = { 24, 1, 0 };




constexpr static u32 IWDG_BASE = 1073754112;
constexpr static u32 IWDG_KR_BASE = IWDG_BASE + 0;
constexpr static RegisterFieldDescriptor IWDG_KR_KEY = { 0, 16, 2 };


constexpr static u32 IWDG_PR_BASE = IWDG_BASE + 4;
constexpr static RegisterFieldDescriptor IWDG_PR_PR = { 0, 3, 0 };


constexpr static u32 IWDG_RLR_BASE = IWDG_BASE + 8;
constexpr static RegisterFieldDescriptor IWDG_RLR_RL = { 0, 12, 0 };


constexpr static u32 IWDG_SR_BASE = IWDG_BASE + 12;
constexpr static RegisterFieldDescriptor IWDG_SR_PVU = { 0, 1, 1 };
constexpr static RegisterFieldDescriptor IWDG_SR_RVU = { 1, 1, 1 };
constexpr static RegisterFieldDescriptor IWDG_SR_WVU = { 2, 1, 1 };


constexpr static u32 IWDG_WINR_BASE = IWDG_BASE + 16;
constexpr static RegisterFieldDescriptor IWDG_WINR_WIN = { 0, 12, 0 };




constexpr static u32 WWDG_BASE = 1073753088;
constexpr static u32 WWDG_CR_BASE = WWDG_BASE + 0;
constexpr static RegisterFieldDescriptor WWDG_CR_T = { 0, 7, 0 };
constexpr static RegisterFieldDescriptor WWDG_CR_WDGA = { 7, 1, 0 };


constexpr static u32 WWDG_CFR_BASE = WWDG_BASE + 4;
constexpr static RegisterFieldDescriptor WWDG_CFR_W = { 0, 7, 0 };
constexpr static RegisterFieldDescriptor WWDG_CFR_EWI = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor WWDG_CFR_WDGTB = { 11, 3, 0 };


constexpr static u32 WWDG_SR_BASE = WWDG_BASE + 8;
constexpr static RegisterFieldDescriptor WWDG_SR_EWIF = { 0, 1, 0 };




constexpr static u32 FLASH_BASE = 1073881088;
constexpr static u32 FLASH_ACR_BASE = FLASH_BASE + 0;
constexpr static RegisterFieldDescriptor FLASH_ACR_LATENCY = { 0, 3, 0 };
constexpr static RegisterFieldDescriptor FLASH_ACR_PRFTEN = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor FLASH_ACR_ICEN = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor FLASH_ACR_ICRST = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor FLASH_ACR_EMPTY = { 16, 1, 0 };


constexpr static u32 FLASH_KEYR_BASE = FLASH_BASE + 8;
constexpr static RegisterFieldDescriptor FLASH_KEYR_KEYR = { 0, 32, 2 };


constexpr static u32 FLASH_OPTKEYR_BASE = FLASH_BASE + 12;
constexpr static RegisterFieldDescriptor FLASH_OPTKEYR_OPTKEYR = { 0, 32, 2 };


constexpr static u32 FLASH_SR_BASE = FLASH_BASE + 16;
constexpr static RegisterFieldDescriptor FLASH_SR_EOP = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor FLASH_SR_OPERR = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor FLASH_SR_PROGERR = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor FLASH_SR_WRPERR = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor FLASH_SR_PGAERR = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor FLASH_SR_SIZERR = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor FLASH_SR_PGSERR = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor FLASH_SR_MISERR = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor FLASH_SR_FASTERR = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor FLASH_SR_OPTVERR = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor FLASH_SR_BSY1 = { 16, 1, 0 };
constexpr static RegisterFieldDescriptor FLASH_SR_BSY2 = { 17, 1, 0 };
constexpr static RegisterFieldDescriptor FLASH_SR_CFGBSY = { 18, 1, 0 };


constexpr static u32 FLASH_CR_BASE = FLASH_BASE + 20;
constexpr static RegisterFieldDescriptor FLASH_CR_PG = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor FLASH_CR_PER = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor FLASH_CR_MER1 = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor FLASH_CR_PNB = { 3, 10, 0 };
constexpr static RegisterFieldDescriptor FLASH_CR_BKER = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor FLASH_CR_MER2 = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor FLASH_CR_STRT = { 16, 1, 0 };
constexpr static RegisterFieldDescriptor FLASH_CR_OPTSTRT = { 17, 1, 0 };
constexpr static RegisterFieldDescriptor FLASH_CR_FSTPG = { 18, 1, 0 };
constexpr static RegisterFieldDescriptor FLASH_CR_EOPIE = { 24, 1, 0 };
constexpr static RegisterFieldDescriptor FLASH_CR_ERRIE = { 25, 1, 0 };
constexpr static RegisterFieldDescriptor FLASH_CR_OBL_LAUNCH = { 27, 1, 0 };
constexpr static RegisterFieldDescriptor FLASH_CR_OPTLOCK = { 30, 1, 0 };
constexpr static RegisterFieldDescriptor FLASH_CR_LOCK = { 31, 1, 0 };


constexpr static u32 FLASH_ECCR_BASE = FLASH_BASE + 24;
constexpr static RegisterFieldDescriptor FLASH_ECCR_ADDR_ECC = { 0, 14, 1 };
constexpr static RegisterFieldDescriptor FLASH_ECCR_SYSF_ECC = { 20, 1, 1 };
constexpr static RegisterFieldDescriptor FLASH_ECCR_ECCIE = { 24, 1, 0 };
constexpr static RegisterFieldDescriptor FLASH_ECCR_ECCC = { 30, 1, 0 };
constexpr static RegisterFieldDescriptor FLASH_ECCR_ECCD = { 31, 1, 0 };


constexpr static u32 FLASH_ECCR2_BASE = FLASH_BASE + 28;
constexpr static RegisterFieldDescriptor FLASH_ECCR2_ADDR_ECC = { 0, 14, 1 };
constexpr static RegisterFieldDescriptor FLASH_ECCR2_SYSF_ECC = { 20, 1, 1 };
constexpr static RegisterFieldDescriptor FLASH_ECCR2_ECCIE = { 24, 1, 0 };
constexpr static RegisterFieldDescriptor FLASH_ECCR2_ECCC = { 30, 1, 0 };
constexpr static RegisterFieldDescriptor FLASH_ECCR2_ECCD = { 31, 1, 0 };


constexpr static u32 FLASH_OPTR_BASE = FLASH_BASE + 32;
constexpr static RegisterFieldDescriptor FLASH_OPTR_RDP = { 0, 8, 0 };
constexpr static RegisterFieldDescriptor FLASH_OPTR_nRST_STOP = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor FLASH_OPTR_nRST_STDBY = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor FLASH_OPTR_IDWG_SW = { 16, 1, 0 };
constexpr static RegisterFieldDescriptor FLASH_OPTR_IWDG_STOP = { 17, 1, 0 };
constexpr static RegisterFieldDescriptor FLASH_OPTR_IWDG_STDBY = { 18, 1, 0 };
constexpr static RegisterFieldDescriptor FLASH_OPTR_WWDG_SW = { 19, 1, 0 };
constexpr static RegisterFieldDescriptor FLASH_OPTR_nSWAP_BANK = { 20, 1, 0 };
constexpr static RegisterFieldDescriptor FLASH_OPTR_DUAL_BANK = { 21, 1, 0 };
constexpr static RegisterFieldDescriptor FLASH_OPTR_RAM_PARITY_CHECK = { 22, 1, 0 };
constexpr static RegisterFieldDescriptor FLASH_OPTR_nBOOT_SEL = { 24, 1, 0 };
constexpr static RegisterFieldDescriptor FLASH_OPTR_nBOOT1 = { 25, 1, 0 };
constexpr static RegisterFieldDescriptor FLASH_OPTR_nBOOT0 = { 26, 1, 0 };


constexpr static u32 FLASH_WRP1AR_BASE = FLASH_BASE + 44;
constexpr static RegisterFieldDescriptor FLASH_WRP1AR_WRP1A_STRT = { 0, 7, 1 };
constexpr static RegisterFieldDescriptor FLASH_WRP1AR_WRP1A_END = { 16, 7, 1 };


constexpr static u32 FLASH_WRP1BR_BASE = FLASH_BASE + 48;
constexpr static RegisterFieldDescriptor FLASH_WRP1BR_WRP1B_STRT = { 0, 7, 1 };
constexpr static RegisterFieldDescriptor FLASH_WRP1BR_WRP1B_END = { 16, 7, 1 };


constexpr static u32 FLASH_WRP2AR_BASE = FLASH_BASE + 76;
constexpr static RegisterFieldDescriptor FLASH_WRP2AR_WRP2A_STRT = { 0, 7, 0 };
constexpr static RegisterFieldDescriptor FLASH_WRP2AR_WRP2A_END = { 16, 7, 0 };


constexpr static u32 FLASH_WRP2BR_BASE = FLASH_BASE + 80;
constexpr static RegisterFieldDescriptor FLASH_WRP2BR_WRP2B_STRT = { 0, 7, 0 };
constexpr static RegisterFieldDescriptor FLASH_WRP2BR_WRP2B_END = { 16, 7, 0 };




constexpr static u32 RCC_BASE = 1073876992;
constexpr static u32 RCC_CR_BASE = RCC_BASE + 0;
constexpr static RegisterFieldDescriptor RCC_CR_HSION = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_CR_HSIKERON = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_CR_HSIRDY = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_CR_HSIDIV = { 11, 3, 0 };
constexpr static RegisterFieldDescriptor RCC_CR_HSEON = { 16, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_CR_HSERDY = { 17, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_CR_HSEBYP = { 18, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_CR_CSSON = { 19, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_CR_PLLON = { 24, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_CR_PLLRDY = { 25, 1, 0 };


constexpr static u32 RCC_ICSCR_BASE = RCC_BASE + 4;
constexpr static RegisterFieldDescriptor RCC_ICSCR_HSICAL = { 0, 8, 1 };
constexpr static RegisterFieldDescriptor RCC_ICSCR_HSITRIM = { 8, 7, 0 };


constexpr static u32 RCC_CFGR_BASE = RCC_BASE + 8;
constexpr static RegisterFieldDescriptor RCC_CFGR_SW = { 0, 3, 0 };
constexpr static RegisterFieldDescriptor RCC_CFGR_SWS = { 3, 3, 1 };
constexpr static RegisterFieldDescriptor RCC_CFGR_HPRE = { 8, 4, 0 };
constexpr static RegisterFieldDescriptor RCC_CFGR_PPRE = { 12, 3, 0 };
constexpr static RegisterFieldDescriptor RCC_CFGR_MCO2SEL = { 16, 4, 0 };
constexpr static RegisterFieldDescriptor RCC_CFGR_MCO2PRE = { 20, 4, 0 };
constexpr static RegisterFieldDescriptor RCC_CFGR_MCOSEL = { 24, 4, 0 };
constexpr static RegisterFieldDescriptor RCC_CFGR_MCOPRE = { 28, 4, 1 };


constexpr static u32 RCC_PLLSYSCFGR_BASE = RCC_BASE + 12;
constexpr static RegisterFieldDescriptor RCC_PLLSYSCFGR_PLLSRC = { 0, 2, 0 };
constexpr static RegisterFieldDescriptor RCC_PLLSYSCFGR_PLLM = { 4, 3, 0 };
constexpr static RegisterFieldDescriptor RCC_PLLSYSCFGR_PLLN = { 8, 8, 0 };
constexpr static RegisterFieldDescriptor RCC_PLLSYSCFGR_PLLPEN = { 16, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_PLLSYSCFGR_PLLP = { 17, 5, 0 };
constexpr static RegisterFieldDescriptor RCC_PLLSYSCFGR_PLLQEN = { 24, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_PLLSYSCFGR_PLLQ = { 25, 3, 0 };
constexpr static RegisterFieldDescriptor RCC_PLLSYSCFGR_PLLREN = { 28, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_PLLSYSCFGR_PLLR = { 29, 3, 0 };


constexpr static u32 RCC_CIER_BASE = RCC_BASE + 24;
constexpr static RegisterFieldDescriptor RCC_CIER_LSIRDYIE = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_CIER_LSERDYIE = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_CIER_HSIRDYIE = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_CIER_HSERDYIE = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_CIER_PLLSYSRDYIE = { 5, 1, 0 };


constexpr static u32 RCC_CIFR_BASE = RCC_BASE + 28;
constexpr static RegisterFieldDescriptor RCC_CIFR_LSIRDYF = { 0, 1, 1 };
constexpr static RegisterFieldDescriptor RCC_CIFR_LSERDYF = { 1, 1, 1 };
constexpr static RegisterFieldDescriptor RCC_CIFR_HSIRDYF = { 3, 1, 1 };
constexpr static RegisterFieldDescriptor RCC_CIFR_HSERDYF = { 4, 1, 1 };
constexpr static RegisterFieldDescriptor RCC_CIFR_PLLSYSRDYF = { 5, 1, 1 };
constexpr static RegisterFieldDescriptor RCC_CIFR_CSSF = { 8, 1, 1 };
constexpr static RegisterFieldDescriptor RCC_CIFR_LSECSSF = { 9, 1, 1 };


constexpr static u32 RCC_CICR_BASE = RCC_BASE + 32;
constexpr static RegisterFieldDescriptor RCC_CICR_LSIRDYC = { 0, 1, 2 };
constexpr static RegisterFieldDescriptor RCC_CICR_LSERDYC = { 1, 1, 2 };
constexpr static RegisterFieldDescriptor RCC_CICR_HSIRDYC = { 3, 1, 2 };
constexpr static RegisterFieldDescriptor RCC_CICR_HSERDYC = { 4, 1, 2 };
constexpr static RegisterFieldDescriptor RCC_CICR_PLLSYSRDYC = { 5, 1, 2 };
constexpr static RegisterFieldDescriptor RCC_CICR_CSSC = { 8, 1, 2 };
constexpr static RegisterFieldDescriptor RCC_CICR_LSECSSC = { 9, 1, 2 };


constexpr static u32 RCC_IOPRSTR_BASE = RCC_BASE + 36;
constexpr static RegisterFieldDescriptor RCC_IOPRSTR_GPIOARST = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_IOPRSTR_GPIOBRST = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_IOPRSTR_GPIOCRST = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_IOPRSTR_GPIODRST = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_IOPRSTR_GPIOERST = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_IOPRSTR_GPIOFRST = { 5, 1, 0 };


constexpr static u32 RCC_AHBRSTR_BASE = RCC_BASE + 40;
constexpr static RegisterFieldDescriptor RCC_AHBRSTR_DMA1RST = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_AHBRSTR_DMA2RST = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_AHBRSTR_FLASHRST = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_AHBRSTR_CRCRST = { 12, 1, 0 };


constexpr static u32 RCC_APBRSTR1_BASE = RCC_BASE + 44;
constexpr static RegisterFieldDescriptor RCC_APBRSTR1_TIM3RST = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBRSTR1_TIM4RST = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBRSTR1_TIM6RST = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBRSTR1_TIM7RST = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBRSTR1_USART5RST = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBRSTR1_USART6RST = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBRSTR1_USBRST = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBRSTR1_SPI2RST = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBRSTR1_SPI3RST = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBRSTR1_USART2RST = { 17, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBRSTR1_USART3RST = { 18, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBRSTR1_USART4RST = { 19, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBRSTR1_I2C1RST = { 21, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBRSTR1_I2C2RST = { 22, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBRSTR1_I2C3RST = { 23, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBRSTR1_DBGRST = { 27, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBRSTR1_PWRRST = { 28, 1, 0 };


constexpr static u32 RCC_APBRSTR2_BASE = RCC_BASE + 48;
constexpr static RegisterFieldDescriptor RCC_APBRSTR2_SYSCFGRST = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBRSTR2_TIM1RST = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBRSTR2_SPI1RST = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBRSTR2_USART1RST = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBRSTR2_TIM14RST = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBRSTR2_TIM15RST = { 16, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBRSTR2_TIM16RST = { 17, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBRSTR2_TIM17RST = { 18, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBRSTR2_ADCRST = { 20, 1, 0 };


constexpr static u32 RCC_IOPENR_BASE = RCC_BASE + 52;
constexpr static RegisterFieldDescriptor RCC_IOPENR_GPIOAEN = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_IOPENR_GPIOBEN = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_IOPENR_GPIOCEN = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_IOPENR_GPIODEN = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_IOPENR_GPIOFEN = { 5, 1, 0 };


constexpr static u32 RCC_AHBENR_BASE = RCC_BASE + 56;
constexpr static RegisterFieldDescriptor RCC_AHBENR_DMA1EN = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_AHBENR_FLASHEN = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_AHBENR_CRCEN = { 12, 1, 0 };


constexpr static u32 RCC_APBENR1_BASE = RCC_BASE + 60;
constexpr static RegisterFieldDescriptor RCC_APBENR1_TIM3EN = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBENR1_RTCAPBEN = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBENR1_WWDGEN = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBENR1_SPI2EN = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBENR1_USART2EN = { 17, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBENR1_I2C1EN = { 21, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBENR1_I2C2EN = { 22, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBENR1_DBGEN = { 27, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBENR1_PWREN = { 28, 1, 0 };


constexpr static u32 RCC_APBENR2_BASE = RCC_BASE + 64;
constexpr static RegisterFieldDescriptor RCC_APBENR2_SYSCFGEN = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBENR2_TIM1EN = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBENR2_SPI1EN = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBENR2_USART1EN = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBENR2_TIM14EN = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBENR2_TIM16EN = { 17, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBENR2_TIM17EN = { 18, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBENR2_ADCEN = { 20, 1, 0 };


constexpr static u32 RCC_IOPSMENR_BASE = RCC_BASE + 68;
constexpr static RegisterFieldDescriptor RCC_IOPSMENR_GPIOASMEN = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_IOPSMENR_GPIOBSMEN = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_IOPSMENR_GPIOCSMEN = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_IOPSMENR_GPIODSMEN = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_IOPSMENR_GPIOFSMEN = { 5, 1, 0 };


constexpr static u32 RCC_AHBSMENR_BASE = RCC_BASE + 72;
constexpr static RegisterFieldDescriptor RCC_AHBSMENR_DMA1SMEN = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_AHBSMENR_FLASHSMEN = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_AHBSMENR_SRAMSMEN = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_AHBSMENR_CRCSMEN = { 12, 1, 0 };


constexpr static u32 RCC_APBSMENR1_BASE = RCC_BASE + 76;
constexpr static RegisterFieldDescriptor RCC_APBSMENR1_TIM3SMEN = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBSMENR1_RTCAPBSMEN = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBSMENR1_WWDGSMEN = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBSMENR1_SPI2SMEN = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBSMENR1_USART2SMEN = { 17, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBSMENR1_I2C1SMEN = { 21, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBSMENR1_I2C2SMEN = { 22, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBSMENR1_DBGSMEN = { 27, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBSMENR1_PWRSMEN = { 28, 1, 0 };


constexpr static u32 RCC_APBSMENR2_BASE = RCC_BASE + 80;
constexpr static RegisterFieldDescriptor RCC_APBSMENR2_SYSCFGSMEN = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBSMENR2_TIM1SMEN = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBSMENR2_SPI1SMEN = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBSMENR2_USART1SMEN = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBSMENR2_TIM14SMEN = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBSMENR2_TIM16SMEN = { 17, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBSMENR2_TIM17SMEN = { 18, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_APBSMENR2_ADCSMEN = { 20, 1, 0 };


constexpr static u32 RCC_CCIPR_BASE = RCC_BASE + 84;
constexpr static RegisterFieldDescriptor RCC_CCIPR_USART1SEL = { 0, 2, 0 };
constexpr static RegisterFieldDescriptor RCC_CCIPR_I2C1SEL = { 12, 2, 0 };
constexpr static RegisterFieldDescriptor RCC_CCIPR_I2C2I2S1SEL = { 14, 2, 0 };
constexpr static RegisterFieldDescriptor RCC_CCIPR_TIM1SEL = { 22, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_CCIPR_ADCSEL = { 30, 2, 0 };


constexpr static u32 RCC_BDCR_BASE = RCC_BASE + 92;
constexpr static RegisterFieldDescriptor RCC_BDCR_LSEON = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_BDCR_LSERDY = { 1, 1, 1 };
constexpr static RegisterFieldDescriptor RCC_BDCR_LSEBYP = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_BDCR_LSEDRV = { 3, 2, 0 };
constexpr static RegisterFieldDescriptor RCC_BDCR_LSECSSON = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_BDCR_LSECSSD = { 6, 1, 1 };
constexpr static RegisterFieldDescriptor RCC_BDCR_RTCSEL = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor RCC_BDCR_RTCEN = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_BDCR_BDRST = { 16, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_BDCR_LSCOEN = { 24, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_BDCR_LSCOSEL = { 25, 1, 0 };


constexpr static u32 RCC_CSR_BASE = RCC_BASE + 96;
constexpr static RegisterFieldDescriptor RCC_CSR_LSION = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_CSR_LSIRDY = { 1, 1, 1 };
constexpr static RegisterFieldDescriptor RCC_CSR_RMVF = { 23, 1, 0 };
constexpr static RegisterFieldDescriptor RCC_CSR_OBLRSTF = { 25, 1, 1 };
constexpr static RegisterFieldDescriptor RCC_CSR_PINRSTF = { 26, 1, 1 };
constexpr static RegisterFieldDescriptor RCC_CSR_PWRRSTF = { 27, 1, 1 };
constexpr static RegisterFieldDescriptor RCC_CSR_SFTRSTF = { 28, 1, 1 };
constexpr static RegisterFieldDescriptor RCC_CSR_IWDGRSTF = { 29, 1, 1 };
constexpr static RegisterFieldDescriptor RCC_CSR_WWDGRSTF = { 30, 1, 1 };
constexpr static RegisterFieldDescriptor RCC_CSR_LPWRRSTF = { 31, 1, 1 };




constexpr static u32 PWR_BASE = 1073770496;
constexpr static u32 PWR_CR1_BASE = PWR_BASE + 0;
constexpr static RegisterFieldDescriptor PWR_CR1_LPMS = { 0, 3, 0 };
constexpr static RegisterFieldDescriptor PWR_CR1_FPD_STOP = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_CR1_FPD_LPRUN = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_CR1_FPD_LPSLP = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_CR1_DBP = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_CR1_VOS = { 9, 2, 0 };
constexpr static RegisterFieldDescriptor PWR_CR1_LPR = { 14, 1, 0 };


constexpr static u32 PWR_CR2_BASE = PWR_BASE + 4;
constexpr static RegisterFieldDescriptor PWR_CR2_USV = { 10, 1, 0 };


constexpr static u32 PWR_CR3_BASE = PWR_BASE + 8;
constexpr static RegisterFieldDescriptor PWR_CR3_EWUP1 = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_CR3_EWUP2 = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_CR3_EWUP3 = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_CR3_EWUP4 = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_CR3_EWUP5 = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_CR3_EWUP6 = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_CR3_APC = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_CR3_EIWUL = { 15, 1, 0 };


constexpr static u32 PWR_CR4_BASE = PWR_BASE + 12;
constexpr static RegisterFieldDescriptor PWR_CR4_WP1 = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_CR4_WP2 = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_CR4_WP3 = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_CR4_WP4 = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_CR4_WP5 = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_CR4_WP6 = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_CR4_VBE = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_CR4_VBRS = { 9, 1, 0 };


constexpr static u32 PWR_SR1_BASE = PWR_BASE + 16;
constexpr static RegisterFieldDescriptor PWR_SR1_WUF1 = { 0, 1, 1 };
constexpr static RegisterFieldDescriptor PWR_SR1_WUF2 = { 1, 1, 1 };
constexpr static RegisterFieldDescriptor PWR_SR1_WUF3 = { 2, 1, 1 };
constexpr static RegisterFieldDescriptor PWR_SR1_WUF4 = { 3, 1, 1 };
constexpr static RegisterFieldDescriptor PWR_SR1_WUF5 = { 4, 1, 1 };
constexpr static RegisterFieldDescriptor PWR_SR1_WUF6 = { 5, 1, 1 };
constexpr static RegisterFieldDescriptor PWR_SR1_SBF = { 8, 1, 1 };
constexpr static RegisterFieldDescriptor PWR_SR1_WUFI = { 15, 1, 1 };


constexpr static u32 PWR_SR2_BASE = PWR_BASE + 20;
constexpr static RegisterFieldDescriptor PWR_SR2_FLASH_RDY = { 7, 1, 1 };
constexpr static RegisterFieldDescriptor PWR_SR2_REGLPS = { 8, 1, 1 };
constexpr static RegisterFieldDescriptor PWR_SR2_REGLPF = { 9, 1, 1 };
constexpr static RegisterFieldDescriptor PWR_SR2_VOSF = { 10, 1, 1 };


constexpr static u32 PWR_SCR_BASE = PWR_BASE + 24;
constexpr static RegisterFieldDescriptor PWR_SCR_CWUF1 = { 0, 1, 2 };
constexpr static RegisterFieldDescriptor PWR_SCR_CWUF2 = { 1, 1, 2 };
constexpr static RegisterFieldDescriptor PWR_SCR_CWUF3 = { 2, 1, 2 };
constexpr static RegisterFieldDescriptor PWR_SCR_CWUF4 = { 3, 1, 2 };
constexpr static RegisterFieldDescriptor PWR_SCR_CWUF5 = { 4, 1, 2 };
constexpr static RegisterFieldDescriptor PWR_SCR_CWUF6 = { 5, 1, 2 };
constexpr static RegisterFieldDescriptor PWR_SCR_CSBF = { 8, 1, 2 };


constexpr static u32 PWR_PUCRA_BASE = PWR_BASE + 32;
constexpr static RegisterFieldDescriptor PWR_PUCRA_PU0 = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRA_PU1 = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRA_PU2 = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRA_PU3 = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRA_PU4 = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRA_PU5 = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRA_PU6 = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRA_PU7 = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRA_PU8 = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRA_PU9 = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRA_PU10 = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRA_PU11 = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRA_PU12 = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRA_PU13 = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRA_PU14 = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRA_PU15 = { 15, 1, 0 };


constexpr static u32 PWR_PDCRA_BASE = PWR_BASE + 36;
constexpr static RegisterFieldDescriptor PWR_PDCRA_PD0 = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRA_PD1 = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRA_PD2 = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRA_PD3 = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRA_PD4 = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRA_PD5 = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRA_PD6 = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRA_PD7 = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRA_PD8 = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRA_PD9 = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRA_PD10 = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRA_PD11 = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRA_PD12 = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRA_PD13 = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRA_PD14 = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRA_PD15 = { 15, 1, 0 };


constexpr static u32 PWR_PUCRB_BASE = PWR_BASE + 40;
constexpr static RegisterFieldDescriptor PWR_PUCRB_PU0 = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRB_PU1 = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRB_PU2 = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRB_PU3 = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRB_PU4 = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRB_PU5 = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRB_PU6 = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRB_PU7 = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRB_PU8 = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRB_PU9 = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRB_PU10 = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRB_PU11 = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRB_PU12 = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRB_PU13 = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRB_PU14 = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRB_PU15 = { 15, 1, 0 };


constexpr static u32 PWR_PDCRB_BASE = PWR_BASE + 44;
constexpr static RegisterFieldDescriptor PWR_PDCRB_PD0 = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRB_PD1 = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRB_PD2 = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRB_PD3 = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRB_PD4 = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRB_PD5 = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRB_PD6 = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRB_PD7 = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRB_PD8 = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRB_PD9 = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRB_PD10 = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRB_PD11 = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRB_PD12 = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRB_PD13 = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRB_PD14 = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRB_PD15 = { 15, 1, 0 };


constexpr static u32 PWR_PUCRC_BASE = PWR_BASE + 48;
constexpr static RegisterFieldDescriptor PWR_PUCRC_PU0 = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRC_PU1 = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRC_PU2 = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRC_PU3 = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRC_PU4 = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRC_PU5 = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRC_PU6 = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRC_PU7 = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRC_PU8 = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRC_PU9 = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRC_PU10 = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRC_PU11 = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRC_PU12 = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRC_PU13 = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRC_PU14 = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRC_PU15 = { 15, 1, 0 };


constexpr static u32 PWR_PDCRC_BASE = PWR_BASE + 52;
constexpr static RegisterFieldDescriptor PWR_PDCRC_PD0 = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRC_PD1 = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRC_PD2 = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRC_PD3 = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRC_PD4 = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRC_PD5 = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRC_PD6 = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRC_PD7 = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRC_PD8 = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRC_PD9 = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRC_PD10 = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRC_PD11 = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRC_PD12 = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRC_PD13 = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRC_PD14 = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRC_PD15 = { 15, 1, 0 };


constexpr static u32 PWR_PUCRD_BASE = PWR_BASE + 56;
constexpr static RegisterFieldDescriptor PWR_PUCRD_PU0 = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRD_PU1 = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRD_PU2 = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRD_PU3 = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRD_PU4 = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRD_PU5 = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRD_PU6 = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRD_PU7 = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRD_PU8 = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRD_PU9 = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRD_PU10 = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRD_PU11 = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRD_PU12 = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRD_PU13 = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRD_PU14 = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRD_PU15 = { 15, 1, 0 };


constexpr static u32 PWR_PDCRD_BASE = PWR_BASE + 60;
constexpr static RegisterFieldDescriptor PWR_PDCRD_PD0 = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRD_PD1 = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRD_PD2 = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRD_PD3 = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRD_PD4 = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRD_PD5 = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRD_PD6 = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRD_PD7 = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRD_PD8 = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRD_PD9 = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRD_PD10 = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRD_PD11 = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRD_PD12 = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRD_PD13 = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRD_PD14 = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRD_PD15 = { 15, 1, 0 };


constexpr static u32 PWR_PUCRE_BASE = PWR_BASE + 64;
constexpr static RegisterFieldDescriptor PWR_PUCRE_PU0 = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRE_PU1 = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRE_PU2 = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRE_PU3 = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRE_PU4 = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRE_PU5 = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRE_PU6 = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRE_PU7 = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRE_PU8 = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRE_PU9 = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRE_PU10 = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRE_PU11 = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRE_PU12 = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRE_PU13 = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRE_PU14 = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRE_PU15 = { 15, 1, 0 };


constexpr static u32 PWR_PDCRE_BASE = PWR_BASE + 68;
constexpr static RegisterFieldDescriptor PWR_PDCRE_PD0 = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRE_PD1 = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRE_PD2 = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRE_PD3 = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRE_PD4 = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRE_PD5 = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRE_PD6 = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRE_PD7 = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRE_PD8 = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRE_PD9 = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRE_PD10 = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRE_PD11 = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRE_PD12 = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRE_PD13 = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRE_PD14 = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRE_PD15 = { 15, 1, 0 };


constexpr static u32 PWR_PUCRF_BASE = PWR_BASE + 72;
constexpr static RegisterFieldDescriptor PWR_PUCRF_PU0 = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRF_PU1 = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRF_PU2 = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRF_PU3 = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRF_PU4 = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRF_PU5 = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRF_PU6 = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRF_PU7 = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRF_PU8 = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRF_PU9 = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRF_PU10 = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRF_PU11 = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRF_PU12 = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PUCRF_PU13 = { 13, 1, 0 };


constexpr static u32 PWR_PDCRF_BASE = PWR_BASE + 76;
constexpr static RegisterFieldDescriptor PWR_PDCRF_PD0 = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRF_PD1 = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRF_PD2 = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRF_PD3 = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRF_PD4 = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRF_PD5 = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRF_PD6 = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRF_PD7 = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRF_PD8 = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRF_PD9 = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRF_PD10 = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRF_PD11 = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRF_PD12 = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor PWR_PDCRF_PD13 = { 13, 1, 0 };




constexpr static u32 DMA1_BASE = 1073872896;
constexpr static u32 DMA1_DMA_ISR_BASE = DMA1_BASE + 0;
constexpr static RegisterFieldDescriptor DMA1_DMA_ISR_GIF1 = { 0, 1, 1 };
constexpr static RegisterFieldDescriptor DMA1_DMA_ISR_TCIF1 = { 1, 1, 1 };
constexpr static RegisterFieldDescriptor DMA1_DMA_ISR_HTIF1 = { 2, 1, 1 };
constexpr static RegisterFieldDescriptor DMA1_DMA_ISR_TEIF1 = { 3, 1, 1 };
constexpr static RegisterFieldDescriptor DMA1_DMA_ISR_GIF2 = { 4, 1, 1 };
constexpr static RegisterFieldDescriptor DMA1_DMA_ISR_TCIF2 = { 5, 1, 1 };
constexpr static RegisterFieldDescriptor DMA1_DMA_ISR_HTIF2 = { 6, 1, 1 };
constexpr static RegisterFieldDescriptor DMA1_DMA_ISR_TEIF2 = { 7, 1, 1 };
constexpr static RegisterFieldDescriptor DMA1_DMA_ISR_GIF3 = { 8, 1, 1 };
constexpr static RegisterFieldDescriptor DMA1_DMA_ISR_TCIF3 = { 9, 1, 1 };
constexpr static RegisterFieldDescriptor DMA1_DMA_ISR_HTIF3 = { 10, 1, 1 };
constexpr static RegisterFieldDescriptor DMA1_DMA_ISR_TEIF3 = { 11, 1, 1 };
constexpr static RegisterFieldDescriptor DMA1_DMA_ISR_GIF4 = { 12, 1, 1 };
constexpr static RegisterFieldDescriptor DMA1_DMA_ISR_TCIF4 = { 13, 1, 1 };
constexpr static RegisterFieldDescriptor DMA1_DMA_ISR_HTIF4 = { 14, 1, 1 };
constexpr static RegisterFieldDescriptor DMA1_DMA_ISR_TEIF4 = { 15, 1, 1 };
constexpr static RegisterFieldDescriptor DMA1_DMA_ISR_GIF5 = { 16, 1, 1 };
constexpr static RegisterFieldDescriptor DMA1_DMA_ISR_TCIF5 = { 17, 1, 1 };
constexpr static RegisterFieldDescriptor DMA1_DMA_ISR_HTIF5 = { 18, 1, 1 };
constexpr static RegisterFieldDescriptor DMA1_DMA_ISR_TEIF5 = { 19, 1, 1 };
constexpr static RegisterFieldDescriptor DMA1_DMA_ISR_GIF6 = { 20, 1, 1 };
constexpr static RegisterFieldDescriptor DMA1_DMA_ISR_TCIF6 = { 21, 1, 1 };
constexpr static RegisterFieldDescriptor DMA1_DMA_ISR_HTIF6 = { 22, 1, 1 };
constexpr static RegisterFieldDescriptor DMA1_DMA_ISR_TEIF6 = { 23, 1, 1 };
constexpr static RegisterFieldDescriptor DMA1_DMA_ISR_GIF7 = { 24, 1, 1 };
constexpr static RegisterFieldDescriptor DMA1_DMA_ISR_TCIF7 = { 25, 1, 1 };
constexpr static RegisterFieldDescriptor DMA1_DMA_ISR_HTIF7 = { 26, 1, 1 };
constexpr static RegisterFieldDescriptor DMA1_DMA_ISR_TEIF7 = { 27, 1, 1 };


constexpr static u32 DMA1_DMA_IFCR_BASE = DMA1_BASE + 4;
constexpr static RegisterFieldDescriptor DMA1_DMA_IFCR_CGIF1 = { 0, 1, 2 };
constexpr static RegisterFieldDescriptor DMA1_DMA_IFCR_CTCIF1 = { 1, 1, 2 };
constexpr static RegisterFieldDescriptor DMA1_DMA_IFCR_CHTIF1 = { 2, 1, 2 };
constexpr static RegisterFieldDescriptor DMA1_DMA_IFCR_CTEIF1 = { 3, 1, 2 };
constexpr static RegisterFieldDescriptor DMA1_DMA_IFCR_CGIF2 = { 4, 1, 2 };
constexpr static RegisterFieldDescriptor DMA1_DMA_IFCR_CTCIF2 = { 5, 1, 2 };
constexpr static RegisterFieldDescriptor DMA1_DMA_IFCR_CHTIF2 = { 6, 1, 2 };
constexpr static RegisterFieldDescriptor DMA1_DMA_IFCR_CTEIF2 = { 7, 1, 2 };
constexpr static RegisterFieldDescriptor DMA1_DMA_IFCR_CGIF3 = { 8, 1, 2 };
constexpr static RegisterFieldDescriptor DMA1_DMA_IFCR_CTCIF3 = { 9, 1, 2 };
constexpr static RegisterFieldDescriptor DMA1_DMA_IFCR_CHTIF3 = { 10, 1, 2 };
constexpr static RegisterFieldDescriptor DMA1_DMA_IFCR_CTEIF3 = { 11, 1, 2 };
constexpr static RegisterFieldDescriptor DMA1_DMA_IFCR_CGIF4 = { 12, 1, 2 };
constexpr static RegisterFieldDescriptor DMA1_DMA_IFCR_CTCIF4 = { 13, 1, 2 };
constexpr static RegisterFieldDescriptor DMA1_DMA_IFCR_CHTIF4 = { 14, 1, 2 };
constexpr static RegisterFieldDescriptor DMA1_DMA_IFCR_CTEIF4 = { 15, 1, 2 };
constexpr static RegisterFieldDescriptor DMA1_DMA_IFCR_CGIF5 = { 16, 1, 2 };
constexpr static RegisterFieldDescriptor DMA1_DMA_IFCR_CTCIF5 = { 17, 1, 2 };
constexpr static RegisterFieldDescriptor DMA1_DMA_IFCR_CHTIF5 = { 18, 1, 2 };
constexpr static RegisterFieldDescriptor DMA1_DMA_IFCR_CTEIF5 = { 19, 1, 2 };
constexpr static RegisterFieldDescriptor DMA1_DMA_IFCR_CGIF6 = { 20, 1, 2 };
constexpr static RegisterFieldDescriptor DMA1_DMA_IFCR_CTCIF6 = { 21, 1, 2 };
constexpr static RegisterFieldDescriptor DMA1_DMA_IFCR_CHTIF6 = { 22, 1, 2 };
constexpr static RegisterFieldDescriptor DMA1_DMA_IFCR_CTEIF6 = { 23, 1, 2 };
constexpr static RegisterFieldDescriptor DMA1_DMA_IFCR_CGIF7 = { 24, 1, 2 };
constexpr static RegisterFieldDescriptor DMA1_DMA_IFCR_CTCIF7 = { 25, 1, 2 };
constexpr static RegisterFieldDescriptor DMA1_DMA_IFCR_CHTIF7 = { 26, 1, 2 };
constexpr static RegisterFieldDescriptor DMA1_DMA_IFCR_CTEIF7 = { 27, 1, 2 };


constexpr static u32 DMA1_DMA_CCR1_BASE = DMA1_BASE + 8;
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR1_EN = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR1_TCIE = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR1_HTIE = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR1_TEIE = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR1_DIR = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR1_CIRC = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR1_PINC = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR1_MINC = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR1_PSIZE = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR1_MSIZE = { 10, 2, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR1_PL = { 12, 2, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR1_MEM2MEM = { 14, 1, 0 };


constexpr static u32 DMA1_DMA_CNDTR1_BASE = DMA1_BASE + 12;
constexpr static RegisterFieldDescriptor DMA1_DMA_CNDTR1_NDT = { 0, 16, 0 };


constexpr static u32 DMA1_DMA_CPAR1_BASE = DMA1_BASE + 16;
constexpr static RegisterFieldDescriptor DMA1_DMA_CPAR1_PA = { 0, 32, 0 };


constexpr static u32 DMA1_DMA_CMAR1_BASE = DMA1_BASE + 20;
constexpr static RegisterFieldDescriptor DMA1_DMA_CMAR1_MA = { 0, 32, 0 };


constexpr static u32 DMA1_DMA_CCR2_BASE = DMA1_BASE + 28;
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR2_EN = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR2_TCIE = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR2_HTIE = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR2_TEIE = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR2_DIR = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR2_CIRC = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR2_PINC = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR2_MINC = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR2_PSIZE = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR2_MSIZE = { 10, 2, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR2_PL = { 12, 2, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR2_MEM2MEM = { 14, 1, 0 };


constexpr static u32 DMA1_DMA_CNDTR2_BASE = DMA1_BASE + 32;
constexpr static RegisterFieldDescriptor DMA1_DMA_CNDTR2_NDT = { 0, 16, 0 };


constexpr static u32 DMA1_DMA_CPAR2_BASE = DMA1_BASE + 36;
constexpr static RegisterFieldDescriptor DMA1_DMA_CPAR2_PA = { 0, 32, 0 };


constexpr static u32 DMA1_DMA_CMAR2_BASE = DMA1_BASE + 40;
constexpr static RegisterFieldDescriptor DMA1_DMA_CMAR2_MA = { 0, 32, 0 };


constexpr static u32 DMA1_DMA_CCR3_BASE = DMA1_BASE + 48;
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR3_EN = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR3_TCIE = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR3_HTIE = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR3_TEIE = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR3_DIR = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR3_CIRC = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR3_PINC = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR3_MINC = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR3_PSIZE = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR3_MSIZE = { 10, 2, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR3_PL = { 12, 2, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR3_MEM2MEM = { 14, 1, 0 };


constexpr static u32 DMA1_DMA_CNDTR3_BASE = DMA1_BASE + 52;
constexpr static RegisterFieldDescriptor DMA1_DMA_CNDTR3_NDT = { 0, 16, 0 };


constexpr static u32 DMA1_DMA_CPAR3_BASE = DMA1_BASE + 56;
constexpr static RegisterFieldDescriptor DMA1_DMA_CPAR3_PA = { 0, 32, 0 };


constexpr static u32 DMA1_DMA_CMAR3_BASE = DMA1_BASE + 60;
constexpr static RegisterFieldDescriptor DMA1_DMA_CMAR3_MA = { 0, 32, 0 };


constexpr static u32 DMA1_DMA_CCR4_BASE = DMA1_BASE + 68;
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR4_EN = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR4_TCIE = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR4_HTIE = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR4_TEIE = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR4_DIR = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR4_CIRC = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR4_PINC = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR4_MINC = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR4_PSIZE = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR4_MSIZE = { 10, 2, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR4_PL = { 12, 2, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR4_MEM2MEM = { 14, 1, 0 };


constexpr static u32 DMA1_DMA_CNDTR4_BASE = DMA1_BASE + 72;
constexpr static RegisterFieldDescriptor DMA1_DMA_CNDTR4_NDT = { 0, 16, 0 };


constexpr static u32 DMA1_DMA_CPAR4_BASE = DMA1_BASE + 76;
constexpr static RegisterFieldDescriptor DMA1_DMA_CPAR4_PA = { 0, 32, 0 };


constexpr static u32 DMA1_DMA_CMAR4_BASE = DMA1_BASE + 80;
constexpr static RegisterFieldDescriptor DMA1_DMA_CMAR4_MA = { 0, 32, 0 };


constexpr static u32 DMA1_DMA_CCR5_BASE = DMA1_BASE + 88;
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR5_EN = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR5_TCIE = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR5_HTIE = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR5_TEIE = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR5_DIR = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR5_CIRC = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR5_PINC = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR5_MINC = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR5_PSIZE = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR5_MSIZE = { 10, 2, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR5_PL = { 12, 2, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR5_MEM2MEM = { 14, 1, 0 };


constexpr static u32 DMA1_DMA_CNDTR5_BASE = DMA1_BASE + 92;
constexpr static RegisterFieldDescriptor DMA1_DMA_CNDTR5_NDT = { 0, 16, 0 };


constexpr static u32 DMA1_DMA_CPAR5_BASE = DMA1_BASE + 96;
constexpr static RegisterFieldDescriptor DMA1_DMA_CPAR5_PA = { 0, 32, 0 };


constexpr static u32 DMA1_DMA_CMAR5_BASE = DMA1_BASE + 100;
constexpr static RegisterFieldDescriptor DMA1_DMA_CMAR5_MA = { 0, 32, 0 };


constexpr static u32 DMA1_DMA_CCR6_BASE = DMA1_BASE + 108;
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR6_EN = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR6_TCIE = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR6_HTIE = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR6_TEIE = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR6_DIR = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR6_CIRC = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR6_PINC = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR6_MINC = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR6_PSIZE = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR6_MSIZE = { 10, 2, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR6_PL = { 12, 2, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR6_MEM2MEM = { 14, 1, 0 };


constexpr static u32 DMA1_DMA_CNDTR6_BASE = DMA1_BASE + 112;
constexpr static RegisterFieldDescriptor DMA1_DMA_CNDTR6_NDT = { 0, 16, 0 };


constexpr static u32 DMA1_DMA_CPAR6_BASE = DMA1_BASE + 116;
constexpr static RegisterFieldDescriptor DMA1_DMA_CPAR6_PA = { 0, 32, 0 };


constexpr static u32 DMA1_DMA_CMAR6_BASE = DMA1_BASE + 120;
constexpr static RegisterFieldDescriptor DMA1_DMA_CMAR6_MA = { 0, 32, 0 };


constexpr static u32 DMA1_DMA_CCR7_BASE = DMA1_BASE + 128;
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR7_EN = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR7_TCIE = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR7_HTIE = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR7_TEIE = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR7_DIR = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR7_CIRC = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR7_PINC = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR7_MINC = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR7_PSIZE = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR7_MSIZE = { 10, 2, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR7_PL = { 12, 2, 0 };
constexpr static RegisterFieldDescriptor DMA1_DMA_CCR7_MEM2MEM = { 14, 1, 0 };


constexpr static u32 DMA1_DMA_CNDTR7_BASE = DMA1_BASE + 132;
constexpr static RegisterFieldDescriptor DMA1_DMA_CNDTR7_NDT = { 0, 16, 0 };


constexpr static u32 DMA1_DMA_CPAR7_BASE = DMA1_BASE + 136;
constexpr static RegisterFieldDescriptor DMA1_DMA_CPAR7_PA = { 0, 32, 0 };


constexpr static u32 DMA1_DMA_CMAR7_BASE = DMA1_BASE + 140;
constexpr static RegisterFieldDescriptor DMA1_DMA_CMAR7_MA = { 0, 32, 0 };




constexpr static u32 DMA2_BASE = 1073873920;
constexpr static u32 DMA2_DMA_ISR_BASE = DMA2_BASE + 0;
constexpr static RegisterFieldDescriptor DMA2_DMA_ISR_GIF1 = { 0, 1, 1 };
constexpr static RegisterFieldDescriptor DMA2_DMA_ISR_TCIF1 = { 1, 1, 1 };
constexpr static RegisterFieldDescriptor DMA2_DMA_ISR_HTIF1 = { 2, 1, 1 };
constexpr static RegisterFieldDescriptor DMA2_DMA_ISR_TEIF1 = { 3, 1, 1 };
constexpr static RegisterFieldDescriptor DMA2_DMA_ISR_GIF2 = { 4, 1, 1 };
constexpr static RegisterFieldDescriptor DMA2_DMA_ISR_TCIF2 = { 5, 1, 1 };
constexpr static RegisterFieldDescriptor DMA2_DMA_ISR_HTIF2 = { 6, 1, 1 };
constexpr static RegisterFieldDescriptor DMA2_DMA_ISR_TEIF2 = { 7, 1, 1 };
constexpr static RegisterFieldDescriptor DMA2_DMA_ISR_GIF3 = { 8, 1, 1 };
constexpr static RegisterFieldDescriptor DMA2_DMA_ISR_TCIF3 = { 9, 1, 1 };
constexpr static RegisterFieldDescriptor DMA2_DMA_ISR_HTIF3 = { 10, 1, 1 };
constexpr static RegisterFieldDescriptor DMA2_DMA_ISR_TEIF3 = { 11, 1, 1 };
constexpr static RegisterFieldDescriptor DMA2_DMA_ISR_GIF4 = { 12, 1, 1 };
constexpr static RegisterFieldDescriptor DMA2_DMA_ISR_TCIF4 = { 13, 1, 1 };
constexpr static RegisterFieldDescriptor DMA2_DMA_ISR_HTIF4 = { 14, 1, 1 };
constexpr static RegisterFieldDescriptor DMA2_DMA_ISR_TEIF4 = { 15, 1, 1 };
constexpr static RegisterFieldDescriptor DMA2_DMA_ISR_GIF5 = { 16, 1, 1 };
constexpr static RegisterFieldDescriptor DMA2_DMA_ISR_TCIF5 = { 17, 1, 1 };
constexpr static RegisterFieldDescriptor DMA2_DMA_ISR_HTIF5 = { 18, 1, 1 };
constexpr static RegisterFieldDescriptor DMA2_DMA_ISR_TEIF5 = { 19, 1, 1 };
constexpr static RegisterFieldDescriptor DMA2_DMA_ISR_GIF6 = { 20, 1, 1 };
constexpr static RegisterFieldDescriptor DMA2_DMA_ISR_TCIF6 = { 21, 1, 1 };
constexpr static RegisterFieldDescriptor DMA2_DMA_ISR_HTIF6 = { 22, 1, 1 };
constexpr static RegisterFieldDescriptor DMA2_DMA_ISR_TEIF6 = { 23, 1, 1 };
constexpr static RegisterFieldDescriptor DMA2_DMA_ISR_GIF7 = { 24, 1, 1 };
constexpr static RegisterFieldDescriptor DMA2_DMA_ISR_TCIF7 = { 25, 1, 1 };
constexpr static RegisterFieldDescriptor DMA2_DMA_ISR_HTIF7 = { 26, 1, 1 };
constexpr static RegisterFieldDescriptor DMA2_DMA_ISR_TEIF7 = { 27, 1, 1 };


constexpr static u32 DMA2_DMA_IFCR_BASE = DMA2_BASE + 4;
constexpr static RegisterFieldDescriptor DMA2_DMA_IFCR_CGIF1 = { 0, 1, 2 };
constexpr static RegisterFieldDescriptor DMA2_DMA_IFCR_CTCIF1 = { 1, 1, 2 };
constexpr static RegisterFieldDescriptor DMA2_DMA_IFCR_CHTIF1 = { 2, 1, 2 };
constexpr static RegisterFieldDescriptor DMA2_DMA_IFCR_CTEIF1 = { 3, 1, 2 };
constexpr static RegisterFieldDescriptor DMA2_DMA_IFCR_CGIF2 = { 4, 1, 2 };
constexpr static RegisterFieldDescriptor DMA2_DMA_IFCR_CTCIF2 = { 5, 1, 2 };
constexpr static RegisterFieldDescriptor DMA2_DMA_IFCR_CHTIF2 = { 6, 1, 2 };
constexpr static RegisterFieldDescriptor DMA2_DMA_IFCR_CTEIF2 = { 7, 1, 2 };
constexpr static RegisterFieldDescriptor DMA2_DMA_IFCR_CGIF3 = { 8, 1, 2 };
constexpr static RegisterFieldDescriptor DMA2_DMA_IFCR_CTCIF3 = { 9, 1, 2 };
constexpr static RegisterFieldDescriptor DMA2_DMA_IFCR_CHTIF3 = { 10, 1, 2 };
constexpr static RegisterFieldDescriptor DMA2_DMA_IFCR_CTEIF3 = { 11, 1, 2 };
constexpr static RegisterFieldDescriptor DMA2_DMA_IFCR_CGIF4 = { 12, 1, 2 };
constexpr static RegisterFieldDescriptor DMA2_DMA_IFCR_CTCIF4 = { 13, 1, 2 };
constexpr static RegisterFieldDescriptor DMA2_DMA_IFCR_CHTIF4 = { 14, 1, 2 };
constexpr static RegisterFieldDescriptor DMA2_DMA_IFCR_CTEIF4 = { 15, 1, 2 };
constexpr static RegisterFieldDescriptor DMA2_DMA_IFCR_CGIF5 = { 16, 1, 2 };
constexpr static RegisterFieldDescriptor DMA2_DMA_IFCR_CTCIF5 = { 17, 1, 2 };
constexpr static RegisterFieldDescriptor DMA2_DMA_IFCR_CHTIF5 = { 18, 1, 2 };
constexpr static RegisterFieldDescriptor DMA2_DMA_IFCR_CTEIF5 = { 19, 1, 2 };
constexpr static RegisterFieldDescriptor DMA2_DMA_IFCR_CGIF6 = { 20, 1, 2 };
constexpr static RegisterFieldDescriptor DMA2_DMA_IFCR_CTCIF6 = { 21, 1, 2 };
constexpr static RegisterFieldDescriptor DMA2_DMA_IFCR_CHTIF6 = { 22, 1, 2 };
constexpr static RegisterFieldDescriptor DMA2_DMA_IFCR_CTEIF6 = { 23, 1, 2 };
constexpr static RegisterFieldDescriptor DMA2_DMA_IFCR_CGIF7 = { 24, 1, 2 };
constexpr static RegisterFieldDescriptor DMA2_DMA_IFCR_CTCIF7 = { 25, 1, 2 };
constexpr static RegisterFieldDescriptor DMA2_DMA_IFCR_CHTIF7 = { 26, 1, 2 };
constexpr static RegisterFieldDescriptor DMA2_DMA_IFCR_CTEIF7 = { 27, 1, 2 };


constexpr static u32 DMA2_DMA_CCR1_BASE = DMA2_BASE + 8;
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR1_EN = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR1_TCIE = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR1_HTIE = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR1_TEIE = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR1_DIR = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR1_CIRC = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR1_PINC = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR1_MINC = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR1_PSIZE = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR1_MSIZE = { 10, 2, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR1_PL = { 12, 2, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR1_MEM2MEM = { 14, 1, 0 };


constexpr static u32 DMA2_DMA_CNDTR1_BASE = DMA2_BASE + 12;
constexpr static RegisterFieldDescriptor DMA2_DMA_CNDTR1_NDT = { 0, 16, 0 };


constexpr static u32 DMA2_DMA_CPAR1_BASE = DMA2_BASE + 16;
constexpr static RegisterFieldDescriptor DMA2_DMA_CPAR1_PA = { 0, 32, 0 };


constexpr static u32 DMA2_DMA_CMAR1_BASE = DMA2_BASE + 20;
constexpr static RegisterFieldDescriptor DMA2_DMA_CMAR1_MA = { 0, 32, 0 };


constexpr static u32 DMA2_DMA_CCR2_BASE = DMA2_BASE + 28;
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR2_EN = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR2_TCIE = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR2_HTIE = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR2_TEIE = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR2_DIR = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR2_CIRC = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR2_PINC = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR2_MINC = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR2_PSIZE = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR2_MSIZE = { 10, 2, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR2_PL = { 12, 2, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR2_MEM2MEM = { 14, 1, 0 };


constexpr static u32 DMA2_DMA_CNDTR2_BASE = DMA2_BASE + 32;
constexpr static RegisterFieldDescriptor DMA2_DMA_CNDTR2_NDT = { 0, 16, 0 };


constexpr static u32 DMA2_DMA_CPAR2_BASE = DMA2_BASE + 36;
constexpr static RegisterFieldDescriptor DMA2_DMA_CPAR2_PA = { 0, 32, 0 };


constexpr static u32 DMA2_DMA_CMAR2_BASE = DMA2_BASE + 40;
constexpr static RegisterFieldDescriptor DMA2_DMA_CMAR2_MA = { 0, 32, 0 };


constexpr static u32 DMA2_DMA_CCR3_BASE = DMA2_BASE + 48;
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR3_EN = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR3_TCIE = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR3_HTIE = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR3_TEIE = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR3_DIR = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR3_CIRC = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR3_PINC = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR3_MINC = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR3_PSIZE = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR3_MSIZE = { 10, 2, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR3_PL = { 12, 2, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR3_MEM2MEM = { 14, 1, 0 };


constexpr static u32 DMA2_DMA_CNDTR3_BASE = DMA2_BASE + 52;
constexpr static RegisterFieldDescriptor DMA2_DMA_CNDTR3_NDT = { 0, 16, 0 };


constexpr static u32 DMA2_DMA_CPAR3_BASE = DMA2_BASE + 56;
constexpr static RegisterFieldDescriptor DMA2_DMA_CPAR3_PA = { 0, 32, 0 };


constexpr static u32 DMA2_DMA_CMAR3_BASE = DMA2_BASE + 60;
constexpr static RegisterFieldDescriptor DMA2_DMA_CMAR3_MA = { 0, 32, 0 };


constexpr static u32 DMA2_DMA_CCR4_BASE = DMA2_BASE + 68;
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR4_EN = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR4_TCIE = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR4_HTIE = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR4_TEIE = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR4_DIR = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR4_CIRC = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR4_PINC = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR4_MINC = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR4_PSIZE = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR4_MSIZE = { 10, 2, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR4_PL = { 12, 2, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR4_MEM2MEM = { 14, 1, 0 };


constexpr static u32 DMA2_DMA_CNDTR4_BASE = DMA2_BASE + 72;
constexpr static RegisterFieldDescriptor DMA2_DMA_CNDTR4_NDT = { 0, 16, 0 };


constexpr static u32 DMA2_DMA_CPAR4_BASE = DMA2_BASE + 76;
constexpr static RegisterFieldDescriptor DMA2_DMA_CPAR4_PA = { 0, 32, 0 };


constexpr static u32 DMA2_DMA_CMAR4_BASE = DMA2_BASE + 80;
constexpr static RegisterFieldDescriptor DMA2_DMA_CMAR4_MA = { 0, 32, 0 };


constexpr static u32 DMA2_DMA_CCR5_BASE = DMA2_BASE + 88;
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR5_EN = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR5_TCIE = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR5_HTIE = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR5_TEIE = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR5_DIR = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR5_CIRC = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR5_PINC = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR5_MINC = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR5_PSIZE = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR5_MSIZE = { 10, 2, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR5_PL = { 12, 2, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR5_MEM2MEM = { 14, 1, 0 };


constexpr static u32 DMA2_DMA_CNDTR5_BASE = DMA2_BASE + 92;
constexpr static RegisterFieldDescriptor DMA2_DMA_CNDTR5_NDT = { 0, 16, 0 };


constexpr static u32 DMA2_DMA_CPAR5_BASE = DMA2_BASE + 96;
constexpr static RegisterFieldDescriptor DMA2_DMA_CPAR5_PA = { 0, 32, 0 };


constexpr static u32 DMA2_DMA_CMAR5_BASE = DMA2_BASE + 100;
constexpr static RegisterFieldDescriptor DMA2_DMA_CMAR5_MA = { 0, 32, 0 };


constexpr static u32 DMA2_DMA_CCR6_BASE = DMA2_BASE + 108;
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR6_EN = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR6_TCIE = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR6_HTIE = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR6_TEIE = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR6_DIR = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR6_CIRC = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR6_PINC = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR6_MINC = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR6_PSIZE = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR6_MSIZE = { 10, 2, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR6_PL = { 12, 2, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR6_MEM2MEM = { 14, 1, 0 };


constexpr static u32 DMA2_DMA_CNDTR6_BASE = DMA2_BASE + 112;
constexpr static RegisterFieldDescriptor DMA2_DMA_CNDTR6_NDT = { 0, 16, 0 };


constexpr static u32 DMA2_DMA_CPAR6_BASE = DMA2_BASE + 116;
constexpr static RegisterFieldDescriptor DMA2_DMA_CPAR6_PA = { 0, 32, 0 };


constexpr static u32 DMA2_DMA_CMAR6_BASE = DMA2_BASE + 120;
constexpr static RegisterFieldDescriptor DMA2_DMA_CMAR6_MA = { 0, 32, 0 };


constexpr static u32 DMA2_DMA_CCR7_BASE = DMA2_BASE + 128;
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR7_EN = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR7_TCIE = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR7_HTIE = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR7_TEIE = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR7_DIR = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR7_CIRC = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR7_PINC = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR7_MINC = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR7_PSIZE = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR7_MSIZE = { 10, 2, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR7_PL = { 12, 2, 0 };
constexpr static RegisterFieldDescriptor DMA2_DMA_CCR7_MEM2MEM = { 14, 1, 0 };


constexpr static u32 DMA2_DMA_CNDTR7_BASE = DMA2_BASE + 132;
constexpr static RegisterFieldDescriptor DMA2_DMA_CNDTR7_NDT = { 0, 16, 0 };


constexpr static u32 DMA2_DMA_CPAR7_BASE = DMA2_BASE + 136;
constexpr static RegisterFieldDescriptor DMA2_DMA_CPAR7_PA = { 0, 32, 0 };


constexpr static u32 DMA2_DMA_CMAR7_BASE = DMA2_BASE + 140;
constexpr static RegisterFieldDescriptor DMA2_DMA_CMAR7_MA = { 0, 32, 0 };




constexpr static u32 DMAMUX_BASE = 1073874944;
constexpr static u32 DMAMUX_C0CR_BASE = DMAMUX_BASE + 0;
constexpr static RegisterFieldDescriptor DMAMUX_C0CR_DMAREQ_ID = { 0, 8, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_C0CR_SOIE = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_C0CR_EGE = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_C0CR_SE = { 16, 1, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_C0CR_SPOL = { 17, 2, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_C0CR_NBREQ = { 19, 5, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_C0CR_SYNC_ID = { 24, 5, 0 };


constexpr static u32 DMAMUX_C1CR_BASE = DMAMUX_BASE + 4;
constexpr static RegisterFieldDescriptor DMAMUX_C1CR_DMAREQ_ID = { 0, 8, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_C1CR_SOIE = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_C1CR_EGE = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_C1CR_SE = { 16, 1, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_C1CR_SPOL = { 17, 2, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_C1CR_NBREQ = { 19, 5, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_C1CR_SYNC_ID = { 24, 5, 0 };


constexpr static u32 DMAMUX_C2CR_BASE = DMAMUX_BASE + 8;
constexpr static RegisterFieldDescriptor DMAMUX_C2CR_DMAREQ_ID = { 0, 8, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_C2CR_SOIE = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_C2CR_EGE = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_C2CR_SE = { 16, 1, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_C2CR_SPOL = { 17, 2, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_C2CR_NBREQ = { 19, 5, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_C2CR_SYNC_ID = { 24, 5, 0 };


constexpr static u32 DMAMUX_C3CR_BASE = DMAMUX_BASE + 12;
constexpr static RegisterFieldDescriptor DMAMUX_C3CR_DMAREQ_ID = { 0, 8, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_C3CR_SOIE = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_C3CR_EGE = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_C3CR_SE = { 16, 1, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_C3CR_SPOL = { 17, 2, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_C3CR_NBREQ = { 19, 5, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_C3CR_SYNC_ID = { 24, 5, 0 };


constexpr static u32 DMAMUX_C4CR_BASE = DMAMUX_BASE + 16;
constexpr static RegisterFieldDescriptor DMAMUX_C4CR_DMAREQ_ID = { 0, 8, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_C4CR_SOIE = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_C4CR_EGE = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_C4CR_SE = { 16, 1, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_C4CR_SPOL = { 17, 2, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_C4CR_NBREQ = { 19, 5, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_C4CR_SYNC_ID = { 24, 5, 0 };


constexpr static u32 DMAMUX_C5CR_BASE = DMAMUX_BASE + 20;
constexpr static RegisterFieldDescriptor DMAMUX_C5CR_DMAREQ_ID = { 0, 8, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_C5CR_SOIE = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_C5CR_EGE = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_C5CR_SE = { 16, 1, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_C5CR_SPOL = { 17, 2, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_C5CR_NBREQ = { 19, 5, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_C5CR_SYNC_ID = { 24, 5, 0 };


constexpr static u32 DMAMUX_C6CR_BASE = DMAMUX_BASE + 24;
constexpr static RegisterFieldDescriptor DMAMUX_C6CR_DMAREQ_ID = { 0, 8, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_C6CR_SOIE = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_C6CR_EGE = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_C6CR_SE = { 16, 1, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_C6CR_SPOL = { 17, 2, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_C6CR_NBREQ = { 19, 5, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_C6CR_SYNC_ID = { 24, 5, 0 };


constexpr static u32 DMAMUX_RG0CR_BASE = DMAMUX_BASE + 256;
constexpr static RegisterFieldDescriptor DMAMUX_RG0CR_SIG_ID = { 0, 5, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_RG0CR_OIE = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_RG0CR_GE = { 16, 1, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_RG0CR_GPOL = { 17, 2, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_RG0CR_GNBREQ = { 19, 5, 0 };


constexpr static u32 DMAMUX_RG1CR_BASE = DMAMUX_BASE + 260;
constexpr static RegisterFieldDescriptor DMAMUX_RG1CR_SIG_ID = { 0, 5, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_RG1CR_OIE = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_RG1CR_GE = { 16, 1, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_RG1CR_GPOL = { 17, 2, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_RG1CR_GNBREQ = { 19, 5, 0 };


constexpr static u32 DMAMUX_RG2CR_BASE = DMAMUX_BASE + 264;
constexpr static RegisterFieldDescriptor DMAMUX_RG2CR_SIG_ID = { 0, 5, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_RG2CR_OIE = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_RG2CR_GE = { 16, 1, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_RG2CR_GPOL = { 17, 2, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_RG2CR_GNBREQ = { 19, 5, 0 };


constexpr static u32 DMAMUX_RG3CR_BASE = DMAMUX_BASE + 268;
constexpr static RegisterFieldDescriptor DMAMUX_RG3CR_SIG_ID = { 0, 5, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_RG3CR_OIE = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_RG3CR_GE = { 16, 1, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_RG3CR_GPOL = { 17, 2, 0 };
constexpr static RegisterFieldDescriptor DMAMUX_RG3CR_GNBREQ = { 19, 5, 0 };


constexpr static u32 DMAMUX_RGSR_BASE = DMAMUX_BASE + 320;
constexpr static RegisterFieldDescriptor DMAMUX_RGSR_OF = { 0, 4, 1 };


constexpr static u32 DMAMUX_RGCFR_BASE = DMAMUX_BASE + 324;
constexpr static RegisterFieldDescriptor DMAMUX_RGCFR_COF = { 0, 4, 2 };




constexpr static u32 GPIOA_BASE = 1342177280;
constexpr static u32 GPIOA_MODER_BASE = GPIOA_BASE + 0;
constexpr static RegisterFieldDescriptor GPIOA_MODER_MODER0 = { 0, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOA_MODER_MODER1 = { 2, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOA_MODER_MODER2 = { 4, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOA_MODER_MODER3 = { 6, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOA_MODER_MODER4 = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOA_MODER_MODER5 = { 10, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOA_MODER_MODER6 = { 12, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOA_MODER_MODER7 = { 14, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOA_MODER_MODER8 = { 16, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOA_MODER_MODER9 = { 18, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOA_MODER_MODER10 = { 20, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOA_MODER_MODER11 = { 22, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOA_MODER_MODER12 = { 24, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOA_MODER_MODER13 = { 26, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOA_MODER_MODER14 = { 28, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOA_MODER_MODER15 = { 30, 2, 0 };


constexpr static u32 GPIOA_OTYPER_BASE = GPIOA_BASE + 4;
constexpr static RegisterFieldDescriptor GPIOA_OTYPER_OT0 = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOA_OTYPER_OT1 = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOA_OTYPER_OT2 = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOA_OTYPER_OT3 = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOA_OTYPER_OT4 = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOA_OTYPER_OT5 = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOA_OTYPER_OT6 = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOA_OTYPER_OT7 = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOA_OTYPER_OT8 = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOA_OTYPER_OT9 = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOA_OTYPER_OT10 = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOA_OTYPER_OT11 = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOA_OTYPER_OT12 = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOA_OTYPER_OT13 = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOA_OTYPER_OT14 = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOA_OTYPER_OT15 = { 15, 1, 0 };


constexpr static u32 GPIOA_OSPEEDR_BASE = GPIOA_BASE + 8;
constexpr static RegisterFieldDescriptor GPIOA_OSPEEDR_OSPEEDR0 = { 0, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOA_OSPEEDR_OSPEEDR1 = { 2, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOA_OSPEEDR_OSPEEDR2 = { 4, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOA_OSPEEDR_OSPEEDR3 = { 6, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOA_OSPEEDR_OSPEEDR4 = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOA_OSPEEDR_OSPEEDR5 = { 10, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOA_OSPEEDR_OSPEEDR6 = { 12, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOA_OSPEEDR_OSPEEDR7 = { 14, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOA_OSPEEDR_OSPEEDR8 = { 16, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOA_OSPEEDR_OSPEEDR9 = { 18, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOA_OSPEEDR_OSPEEDR10 = { 20, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOA_OSPEEDR_OSPEEDR11 = { 22, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOA_OSPEEDR_OSPEEDR12 = { 24, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOA_OSPEEDR_OSPEEDR13 = { 26, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOA_OSPEEDR_OSPEEDR14 = { 28, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOA_OSPEEDR_OSPEEDR15 = { 30, 2, 0 };


constexpr static u32 GPIOA_PUPDR_BASE = GPIOA_BASE + 12;
constexpr static RegisterFieldDescriptor GPIOA_PUPDR_PUPDR0 = { 0, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOA_PUPDR_PUPDR1 = { 2, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOA_PUPDR_PUPDR2 = { 4, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOA_PUPDR_PUPDR3 = { 6, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOA_PUPDR_PUPDR4 = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOA_PUPDR_PUPDR5 = { 10, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOA_PUPDR_PUPDR6 = { 12, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOA_PUPDR_PUPDR7 = { 14, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOA_PUPDR_PUPDR8 = { 16, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOA_PUPDR_PUPDR9 = { 18, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOA_PUPDR_PUPDR10 = { 20, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOA_PUPDR_PUPDR11 = { 22, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOA_PUPDR_PUPDR12 = { 24, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOA_PUPDR_PUPDR13 = { 26, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOA_PUPDR_PUPDR14 = { 28, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOA_PUPDR_PUPDR15 = { 30, 2, 0 };


constexpr static u32 GPIOA_IDR_BASE = GPIOA_BASE + 16;
constexpr static RegisterFieldDescriptor GPIOA_IDR_IDR0 = { 0, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOA_IDR_IDR1 = { 1, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOA_IDR_IDR2 = { 2, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOA_IDR_IDR3 = { 3, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOA_IDR_IDR4 = { 4, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOA_IDR_IDR5 = { 5, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOA_IDR_IDR6 = { 6, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOA_IDR_IDR7 = { 7, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOA_IDR_IDR8 = { 8, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOA_IDR_IDR9 = { 9, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOA_IDR_IDR10 = { 10, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOA_IDR_IDR11 = { 11, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOA_IDR_IDR12 = { 12, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOA_IDR_IDR13 = { 13, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOA_IDR_IDR14 = { 14, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOA_IDR_IDR15 = { 15, 1, 1 };


constexpr static u32 GPIOA_ODR_BASE = GPIOA_BASE + 20;
constexpr static RegisterFieldDescriptor GPIOA_ODR_ODR0 = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOA_ODR_ODR1 = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOA_ODR_ODR2 = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOA_ODR_ODR3 = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOA_ODR_ODR4 = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOA_ODR_ODR5 = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOA_ODR_ODR6 = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOA_ODR_ODR7 = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOA_ODR_ODR8 = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOA_ODR_ODR9 = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOA_ODR_ODR10 = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOA_ODR_ODR11 = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOA_ODR_ODR12 = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOA_ODR_ODR13 = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOA_ODR_ODR14 = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOA_ODR_ODR15 = { 15, 1, 0 };


constexpr static u32 GPIOA_BSRR_BASE = GPIOA_BASE + 24;
constexpr static RegisterFieldDescriptor GPIOA_BSRR_BS0 = { 0, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOA_BSRR_BS1 = { 1, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOA_BSRR_BS2 = { 2, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOA_BSRR_BS3 = { 3, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOA_BSRR_BS4 = { 4, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOA_BSRR_BS5 = { 5, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOA_BSRR_BS6 = { 6, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOA_BSRR_BS7 = { 7, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOA_BSRR_BS8 = { 8, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOA_BSRR_BS9 = { 9, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOA_BSRR_BS10 = { 10, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOA_BSRR_BS11 = { 11, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOA_BSRR_BS12 = { 12, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOA_BSRR_BS13 = { 13, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOA_BSRR_BS14 = { 14, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOA_BSRR_BS15 = { 15, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOA_BSRR_BR0 = { 16, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOA_BSRR_BR1 = { 17, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOA_BSRR_BR2 = { 18, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOA_BSRR_BR3 = { 19, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOA_BSRR_BR4 = { 20, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOA_BSRR_BR5 = { 21, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOA_BSRR_BR6 = { 22, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOA_BSRR_BR7 = { 23, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOA_BSRR_BR8 = { 24, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOA_BSRR_BR9 = { 25, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOA_BSRR_BR10 = { 26, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOA_BSRR_BR11 = { 27, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOA_BSRR_BR12 = { 28, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOA_BSRR_BR13 = { 29, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOA_BSRR_BR14 = { 30, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOA_BSRR_BR15 = { 31, 1, 2 };


constexpr static u32 GPIOA_LCKR_BASE = GPIOA_BASE + 28;
constexpr static RegisterFieldDescriptor GPIOA_LCKR_LCK0 = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOA_LCKR_LCK1 = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOA_LCKR_LCK2 = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOA_LCKR_LCK3 = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOA_LCKR_LCK4 = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOA_LCKR_LCK5 = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOA_LCKR_LCK6 = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOA_LCKR_LCK7 = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOA_LCKR_LCK8 = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOA_LCKR_LCK9 = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOA_LCKR_LCK10 = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOA_LCKR_LCK11 = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOA_LCKR_LCK12 = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOA_LCKR_LCK13 = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOA_LCKR_LCK14 = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOA_LCKR_LCK15 = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOA_LCKR_LCKK = { 16, 1, 0 };


constexpr static u32 GPIOA_AFRL_BASE = GPIOA_BASE + 32;
constexpr static RegisterFieldDescriptor GPIOA_AFRL_AFSEL0 = { 0, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOA_AFRL_AFSEL1 = { 4, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOA_AFRL_AFSEL2 = { 8, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOA_AFRL_AFSEL3 = { 12, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOA_AFRL_AFSEL4 = { 16, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOA_AFRL_AFSEL5 = { 20, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOA_AFRL_AFSEL6 = { 24, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOA_AFRL_AFSEL7 = { 28, 4, 0 };


constexpr static u32 GPIOA_AFRH_BASE = GPIOA_BASE + 36;
constexpr static RegisterFieldDescriptor GPIOA_AFRH_AFSEL8 = { 0, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOA_AFRH_AFSEL9 = { 4, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOA_AFRH_AFSEL10 = { 8, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOA_AFRH_AFSEL11 = { 12, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOA_AFRH_AFSEL12 = { 16, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOA_AFRH_AFSEL13 = { 20, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOA_AFRH_AFSEL14 = { 24, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOA_AFRH_AFSEL15 = { 28, 4, 0 };


constexpr static u32 GPIOA_BRR_BASE = GPIOA_BASE + 40;
constexpr static RegisterFieldDescriptor GPIOA_BRR_BR0 = { 0, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOA_BRR_BR1 = { 1, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOA_BRR_BR2 = { 2, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOA_BRR_BR3 = { 3, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOA_BRR_BR4 = { 4, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOA_BRR_BR5 = { 5, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOA_BRR_BR6 = { 6, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOA_BRR_BR7 = { 7, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOA_BRR_BR8 = { 8, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOA_BRR_BR9 = { 9, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOA_BRR_BR10 = { 10, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOA_BRR_BR11 = { 11, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOA_BRR_BR12 = { 12, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOA_BRR_BR13 = { 13, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOA_BRR_BR14 = { 14, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOA_BRR_BR15 = { 15, 1, 2 };




constexpr static u32 GPIOB_BASE = 1342178304;
constexpr static u32 GPIOB_MODER_BASE = GPIOB_BASE + 0;
constexpr static RegisterFieldDescriptor GPIOB_MODER_MODER0 = { 0, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOB_MODER_MODER1 = { 2, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOB_MODER_MODER2 = { 4, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOB_MODER_MODER3 = { 6, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOB_MODER_MODER4 = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOB_MODER_MODER5 = { 10, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOB_MODER_MODER6 = { 12, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOB_MODER_MODER7 = { 14, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOB_MODER_MODER8 = { 16, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOB_MODER_MODER9 = { 18, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOB_MODER_MODER10 = { 20, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOB_MODER_MODER11 = { 22, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOB_MODER_MODER12 = { 24, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOB_MODER_MODER13 = { 26, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOB_MODER_MODER14 = { 28, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOB_MODER_MODER15 = { 30, 2, 0 };


constexpr static u32 GPIOB_OTYPER_BASE = GPIOB_BASE + 4;
constexpr static RegisterFieldDescriptor GPIOB_OTYPER_OT0 = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOB_OTYPER_OT1 = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOB_OTYPER_OT2 = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOB_OTYPER_OT3 = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOB_OTYPER_OT4 = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOB_OTYPER_OT5 = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOB_OTYPER_OT6 = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOB_OTYPER_OT7 = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOB_OTYPER_OT8 = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOB_OTYPER_OT9 = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOB_OTYPER_OT10 = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOB_OTYPER_OT11 = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOB_OTYPER_OT12 = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOB_OTYPER_OT13 = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOB_OTYPER_OT14 = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOB_OTYPER_OT15 = { 15, 1, 0 };


constexpr static u32 GPIOB_OSPEEDR_BASE = GPIOB_BASE + 8;
constexpr static RegisterFieldDescriptor GPIOB_OSPEEDR_OSPEEDR0 = { 0, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOB_OSPEEDR_OSPEEDR1 = { 2, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOB_OSPEEDR_OSPEEDR2 = { 4, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOB_OSPEEDR_OSPEEDR3 = { 6, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOB_OSPEEDR_OSPEEDR4 = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOB_OSPEEDR_OSPEEDR5 = { 10, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOB_OSPEEDR_OSPEEDR6 = { 12, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOB_OSPEEDR_OSPEEDR7 = { 14, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOB_OSPEEDR_OSPEEDR8 = { 16, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOB_OSPEEDR_OSPEEDR9 = { 18, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOB_OSPEEDR_OSPEEDR10 = { 20, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOB_OSPEEDR_OSPEEDR11 = { 22, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOB_OSPEEDR_OSPEEDR12 = { 24, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOB_OSPEEDR_OSPEEDR13 = { 26, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOB_OSPEEDR_OSPEEDR14 = { 28, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOB_OSPEEDR_OSPEEDR15 = { 30, 2, 0 };


constexpr static u32 GPIOB_PUPDR_BASE = GPIOB_BASE + 12;
constexpr static RegisterFieldDescriptor GPIOB_PUPDR_PUPDR0 = { 0, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOB_PUPDR_PUPDR1 = { 2, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOB_PUPDR_PUPDR2 = { 4, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOB_PUPDR_PUPDR3 = { 6, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOB_PUPDR_PUPDR4 = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOB_PUPDR_PUPDR5 = { 10, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOB_PUPDR_PUPDR6 = { 12, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOB_PUPDR_PUPDR7 = { 14, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOB_PUPDR_PUPDR8 = { 16, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOB_PUPDR_PUPDR9 = { 18, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOB_PUPDR_PUPDR10 = { 20, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOB_PUPDR_PUPDR11 = { 22, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOB_PUPDR_PUPDR12 = { 24, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOB_PUPDR_PUPDR13 = { 26, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOB_PUPDR_PUPDR14 = { 28, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOB_PUPDR_PUPDR15 = { 30, 2, 0 };


constexpr static u32 GPIOB_IDR_BASE = GPIOB_BASE + 16;
constexpr static RegisterFieldDescriptor GPIOB_IDR_IDR0 = { 0, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOB_IDR_IDR1 = { 1, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOB_IDR_IDR2 = { 2, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOB_IDR_IDR3 = { 3, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOB_IDR_IDR4 = { 4, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOB_IDR_IDR5 = { 5, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOB_IDR_IDR6 = { 6, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOB_IDR_IDR7 = { 7, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOB_IDR_IDR8 = { 8, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOB_IDR_IDR9 = { 9, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOB_IDR_IDR10 = { 10, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOB_IDR_IDR11 = { 11, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOB_IDR_IDR12 = { 12, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOB_IDR_IDR13 = { 13, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOB_IDR_IDR14 = { 14, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOB_IDR_IDR15 = { 15, 1, 1 };


constexpr static u32 GPIOB_ODR_BASE = GPIOB_BASE + 20;
constexpr static RegisterFieldDescriptor GPIOB_ODR_ODR0 = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOB_ODR_ODR1 = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOB_ODR_ODR2 = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOB_ODR_ODR3 = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOB_ODR_ODR4 = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOB_ODR_ODR5 = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOB_ODR_ODR6 = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOB_ODR_ODR7 = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOB_ODR_ODR8 = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOB_ODR_ODR9 = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOB_ODR_ODR10 = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOB_ODR_ODR11 = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOB_ODR_ODR12 = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOB_ODR_ODR13 = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOB_ODR_ODR14 = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOB_ODR_ODR15 = { 15, 1, 0 };


constexpr static u32 GPIOB_BSRR_BASE = GPIOB_BASE + 24;
constexpr static RegisterFieldDescriptor GPIOB_BSRR_BS0 = { 0, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOB_BSRR_BS1 = { 1, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOB_BSRR_BS2 = { 2, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOB_BSRR_BS3 = { 3, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOB_BSRR_BS4 = { 4, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOB_BSRR_BS5 = { 5, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOB_BSRR_BS6 = { 6, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOB_BSRR_BS7 = { 7, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOB_BSRR_BS8 = { 8, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOB_BSRR_BS9 = { 9, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOB_BSRR_BS10 = { 10, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOB_BSRR_BS11 = { 11, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOB_BSRR_BS12 = { 12, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOB_BSRR_BS13 = { 13, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOB_BSRR_BS14 = { 14, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOB_BSRR_BS15 = { 15, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOB_BSRR_BR0 = { 16, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOB_BSRR_BR1 = { 17, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOB_BSRR_BR2 = { 18, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOB_BSRR_BR3 = { 19, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOB_BSRR_BR4 = { 20, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOB_BSRR_BR5 = { 21, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOB_BSRR_BR6 = { 22, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOB_BSRR_BR7 = { 23, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOB_BSRR_BR8 = { 24, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOB_BSRR_BR9 = { 25, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOB_BSRR_BR10 = { 26, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOB_BSRR_BR11 = { 27, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOB_BSRR_BR12 = { 28, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOB_BSRR_BR13 = { 29, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOB_BSRR_BR14 = { 30, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOB_BSRR_BR15 = { 31, 1, 2 };


constexpr static u32 GPIOB_LCKR_BASE = GPIOB_BASE + 28;
constexpr static RegisterFieldDescriptor GPIOB_LCKR_LCK0 = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOB_LCKR_LCK1 = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOB_LCKR_LCK2 = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOB_LCKR_LCK3 = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOB_LCKR_LCK4 = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOB_LCKR_LCK5 = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOB_LCKR_LCK6 = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOB_LCKR_LCK7 = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOB_LCKR_LCK8 = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOB_LCKR_LCK9 = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOB_LCKR_LCK10 = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOB_LCKR_LCK11 = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOB_LCKR_LCK12 = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOB_LCKR_LCK13 = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOB_LCKR_LCK14 = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOB_LCKR_LCK15 = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOB_LCKR_LCKK = { 16, 1, 0 };


constexpr static u32 GPIOB_AFRL_BASE = GPIOB_BASE + 32;
constexpr static RegisterFieldDescriptor GPIOB_AFRL_AFSEL0 = { 0, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOB_AFRL_AFSEL1 = { 4, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOB_AFRL_AFSEL2 = { 8, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOB_AFRL_AFSEL3 = { 12, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOB_AFRL_AFSEL4 = { 16, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOB_AFRL_AFSEL5 = { 20, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOB_AFRL_AFSEL6 = { 24, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOB_AFRL_AFSEL7 = { 28, 4, 0 };


constexpr static u32 GPIOB_AFRH_BASE = GPIOB_BASE + 36;
constexpr static RegisterFieldDescriptor GPIOB_AFRH_AFSEL8 = { 0, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOB_AFRH_AFSEL9 = { 4, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOB_AFRH_AFSEL10 = { 8, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOB_AFRH_AFSEL11 = { 12, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOB_AFRH_AFSEL12 = { 16, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOB_AFRH_AFSEL13 = { 20, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOB_AFRH_AFSEL14 = { 24, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOB_AFRH_AFSEL15 = { 28, 4, 0 };


constexpr static u32 GPIOB_BRR_BASE = GPIOB_BASE + 40;
constexpr static RegisterFieldDescriptor GPIOB_BRR_BR0 = { 0, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOB_BRR_BR1 = { 1, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOB_BRR_BR2 = { 2, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOB_BRR_BR3 = { 3, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOB_BRR_BR4 = { 4, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOB_BRR_BR5 = { 5, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOB_BRR_BR6 = { 6, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOB_BRR_BR7 = { 7, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOB_BRR_BR8 = { 8, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOB_BRR_BR9 = { 9, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOB_BRR_BR10 = { 10, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOB_BRR_BR11 = { 11, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOB_BRR_BR12 = { 12, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOB_BRR_BR13 = { 13, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOB_BRR_BR14 = { 14, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOB_BRR_BR15 = { 15, 1, 2 };




constexpr static u32 GPIOC_BASE = 1342179328;
constexpr static u32 GPIOC_MODER_BASE = GPIOC_BASE + 0;
constexpr static RegisterFieldDescriptor GPIOC_MODER_MODER0 = { 0, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOC_MODER_MODER1 = { 2, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOC_MODER_MODER2 = { 4, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOC_MODER_MODER3 = { 6, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOC_MODER_MODER4 = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOC_MODER_MODER5 = { 10, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOC_MODER_MODER6 = { 12, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOC_MODER_MODER7 = { 14, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOC_MODER_MODER8 = { 16, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOC_MODER_MODER9 = { 18, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOC_MODER_MODER10 = { 20, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOC_MODER_MODER11 = { 22, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOC_MODER_MODER12 = { 24, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOC_MODER_MODER13 = { 26, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOC_MODER_MODER14 = { 28, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOC_MODER_MODER15 = { 30, 2, 0 };


constexpr static u32 GPIOC_OTYPER_BASE = GPIOC_BASE + 4;
constexpr static RegisterFieldDescriptor GPIOC_OTYPER_OT0 = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOC_OTYPER_OT1 = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOC_OTYPER_OT2 = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOC_OTYPER_OT3 = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOC_OTYPER_OT4 = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOC_OTYPER_OT5 = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOC_OTYPER_OT6 = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOC_OTYPER_OT7 = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOC_OTYPER_OT8 = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOC_OTYPER_OT9 = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOC_OTYPER_OT10 = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOC_OTYPER_OT11 = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOC_OTYPER_OT12 = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOC_OTYPER_OT13 = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOC_OTYPER_OT14 = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOC_OTYPER_OT15 = { 15, 1, 0 };


constexpr static u32 GPIOC_OSPEEDR_BASE = GPIOC_BASE + 8;
constexpr static RegisterFieldDescriptor GPIOC_OSPEEDR_OSPEEDR0 = { 0, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOC_OSPEEDR_OSPEEDR1 = { 2, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOC_OSPEEDR_OSPEEDR2 = { 4, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOC_OSPEEDR_OSPEEDR3 = { 6, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOC_OSPEEDR_OSPEEDR4 = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOC_OSPEEDR_OSPEEDR5 = { 10, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOC_OSPEEDR_OSPEEDR6 = { 12, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOC_OSPEEDR_OSPEEDR7 = { 14, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOC_OSPEEDR_OSPEEDR8 = { 16, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOC_OSPEEDR_OSPEEDR9 = { 18, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOC_OSPEEDR_OSPEEDR10 = { 20, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOC_OSPEEDR_OSPEEDR11 = { 22, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOC_OSPEEDR_OSPEEDR12 = { 24, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOC_OSPEEDR_OSPEEDR13 = { 26, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOC_OSPEEDR_OSPEEDR14 = { 28, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOC_OSPEEDR_OSPEEDR15 = { 30, 2, 0 };


constexpr static u32 GPIOC_PUPDR_BASE = GPIOC_BASE + 12;
constexpr static RegisterFieldDescriptor GPIOC_PUPDR_PUPDR0 = { 0, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOC_PUPDR_PUPDR1 = { 2, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOC_PUPDR_PUPDR2 = { 4, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOC_PUPDR_PUPDR3 = { 6, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOC_PUPDR_PUPDR4 = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOC_PUPDR_PUPDR5 = { 10, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOC_PUPDR_PUPDR6 = { 12, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOC_PUPDR_PUPDR7 = { 14, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOC_PUPDR_PUPDR8 = { 16, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOC_PUPDR_PUPDR9 = { 18, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOC_PUPDR_PUPDR10 = { 20, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOC_PUPDR_PUPDR11 = { 22, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOC_PUPDR_PUPDR12 = { 24, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOC_PUPDR_PUPDR13 = { 26, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOC_PUPDR_PUPDR14 = { 28, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOC_PUPDR_PUPDR15 = { 30, 2, 0 };


constexpr static u32 GPIOC_IDR_BASE = GPIOC_BASE + 16;
constexpr static RegisterFieldDescriptor GPIOC_IDR_IDR0 = { 0, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOC_IDR_IDR1 = { 1, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOC_IDR_IDR2 = { 2, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOC_IDR_IDR3 = { 3, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOC_IDR_IDR4 = { 4, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOC_IDR_IDR5 = { 5, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOC_IDR_IDR6 = { 6, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOC_IDR_IDR7 = { 7, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOC_IDR_IDR8 = { 8, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOC_IDR_IDR9 = { 9, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOC_IDR_IDR10 = { 10, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOC_IDR_IDR11 = { 11, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOC_IDR_IDR12 = { 12, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOC_IDR_IDR13 = { 13, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOC_IDR_IDR14 = { 14, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOC_IDR_IDR15 = { 15, 1, 1 };


constexpr static u32 GPIOC_ODR_BASE = GPIOC_BASE + 20;
constexpr static RegisterFieldDescriptor GPIOC_ODR_ODR0 = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOC_ODR_ODR1 = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOC_ODR_ODR2 = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOC_ODR_ODR3 = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOC_ODR_ODR4 = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOC_ODR_ODR5 = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOC_ODR_ODR6 = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOC_ODR_ODR7 = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOC_ODR_ODR8 = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOC_ODR_ODR9 = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOC_ODR_ODR10 = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOC_ODR_ODR11 = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOC_ODR_ODR12 = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOC_ODR_ODR13 = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOC_ODR_ODR14 = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOC_ODR_ODR15 = { 15, 1, 0 };


constexpr static u32 GPIOC_BSRR_BASE = GPIOC_BASE + 24;
constexpr static RegisterFieldDescriptor GPIOC_BSRR_BS0 = { 0, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOC_BSRR_BS1 = { 1, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOC_BSRR_BS2 = { 2, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOC_BSRR_BS3 = { 3, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOC_BSRR_BS4 = { 4, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOC_BSRR_BS5 = { 5, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOC_BSRR_BS6 = { 6, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOC_BSRR_BS7 = { 7, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOC_BSRR_BS8 = { 8, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOC_BSRR_BS9 = { 9, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOC_BSRR_BS10 = { 10, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOC_BSRR_BS11 = { 11, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOC_BSRR_BS12 = { 12, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOC_BSRR_BS13 = { 13, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOC_BSRR_BS14 = { 14, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOC_BSRR_BS15 = { 15, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOC_BSRR_BR0 = { 16, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOC_BSRR_BR1 = { 17, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOC_BSRR_BR2 = { 18, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOC_BSRR_BR3 = { 19, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOC_BSRR_BR4 = { 20, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOC_BSRR_BR5 = { 21, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOC_BSRR_BR6 = { 22, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOC_BSRR_BR7 = { 23, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOC_BSRR_BR8 = { 24, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOC_BSRR_BR9 = { 25, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOC_BSRR_BR10 = { 26, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOC_BSRR_BR11 = { 27, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOC_BSRR_BR12 = { 28, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOC_BSRR_BR13 = { 29, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOC_BSRR_BR14 = { 30, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOC_BSRR_BR15 = { 31, 1, 2 };


constexpr static u32 GPIOC_LCKR_BASE = GPIOC_BASE + 28;
constexpr static RegisterFieldDescriptor GPIOC_LCKR_LCK0 = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOC_LCKR_LCK1 = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOC_LCKR_LCK2 = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOC_LCKR_LCK3 = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOC_LCKR_LCK4 = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOC_LCKR_LCK5 = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOC_LCKR_LCK6 = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOC_LCKR_LCK7 = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOC_LCKR_LCK8 = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOC_LCKR_LCK9 = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOC_LCKR_LCK10 = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOC_LCKR_LCK11 = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOC_LCKR_LCK12 = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOC_LCKR_LCK13 = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOC_LCKR_LCK14 = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOC_LCKR_LCK15 = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOC_LCKR_LCKK = { 16, 1, 0 };


constexpr static u32 GPIOC_AFRL_BASE = GPIOC_BASE + 32;
constexpr static RegisterFieldDescriptor GPIOC_AFRL_AFSEL0 = { 0, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOC_AFRL_AFSEL1 = { 4, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOC_AFRL_AFSEL2 = { 8, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOC_AFRL_AFSEL3 = { 12, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOC_AFRL_AFSEL4 = { 16, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOC_AFRL_AFSEL5 = { 20, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOC_AFRL_AFSEL6 = { 24, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOC_AFRL_AFSEL7 = { 28, 4, 0 };


constexpr static u32 GPIOC_AFRH_BASE = GPIOC_BASE + 36;
constexpr static RegisterFieldDescriptor GPIOC_AFRH_AFSEL8 = { 0, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOC_AFRH_AFSEL9 = { 4, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOC_AFRH_AFSEL10 = { 8, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOC_AFRH_AFSEL11 = { 12, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOC_AFRH_AFSEL12 = { 16, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOC_AFRH_AFSEL13 = { 20, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOC_AFRH_AFSEL14 = { 24, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOC_AFRH_AFSEL15 = { 28, 4, 0 };


constexpr static u32 GPIOC_BRR_BASE = GPIOC_BASE + 40;
constexpr static RegisterFieldDescriptor GPIOC_BRR_BR0 = { 0, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOC_BRR_BR1 = { 1, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOC_BRR_BR2 = { 2, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOC_BRR_BR3 = { 3, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOC_BRR_BR4 = { 4, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOC_BRR_BR5 = { 5, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOC_BRR_BR6 = { 6, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOC_BRR_BR7 = { 7, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOC_BRR_BR8 = { 8, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOC_BRR_BR9 = { 9, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOC_BRR_BR10 = { 10, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOC_BRR_BR11 = { 11, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOC_BRR_BR12 = { 12, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOC_BRR_BR13 = { 13, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOC_BRR_BR14 = { 14, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOC_BRR_BR15 = { 15, 1, 2 };




constexpr static u32 GPIOD_BASE = 1342180352;
constexpr static u32 GPIOD_MODER_BASE = GPIOD_BASE + 0;
constexpr static RegisterFieldDescriptor GPIOD_MODER_MODER0 = { 0, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOD_MODER_MODER1 = { 2, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOD_MODER_MODER2 = { 4, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOD_MODER_MODER3 = { 6, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOD_MODER_MODER4 = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOD_MODER_MODER5 = { 10, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOD_MODER_MODER6 = { 12, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOD_MODER_MODER7 = { 14, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOD_MODER_MODER8 = { 16, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOD_MODER_MODER9 = { 18, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOD_MODER_MODER10 = { 20, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOD_MODER_MODER11 = { 22, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOD_MODER_MODER12 = { 24, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOD_MODER_MODER13 = { 26, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOD_MODER_MODER14 = { 28, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOD_MODER_MODER15 = { 30, 2, 0 };


constexpr static u32 GPIOD_OTYPER_BASE = GPIOD_BASE + 4;
constexpr static RegisterFieldDescriptor GPIOD_OTYPER_OT0 = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOD_OTYPER_OT1 = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOD_OTYPER_OT2 = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOD_OTYPER_OT3 = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOD_OTYPER_OT4 = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOD_OTYPER_OT5 = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOD_OTYPER_OT6 = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOD_OTYPER_OT7 = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOD_OTYPER_OT8 = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOD_OTYPER_OT9 = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOD_OTYPER_OT10 = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOD_OTYPER_OT11 = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOD_OTYPER_OT12 = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOD_OTYPER_OT13 = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOD_OTYPER_OT14 = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOD_OTYPER_OT15 = { 15, 1, 0 };


constexpr static u32 GPIOD_OSPEEDR_BASE = GPIOD_BASE + 8;
constexpr static RegisterFieldDescriptor GPIOD_OSPEEDR_OSPEEDR0 = { 0, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOD_OSPEEDR_OSPEEDR1 = { 2, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOD_OSPEEDR_OSPEEDR2 = { 4, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOD_OSPEEDR_OSPEEDR3 = { 6, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOD_OSPEEDR_OSPEEDR4 = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOD_OSPEEDR_OSPEEDR5 = { 10, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOD_OSPEEDR_OSPEEDR6 = { 12, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOD_OSPEEDR_OSPEEDR7 = { 14, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOD_OSPEEDR_OSPEEDR8 = { 16, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOD_OSPEEDR_OSPEEDR9 = { 18, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOD_OSPEEDR_OSPEEDR10 = { 20, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOD_OSPEEDR_OSPEEDR11 = { 22, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOD_OSPEEDR_OSPEEDR12 = { 24, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOD_OSPEEDR_OSPEEDR13 = { 26, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOD_OSPEEDR_OSPEEDR14 = { 28, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOD_OSPEEDR_OSPEEDR15 = { 30, 2, 0 };


constexpr static u32 GPIOD_PUPDR_BASE = GPIOD_BASE + 12;
constexpr static RegisterFieldDescriptor GPIOD_PUPDR_PUPDR0 = { 0, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOD_PUPDR_PUPDR1 = { 2, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOD_PUPDR_PUPDR2 = { 4, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOD_PUPDR_PUPDR3 = { 6, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOD_PUPDR_PUPDR4 = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOD_PUPDR_PUPDR5 = { 10, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOD_PUPDR_PUPDR6 = { 12, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOD_PUPDR_PUPDR7 = { 14, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOD_PUPDR_PUPDR8 = { 16, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOD_PUPDR_PUPDR9 = { 18, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOD_PUPDR_PUPDR10 = { 20, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOD_PUPDR_PUPDR11 = { 22, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOD_PUPDR_PUPDR12 = { 24, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOD_PUPDR_PUPDR13 = { 26, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOD_PUPDR_PUPDR14 = { 28, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOD_PUPDR_PUPDR15 = { 30, 2, 0 };


constexpr static u32 GPIOD_IDR_BASE = GPIOD_BASE + 16;
constexpr static RegisterFieldDescriptor GPIOD_IDR_IDR0 = { 0, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOD_IDR_IDR1 = { 1, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOD_IDR_IDR2 = { 2, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOD_IDR_IDR3 = { 3, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOD_IDR_IDR4 = { 4, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOD_IDR_IDR5 = { 5, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOD_IDR_IDR6 = { 6, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOD_IDR_IDR7 = { 7, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOD_IDR_IDR8 = { 8, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOD_IDR_IDR9 = { 9, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOD_IDR_IDR10 = { 10, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOD_IDR_IDR11 = { 11, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOD_IDR_IDR12 = { 12, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOD_IDR_IDR13 = { 13, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOD_IDR_IDR14 = { 14, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOD_IDR_IDR15 = { 15, 1, 1 };


constexpr static u32 GPIOD_ODR_BASE = GPIOD_BASE + 20;
constexpr static RegisterFieldDescriptor GPIOD_ODR_ODR0 = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOD_ODR_ODR1 = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOD_ODR_ODR2 = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOD_ODR_ODR3 = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOD_ODR_ODR4 = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOD_ODR_ODR5 = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOD_ODR_ODR6 = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOD_ODR_ODR7 = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOD_ODR_ODR8 = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOD_ODR_ODR9 = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOD_ODR_ODR10 = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOD_ODR_ODR11 = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOD_ODR_ODR12 = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOD_ODR_ODR13 = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOD_ODR_ODR14 = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOD_ODR_ODR15 = { 15, 1, 0 };


constexpr static u32 GPIOD_BSRR_BASE = GPIOD_BASE + 24;
constexpr static RegisterFieldDescriptor GPIOD_BSRR_BS0 = { 0, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOD_BSRR_BS1 = { 1, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOD_BSRR_BS2 = { 2, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOD_BSRR_BS3 = { 3, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOD_BSRR_BS4 = { 4, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOD_BSRR_BS5 = { 5, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOD_BSRR_BS6 = { 6, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOD_BSRR_BS7 = { 7, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOD_BSRR_BS8 = { 8, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOD_BSRR_BS9 = { 9, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOD_BSRR_BS10 = { 10, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOD_BSRR_BS11 = { 11, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOD_BSRR_BS12 = { 12, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOD_BSRR_BS13 = { 13, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOD_BSRR_BS14 = { 14, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOD_BSRR_BS15 = { 15, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOD_BSRR_BR0 = { 16, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOD_BSRR_BR1 = { 17, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOD_BSRR_BR2 = { 18, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOD_BSRR_BR3 = { 19, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOD_BSRR_BR4 = { 20, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOD_BSRR_BR5 = { 21, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOD_BSRR_BR6 = { 22, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOD_BSRR_BR7 = { 23, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOD_BSRR_BR8 = { 24, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOD_BSRR_BR9 = { 25, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOD_BSRR_BR10 = { 26, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOD_BSRR_BR11 = { 27, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOD_BSRR_BR12 = { 28, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOD_BSRR_BR13 = { 29, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOD_BSRR_BR14 = { 30, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOD_BSRR_BR15 = { 31, 1, 2 };


constexpr static u32 GPIOD_LCKR_BASE = GPIOD_BASE + 28;
constexpr static RegisterFieldDescriptor GPIOD_LCKR_LCK0 = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOD_LCKR_LCK1 = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOD_LCKR_LCK2 = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOD_LCKR_LCK3 = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOD_LCKR_LCK4 = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOD_LCKR_LCK5 = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOD_LCKR_LCK6 = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOD_LCKR_LCK7 = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOD_LCKR_LCK8 = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOD_LCKR_LCK9 = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOD_LCKR_LCK10 = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOD_LCKR_LCK11 = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOD_LCKR_LCK12 = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOD_LCKR_LCK13 = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOD_LCKR_LCK14 = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOD_LCKR_LCK15 = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOD_LCKR_LCKK = { 16, 1, 0 };


constexpr static u32 GPIOD_AFRL_BASE = GPIOD_BASE + 32;
constexpr static RegisterFieldDescriptor GPIOD_AFRL_AFSEL0 = { 0, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOD_AFRL_AFSEL1 = { 4, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOD_AFRL_AFSEL2 = { 8, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOD_AFRL_AFSEL3 = { 12, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOD_AFRL_AFSEL4 = { 16, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOD_AFRL_AFSEL5 = { 20, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOD_AFRL_AFSEL6 = { 24, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOD_AFRL_AFSEL7 = { 28, 4, 0 };


constexpr static u32 GPIOD_AFRH_BASE = GPIOD_BASE + 36;
constexpr static RegisterFieldDescriptor GPIOD_AFRH_AFSEL8 = { 0, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOD_AFRH_AFSEL9 = { 4, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOD_AFRH_AFSEL10 = { 8, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOD_AFRH_AFSEL11 = { 12, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOD_AFRH_AFSEL12 = { 16, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOD_AFRH_AFSEL13 = { 20, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOD_AFRH_AFSEL14 = { 24, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOD_AFRH_AFSEL15 = { 28, 4, 0 };


constexpr static u32 GPIOD_BRR_BASE = GPIOD_BASE + 40;
constexpr static RegisterFieldDescriptor GPIOD_BRR_BR0 = { 0, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOD_BRR_BR1 = { 1, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOD_BRR_BR2 = { 2, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOD_BRR_BR3 = { 3, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOD_BRR_BR4 = { 4, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOD_BRR_BR5 = { 5, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOD_BRR_BR6 = { 6, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOD_BRR_BR7 = { 7, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOD_BRR_BR8 = { 8, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOD_BRR_BR9 = { 9, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOD_BRR_BR10 = { 10, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOD_BRR_BR11 = { 11, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOD_BRR_BR12 = { 12, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOD_BRR_BR13 = { 13, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOD_BRR_BR14 = { 14, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOD_BRR_BR15 = { 15, 1, 2 };




constexpr static u32 GPIOF_BASE = 1342182400;
constexpr static u32 GPIOF_MODER_BASE = GPIOF_BASE + 0;
constexpr static RegisterFieldDescriptor GPIOF_MODER_MODER0 = { 0, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOF_MODER_MODER1 = { 2, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOF_MODER_MODER2 = { 4, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOF_MODER_MODER3 = { 6, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOF_MODER_MODER4 = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOF_MODER_MODER5 = { 10, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOF_MODER_MODER6 = { 12, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOF_MODER_MODER7 = { 14, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOF_MODER_MODER8 = { 16, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOF_MODER_MODER9 = { 18, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOF_MODER_MODER10 = { 20, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOF_MODER_MODER11 = { 22, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOF_MODER_MODER12 = { 24, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOF_MODER_MODER13 = { 26, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOF_MODER_MODER14 = { 28, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOF_MODER_MODER15 = { 30, 2, 0 };


constexpr static u32 GPIOF_OTYPER_BASE = GPIOF_BASE + 4;
constexpr static RegisterFieldDescriptor GPIOF_OTYPER_OT0 = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOF_OTYPER_OT1 = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOF_OTYPER_OT2 = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOF_OTYPER_OT3 = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOF_OTYPER_OT4 = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOF_OTYPER_OT5 = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOF_OTYPER_OT6 = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOF_OTYPER_OT7 = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOF_OTYPER_OT8 = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOF_OTYPER_OT9 = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOF_OTYPER_OT10 = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOF_OTYPER_OT11 = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOF_OTYPER_OT12 = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOF_OTYPER_OT13 = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOF_OTYPER_OT14 = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOF_OTYPER_OT15 = { 15, 1, 0 };


constexpr static u32 GPIOF_OSPEEDR_BASE = GPIOF_BASE + 8;
constexpr static RegisterFieldDescriptor GPIOF_OSPEEDR_OSPEEDR0 = { 0, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOF_OSPEEDR_OSPEEDR1 = { 2, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOF_OSPEEDR_OSPEEDR2 = { 4, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOF_OSPEEDR_OSPEEDR3 = { 6, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOF_OSPEEDR_OSPEEDR4 = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOF_OSPEEDR_OSPEEDR5 = { 10, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOF_OSPEEDR_OSPEEDR6 = { 12, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOF_OSPEEDR_OSPEEDR7 = { 14, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOF_OSPEEDR_OSPEEDR8 = { 16, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOF_OSPEEDR_OSPEEDR9 = { 18, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOF_OSPEEDR_OSPEEDR10 = { 20, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOF_OSPEEDR_OSPEEDR11 = { 22, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOF_OSPEEDR_OSPEEDR12 = { 24, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOF_OSPEEDR_OSPEEDR13 = { 26, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOF_OSPEEDR_OSPEEDR14 = { 28, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOF_OSPEEDR_OSPEEDR15 = { 30, 2, 0 };


constexpr static u32 GPIOF_PUPDR_BASE = GPIOF_BASE + 12;
constexpr static RegisterFieldDescriptor GPIOF_PUPDR_PUPDR0 = { 0, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOF_PUPDR_PUPDR1 = { 2, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOF_PUPDR_PUPDR2 = { 4, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOF_PUPDR_PUPDR3 = { 6, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOF_PUPDR_PUPDR4 = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOF_PUPDR_PUPDR5 = { 10, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOF_PUPDR_PUPDR6 = { 12, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOF_PUPDR_PUPDR7 = { 14, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOF_PUPDR_PUPDR8 = { 16, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOF_PUPDR_PUPDR9 = { 18, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOF_PUPDR_PUPDR10 = { 20, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOF_PUPDR_PUPDR11 = { 22, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOF_PUPDR_PUPDR12 = { 24, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOF_PUPDR_PUPDR13 = { 26, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOF_PUPDR_PUPDR14 = { 28, 2, 0 };
constexpr static RegisterFieldDescriptor GPIOF_PUPDR_PUPDR15 = { 30, 2, 0 };


constexpr static u32 GPIOF_IDR_BASE = GPIOF_BASE + 16;
constexpr static RegisterFieldDescriptor GPIOF_IDR_IDR0 = { 0, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOF_IDR_IDR1 = { 1, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOF_IDR_IDR2 = { 2, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOF_IDR_IDR3 = { 3, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOF_IDR_IDR4 = { 4, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOF_IDR_IDR5 = { 5, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOF_IDR_IDR6 = { 6, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOF_IDR_IDR7 = { 7, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOF_IDR_IDR8 = { 8, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOF_IDR_IDR9 = { 9, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOF_IDR_IDR10 = { 10, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOF_IDR_IDR11 = { 11, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOF_IDR_IDR12 = { 12, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOF_IDR_IDR13 = { 13, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOF_IDR_IDR14 = { 14, 1, 1 };
constexpr static RegisterFieldDescriptor GPIOF_IDR_IDR15 = { 15, 1, 1 };


constexpr static u32 GPIOF_ODR_BASE = GPIOF_BASE + 20;
constexpr static RegisterFieldDescriptor GPIOF_ODR_ODR0 = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOF_ODR_ODR1 = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOF_ODR_ODR2 = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOF_ODR_ODR3 = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOF_ODR_ODR4 = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOF_ODR_ODR5 = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOF_ODR_ODR6 = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOF_ODR_ODR7 = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOF_ODR_ODR8 = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOF_ODR_ODR9 = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOF_ODR_ODR10 = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOF_ODR_ODR11 = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOF_ODR_ODR12 = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOF_ODR_ODR13 = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOF_ODR_ODR14 = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOF_ODR_ODR15 = { 15, 1, 0 };


constexpr static u32 GPIOF_BSRR_BASE = GPIOF_BASE + 24;
constexpr static RegisterFieldDescriptor GPIOF_BSRR_BS0 = { 0, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOF_BSRR_BS1 = { 1, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOF_BSRR_BS2 = { 2, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOF_BSRR_BS3 = { 3, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOF_BSRR_BS4 = { 4, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOF_BSRR_BS5 = { 5, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOF_BSRR_BS6 = { 6, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOF_BSRR_BS7 = { 7, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOF_BSRR_BS8 = { 8, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOF_BSRR_BS9 = { 9, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOF_BSRR_BS10 = { 10, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOF_BSRR_BS11 = { 11, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOF_BSRR_BS12 = { 12, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOF_BSRR_BS13 = { 13, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOF_BSRR_BS14 = { 14, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOF_BSRR_BS15 = { 15, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOF_BSRR_BR0 = { 16, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOF_BSRR_BR1 = { 17, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOF_BSRR_BR2 = { 18, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOF_BSRR_BR3 = { 19, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOF_BSRR_BR4 = { 20, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOF_BSRR_BR5 = { 21, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOF_BSRR_BR6 = { 22, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOF_BSRR_BR7 = { 23, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOF_BSRR_BR8 = { 24, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOF_BSRR_BR9 = { 25, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOF_BSRR_BR10 = { 26, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOF_BSRR_BR11 = { 27, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOF_BSRR_BR12 = { 28, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOF_BSRR_BR13 = { 29, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOF_BSRR_BR14 = { 30, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOF_BSRR_BR15 = { 31, 1, 2 };


constexpr static u32 GPIOF_LCKR_BASE = GPIOF_BASE + 28;
constexpr static RegisterFieldDescriptor GPIOF_LCKR_LCK0 = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOF_LCKR_LCK1 = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOF_LCKR_LCK2 = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOF_LCKR_LCK3 = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOF_LCKR_LCK4 = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOF_LCKR_LCK5 = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOF_LCKR_LCK6 = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOF_LCKR_LCK7 = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOF_LCKR_LCK8 = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOF_LCKR_LCK9 = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOF_LCKR_LCK10 = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOF_LCKR_LCK11 = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOF_LCKR_LCK12 = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOF_LCKR_LCK13 = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOF_LCKR_LCK14 = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOF_LCKR_LCK15 = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor GPIOF_LCKR_LCKK = { 16, 1, 0 };


constexpr static u32 GPIOF_AFRL_BASE = GPIOF_BASE + 32;
constexpr static RegisterFieldDescriptor GPIOF_AFRL_AFSEL0 = { 0, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOF_AFRL_AFSEL1 = { 4, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOF_AFRL_AFSEL2 = { 8, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOF_AFRL_AFSEL3 = { 12, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOF_AFRL_AFSEL4 = { 16, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOF_AFRL_AFSEL5 = { 20, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOF_AFRL_AFSEL6 = { 24, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOF_AFRL_AFSEL7 = { 28, 4, 0 };


constexpr static u32 GPIOF_AFRH_BASE = GPIOF_BASE + 36;
constexpr static RegisterFieldDescriptor GPIOF_AFRH_AFSEL8 = { 0, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOF_AFRH_AFSEL9 = { 4, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOF_AFRH_AFSEL10 = { 8, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOF_AFRH_AFSEL11 = { 12, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOF_AFRH_AFSEL12 = { 16, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOF_AFRH_AFSEL13 = { 20, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOF_AFRH_AFSEL14 = { 24, 4, 0 };
constexpr static RegisterFieldDescriptor GPIOF_AFRH_AFSEL15 = { 28, 4, 0 };


constexpr static u32 GPIOF_BRR_BASE = GPIOF_BASE + 40;
constexpr static RegisterFieldDescriptor GPIOF_BRR_BR0 = { 0, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOF_BRR_BR1 = { 1, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOF_BRR_BR2 = { 2, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOF_BRR_BR3 = { 3, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOF_BRR_BR4 = { 4, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOF_BRR_BR5 = { 5, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOF_BRR_BR6 = { 6, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOF_BRR_BR7 = { 7, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOF_BRR_BR8 = { 8, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOF_BRR_BR9 = { 9, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOF_BRR_BR10 = { 10, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOF_BRR_BR11 = { 11, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOF_BRR_BR12 = { 12, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOF_BRR_BR13 = { 13, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOF_BRR_BR14 = { 14, 1, 2 };
constexpr static RegisterFieldDescriptor GPIOF_BRR_BR15 = { 15, 1, 2 };




constexpr static u32 CRC_BASE = 1073885184;
constexpr static u32 CRC_DR_BASE = CRC_BASE + 0;
constexpr static RegisterFieldDescriptor CRC_DR_DR = { 0, 32, 0 };


constexpr static u32 CRC_IDR_BASE = CRC_BASE + 4;
constexpr static RegisterFieldDescriptor CRC_IDR_IDR = { 0, 32, 0 };


constexpr static u32 CRC_CR_BASE = CRC_BASE + 8;
constexpr static RegisterFieldDescriptor CRC_CR_RESET = { 0, 1, 2 };
constexpr static RegisterFieldDescriptor CRC_CR_POLYSIZE = { 3, 2, 0 };
constexpr static RegisterFieldDescriptor CRC_CR_REV_IN = { 5, 2, 0 };
constexpr static RegisterFieldDescriptor CRC_CR_REV_OUT = { 7, 1, 0 };


constexpr static u32 CRC_INIT_BASE = CRC_BASE + 16;
constexpr static RegisterFieldDescriptor CRC_INIT_CRC_INIT = { 0, 32, 0 };


constexpr static u32 CRC_POL_BASE = CRC_BASE + 20;
constexpr static RegisterFieldDescriptor CRC_POL_POL = { 0, 32, 0 };




constexpr static u32 EXTI_BASE = 1073879040;
constexpr static u32 EXTI_RTSR1_BASE = EXTI_BASE + 0;
constexpr static RegisterFieldDescriptor EXTI_RTSR1_RT0 = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_RTSR1_RT1 = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_RTSR1_RT2 = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_RTSR1_RT3 = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_RTSR1_RT4 = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_RTSR1_RT5 = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_RTSR1_RT6 = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_RTSR1_RT7 = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_RTSR1_RT8 = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_RTSR1_RT9 = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_RTSR1_RT10 = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_RTSR1_RT11 = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_RTSR1_RT12 = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_RTSR1_RT13 = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_RTSR1_RT14 = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_RTSR1_RT15 = { 15, 1, 0 };


constexpr static u32 EXTI_FTSR1_BASE = EXTI_BASE + 4;
constexpr static RegisterFieldDescriptor EXTI_FTSR1_FT0 = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_FTSR1_FT1 = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_FTSR1_FT2 = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_FTSR1_FT3 = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_FTSR1_FT4 = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_FTSR1_FT5 = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_FTSR1_FT6 = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_FTSR1_FT7 = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_FTSR1_FT8 = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_FTSR1_FT9 = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_FTSR1_FT10 = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_FTSR1_FT11 = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_FTSR1_FT12 = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_FTSR1_FT13 = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_FTSR1_FT14 = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_FTSR1_FT15 = { 15, 1, 0 };


constexpr static u32 EXTI_SWIER1_BASE = EXTI_BASE + 8;
constexpr static RegisterFieldDescriptor EXTI_SWIER1_SWI0 = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_SWIER1_SWI1 = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_SWIER1_SWI2 = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_SWIER1_SWI3 = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_SWIER1_SWI4 = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_SWIER1_SWI5 = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_SWIER1_SWI6 = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_SWIER1_SWI7 = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_SWIER1_SWI8 = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_SWIER1_SWI9 = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_SWIER1_SWI10 = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_SWIER1_SWI11 = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_SWIER1_SWI12 = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_SWIER1_SWI13 = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_SWIER1_SWI14 = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_SWIER1_SWI15 = { 15, 1, 0 };


constexpr static u32 EXTI_RPR1_BASE = EXTI_BASE + 12;
constexpr static RegisterFieldDescriptor EXTI_RPR1_RPIF0 = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_RPR1_RPIF1 = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_RPR1_RPIF2 = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_RPR1_RPIF3 = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_RPR1_RPIF4 = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_RPR1_RPIF5 = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_RPR1_RPIF6 = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_RPR1_RPIF7 = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_RPR1_RPIF8 = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_RPR1_RPIF9 = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_RPR1_RPIF10 = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_RPR1_RPIF11 = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_RPR1_RPIF12 = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_RPR1_RPIF13 = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_RPR1_RPIF14 = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_RPR1_RPIF15 = { 15, 1, 0 };


constexpr static u32 EXTI_FPR1_BASE = EXTI_BASE + 16;
constexpr static RegisterFieldDescriptor EXTI_FPR1_FPIF0 = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_FPR1_FPIF1 = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_FPR1_FPIF2 = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_FPR1_FPIF3 = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_FPR1_FPIF4 = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_FPR1_FPIF5 = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_FPR1_FPIF6 = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_FPR1_FPIF7 = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_FPR1_FPIF8 = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_FPR1_FPIF9 = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_FPR1_FPIF10 = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_FPR1_FPIF11 = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_FPR1_FPIF12 = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_FPR1_FPIF13 = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_FPR1_FPIF14 = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_FPR1_FPIF15 = { 15, 1, 0 };


constexpr static u32 EXTI_EXTICR1_BASE = EXTI_BASE + 96;
constexpr static RegisterFieldDescriptor EXTI_EXTICR1_EXTI0_7 = { 0, 8, 0 };
constexpr static RegisterFieldDescriptor EXTI_EXTICR1_EXTI8_15 = { 8, 8, 0 };
constexpr static RegisterFieldDescriptor EXTI_EXTICR1_EXTI16_23 = { 16, 8, 0 };
constexpr static RegisterFieldDescriptor EXTI_EXTICR1_EXTI24_31 = { 24, 8, 0 };


constexpr static u32 EXTI_EXTICR2_BASE = EXTI_BASE + 100;
constexpr static RegisterFieldDescriptor EXTI_EXTICR2_EXTI0_7 = { 0, 8, 0 };
constexpr static RegisterFieldDescriptor EXTI_EXTICR2_EXTI8_15 = { 8, 8, 0 };
constexpr static RegisterFieldDescriptor EXTI_EXTICR2_EXTI16_23 = { 16, 8, 0 };
constexpr static RegisterFieldDescriptor EXTI_EXTICR2_EXTI24_31 = { 24, 8, 0 };


constexpr static u32 EXTI_EXTICR3_BASE = EXTI_BASE + 104;
constexpr static RegisterFieldDescriptor EXTI_EXTICR3_EXTI0_7 = { 0, 8, 0 };
constexpr static RegisterFieldDescriptor EXTI_EXTICR3_EXTI8_15 = { 8, 8, 0 };
constexpr static RegisterFieldDescriptor EXTI_EXTICR3_EXTI16_23 = { 16, 8, 0 };
constexpr static RegisterFieldDescriptor EXTI_EXTICR3_EXTI24_31 = { 24, 8, 0 };


constexpr static u32 EXTI_EXTICR4_BASE = EXTI_BASE + 108;
constexpr static RegisterFieldDescriptor EXTI_EXTICR4_EXTI0_7 = { 0, 8, 0 };
constexpr static RegisterFieldDescriptor EXTI_EXTICR4_EXTI8_15 = { 8, 8, 0 };
constexpr static RegisterFieldDescriptor EXTI_EXTICR4_EXTI16_23 = { 16, 8, 0 };
constexpr static RegisterFieldDescriptor EXTI_EXTICR4_EXTI24_31 = { 24, 8, 0 };


constexpr static u32 EXTI_IMR1_BASE = EXTI_BASE + 128;
constexpr static RegisterFieldDescriptor EXTI_IMR1_IM0 = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_IMR1_IM1 = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_IMR1_IM2 = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_IMR1_IM3 = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_IMR1_IM4 = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_IMR1_IM5 = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_IMR1_IM6 = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_IMR1_IM7 = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_IMR1_IM8 = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_IMR1_IM9 = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_IMR1_IM10 = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_IMR1_IM11 = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_IMR1_IM12 = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_IMR1_IM13 = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_IMR1_IM14 = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_IMR1_IM15 = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_IMR1_IM19 = { 19, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_IMR1_IM21 = { 21, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_IMR1_IM22 = { 22, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_IMR1_IM23 = { 23, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_IMR1_IM24 = { 24, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_IMR1_IM25 = { 25, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_IMR1_IM26 = { 26, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_IMR1_IM31 = { 31, 1, 0 };


constexpr static u32 EXTI_EMR1_BASE = EXTI_BASE + 132;
constexpr static RegisterFieldDescriptor EXTI_EMR1_EM0 = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_EMR1_EM1 = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_EMR1_EM2 = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_EMR1_EM3 = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_EMR1_EM4 = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_EMR1_EM5 = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_EMR1_EM6 = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_EMR1_EM7 = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_EMR1_EM8 = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_EMR1_EM9 = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_EMR1_EM10 = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_EMR1_EM11 = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_EMR1_EM12 = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_EMR1_EM13 = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_EMR1_EM14 = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_EMR1_EM15 = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_EMR1_EM19 = { 19, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_EMR1_EM21 = { 21, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_EMR1_EM23 = { 23, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_EMR1_EM25 = { 25, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_EMR1_EM26 = { 26, 1, 0 };
constexpr static RegisterFieldDescriptor EXTI_EMR1_EM31 = { 31, 1, 0 };




constexpr static u32 TIM16_BASE = 1073824768;
constexpr static u32 TIM16_CR1_BASE = TIM16_BASE + 0;
constexpr static RegisterFieldDescriptor TIM16_CR1_CEN = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor TIM16_CR1_UDIS = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor TIM16_CR1_URS = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor TIM16_CR1_OPM = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor TIM16_CR1_ARPE = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor TIM16_CR1_CKD = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor TIM16_CR1_UIFREMAP = { 11, 1, 0 };


constexpr static u32 TIM16_CR2_BASE = TIM16_BASE + 4;
constexpr static RegisterFieldDescriptor TIM16_CR2_CCPC = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor TIM16_CR2_CCUS = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor TIM16_CR2_CCDS = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor TIM16_CR2_OIS1 = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor TIM16_CR2_OIS1N = { 9, 1, 0 };


constexpr static u32 TIM16_DIER_BASE = TIM16_BASE + 12;
constexpr static RegisterFieldDescriptor TIM16_DIER_UIE = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor TIM16_DIER_CC1IE = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor TIM16_DIER_COMIE = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor TIM16_DIER_BIE = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor TIM16_DIER_UDE = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor TIM16_DIER_CC1DE = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor TIM16_DIER_COMDE = { 13, 1, 0 };


constexpr static u32 TIM16_SR_BASE = TIM16_BASE + 16;
constexpr static RegisterFieldDescriptor TIM16_SR_UIF = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor TIM16_SR_CC1IF = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor TIM16_SR_COMIF = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor TIM16_SR_BIF = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor TIM16_SR_CC1OF = { 9, 1, 0 };


constexpr static u32 TIM16_EGR_BASE = TIM16_BASE + 20;
constexpr static RegisterFieldDescriptor TIM16_EGR_UG = { 0, 1, 2 };
constexpr static RegisterFieldDescriptor TIM16_EGR_CC1G = { 1, 1, 2 };
constexpr static RegisterFieldDescriptor TIM16_EGR_COMG = { 5, 1, 2 };
constexpr static RegisterFieldDescriptor TIM16_EGR_BG = { 7, 1, 2 };


constexpr static u32 TIM16_CCMR1_Output_BASE = TIM16_BASE + 24;
constexpr static RegisterFieldDescriptor TIM16_CCMR1_Output_CC1S = { 0, 2, 0 };
constexpr static RegisterFieldDescriptor TIM16_CCMR1_Output_OC1FE = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor TIM16_CCMR1_Output_OC1PE = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor TIM16_CCMR1_Output_OC1M = { 4, 3, 0 };
constexpr static RegisterFieldDescriptor TIM16_CCMR1_Output_OC1M_2 = { 16, 1, 0 };


constexpr static u32 TIM16_CCMR1_Input_BASE = TIM16_BASE + 24;
constexpr static RegisterFieldDescriptor TIM16_CCMR1_Input_CC1S = { 0, 2, 0 };
constexpr static RegisterFieldDescriptor TIM16_CCMR1_Input_IC1PSC = { 2, 2, 0 };
constexpr static RegisterFieldDescriptor TIM16_CCMR1_Input_IC1F = { 4, 4, 0 };


constexpr static u32 TIM16_CCER_BASE = TIM16_BASE + 32;
constexpr static RegisterFieldDescriptor TIM16_CCER_CC1E = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor TIM16_CCER_CC1P = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor TIM16_CCER_CC1NE = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor TIM16_CCER_CC1NP = { 3, 1, 0 };


constexpr static u32 TIM16_CNT_BASE = TIM16_BASE + 36;
constexpr static RegisterFieldDescriptor TIM16_CNT_CNT = { 0, 16, 0 };
constexpr static RegisterFieldDescriptor TIM16_CNT_UIFCPY = { 31, 1, 1 };


constexpr static u32 TIM16_PSC_BASE = TIM16_BASE + 40;
constexpr static RegisterFieldDescriptor TIM16_PSC_PSC = { 0, 16, 0 };


constexpr static u32 TIM16_ARR_BASE = TIM16_BASE + 44;
constexpr static RegisterFieldDescriptor TIM16_ARR_ARR = { 0, 16, 0 };


constexpr static u32 TIM16_RCR_BASE = TIM16_BASE + 48;
constexpr static RegisterFieldDescriptor TIM16_RCR_REP = { 0, 8, 0 };


constexpr static u32 TIM16_CCR1_BASE = TIM16_BASE + 52;
constexpr static RegisterFieldDescriptor TIM16_CCR1_CCR1 = { 0, 16, 0 };


constexpr static u32 TIM16_BDTR_BASE = TIM16_BASE + 68;
constexpr static RegisterFieldDescriptor TIM16_BDTR_DTG = { 0, 8, 0 };
constexpr static RegisterFieldDescriptor TIM16_BDTR_LOCK = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor TIM16_BDTR_OSSI = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor TIM16_BDTR_OSSR = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor TIM16_BDTR_BKE = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor TIM16_BDTR_BKP = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor TIM16_BDTR_AOE = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor TIM16_BDTR_MOE = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor TIM16_BDTR_BKF = { 16, 4, 0 };
constexpr static RegisterFieldDescriptor TIM16_BDTR_BKDSRM = { 26, 1, 0 };
constexpr static RegisterFieldDescriptor TIM16_BDTR_BKBID = { 28, 1, 0 };


constexpr static u32 TIM16_DCR_BASE = TIM16_BASE + 72;
constexpr static RegisterFieldDescriptor TIM16_DCR_DBA = { 0, 5, 0 };
constexpr static RegisterFieldDescriptor TIM16_DCR_DBL = { 8, 5, 0 };


constexpr static u32 TIM16_DMAR_BASE = TIM16_BASE + 76;
constexpr static RegisterFieldDescriptor TIM16_DMAR_DMAB = { 0, 16, 0 };


constexpr static u32 TIM16_AF1_BASE = TIM16_BASE + 96;
constexpr static RegisterFieldDescriptor TIM16_AF1_BKINE = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor TIM16_AF1_BKCMP1E = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor TIM16_AF1_BKCMP2E = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor TIM16_AF1_BKDFBK1E = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor TIM16_AF1_BKINP = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor TIM16_AF1_BKCMP1P = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor TIM16_AF1_BKCMP2P = { 11, 1, 0 };


constexpr static u32 TIM16_TISEL_BASE = TIM16_BASE + 104;
constexpr static RegisterFieldDescriptor TIM16_TISEL_TI1SEL = { 0, 4, 0 };




constexpr static u32 TIM17_BASE = 1073825792;
constexpr static u32 TIM17_CR1_BASE = TIM17_BASE + 0;
constexpr static RegisterFieldDescriptor TIM17_CR1_CEN = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor TIM17_CR1_UDIS = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor TIM17_CR1_URS = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor TIM17_CR1_OPM = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor TIM17_CR1_ARPE = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor TIM17_CR1_CKD = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor TIM17_CR1_UIFREMAP = { 11, 1, 0 };


constexpr static u32 TIM17_CR2_BASE = TIM17_BASE + 4;
constexpr static RegisterFieldDescriptor TIM17_CR2_CCPC = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor TIM17_CR2_CCUS = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor TIM17_CR2_CCDS = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor TIM17_CR2_OIS1 = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor TIM17_CR2_OIS1N = { 9, 1, 0 };


constexpr static u32 TIM17_DIER_BASE = TIM17_BASE + 12;
constexpr static RegisterFieldDescriptor TIM17_DIER_UIE = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor TIM17_DIER_CC1IE = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor TIM17_DIER_COMIE = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor TIM17_DIER_BIE = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor TIM17_DIER_UDE = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor TIM17_DIER_CC1DE = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor TIM17_DIER_COMDE = { 13, 1, 0 };


constexpr static u32 TIM17_SR_BASE = TIM17_BASE + 16;
constexpr static RegisterFieldDescriptor TIM17_SR_UIF = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor TIM17_SR_CC1IF = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor TIM17_SR_COMIF = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor TIM17_SR_BIF = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor TIM17_SR_CC1OF = { 9, 1, 0 };


constexpr static u32 TIM17_EGR_BASE = TIM17_BASE + 20;
constexpr static RegisterFieldDescriptor TIM17_EGR_UG = { 0, 1, 2 };
constexpr static RegisterFieldDescriptor TIM17_EGR_CC1G = { 1, 1, 2 };
constexpr static RegisterFieldDescriptor TIM17_EGR_COMG = { 5, 1, 2 };
constexpr static RegisterFieldDescriptor TIM17_EGR_BG = { 7, 1, 2 };


constexpr static u32 TIM17_CCMR1_Output_BASE = TIM17_BASE + 24;
constexpr static RegisterFieldDescriptor TIM17_CCMR1_Output_CC1S = { 0, 2, 0 };
constexpr static RegisterFieldDescriptor TIM17_CCMR1_Output_OC1FE = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor TIM17_CCMR1_Output_OC1PE = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor TIM17_CCMR1_Output_OC1M = { 4, 3, 0 };
constexpr static RegisterFieldDescriptor TIM17_CCMR1_Output_OC1M_2 = { 16, 1, 0 };


constexpr static u32 TIM17_CCMR1_Input_BASE = TIM17_BASE + 24;
constexpr static RegisterFieldDescriptor TIM17_CCMR1_Input_CC1S = { 0, 2, 0 };
constexpr static RegisterFieldDescriptor TIM17_CCMR1_Input_IC1PSC = { 2, 2, 0 };
constexpr static RegisterFieldDescriptor TIM17_CCMR1_Input_IC1F = { 4, 4, 0 };


constexpr static u32 TIM17_CCER_BASE = TIM17_BASE + 32;
constexpr static RegisterFieldDescriptor TIM17_CCER_CC1E = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor TIM17_CCER_CC1P = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor TIM17_CCER_CC1NE = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor TIM17_CCER_CC1NP = { 3, 1, 0 };


constexpr static u32 TIM17_CNT_BASE = TIM17_BASE + 36;
constexpr static RegisterFieldDescriptor TIM17_CNT_CNT = { 0, 16, 0 };
constexpr static RegisterFieldDescriptor TIM17_CNT_UIFCPY = { 31, 1, 1 };


constexpr static u32 TIM17_PSC_BASE = TIM17_BASE + 40;
constexpr static RegisterFieldDescriptor TIM17_PSC_PSC = { 0, 16, 0 };


constexpr static u32 TIM17_ARR_BASE = TIM17_BASE + 44;
constexpr static RegisterFieldDescriptor TIM17_ARR_ARR = { 0, 16, 0 };


constexpr static u32 TIM17_RCR_BASE = TIM17_BASE + 48;
constexpr static RegisterFieldDescriptor TIM17_RCR_REP = { 0, 8, 0 };


constexpr static u32 TIM17_CCR1_BASE = TIM17_BASE + 52;
constexpr static RegisterFieldDescriptor TIM17_CCR1_CCR1 = { 0, 16, 0 };


constexpr static u32 TIM17_BDTR_BASE = TIM17_BASE + 68;
constexpr static RegisterFieldDescriptor TIM17_BDTR_DTG = { 0, 8, 0 };
constexpr static RegisterFieldDescriptor TIM17_BDTR_LOCK = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor TIM17_BDTR_OSSI = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor TIM17_BDTR_OSSR = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor TIM17_BDTR_BKE = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor TIM17_BDTR_BKP = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor TIM17_BDTR_AOE = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor TIM17_BDTR_MOE = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor TIM17_BDTR_BKF = { 16, 4, 0 };
constexpr static RegisterFieldDescriptor TIM17_BDTR_BKDSRM = { 26, 1, 0 };
constexpr static RegisterFieldDescriptor TIM17_BDTR_BKBID = { 28, 1, 0 };


constexpr static u32 TIM17_DCR_BASE = TIM17_BASE + 72;
constexpr static RegisterFieldDescriptor TIM17_DCR_DBA = { 0, 5, 0 };
constexpr static RegisterFieldDescriptor TIM17_DCR_DBL = { 8, 5, 0 };


constexpr static u32 TIM17_DMAR_BASE = TIM17_BASE + 76;
constexpr static RegisterFieldDescriptor TIM17_DMAR_DMAB = { 0, 16, 0 };


constexpr static u32 TIM17_AF1_BASE = TIM17_BASE + 96;
constexpr static RegisterFieldDescriptor TIM17_AF1_BKINE = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor TIM17_AF1_BKCMP1E = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor TIM17_AF1_BKCMP2E = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor TIM17_AF1_BKDFBK1E = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor TIM17_AF1_BKINP = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor TIM17_AF1_BKCMP1P = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor TIM17_AF1_BKCMP2P = { 11, 1, 0 };


constexpr static u32 TIM17_TISEL_BASE = TIM17_BASE + 104;
constexpr static RegisterFieldDescriptor TIM17_TISEL_TI1SEL = { 0, 4, 0 };




constexpr static u32 USART1_BASE = 1073821696;
constexpr static u32 USART1_CR1_BASE = USART1_BASE + 0;
constexpr static RegisterFieldDescriptor USART1_CR1_UE = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR1_UESM = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR1_RE = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR1_TE = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR1_IDLEIE = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR1_RXNEIE = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR1_TCIE = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR1_TXEIE = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR1_PEIE = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR1_PS = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR1_PCE = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR1_WAKE = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR1_M0 = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR1_MME = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR1_CMIE = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR1_OVER8 = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR1_DEDT = { 16, 5, 0 };
constexpr static RegisterFieldDescriptor USART1_CR1_DEAT = { 21, 5, 0 };
constexpr static RegisterFieldDescriptor USART1_CR1_RTOIE = { 26, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR1_EOBIE = { 27, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR1_M1 = { 28, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR1_FIFOEN = { 29, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR1_TXFEIE = { 30, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR1_RXFFIE = { 31, 1, 0 };


constexpr static u32 USART1_CR2_BASE = USART1_BASE + 4;
constexpr static RegisterFieldDescriptor USART1_CR2_SLVEN = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR2_DIS_NSS = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR2_ADDM7 = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR2_LBDL = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR2_LBDIE = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR2_LBCL = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR2_CPHA = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR2_CPOL = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR2_CLKEN = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR2_STOP = { 12, 2, 0 };
constexpr static RegisterFieldDescriptor USART1_CR2_LINEN = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR2_SWAP = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR2_RXINV = { 16, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR2_TXINV = { 17, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR2_TAINV = { 18, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR2_MSBFIRST = { 19, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR2_ABREN = { 20, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR2_ABRMOD = { 21, 2, 0 };
constexpr static RegisterFieldDescriptor USART1_CR2_RTOEN = { 23, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR2_ADD0_3 = { 24, 4, 0 };
constexpr static RegisterFieldDescriptor USART1_CR2_ADD4_7 = { 28, 4, 0 };


constexpr static u32 USART1_CR3_BASE = USART1_BASE + 8;
constexpr static RegisterFieldDescriptor USART1_CR3_EIE = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR3_IREN = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR3_IRLP = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR3_HDSEL = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR3_NACK = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR3_SCEN = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR3_DMAR = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR3_DMAT = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR3_RTSE = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR3_CTSE = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR3_CTSIE = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR3_ONEBIT = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR3_OVRDIS = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR3_DDRE = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR3_DEM = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR3_DEP = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR3_SCARCNT = { 17, 3, 0 };
constexpr static RegisterFieldDescriptor USART1_CR3_WUS = { 20, 2, 0 };
constexpr static RegisterFieldDescriptor USART1_CR3_WUFIE = { 22, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR3_TXFTIE = { 23, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR3_TCBGTIE = { 24, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR3_RXFTCFG = { 25, 3, 0 };
constexpr static RegisterFieldDescriptor USART1_CR3_RXFTIE = { 28, 1, 0 };
constexpr static RegisterFieldDescriptor USART1_CR3_TXFTCFG = { 29, 3, 0 };


constexpr static u32 USART1_BRR_BASE = USART1_BASE + 12;
constexpr static RegisterFieldDescriptor USART1_BRR_BRR_0_3 = { 0, 4, 0 };
constexpr static RegisterFieldDescriptor USART1_BRR_BRR_4_15 = { 4, 12, 0 };


constexpr static u32 USART1_GTPR_BASE = USART1_BASE + 16;
constexpr static RegisterFieldDescriptor USART1_GTPR_PSC = { 0, 8, 0 };
constexpr static RegisterFieldDescriptor USART1_GTPR_GT = { 8, 8, 0 };


constexpr static u32 USART1_RTOR_BASE = USART1_BASE + 20;
constexpr static RegisterFieldDescriptor USART1_RTOR_RTO = { 0, 24, 0 };
constexpr static RegisterFieldDescriptor USART1_RTOR_BLEN = { 24, 8, 0 };


constexpr static u32 USART1_RQR_BASE = USART1_BASE + 24;
constexpr static RegisterFieldDescriptor USART1_RQR_ABRRQ = { 0, 1, 2 };
constexpr static RegisterFieldDescriptor USART1_RQR_SBKRQ = { 1, 1, 2 };
constexpr static RegisterFieldDescriptor USART1_RQR_MMRQ = { 2, 1, 2 };
constexpr static RegisterFieldDescriptor USART1_RQR_RXFRQ = { 3, 1, 2 };
constexpr static RegisterFieldDescriptor USART1_RQR_TXFRQ = { 4, 1, 2 };


constexpr static u32 USART1_ISR_BASE = USART1_BASE + 28;
constexpr static RegisterFieldDescriptor USART1_ISR_PE = { 0, 1, 1 };
constexpr static RegisterFieldDescriptor USART1_ISR_FE = { 1, 1, 1 };
constexpr static RegisterFieldDescriptor USART1_ISR_NF = { 2, 1, 1 };
constexpr static RegisterFieldDescriptor USART1_ISR_ORE = { 3, 1, 1 };
constexpr static RegisterFieldDescriptor USART1_ISR_IDLE = { 4, 1, 1 };
constexpr static RegisterFieldDescriptor USART1_ISR_RXNE = { 5, 1, 1 };
constexpr static RegisterFieldDescriptor USART1_ISR_TC = { 6, 1, 1 };
constexpr static RegisterFieldDescriptor USART1_ISR_TXE = { 7, 1, 1 };
constexpr static RegisterFieldDescriptor USART1_ISR_LBDF = { 8, 1, 1 };
constexpr static RegisterFieldDescriptor USART1_ISR_CTSIF = { 9, 1, 1 };
constexpr static RegisterFieldDescriptor USART1_ISR_CTS = { 10, 1, 1 };
constexpr static RegisterFieldDescriptor USART1_ISR_RTOF = { 11, 1, 1 };
constexpr static RegisterFieldDescriptor USART1_ISR_EOBF = { 12, 1, 1 };
constexpr static RegisterFieldDescriptor USART1_ISR_UDR = { 13, 1, 1 };
constexpr static RegisterFieldDescriptor USART1_ISR_ABRE = { 14, 1, 1 };
constexpr static RegisterFieldDescriptor USART1_ISR_ABRF = { 15, 1, 1 };
constexpr static RegisterFieldDescriptor USART1_ISR_BUSY = { 16, 1, 1 };
constexpr static RegisterFieldDescriptor USART1_ISR_CMF = { 17, 1, 1 };
constexpr static RegisterFieldDescriptor USART1_ISR_SBKF = { 18, 1, 1 };
constexpr static RegisterFieldDescriptor USART1_ISR_RWU = { 19, 1, 1 };
constexpr static RegisterFieldDescriptor USART1_ISR_WUF = { 20, 1, 1 };
constexpr static RegisterFieldDescriptor USART1_ISR_TEACK = { 21, 1, 1 };
constexpr static RegisterFieldDescriptor USART1_ISR_REACK = { 22, 1, 1 };
constexpr static RegisterFieldDescriptor USART1_ISR_TXFE = { 23, 1, 1 };
constexpr static RegisterFieldDescriptor USART1_ISR_RXFF = { 24, 1, 1 };
constexpr static RegisterFieldDescriptor USART1_ISR_TCBGT = { 25, 1, 1 };
constexpr static RegisterFieldDescriptor USART1_ISR_RXFT = { 26, 1, 1 };
constexpr static RegisterFieldDescriptor USART1_ISR_TXFT = { 27, 1, 1 };


constexpr static u32 USART1_ICR_BASE = USART1_BASE + 32;
constexpr static RegisterFieldDescriptor USART1_ICR_PECF = { 0, 1, 2 };
constexpr static RegisterFieldDescriptor USART1_ICR_FECF = { 1, 1, 2 };
constexpr static RegisterFieldDescriptor USART1_ICR_NCF = { 2, 1, 2 };
constexpr static RegisterFieldDescriptor USART1_ICR_ORECF = { 3, 1, 2 };
constexpr static RegisterFieldDescriptor USART1_ICR_IDLECF = { 4, 1, 2 };
constexpr static RegisterFieldDescriptor USART1_ICR_TXFECF = { 5, 1, 2 };
constexpr static RegisterFieldDescriptor USART1_ICR_TCCF = { 6, 1, 2 };
constexpr static RegisterFieldDescriptor USART1_ICR_TCBGTCF = { 7, 1, 2 };
constexpr static RegisterFieldDescriptor USART1_ICR_LBDCF = { 8, 1, 2 };
constexpr static RegisterFieldDescriptor USART1_ICR_CTSCF = { 9, 1, 2 };
constexpr static RegisterFieldDescriptor USART1_ICR_RTOCF = { 11, 1, 2 };
constexpr static RegisterFieldDescriptor USART1_ICR_EOBCF = { 12, 1, 2 };
constexpr static RegisterFieldDescriptor USART1_ICR_UDRCF = { 13, 1, 2 };
constexpr static RegisterFieldDescriptor USART1_ICR_CMCF = { 17, 1, 2 };
constexpr static RegisterFieldDescriptor USART1_ICR_WUCF = { 20, 1, 2 };


constexpr static u32 USART1_RDR_BASE = USART1_BASE + 36;
constexpr static RegisterFieldDescriptor USART1_RDR_RDR = { 0, 9, 1 };


constexpr static u32 USART1_TDR_BASE = USART1_BASE + 40;
constexpr static RegisterFieldDescriptor USART1_TDR_TDR = { 0, 9, 0 };


constexpr static u32 USART1_PRESC_BASE = USART1_BASE + 44;
constexpr static RegisterFieldDescriptor USART1_PRESC_PRESCALER = { 0, 4, 0 };




constexpr static u32 USART2_BASE = 1073759232;
constexpr static u32 USART2_CR1_BASE = USART2_BASE + 0;
constexpr static RegisterFieldDescriptor USART2_CR1_UE = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR1_UESM = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR1_RE = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR1_TE = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR1_IDLEIE = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR1_RXNEIE = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR1_TCIE = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR1_TXEIE = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR1_PEIE = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR1_PS = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR1_PCE = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR1_WAKE = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR1_M0 = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR1_MME = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR1_CMIE = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR1_OVER8 = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR1_DEDT = { 16, 5, 0 };
constexpr static RegisterFieldDescriptor USART2_CR1_DEAT = { 21, 5, 0 };
constexpr static RegisterFieldDescriptor USART2_CR1_RTOIE = { 26, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR1_EOBIE = { 27, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR1_M1 = { 28, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR1_FIFOEN = { 29, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR1_TXFEIE = { 30, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR1_RXFFIE = { 31, 1, 0 };


constexpr static u32 USART2_CR2_BASE = USART2_BASE + 4;
constexpr static RegisterFieldDescriptor USART2_CR2_SLVEN = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR2_DIS_NSS = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR2_ADDM7 = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR2_LBDL = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR2_LBDIE = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR2_LBCL = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR2_CPHA = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR2_CPOL = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR2_CLKEN = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR2_STOP = { 12, 2, 0 };
constexpr static RegisterFieldDescriptor USART2_CR2_LINEN = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR2_SWAP = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR2_RXINV = { 16, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR2_TXINV = { 17, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR2_TAINV = { 18, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR2_MSBFIRST = { 19, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR2_ABREN = { 20, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR2_ABRMOD = { 21, 2, 0 };
constexpr static RegisterFieldDescriptor USART2_CR2_RTOEN = { 23, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR2_ADD0_3 = { 24, 4, 0 };
constexpr static RegisterFieldDescriptor USART2_CR2_ADD4_7 = { 28, 4, 0 };


constexpr static u32 USART2_CR3_BASE = USART2_BASE + 8;
constexpr static RegisterFieldDescriptor USART2_CR3_EIE = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR3_IREN = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR3_IRLP = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR3_HDSEL = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR3_NACK = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR3_SCEN = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR3_DMAR = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR3_DMAT = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR3_RTSE = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR3_CTSE = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR3_CTSIE = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR3_ONEBIT = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR3_OVRDIS = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR3_DDRE = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR3_DEM = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR3_DEP = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR3_SCARCNT = { 17, 3, 0 };
constexpr static RegisterFieldDescriptor USART2_CR3_WUS = { 20, 2, 0 };
constexpr static RegisterFieldDescriptor USART2_CR3_WUFIE = { 22, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR3_TXFTIE = { 23, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR3_TCBGTIE = { 24, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR3_RXFTCFG = { 25, 3, 0 };
constexpr static RegisterFieldDescriptor USART2_CR3_RXFTIE = { 28, 1, 0 };
constexpr static RegisterFieldDescriptor USART2_CR3_TXFTCFG = { 29, 3, 0 };


constexpr static u32 USART2_BRR_BASE = USART2_BASE + 12;
constexpr static RegisterFieldDescriptor USART2_BRR_BRR_0_3 = { 0, 4, 0 };
constexpr static RegisterFieldDescriptor USART2_BRR_BRR_4_15 = { 4, 12, 0 };


constexpr static u32 USART2_GTPR_BASE = USART2_BASE + 16;
constexpr static RegisterFieldDescriptor USART2_GTPR_PSC = { 0, 8, 0 };
constexpr static RegisterFieldDescriptor USART2_GTPR_GT = { 8, 8, 0 };


constexpr static u32 USART2_RTOR_BASE = USART2_BASE + 20;
constexpr static RegisterFieldDescriptor USART2_RTOR_RTO = { 0, 24, 0 };
constexpr static RegisterFieldDescriptor USART2_RTOR_BLEN = { 24, 8, 0 };


constexpr static u32 USART2_RQR_BASE = USART2_BASE + 24;
constexpr static RegisterFieldDescriptor USART2_RQR_ABRRQ = { 0, 1, 2 };
constexpr static RegisterFieldDescriptor USART2_RQR_SBKRQ = { 1, 1, 2 };
constexpr static RegisterFieldDescriptor USART2_RQR_MMRQ = { 2, 1, 2 };
constexpr static RegisterFieldDescriptor USART2_RQR_RXFRQ = { 3, 1, 2 };
constexpr static RegisterFieldDescriptor USART2_RQR_TXFRQ = { 4, 1, 2 };


constexpr static u32 USART2_ISR_BASE = USART2_BASE + 28;
constexpr static RegisterFieldDescriptor USART2_ISR_PE = { 0, 1, 1 };
constexpr static RegisterFieldDescriptor USART2_ISR_FE = { 1, 1, 1 };
constexpr static RegisterFieldDescriptor USART2_ISR_NF = { 2, 1, 1 };
constexpr static RegisterFieldDescriptor USART2_ISR_ORE = { 3, 1, 1 };
constexpr static RegisterFieldDescriptor USART2_ISR_IDLE = { 4, 1, 1 };
constexpr static RegisterFieldDescriptor USART2_ISR_RXNE = { 5, 1, 1 };
constexpr static RegisterFieldDescriptor USART2_ISR_TC = { 6, 1, 1 };
constexpr static RegisterFieldDescriptor USART2_ISR_TXE = { 7, 1, 1 };
constexpr static RegisterFieldDescriptor USART2_ISR_LBDF = { 8, 1, 1 };
constexpr static RegisterFieldDescriptor USART2_ISR_CTSIF = { 9, 1, 1 };
constexpr static RegisterFieldDescriptor USART2_ISR_CTS = { 10, 1, 1 };
constexpr static RegisterFieldDescriptor USART2_ISR_RTOF = { 11, 1, 1 };
constexpr static RegisterFieldDescriptor USART2_ISR_EOBF = { 12, 1, 1 };
constexpr static RegisterFieldDescriptor USART2_ISR_UDR = { 13, 1, 1 };
constexpr static RegisterFieldDescriptor USART2_ISR_ABRE = { 14, 1, 1 };
constexpr static RegisterFieldDescriptor USART2_ISR_ABRF = { 15, 1, 1 };
constexpr static RegisterFieldDescriptor USART2_ISR_BUSY = { 16, 1, 1 };
constexpr static RegisterFieldDescriptor USART2_ISR_CMF = { 17, 1, 1 };
constexpr static RegisterFieldDescriptor USART2_ISR_SBKF = { 18, 1, 1 };
constexpr static RegisterFieldDescriptor USART2_ISR_RWU = { 19, 1, 1 };
constexpr static RegisterFieldDescriptor USART2_ISR_WUF = { 20, 1, 1 };
constexpr static RegisterFieldDescriptor USART2_ISR_TEACK = { 21, 1, 1 };
constexpr static RegisterFieldDescriptor USART2_ISR_REACK = { 22, 1, 1 };
constexpr static RegisterFieldDescriptor USART2_ISR_TXFE = { 23, 1, 1 };
constexpr static RegisterFieldDescriptor USART2_ISR_RXFF = { 24, 1, 1 };
constexpr static RegisterFieldDescriptor USART2_ISR_TCBGT = { 25, 1, 1 };
constexpr static RegisterFieldDescriptor USART2_ISR_RXFT = { 26, 1, 1 };
constexpr static RegisterFieldDescriptor USART2_ISR_TXFT = { 27, 1, 1 };


constexpr static u32 USART2_ICR_BASE = USART2_BASE + 32;
constexpr static RegisterFieldDescriptor USART2_ICR_PECF = { 0, 1, 2 };
constexpr static RegisterFieldDescriptor USART2_ICR_FECF = { 1, 1, 2 };
constexpr static RegisterFieldDescriptor USART2_ICR_NCF = { 2, 1, 2 };
constexpr static RegisterFieldDescriptor USART2_ICR_ORECF = { 3, 1, 2 };
constexpr static RegisterFieldDescriptor USART2_ICR_IDLECF = { 4, 1, 2 };
constexpr static RegisterFieldDescriptor USART2_ICR_TXFECF = { 5, 1, 2 };
constexpr static RegisterFieldDescriptor USART2_ICR_TCCF = { 6, 1, 2 };
constexpr static RegisterFieldDescriptor USART2_ICR_TCBGTCF = { 7, 1, 2 };
constexpr static RegisterFieldDescriptor USART2_ICR_LBDCF = { 8, 1, 2 };
constexpr static RegisterFieldDescriptor USART2_ICR_CTSCF = { 9, 1, 2 };
constexpr static RegisterFieldDescriptor USART2_ICR_RTOCF = { 11, 1, 2 };
constexpr static RegisterFieldDescriptor USART2_ICR_EOBCF = { 12, 1, 2 };
constexpr static RegisterFieldDescriptor USART2_ICR_UDRCF = { 13, 1, 2 };
constexpr static RegisterFieldDescriptor USART2_ICR_CMCF = { 17, 1, 2 };
constexpr static RegisterFieldDescriptor USART2_ICR_WUCF = { 20, 1, 2 };


constexpr static u32 USART2_RDR_BASE = USART2_BASE + 36;
constexpr static RegisterFieldDescriptor USART2_RDR_RDR = { 0, 9, 1 };


constexpr static u32 USART2_TDR_BASE = USART2_BASE + 40;
constexpr static RegisterFieldDescriptor USART2_TDR_TDR = { 0, 9, 0 };


constexpr static u32 USART2_PRESC_BASE = USART2_BASE + 44;
constexpr static RegisterFieldDescriptor USART2_PRESC_PRESCALER = { 0, 4, 0 };




constexpr static u32 SPI1_BASE = 1073819648;
constexpr static u32 SPI1_CR1_BASE = SPI1_BASE + 0;
constexpr static RegisterFieldDescriptor SPI1_CR1_CPHA = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor SPI1_CR1_CPOL = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor SPI1_CR1_MSTR = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor SPI1_CR1_BR = { 3, 3, 0 };
constexpr static RegisterFieldDescriptor SPI1_CR1_SPE = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor SPI1_CR1_LSBFIRST = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor SPI1_CR1_SSI = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor SPI1_CR1_SSM = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor SPI1_CR1_RXONLY = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor SPI1_CR1_DFF = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor SPI1_CR1_CRCNEXT = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor SPI1_CR1_CRCEN = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor SPI1_CR1_BIDIOE = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor SPI1_CR1_BIDIMODE = { 15, 1, 0 };


constexpr static u32 SPI1_CR2_BASE = SPI1_BASE + 4;
constexpr static RegisterFieldDescriptor SPI1_CR2_RXDMAEN = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor SPI1_CR2_TXDMAEN = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor SPI1_CR2_SSOE = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor SPI1_CR2_NSSP = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor SPI1_CR2_FRF = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor SPI1_CR2_ERRIE = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor SPI1_CR2_RXNEIE = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor SPI1_CR2_TXEIE = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor SPI1_CR2_DS = { 8, 4, 0 };
constexpr static RegisterFieldDescriptor SPI1_CR2_FRXTH = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor SPI1_CR2_LDMA_RX = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor SPI1_CR2_LDMA_TX = { 14, 1, 0 };


constexpr static u32 SPI1_SR_BASE = SPI1_BASE + 8;
constexpr static RegisterFieldDescriptor SPI1_SR_RXNE = { 0, 1, 1 };
constexpr static RegisterFieldDescriptor SPI1_SR_TXE = { 1, 1, 1 };
constexpr static RegisterFieldDescriptor SPI1_SR_CHSIDE = { 2, 1, 1 };
constexpr static RegisterFieldDescriptor SPI1_SR_UDR = { 3, 1, 1 };
constexpr static RegisterFieldDescriptor SPI1_SR_CRCERR = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor SPI1_SR_MODF = { 5, 1, 1 };
constexpr static RegisterFieldDescriptor SPI1_SR_OVR = { 6, 1, 1 };
constexpr static RegisterFieldDescriptor SPI1_SR_BSY = { 7, 1, 1 };
constexpr static RegisterFieldDescriptor SPI1_SR_TIFRFE = { 8, 1, 1 };
constexpr static RegisterFieldDescriptor SPI1_SR_FRLVL = { 9, 2, 1 };
constexpr static RegisterFieldDescriptor SPI1_SR_FTLVL = { 11, 2, 1 };


constexpr static u32 SPI1_DR_BASE = SPI1_BASE + 12;
constexpr static RegisterFieldDescriptor SPI1_DR_DR = { 0, 16, 0 };


constexpr static u32 SPI1_CRCPR_BASE = SPI1_BASE + 16;
constexpr static RegisterFieldDescriptor SPI1_CRCPR_CRCPOLY = { 0, 16, 0 };


constexpr static u32 SPI1_RXCRCR_BASE = SPI1_BASE + 20;
constexpr static RegisterFieldDescriptor SPI1_RXCRCR_RxCRC = { 0, 16, 1 };


constexpr static u32 SPI1_TXCRCR_BASE = SPI1_BASE + 24;
constexpr static RegisterFieldDescriptor SPI1_TXCRCR_TxCRC = { 0, 16, 1 };


constexpr static u32 SPI1_I2SCFGR_BASE = SPI1_BASE + 28;
constexpr static RegisterFieldDescriptor SPI1_I2SCFGR_CHLEN = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor SPI1_I2SCFGR_DATLEN = { 1, 2, 0 };
constexpr static RegisterFieldDescriptor SPI1_I2SCFGR_CKPOL = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor SPI1_I2SCFGR_I2SSTD = { 4, 2, 0 };
constexpr static RegisterFieldDescriptor SPI1_I2SCFGR_PCMSYNC = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor SPI1_I2SCFGR_I2SCFG = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor SPI1_I2SCFGR_SE2 = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor SPI1_I2SCFGR_I2SMOD = { 11, 1, 0 };


constexpr static u32 SPI1_I2SPR_BASE = SPI1_BASE + 32;
constexpr static RegisterFieldDescriptor SPI1_I2SPR_I2SDIV = { 0, 8, 0 };
constexpr static RegisterFieldDescriptor SPI1_I2SPR_ODD = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor SPI1_I2SPR_MCKOE = { 9, 1, 0 };




constexpr static u32 SPI2_BASE = 1073756160;
constexpr static u32 SPI2_CR1_BASE = SPI2_BASE + 0;
constexpr static RegisterFieldDescriptor SPI2_CR1_CPHA = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor SPI2_CR1_CPOL = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor SPI2_CR1_MSTR = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor SPI2_CR1_BR = { 3, 3, 0 };
constexpr static RegisterFieldDescriptor SPI2_CR1_SPE = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor SPI2_CR1_LSBFIRST = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor SPI2_CR1_SSI = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor SPI2_CR1_SSM = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor SPI2_CR1_RXONLY = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor SPI2_CR1_DFF = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor SPI2_CR1_CRCNEXT = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor SPI2_CR1_CRCEN = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor SPI2_CR1_BIDIOE = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor SPI2_CR1_BIDIMODE = { 15, 1, 0 };


constexpr static u32 SPI2_CR2_BASE = SPI2_BASE + 4;
constexpr static RegisterFieldDescriptor SPI2_CR2_RXDMAEN = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor SPI2_CR2_TXDMAEN = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor SPI2_CR2_SSOE = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor SPI2_CR2_NSSP = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor SPI2_CR2_FRF = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor SPI2_CR2_ERRIE = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor SPI2_CR2_RXNEIE = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor SPI2_CR2_TXEIE = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor SPI2_CR2_DS = { 8, 4, 0 };
constexpr static RegisterFieldDescriptor SPI2_CR2_FRXTH = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor SPI2_CR2_LDMA_RX = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor SPI2_CR2_LDMA_TX = { 14, 1, 0 };


constexpr static u32 SPI2_SR_BASE = SPI2_BASE + 8;
constexpr static RegisterFieldDescriptor SPI2_SR_RXNE = { 0, 1, 1 };
constexpr static RegisterFieldDescriptor SPI2_SR_TXE = { 1, 1, 1 };
constexpr static RegisterFieldDescriptor SPI2_SR_CHSIDE = { 2, 1, 1 };
constexpr static RegisterFieldDescriptor SPI2_SR_UDR = { 3, 1, 1 };
constexpr static RegisterFieldDescriptor SPI2_SR_CRCERR = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor SPI2_SR_MODF = { 5, 1, 1 };
constexpr static RegisterFieldDescriptor SPI2_SR_OVR = { 6, 1, 1 };
constexpr static RegisterFieldDescriptor SPI2_SR_BSY = { 7, 1, 1 };
constexpr static RegisterFieldDescriptor SPI2_SR_TIFRFE = { 8, 1, 1 };
constexpr static RegisterFieldDescriptor SPI2_SR_FRLVL = { 9, 2, 1 };
constexpr static RegisterFieldDescriptor SPI2_SR_FTLVL = { 11, 2, 1 };


constexpr static u32 SPI2_DR_BASE = SPI2_BASE + 12;
constexpr static RegisterFieldDescriptor SPI2_DR_DR = { 0, 16, 0 };


constexpr static u32 SPI2_CRCPR_BASE = SPI2_BASE + 16;
constexpr static RegisterFieldDescriptor SPI2_CRCPR_CRCPOLY = { 0, 16, 0 };


constexpr static u32 SPI2_RXCRCR_BASE = SPI2_BASE + 20;
constexpr static RegisterFieldDescriptor SPI2_RXCRCR_RxCRC = { 0, 16, 1 };


constexpr static u32 SPI2_TXCRCR_BASE = SPI2_BASE + 24;
constexpr static RegisterFieldDescriptor SPI2_TXCRCR_TxCRC = { 0, 16, 1 };


constexpr static u32 SPI2_I2SCFGR_BASE = SPI2_BASE + 28;
constexpr static RegisterFieldDescriptor SPI2_I2SCFGR_CHLEN = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor SPI2_I2SCFGR_DATLEN = { 1, 2, 0 };
constexpr static RegisterFieldDescriptor SPI2_I2SCFGR_CKPOL = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor SPI2_I2SCFGR_I2SSTD = { 4, 2, 0 };
constexpr static RegisterFieldDescriptor SPI2_I2SCFGR_PCMSYNC = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor SPI2_I2SCFGR_I2SCFG = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor SPI2_I2SCFGR_SE2 = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor SPI2_I2SCFGR_I2SMOD = { 11, 1, 0 };


constexpr static u32 SPI2_I2SPR_BASE = SPI2_BASE + 32;
constexpr static RegisterFieldDescriptor SPI2_I2SPR_I2SDIV = { 0, 8, 0 };
constexpr static RegisterFieldDescriptor SPI2_I2SPR_ODD = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor SPI2_I2SPR_MCKOE = { 9, 1, 0 };




constexpr static u32 TIM1_BASE = 1073818624;
constexpr static u32 TIM1_CR1_BASE = TIM1_BASE + 0;
constexpr static RegisterFieldDescriptor TIM1_CR1_CEN = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CR1_UDIS = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CR1_URS = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CR1_OPM = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CR1_DIR = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CR1_CMS = { 5, 2, 0 };
constexpr static RegisterFieldDescriptor TIM1_CR1_ARPE = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CR1_CKD = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor TIM1_CR1_UIFREMAP = { 11, 1, 0 };


constexpr static u32 TIM1_CR2_BASE = TIM1_BASE + 4;
constexpr static RegisterFieldDescriptor TIM1_CR2_CCPC = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CR2_CCUS = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CR2_CCDS = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CR2_MMS = { 4, 3, 0 };
constexpr static RegisterFieldDescriptor TIM1_CR2_TI1S = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CR2_OIS1 = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CR2_OIS1N = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CR2_OIS2 = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CR2_OIS2N = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CR2_OIS3 = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CR2_OIS3N = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CR2_OIS4 = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CR2_OIS5 = { 16, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CR2_OIS6 = { 18, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CR2_MMS2 = { 20, 4, 0 };


constexpr static u32 TIM1_SMCR_BASE = TIM1_BASE + 8;
constexpr static RegisterFieldDescriptor TIM1_SMCR_SMS = { 0, 3, 0 };
constexpr static RegisterFieldDescriptor TIM1_SMCR_OCCS = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_SMCR_TS_4 = { 4, 3, 0 };
constexpr static RegisterFieldDescriptor TIM1_SMCR_MSM = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_SMCR_ETF = { 8, 4, 0 };
constexpr static RegisterFieldDescriptor TIM1_SMCR_ETPS = { 12, 2, 0 };
constexpr static RegisterFieldDescriptor TIM1_SMCR_ECE = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_SMCR_ETP = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_SMCR_SMS_3 = { 16, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_SMCR_TS = { 20, 2, 0 };


constexpr static u32 TIM1_DIER_BASE = TIM1_BASE + 12;
constexpr static RegisterFieldDescriptor TIM1_DIER_UIE = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_DIER_CC1IE = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_DIER_CC2IE = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_DIER_CC3IE = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_DIER_CC4IE = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_DIER_COMIE = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_DIER_TIE = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_DIER_BIE = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_DIER_UDE = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_DIER_CC1DE = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_DIER_CC2DE = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_DIER_CC3DE = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_DIER_CC4DE = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_DIER_COMDE = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_DIER_TDE = { 14, 1, 0 };


constexpr static u32 TIM1_SR_BASE = TIM1_BASE + 16;
constexpr static RegisterFieldDescriptor TIM1_SR_UIF = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_SR_CC1IF = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_SR_CC2IF = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_SR_CC3IF = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_SR_CC4IF = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_SR_COMIF = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_SR_TIF = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_SR_BIF = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_SR_B2IF = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_SR_CC1OF = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_SR_CC2OF = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_SR_CC3OF = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_SR_CC4OF = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_SR_SBIF = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_SR_CC5IF = { 16, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_SR_CC6IF = { 17, 1, 0 };


constexpr static u32 TIM1_EGR_BASE = TIM1_BASE + 20;
constexpr static RegisterFieldDescriptor TIM1_EGR_UG = { 0, 1, 2 };
constexpr static RegisterFieldDescriptor TIM1_EGR_CC1G = { 1, 1, 2 };
constexpr static RegisterFieldDescriptor TIM1_EGR_CC2G = { 2, 1, 2 };
constexpr static RegisterFieldDescriptor TIM1_EGR_CC3G = { 3, 1, 2 };
constexpr static RegisterFieldDescriptor TIM1_EGR_CC4G = { 4, 1, 2 };
constexpr static RegisterFieldDescriptor TIM1_EGR_COMG = { 5, 1, 2 };
constexpr static RegisterFieldDescriptor TIM1_EGR_TG = { 6, 1, 2 };
constexpr static RegisterFieldDescriptor TIM1_EGR_BG = { 7, 1, 2 };
constexpr static RegisterFieldDescriptor TIM1_EGR_B2G = { 8, 1, 2 };


constexpr static u32 TIM1_CCMR1_Output_BASE = TIM1_BASE + 24;
constexpr static RegisterFieldDescriptor TIM1_CCMR1_Output_CC1S = { 0, 2, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR1_Output_OC1FE = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR1_Output_OC1PE = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR1_Output_OC1M = { 4, 3, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR1_Output_OC1CE = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR1_Output_CC2S = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR1_Output_OC2FE = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR1_Output_OC2PE = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR1_Output_OC2M = { 12, 3, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR1_Output_OC2CE = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR1_Output_OC1M_3 = { 16, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR1_Output_OC2M_3 = { 24, 1, 0 };


constexpr static u32 TIM1_CCMR1_Input_BASE = TIM1_BASE + 24;
constexpr static RegisterFieldDescriptor TIM1_CCMR1_Input_CC1S = { 0, 2, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR1_Input_OC1FE = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR1_Input_OC1PE = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR1_Input_OC1M = { 4, 3, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR1_Input_OC1CE = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR1_Input_CC2S = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR1_Input_OC2FE = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR1_Input_OC2PE = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR1_Input_OC2M = { 12, 3, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR1_Input_OC2CE = { 15, 1, 0 };


constexpr static u32 TIM1_CCMR2_Output_BASE = TIM1_BASE + 28;
constexpr static RegisterFieldDescriptor TIM1_CCMR2_Output_CC3S = { 0, 2, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR2_Output_OC3FE = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR2_Output_OC3PE = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR2_Output_OC3M = { 4, 3, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR2_Output_OC3CE = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR2_Output_CC4S = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR2_Output_OC4FE = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR2_Output_OC4PE = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR2_Output_OC4M = { 12, 3, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR2_Output_OC4CE = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR2_Output_OC3M_3 = { 16, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR2_Output_OC4M_3 = { 24, 1, 0 };


constexpr static u32 TIM1_CCMR2_Input_BASE = TIM1_BASE + 28;
constexpr static RegisterFieldDescriptor TIM1_CCMR2_Input_CC3S = { 0, 2, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR2_Input_OC3FE = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR2_Input_OC3PE = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR2_Input_OC3M = { 4, 3, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR2_Input_OC3CE = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR2_Input_CC4S = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR2_Input_OC4FE = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR2_Input_OC4PE = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR2_Input_OC4M = { 12, 3, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR2_Input_OC4CE = { 15, 1, 0 };


constexpr static u32 TIM1_CCER_BASE = TIM1_BASE + 32;
constexpr static RegisterFieldDescriptor TIM1_CCER_CC1E = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCER_CC1P = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCER_CC1NE = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCER_CC1NP = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCER_CC2E = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCER_CC2P = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCER_CC2NE = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCER_CC2NP = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCER_CC3E = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCER_CC3P = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCER_CC3NE = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCER_CC3NP = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCER_CC4E = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCER_CC4P = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCER_CC4NP = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCER_CC5E = { 16, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCER_CC5P = { 17, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCER_CC6E = { 20, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCER_CC6P = { 21, 1, 0 };


constexpr static u32 TIM1_CNT_BASE = TIM1_BASE + 36;
constexpr static RegisterFieldDescriptor TIM1_CNT_CNT = { 0, 16, 0 };
constexpr static RegisterFieldDescriptor TIM1_CNT_UIFCPY = { 31, 1, 1 };


constexpr static u32 TIM1_PSC_BASE = TIM1_BASE + 40;
constexpr static RegisterFieldDescriptor TIM1_PSC_PSC = { 0, 16, 0 };


constexpr static u32 TIM1_ARR_BASE = TIM1_BASE + 44;
constexpr static RegisterFieldDescriptor TIM1_ARR_ARR = { 0, 16, 0 };


constexpr static u32 TIM1_RCR_BASE = TIM1_BASE + 48;
constexpr static RegisterFieldDescriptor TIM1_RCR_REP = { 0, 16, 0 };


constexpr static u32 TIM1_CCR1_BASE = TIM1_BASE + 52;
constexpr static RegisterFieldDescriptor TIM1_CCR1_CCR1 = { 0, 16, 0 };


constexpr static u32 TIM1_CCR2_BASE = TIM1_BASE + 56;
constexpr static RegisterFieldDescriptor TIM1_CCR2_CCR2 = { 0, 16, 0 };


constexpr static u32 TIM1_CCR3_BASE = TIM1_BASE + 60;
constexpr static RegisterFieldDescriptor TIM1_CCR3_CCR3 = { 0, 16, 0 };


constexpr static u32 TIM1_CCR4_BASE = TIM1_BASE + 64;
constexpr static RegisterFieldDescriptor TIM1_CCR4_CCR4 = { 0, 16, 0 };


constexpr static u32 TIM1_BDTR_BASE = TIM1_BASE + 68;
constexpr static RegisterFieldDescriptor TIM1_BDTR_DTG = { 0, 8, 0 };
constexpr static RegisterFieldDescriptor TIM1_BDTR_LOCK = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor TIM1_BDTR_OSSI = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_BDTR_OSSR = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_BDTR_BKE = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_BDTR_BKP = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_BDTR_AOE = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_BDTR_MOE = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_BDTR_BKF = { 16, 4, 0 };
constexpr static RegisterFieldDescriptor TIM1_BDTR_BK2F = { 20, 4, 0 };
constexpr static RegisterFieldDescriptor TIM1_BDTR_BK2E = { 24, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_BDTR_BK2P = { 25, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_BDTR_BKDSRM = { 26, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_BDTR_BK2DSRM = { 27, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_BDTR_BKBID = { 28, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_BDTR_BK2ID = { 29, 1, 0 };


constexpr static u32 TIM1_DCR_BASE = TIM1_BASE + 72;
constexpr static RegisterFieldDescriptor TIM1_DCR_DBA = { 0, 5, 0 };
constexpr static RegisterFieldDescriptor TIM1_DCR_DBL = { 8, 5, 0 };


constexpr static u32 TIM1_DMAR_BASE = TIM1_BASE + 76;
constexpr static RegisterFieldDescriptor TIM1_DMAR_DMAB = { 0, 16, 0 };


constexpr static u32 TIM1_OR1_BASE = TIM1_BASE + 80;
constexpr static RegisterFieldDescriptor TIM1_OR1_OCREF_CLR = { 0, 1, 0 };


constexpr static u32 TIM1_CCMR3_Output_BASE = TIM1_BASE + 84;
constexpr static RegisterFieldDescriptor TIM1_CCMR3_Output_OC5FE = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR3_Output_OC5PE = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR3_Output_OC5M = { 4, 3, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR3_Output_OC5CE = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR3_Output_OC6FE = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR3_Output_OC6PE = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR3_Output_OC6M = { 12, 3, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR3_Output_OC6CE = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR3_Output_OC5M_bit3 = { 16, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCMR3_Output_OC6M_bit3 = { 24, 1, 0 };


constexpr static u32 TIM1_CCR5_BASE = TIM1_BASE + 88;
constexpr static RegisterFieldDescriptor TIM1_CCR5_CCR5 = { 0, 16, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCR5_GC5C1 = { 29, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCR5_GC5C2 = { 30, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_CCR5_GC5C3 = { 31, 1, 0 };


constexpr static u32 TIM1_CCR6_BASE = TIM1_BASE + 92;
constexpr static RegisterFieldDescriptor TIM1_CCR6_CCR6 = { 0, 16, 0 };


constexpr static u32 TIM1_AF1_BASE = TIM1_BASE + 96;
constexpr static RegisterFieldDescriptor TIM1_AF1_BKINE = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_AF1_BKCMP1E = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_AF1_BKCMP2E = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_AF1_BKINP = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_AF1_BKCMP1P = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_AF1_BKCMP2P = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_AF1_ETRSEL = { 14, 3, 0 };


constexpr static u32 TIM1_AF2_BASE = TIM1_BASE + 100;
constexpr static RegisterFieldDescriptor TIM1_AF2_BK2INE = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_AF2_BK2CMP1E = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_AF2_BK2CMP2E = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_AF2_BK2DFBK0E = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_AF2_BK2INP = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_AF2_BK2CMP1P = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor TIM1_AF2_BK2CMP2P = { 11, 1, 0 };


constexpr static u32 TIM1_TISEL_BASE = TIM1_BASE + 104;
constexpr static RegisterFieldDescriptor TIM1_TISEL_TI1SEL3_0 = { 0, 4, 0 };
constexpr static RegisterFieldDescriptor TIM1_TISEL_TI2SEL3_0 = { 8, 4, 0 };
constexpr static RegisterFieldDescriptor TIM1_TISEL_TI3SEL3_0 = { 16, 4, 0 };
constexpr static RegisterFieldDescriptor TIM1_TISEL_TI4SEL3_0 = { 24, 4, 0 };




constexpr static u32 SYSCFG_BASE = 1073807360;
constexpr static u32 SYSCFG_CFGR1_BASE = SYSCFG_BASE + 0;
constexpr static RegisterFieldDescriptor SYSCFG_CFGR1_MEM_MODE = { 0, 2, 0 };
constexpr static RegisterFieldDescriptor SYSCFG_CFGR1_PA11_RMP = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor SYSCFG_CFGR1_PA12_RMP = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor SYSCFG_CFGR1_IR_POL = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor SYSCFG_CFGR1_IR_MOD = { 6, 2, 0 };
constexpr static RegisterFieldDescriptor SYSCFG_CFGR1_BOOSTEN = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor SYSCFG_CFGR1_UCPD1_STROBE = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor SYSCFG_CFGR1_UCPD2_STROBE = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor SYSCFG_CFGR1_I2C_PBx_FMP = { 16, 1, 0 };
constexpr static RegisterFieldDescriptor SYSCFG_CFGR1_I2C_PB7_FMP = { 17, 1, 0 };
constexpr static RegisterFieldDescriptor SYSCFG_CFGR1_I2C_PB8_FMP = { 18, 1, 0 };
constexpr static RegisterFieldDescriptor SYSCFG_CFGR1_I2C_PB9_FMP = { 19, 1, 0 };
constexpr static RegisterFieldDescriptor SYSCFG_CFGR1_I2C1_FMP = { 20, 1, 0 };
constexpr static RegisterFieldDescriptor SYSCFG_CFGR1_I2C2_FMP = { 21, 1, 0 };
constexpr static RegisterFieldDescriptor SYSCFG_CFGR1_I2C_PA9_FMP = { 22, 1, 0 };
constexpr static RegisterFieldDescriptor SYSCFG_CFGR1_I2C_PA10_FMP = { 23, 1, 0 };
constexpr static RegisterFieldDescriptor SYSCFG_CFGR1_I2C3_FMP = { 24, 1, 0 };


constexpr static u32 SYSCFG_CFGR2_BASE = SYSCFG_BASE + 24;
constexpr static RegisterFieldDescriptor SYSCFG_CFGR2_LOCKUP_LOCK = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor SYSCFG_CFGR2_SRAM_PARITY_LOCK = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor SYSCFG_CFGR2_ECC_LOCK = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor SYSCFG_CFGR2_SRAM_PEF = { 8, 1, 0 };


constexpr static u32 SYSCFG_ITLINE0_BASE = SYSCFG_BASE + 128;
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE0_WWDG = { 0, 1, 1 };


constexpr static u32 SYSCFG_ITLINE2_BASE = SYSCFG_BASE + 136;
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE2_TAMP = { 0, 1, 1 };
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE2_RTC = { 1, 1, 1 };


constexpr static u32 SYSCFG_ITLINE3_BASE = SYSCFG_BASE + 140;
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE3_FLASH_ITF = { 0, 1, 1 };
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE3_FLASH_ECC = { 1, 1, 1 };


constexpr static u32 SYSCFG_ITLINE4_BASE = SYSCFG_BASE + 144;
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE4_RCC = { 0, 1, 1 };


constexpr static u32 SYSCFG_ITLINE5_BASE = SYSCFG_BASE + 148;
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE5_EXTI0 = { 0, 1, 1 };
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE5_EXTI1 = { 1, 1, 1 };


constexpr static u32 SYSCFG_ITLINE6_BASE = SYSCFG_BASE + 152;
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE6_EXTI2 = { 0, 1, 1 };
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE6_EXTI3 = { 1, 1, 1 };


constexpr static u32 SYSCFG_ITLINE7_BASE = SYSCFG_BASE + 156;
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE7_EXTI4 = { 0, 1, 1 };
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE7_EXTI5 = { 1, 1, 1 };
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE7_EXTI6 = { 2, 1, 1 };
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE7_EXTI7 = { 3, 1, 1 };
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE7_EXTI8 = { 4, 1, 1 };
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE7_EXTI9 = { 5, 1, 1 };
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE7_EXTI10 = { 6, 1, 1 };
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE7_EXTI11 = { 7, 1, 1 };
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE7_EXTI12 = { 8, 1, 1 };
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE7_EXTI13 = { 9, 1, 1 };
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE7_EXTI14 = { 10, 1, 1 };
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE7_EXTI15 = { 11, 1, 1 };


constexpr static u32 SYSCFG_ITLINE8_BASE = SYSCFG_BASE + 160;
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE8_USB = { 2, 1, 1 };


constexpr static u32 SYSCFG_ITLINE9_BASE = SYSCFG_BASE + 164;
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE9_DMA1_CH1 = { 0, 1, 1 };


constexpr static u32 SYSCFG_ITLINE10_BASE = SYSCFG_BASE + 168;
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE10_DMA1_CH2 = { 0, 1, 1 };
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE10_DMA1_CH3 = { 1, 1, 1 };


constexpr static u32 SYSCFG_ITLINE11_BASE = SYSCFG_BASE + 172;
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE11_DMAMUX = { 0, 1, 1 };
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE11_DMA1_CH4 = { 1, 1, 1 };
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE11_DMA1_CH5 = { 2, 1, 1 };
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE11_DMA1_CH6 = { 3, 1, 1 };
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE11_DMA1_CH7 = { 4, 1, 1 };
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE11_DMA2_CH1 = { 5, 1, 1 };
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE11_DMA2_CH2 = { 6, 1, 1 };
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE11_DMA2_CH3 = { 7, 1, 1 };
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE11_DMA2_CH4 = { 8, 1, 1 };
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE11_DMA2_CH5 = { 9, 1, 1 };


constexpr static u32 SYSCFG_ITLINE12_BASE = SYSCFG_BASE + 176;
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE12_ADC = { 0, 1, 1 };


constexpr static u32 SYSCFG_ITLINE13_BASE = SYSCFG_BASE + 180;
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE13_TIM1_CCU = { 0, 1, 1 };
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE13_TIM1_TRG = { 1, 1, 1 };
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE13_TIM1_UPD = { 2, 1, 1 };
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE13_TIM1_BRK = { 3, 1, 1 };


constexpr static u32 SYSCFG_ITLINE14_BASE = SYSCFG_BASE + 184;
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE14_TIM1_CC = { 0, 1, 1 };


constexpr static u32 SYSCFG_ITLINE16_BASE = SYSCFG_BASE + 192;
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE16_TIM3 = { 0, 1, 1 };
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE16_TIM4 = { 1, 1, 1 };


constexpr static u32 SYSCFG_ITLINE17_BASE = SYSCFG_BASE + 196;
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE17_TIM6 = { 0, 1, 1 };


constexpr static u32 SYSCFG_ITLINE18_BASE = SYSCFG_BASE + 200;
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE18_TIM7 = { 0, 1, 1 };


constexpr static u32 SYSCFG_ITLINE19_BASE = SYSCFG_BASE + 204;
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE19_TIM14 = { 0, 1, 1 };


constexpr static u32 SYSCFG_ITLINE20_BASE = SYSCFG_BASE + 208;
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE20_TIM15 = { 0, 1, 1 };


constexpr static u32 SYSCFG_ITLINE21_BASE = SYSCFG_BASE + 212;
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE21_TIM16 = { 0, 1, 1 };


constexpr static u32 SYSCFG_ITLINE22_BASE = SYSCFG_BASE + 216;
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE22_TIM17 = { 0, 1, 1 };


constexpr static u32 SYSCFG_ITLINE23_BASE = SYSCFG_BASE + 220;
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE23_I2C1 = { 0, 1, 1 };


constexpr static u32 SYSCFG_ITLINE24_BASE = SYSCFG_BASE + 224;
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE24_I2C2 = { 0, 1, 1 };
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE24_I2C3 = { 1, 1, 1 };


constexpr static u32 SYSCFG_ITLINE25_BASE = SYSCFG_BASE + 228;
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE25_SPI1 = { 0, 1, 1 };


constexpr static u32 SYSCFG_ITLINE26_BASE = SYSCFG_BASE + 232;
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE26_SPI2 = { 0, 1, 1 };
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE26_SPI3 = { 14, 1, 1 };


constexpr static u32 SYSCFG_ITLINE27_BASE = SYSCFG_BASE + 236;
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE27_USART1 = { 0, 1, 1 };


constexpr static u32 SYSCFG_ITLINE28_BASE = SYSCFG_BASE + 240;
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE28_USART2 = { 0, 1, 1 };


constexpr static u32 SYSCFG_ITLINE29_BASE = SYSCFG_BASE + 244;
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE29_USART3 = { 0, 1, 1 };
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE29_USART4 = { 1, 1, 1 };
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE29_USART5 = { 3, 1, 1 };
constexpr static RegisterFieldDescriptor SYSCFG_ITLINE29_USART6 = { 4, 1, 1 };




constexpr static u32 TAMP_BASE = 1073786880;
constexpr static u32 TAMP_TAMP_CR1_BASE = TAMP_BASE + 0;
constexpr static RegisterFieldDescriptor TAMP_TAMP_CR1_TAMP1E = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor TAMP_TAMP_CR1_TAMP2E = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor TAMP_TAMP_CR1_TAMP3E = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor TAMP_TAMP_CR1_ITAMP3E = { 18, 1, 0 };
constexpr static RegisterFieldDescriptor TAMP_TAMP_CR1_ITAMP4E = { 19, 1, 0 };
constexpr static RegisterFieldDescriptor TAMP_TAMP_CR1_ITAMP5E = { 20, 1, 0 };
constexpr static RegisterFieldDescriptor TAMP_TAMP_CR1_ITAMP6E = { 21, 1, 0 };


constexpr static u32 TAMP_TAMP_CR2_BASE = TAMP_BASE + 4;
constexpr static RegisterFieldDescriptor TAMP_TAMP_CR2_TAMP1NOER = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor TAMP_TAMP_CR2_TAMP2NOER = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor TAMP_TAMP_CR2_TAMP3NOER = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor TAMP_TAMP_CR2_TAMP1MSK = { 16, 1, 0 };
constexpr static RegisterFieldDescriptor TAMP_TAMP_CR2_TAMP2MSK = { 17, 1, 0 };
constexpr static RegisterFieldDescriptor TAMP_TAMP_CR2_TAMP3MSK = { 18, 1, 0 };
constexpr static RegisterFieldDescriptor TAMP_TAMP_CR2_TAMP1TRG = { 24, 1, 0 };
constexpr static RegisterFieldDescriptor TAMP_TAMP_CR2_TAMP2TRG = { 25, 1, 0 };
constexpr static RegisterFieldDescriptor TAMP_TAMP_CR2_TAMP3TRG = { 26, 1, 0 };


constexpr static u32 TAMP_TAMP_FLTCR_BASE = TAMP_BASE + 12;
constexpr static RegisterFieldDescriptor TAMP_TAMP_FLTCR_TAMPFREQ = { 0, 3, 0 };
constexpr static RegisterFieldDescriptor TAMP_TAMP_FLTCR_TAMPFLT = { 3, 2, 0 };
constexpr static RegisterFieldDescriptor TAMP_TAMP_FLTCR_TAMPPRCH = { 5, 2, 0 };
constexpr static RegisterFieldDescriptor TAMP_TAMP_FLTCR_TAMPPUDIS = { 7, 1, 0 };


constexpr static u32 TAMP_TAMP_IER_BASE = TAMP_BASE + 44;
constexpr static RegisterFieldDescriptor TAMP_TAMP_IER_TAMP1IE = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor TAMP_TAMP_IER_TAMP2IE = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor TAMP_TAMP_IER_TAMP3IE = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor TAMP_TAMP_IER_ITAMP3IE = { 18, 1, 0 };
constexpr static RegisterFieldDescriptor TAMP_TAMP_IER_ITAMP4IE = { 19, 1, 0 };
constexpr static RegisterFieldDescriptor TAMP_TAMP_IER_ITAMP5IE = { 20, 1, 0 };
constexpr static RegisterFieldDescriptor TAMP_TAMP_IER_ITAMP6IE = { 21, 1, 0 };


constexpr static u32 TAMP_TAMP_SR_BASE = TAMP_BASE + 48;
constexpr static RegisterFieldDescriptor TAMP_TAMP_SR_TAMP1F = { 0, 1, 1 };
constexpr static RegisterFieldDescriptor TAMP_TAMP_SR_TAMP2F = { 1, 1, 1 };
constexpr static RegisterFieldDescriptor TAMP_TAMP_SR_TAMP3F = { 2, 1, 1 };
constexpr static RegisterFieldDescriptor TAMP_TAMP_SR_ITAMP3F = { 18, 1, 1 };
constexpr static RegisterFieldDescriptor TAMP_TAMP_SR_ITAMP4F = { 19, 1, 1 };
constexpr static RegisterFieldDescriptor TAMP_TAMP_SR_ITAMP5F = { 20, 1, 1 };
constexpr static RegisterFieldDescriptor TAMP_TAMP_SR_ITAMP6F = { 21, 1, 1 };


constexpr static u32 TAMP_TAMP_MISR_BASE = TAMP_BASE + 52;
constexpr static RegisterFieldDescriptor TAMP_TAMP_MISR_TAMP1MF = { 0, 1, 1 };
constexpr static RegisterFieldDescriptor TAMP_TAMP_MISR_TAMP2MF = { 1, 1, 1 };
constexpr static RegisterFieldDescriptor TAMP_TAMP_MISR_TAMP3MF = { 2, 1, 1 };
constexpr static RegisterFieldDescriptor TAMP_TAMP_MISR_ITAMP3MF = { 18, 1, 1 };
constexpr static RegisterFieldDescriptor TAMP_TAMP_MISR_ITAMP4MF = { 19, 1, 1 };
constexpr static RegisterFieldDescriptor TAMP_TAMP_MISR_ITAMP5MF = { 20, 1, 1 };
constexpr static RegisterFieldDescriptor TAMP_TAMP_MISR_ITAMP6MF = { 21, 1, 1 };


constexpr static u32 TAMP_TAMP_SCR_BASE = TAMP_BASE + 60;
constexpr static RegisterFieldDescriptor TAMP_TAMP_SCR_CTAMP1F = { 0, 1, 2 };
constexpr static RegisterFieldDescriptor TAMP_TAMP_SCR_CTAMP2F = { 1, 1, 2 };
constexpr static RegisterFieldDescriptor TAMP_TAMP_SCR_CTAMP3F = { 2, 1, 2 };
constexpr static RegisterFieldDescriptor TAMP_TAMP_SCR_CITAMP3F = { 18, 1, 2 };
constexpr static RegisterFieldDescriptor TAMP_TAMP_SCR_CITAMP4F = { 19, 1, 2 };
constexpr static RegisterFieldDescriptor TAMP_TAMP_SCR_CITAMP5F = { 20, 1, 2 };
constexpr static RegisterFieldDescriptor TAMP_TAMP_SCR_CITAMP6F = { 21, 1, 2 };


constexpr static u32 TAMP_TAMP_BKP0R_BASE = TAMP_BASE + 256;
constexpr static RegisterFieldDescriptor TAMP_TAMP_BKP0R_BKP = { 0, 32, 0 };


constexpr static u32 TAMP_TAMP_BKP1R_BASE = TAMP_BASE + 260;
constexpr static RegisterFieldDescriptor TAMP_TAMP_BKP1R_BKP = { 0, 32, 0 };


constexpr static u32 TAMP_TAMP_BKP2R_BASE = TAMP_BASE + 264;
constexpr static RegisterFieldDescriptor TAMP_TAMP_BKP2R_BKP = { 0, 32, 0 };


constexpr static u32 TAMP_TAMP_BKP3R_BASE = TAMP_BASE + 268;
constexpr static RegisterFieldDescriptor TAMP_TAMP_BKP3R_BKP = { 0, 32, 0 };


constexpr static u32 TAMP_TAMP_BKP4R_BASE = TAMP_BASE + 272;
constexpr static RegisterFieldDescriptor TAMP_TAMP_BKP4R_BKP = { 0, 32, 0 };




constexpr static u32 I2C1_BASE = 1073763328;
constexpr static u32 I2C1_CR1_BASE = I2C1_BASE + 0;
constexpr static RegisterFieldDescriptor I2C1_CR1_PE = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor I2C1_CR1_TXIE = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor I2C1_CR1_RXIE = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor I2C1_CR1_ADDRIE = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor I2C1_CR1_NACKIE = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor I2C1_CR1_STOPIE = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor I2C1_CR1_TCIE = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor I2C1_CR1_ERRIE = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor I2C1_CR1_DNF = { 8, 4, 0 };
constexpr static RegisterFieldDescriptor I2C1_CR1_ANFOFF = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor I2C1_CR1_TXDMAEN = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor I2C1_CR1_RXDMAEN = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor I2C1_CR1_SBC = { 16, 1, 0 };
constexpr static RegisterFieldDescriptor I2C1_CR1_NOSTRETCH = { 17, 1, 0 };
constexpr static RegisterFieldDescriptor I2C1_CR1_WUPEN = { 18, 1, 0 };
constexpr static RegisterFieldDescriptor I2C1_CR1_GCEN = { 19, 1, 0 };
constexpr static RegisterFieldDescriptor I2C1_CR1_SMBHEN = { 20, 1, 0 };
constexpr static RegisterFieldDescriptor I2C1_CR1_SMBDEN = { 21, 1, 0 };
constexpr static RegisterFieldDescriptor I2C1_CR1_ALERTEN = { 22, 1, 0 };
constexpr static RegisterFieldDescriptor I2C1_CR1_PECEN = { 23, 1, 0 };


constexpr static u32 I2C1_CR2_BASE = I2C1_BASE + 4;
constexpr static RegisterFieldDescriptor I2C1_CR2_SADD = { 0, 10, 0 };
constexpr static RegisterFieldDescriptor I2C1_CR2_RD_WRN = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor I2C1_CR2_ADD10 = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor I2C1_CR2_HEAD10R = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor I2C1_CR2_START = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor I2C1_CR2_STOP = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor I2C1_CR2_NACK = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor I2C1_CR2_NBYTES = { 16, 8, 0 };
constexpr static RegisterFieldDescriptor I2C1_CR2_RELOAD = { 24, 1, 0 };
constexpr static RegisterFieldDescriptor I2C1_CR2_AUTOEND = { 25, 1, 0 };
constexpr static RegisterFieldDescriptor I2C1_CR2_PECBYTE = { 26, 1, 0 };


constexpr static u32 I2C1_OAR1_BASE = I2C1_BASE + 8;
constexpr static RegisterFieldDescriptor I2C1_OAR1_OA1_0 = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor I2C1_OAR1_OA1_7_1 = { 1, 7, 0 };
constexpr static RegisterFieldDescriptor I2C1_OAR1_OA1_8_9 = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor I2C1_OAR1_OA1MODE = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor I2C1_OAR1_OA1EN = { 15, 1, 0 };


constexpr static u32 I2C1_OAR2_BASE = I2C1_BASE + 12;
constexpr static RegisterFieldDescriptor I2C1_OAR2_OA2 = { 1, 7, 0 };
constexpr static RegisterFieldDescriptor I2C1_OAR2_OA2MSK = { 8, 3, 0 };
constexpr static RegisterFieldDescriptor I2C1_OAR2_OA2EN = { 15, 1, 0 };


constexpr static u32 I2C1_TIMINGR_BASE = I2C1_BASE + 16;
constexpr static RegisterFieldDescriptor I2C1_TIMINGR_SCLL = { 0, 8, 0 };
constexpr static RegisterFieldDescriptor I2C1_TIMINGR_SCLH = { 8, 8, 0 };
constexpr static RegisterFieldDescriptor I2C1_TIMINGR_SDADEL = { 16, 4, 0 };
constexpr static RegisterFieldDescriptor I2C1_TIMINGR_SCLDEL = { 20, 4, 0 };
constexpr static RegisterFieldDescriptor I2C1_TIMINGR_PRESC = { 28, 4, 0 };


constexpr static u32 I2C1_TIMEOUTR_BASE = I2C1_BASE + 20;
constexpr static RegisterFieldDescriptor I2C1_TIMEOUTR_TIMEOUTA = { 0, 12, 0 };
constexpr static RegisterFieldDescriptor I2C1_TIMEOUTR_TIDLE = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor I2C1_TIMEOUTR_TIMOUTEN = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor I2C1_TIMEOUTR_TIMEOUTB = { 16, 12, 0 };
constexpr static RegisterFieldDescriptor I2C1_TIMEOUTR_TEXTEN = { 31, 1, 0 };


constexpr static u32 I2C1_ISR_BASE = I2C1_BASE + 24;
constexpr static RegisterFieldDescriptor I2C1_ISR_TXE = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor I2C1_ISR_TXIS = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor I2C1_ISR_RXNE = { 2, 1, 1 };
constexpr static RegisterFieldDescriptor I2C1_ISR_ADDR = { 3, 1, 1 };
constexpr static RegisterFieldDescriptor I2C1_ISR_NACKF = { 4, 1, 1 };
constexpr static RegisterFieldDescriptor I2C1_ISR_STOPF = { 5, 1, 1 };
constexpr static RegisterFieldDescriptor I2C1_ISR_TC = { 6, 1, 1 };
constexpr static RegisterFieldDescriptor I2C1_ISR_TCR = { 7, 1, 1 };
constexpr static RegisterFieldDescriptor I2C1_ISR_BERR = { 8, 1, 1 };
constexpr static RegisterFieldDescriptor I2C1_ISR_ARLO = { 9, 1, 1 };
constexpr static RegisterFieldDescriptor I2C1_ISR_OVR = { 10, 1, 1 };
constexpr static RegisterFieldDescriptor I2C1_ISR_PECERR = { 11, 1, 1 };
constexpr static RegisterFieldDescriptor I2C1_ISR_TIMEOUT = { 12, 1, 1 };
constexpr static RegisterFieldDescriptor I2C1_ISR_ALERT = { 13, 1, 1 };
constexpr static RegisterFieldDescriptor I2C1_ISR_BUSY = { 15, 1, 1 };
constexpr static RegisterFieldDescriptor I2C1_ISR_DIR = { 16, 1, 1 };
constexpr static RegisterFieldDescriptor I2C1_ISR_ADDCODE = { 17, 7, 1 };


constexpr static u32 I2C1_ICR_BASE = I2C1_BASE + 28;
constexpr static RegisterFieldDescriptor I2C1_ICR_ADDRCF = { 3, 1, 2 };
constexpr static RegisterFieldDescriptor I2C1_ICR_NACKCF = { 4, 1, 2 };
constexpr static RegisterFieldDescriptor I2C1_ICR_STOPCF = { 5, 1, 2 };
constexpr static RegisterFieldDescriptor I2C1_ICR_BERRCF = { 8, 1, 2 };
constexpr static RegisterFieldDescriptor I2C1_ICR_ARLOCF = { 9, 1, 2 };
constexpr static RegisterFieldDescriptor I2C1_ICR_OVRCF = { 10, 1, 2 };
constexpr static RegisterFieldDescriptor I2C1_ICR_PECCF = { 11, 1, 2 };
constexpr static RegisterFieldDescriptor I2C1_ICR_TIMOUTCF = { 12, 1, 2 };
constexpr static RegisterFieldDescriptor I2C1_ICR_ALERTCF = { 13, 1, 2 };


constexpr static u32 I2C1_PECR_BASE = I2C1_BASE + 32;
constexpr static RegisterFieldDescriptor I2C1_PECR_PEC = { 0, 8, 1 };


constexpr static u32 I2C1_RXDR_BASE = I2C1_BASE + 36;
constexpr static RegisterFieldDescriptor I2C1_RXDR_RXDATA = { 0, 8, 1 };


constexpr static u32 I2C1_TXDR_BASE = I2C1_BASE + 40;
constexpr static RegisterFieldDescriptor I2C1_TXDR_TXDATA = { 0, 8, 0 };




constexpr static u32 I2C2_BASE = 1073764352;
constexpr static u32 I2C2_CR1_BASE = I2C2_BASE + 0;
constexpr static RegisterFieldDescriptor I2C2_CR1_PE = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor I2C2_CR1_TXIE = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor I2C2_CR1_RXIE = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor I2C2_CR1_ADDRIE = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor I2C2_CR1_NACKIE = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor I2C2_CR1_STOPIE = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor I2C2_CR1_TCIE = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor I2C2_CR1_ERRIE = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor I2C2_CR1_DNF = { 8, 4, 0 };
constexpr static RegisterFieldDescriptor I2C2_CR1_ANFOFF = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor I2C2_CR1_TXDMAEN = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor I2C2_CR1_RXDMAEN = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor I2C2_CR1_SBC = { 16, 1, 0 };
constexpr static RegisterFieldDescriptor I2C2_CR1_NOSTRETCH = { 17, 1, 0 };
constexpr static RegisterFieldDescriptor I2C2_CR1_WUPEN = { 18, 1, 0 };
constexpr static RegisterFieldDescriptor I2C2_CR1_GCEN = { 19, 1, 0 };
constexpr static RegisterFieldDescriptor I2C2_CR1_SMBHEN = { 20, 1, 0 };
constexpr static RegisterFieldDescriptor I2C2_CR1_SMBDEN = { 21, 1, 0 };
constexpr static RegisterFieldDescriptor I2C2_CR1_ALERTEN = { 22, 1, 0 };
constexpr static RegisterFieldDescriptor I2C2_CR1_PECEN = { 23, 1, 0 };


constexpr static u32 I2C2_CR2_BASE = I2C2_BASE + 4;
constexpr static RegisterFieldDescriptor I2C2_CR2_SADD = { 0, 10, 0 };
constexpr static RegisterFieldDescriptor I2C2_CR2_RD_WRN = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor I2C2_CR2_ADD10 = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor I2C2_CR2_HEAD10R = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor I2C2_CR2_START = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor I2C2_CR2_STOP = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor I2C2_CR2_NACK = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor I2C2_CR2_NBYTES = { 16, 8, 0 };
constexpr static RegisterFieldDescriptor I2C2_CR2_RELOAD = { 24, 1, 0 };
constexpr static RegisterFieldDescriptor I2C2_CR2_AUTOEND = { 25, 1, 0 };
constexpr static RegisterFieldDescriptor I2C2_CR2_PECBYTE = { 26, 1, 0 };


constexpr static u32 I2C2_OAR1_BASE = I2C2_BASE + 8;
constexpr static RegisterFieldDescriptor I2C2_OAR1_OA1_0 = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor I2C2_OAR1_OA1_7_1 = { 1, 7, 0 };
constexpr static RegisterFieldDescriptor I2C2_OAR1_OA1_8_9 = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor I2C2_OAR1_OA1MODE = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor I2C2_OAR1_OA1EN = { 15, 1, 0 };


constexpr static u32 I2C2_OAR2_BASE = I2C2_BASE + 12;
constexpr static RegisterFieldDescriptor I2C2_OAR2_OA2 = { 1, 7, 0 };
constexpr static RegisterFieldDescriptor I2C2_OAR2_OA2MSK = { 8, 3, 0 };
constexpr static RegisterFieldDescriptor I2C2_OAR2_OA2EN = { 15, 1, 0 };


constexpr static u32 I2C2_TIMINGR_BASE = I2C2_BASE + 16;
constexpr static RegisterFieldDescriptor I2C2_TIMINGR_SCLL = { 0, 8, 0 };
constexpr static RegisterFieldDescriptor I2C2_TIMINGR_SCLH = { 8, 8, 0 };
constexpr static RegisterFieldDescriptor I2C2_TIMINGR_SDADEL = { 16, 4, 0 };
constexpr static RegisterFieldDescriptor I2C2_TIMINGR_SCLDEL = { 20, 4, 0 };
constexpr static RegisterFieldDescriptor I2C2_TIMINGR_PRESC = { 28, 4, 0 };


constexpr static u32 I2C2_TIMEOUTR_BASE = I2C2_BASE + 20;
constexpr static RegisterFieldDescriptor I2C2_TIMEOUTR_TIMEOUTA = { 0, 12, 0 };
constexpr static RegisterFieldDescriptor I2C2_TIMEOUTR_TIDLE = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor I2C2_TIMEOUTR_TIMOUTEN = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor I2C2_TIMEOUTR_TIMEOUTB = { 16, 12, 0 };
constexpr static RegisterFieldDescriptor I2C2_TIMEOUTR_TEXTEN = { 31, 1, 0 };


constexpr static u32 I2C2_ISR_BASE = I2C2_BASE + 24;
constexpr static RegisterFieldDescriptor I2C2_ISR_TXE = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor I2C2_ISR_TXIS = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor I2C2_ISR_RXNE = { 2, 1, 1 };
constexpr static RegisterFieldDescriptor I2C2_ISR_ADDR = { 3, 1, 1 };
constexpr static RegisterFieldDescriptor I2C2_ISR_NACKF = { 4, 1, 1 };
constexpr static RegisterFieldDescriptor I2C2_ISR_STOPF = { 5, 1, 1 };
constexpr static RegisterFieldDescriptor I2C2_ISR_TC = { 6, 1, 1 };
constexpr static RegisterFieldDescriptor I2C2_ISR_TCR = { 7, 1, 1 };
constexpr static RegisterFieldDescriptor I2C2_ISR_BERR = { 8, 1, 1 };
constexpr static RegisterFieldDescriptor I2C2_ISR_ARLO = { 9, 1, 1 };
constexpr static RegisterFieldDescriptor I2C2_ISR_OVR = { 10, 1, 1 };
constexpr static RegisterFieldDescriptor I2C2_ISR_PECERR = { 11, 1, 1 };
constexpr static RegisterFieldDescriptor I2C2_ISR_TIMEOUT = { 12, 1, 1 };
constexpr static RegisterFieldDescriptor I2C2_ISR_ALERT = { 13, 1, 1 };
constexpr static RegisterFieldDescriptor I2C2_ISR_BUSY = { 15, 1, 1 };
constexpr static RegisterFieldDescriptor I2C2_ISR_DIR = { 16, 1, 1 };
constexpr static RegisterFieldDescriptor I2C2_ISR_ADDCODE = { 17, 7, 1 };


constexpr static u32 I2C2_ICR_BASE = I2C2_BASE + 28;
constexpr static RegisterFieldDescriptor I2C2_ICR_ADDRCF = { 3, 1, 2 };
constexpr static RegisterFieldDescriptor I2C2_ICR_NACKCF = { 4, 1, 2 };
constexpr static RegisterFieldDescriptor I2C2_ICR_STOPCF = { 5, 1, 2 };
constexpr static RegisterFieldDescriptor I2C2_ICR_BERRCF = { 8, 1, 2 };
constexpr static RegisterFieldDescriptor I2C2_ICR_ARLOCF = { 9, 1, 2 };
constexpr static RegisterFieldDescriptor I2C2_ICR_OVRCF = { 10, 1, 2 };
constexpr static RegisterFieldDescriptor I2C2_ICR_PECCF = { 11, 1, 2 };
constexpr static RegisterFieldDescriptor I2C2_ICR_TIMOUTCF = { 12, 1, 2 };
constexpr static RegisterFieldDescriptor I2C2_ICR_ALERTCF = { 13, 1, 2 };


constexpr static u32 I2C2_PECR_BASE = I2C2_BASE + 32;
constexpr static RegisterFieldDescriptor I2C2_PECR_PEC = { 0, 8, 1 };


constexpr static u32 I2C2_RXDR_BASE = I2C2_BASE + 36;
constexpr static RegisterFieldDescriptor I2C2_RXDR_RXDATA = { 0, 8, 1 };


constexpr static u32 I2C2_TXDR_BASE = I2C2_BASE + 40;
constexpr static RegisterFieldDescriptor I2C2_TXDR_TXDATA = { 0, 8, 0 };




constexpr static u32 RTC_BASE = 1073752064;
constexpr static u32 RTC_RTC_TR_BASE = RTC_BASE + 0;
constexpr static RegisterFieldDescriptor RTC_RTC_TR_SU = { 0, 4, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_TR_ST = { 4, 3, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_TR_MNU = { 8, 4, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_TR_MNT = { 12, 3, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_TR_HU = { 16, 4, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_TR_HT = { 20, 2, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_TR_PM = { 22, 1, 0 };


constexpr static u32 RTC_RTC_DR_BASE = RTC_BASE + 4;
constexpr static RegisterFieldDescriptor RTC_RTC_DR_DU = { 0, 4, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_DR_DT = { 4, 2, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_DR_MU = { 8, 4, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_DR_MT = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_DR_WDU = { 13, 3, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_DR_YU = { 16, 4, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_DR_YT = { 20, 4, 0 };


constexpr static u32 RTC_RTC_SSR_BASE = RTC_BASE + 8;
constexpr static RegisterFieldDescriptor RTC_RTC_SSR_SS = { 0, 16, 1 };


constexpr static u32 RTC_RTC_ICSR_BASE = RTC_BASE + 12;
constexpr static RegisterFieldDescriptor RTC_RTC_ICSR_ALRAWF = { 0, 1, 1 };
constexpr static RegisterFieldDescriptor RTC_RTC_ICSR_ALRBWF = { 1, 1, 1 };
constexpr static RegisterFieldDescriptor RTC_RTC_ICSR_WUTWF = { 2, 1, 1 };
constexpr static RegisterFieldDescriptor RTC_RTC_ICSR_SHPF = { 3, 1, 1 };
constexpr static RegisterFieldDescriptor RTC_RTC_ICSR_INITS = { 4, 1, 1 };
constexpr static RegisterFieldDescriptor RTC_RTC_ICSR_RSF = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_ICSR_INITF = { 6, 1, 1 };
constexpr static RegisterFieldDescriptor RTC_RTC_ICSR_INIT = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_ICSR_RECALPF = { 16, 1, 1 };


constexpr static u32 RTC_RTC_PRER_BASE = RTC_BASE + 16;
constexpr static RegisterFieldDescriptor RTC_RTC_PRER_PREDIV_S = { 0, 15, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_PRER_PREDIV_A = { 16, 7, 0 };


constexpr static u32 RTC_RTC_WUTR_BASE = RTC_BASE + 20;
constexpr static RegisterFieldDescriptor RTC_RTC_WUTR_WUT = { 0, 16, 0 };


constexpr static u32 RTC_RTC_CR_BASE = RTC_BASE + 24;
constexpr static RegisterFieldDescriptor RTC_RTC_CR_WUCKSEL = { 0, 3, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_CR_TSEDGE = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_CR_REFCKON = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_CR_BYPSHAD = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_CR_FMT = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_CR_ALRAE = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_CR_ALRBE = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_CR_WUTE = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_CR_TSE = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_CR_ALRAIE = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_CR_ALRBIE = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_CR_WUTIE = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_CR_TSIE = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_CR_ADD1H = { 16, 1, 2 };
constexpr static RegisterFieldDescriptor RTC_RTC_CR_SUB1H = { 17, 1, 2 };
constexpr static RegisterFieldDescriptor RTC_RTC_CR_BKP = { 18, 1, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_CR_COSEL = { 19, 1, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_CR_POL = { 20, 1, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_CR_OSEL = { 21, 2, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_CR_COE = { 23, 1, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_CR_ITSE = { 24, 1, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_CR_TAMPTS = { 25, 1, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_CR_TAMPOE = { 26, 1, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_CR_TAMPALRM_PU = { 29, 1, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_CR_TAMPALRM_TYPE = { 30, 1, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_CR_OUT2EN = { 31, 1, 0 };


constexpr static u32 RTC_RTC_WPR_BASE = RTC_BASE + 36;
constexpr static RegisterFieldDescriptor RTC_RTC_WPR_KEY = { 0, 8, 2 };


constexpr static u32 RTC_RTC_CALR_BASE = RTC_BASE + 40;
constexpr static RegisterFieldDescriptor RTC_RTC_CALR_CALM = { 0, 9, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_CALR_CALW16 = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_CALR_CALW8 = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_CALR_CALP = { 15, 1, 0 };


constexpr static u32 RTC_RTC_SHIFTR_BASE = RTC_BASE + 44;
constexpr static RegisterFieldDescriptor RTC_RTC_SHIFTR_SUBFS = { 0, 15, 2 };
constexpr static RegisterFieldDescriptor RTC_RTC_SHIFTR_ADD1S = { 31, 1, 2 };


constexpr static u32 RTC_RTC_TSTR_BASE = RTC_BASE + 48;
constexpr static RegisterFieldDescriptor RTC_RTC_TSTR_SU = { 0, 4, 1 };
constexpr static RegisterFieldDescriptor RTC_RTC_TSTR_ST = { 4, 3, 1 };
constexpr static RegisterFieldDescriptor RTC_RTC_TSTR_MNU = { 8, 4, 1 };
constexpr static RegisterFieldDescriptor RTC_RTC_TSTR_MNT = { 12, 3, 1 };
constexpr static RegisterFieldDescriptor RTC_RTC_TSTR_HU = { 16, 4, 1 };
constexpr static RegisterFieldDescriptor RTC_RTC_TSTR_HT = { 20, 2, 1 };
constexpr static RegisterFieldDescriptor RTC_RTC_TSTR_PM = { 22, 1, 1 };


constexpr static u32 RTC_RTC_TSDR_BASE = RTC_BASE + 52;
constexpr static RegisterFieldDescriptor RTC_RTC_TSDR_DU = { 0, 4, 1 };
constexpr static RegisterFieldDescriptor RTC_RTC_TSDR_DT = { 4, 2, 1 };
constexpr static RegisterFieldDescriptor RTC_RTC_TSDR_MU = { 8, 4, 1 };
constexpr static RegisterFieldDescriptor RTC_RTC_TSDR_MT = { 12, 1, 1 };
constexpr static RegisterFieldDescriptor RTC_RTC_TSDR_WDU = { 13, 3, 1 };


constexpr static u32 RTC_RTC_TSSSR_BASE = RTC_BASE + 56;
constexpr static RegisterFieldDescriptor RTC_RTC_TSSSR_SS = { 0, 16, 1 };


constexpr static u32 RTC_RTC_ALRMAR_BASE = RTC_BASE + 64;
constexpr static RegisterFieldDescriptor RTC_RTC_ALRMAR_SU = { 0, 4, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_ALRMAR_ST = { 4, 3, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_ALRMAR_MSK1 = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_ALRMAR_MNU = { 8, 4, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_ALRMAR_MNT = { 12, 3, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_ALRMAR_MSK2 = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_ALRMAR_HU = { 16, 4, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_ALRMAR_HT = { 20, 2, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_ALRMAR_PM = { 22, 1, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_ALRMAR_MSK3 = { 23, 1, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_ALRMAR_DU = { 24, 4, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_ALRMAR_DT = { 28, 2, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_ALRMAR_WDSEL = { 30, 1, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_ALRMAR_MSK4 = { 31, 1, 0 };


constexpr static u32 RTC_RTC_ALRMASSR_BASE = RTC_BASE + 68;
constexpr static RegisterFieldDescriptor RTC_RTC_ALRMASSR_SS = { 0, 15, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_ALRMASSR_MASKSS = { 24, 4, 0 };


constexpr static u32 RTC_RTC_ALRMBR_BASE = RTC_BASE + 72;
constexpr static RegisterFieldDescriptor RTC_RTC_ALRMBR_SU = { 0, 4, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_ALRMBR_ST = { 4, 3, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_ALRMBR_MSK1 = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_ALRMBR_MNU = { 8, 4, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_ALRMBR_MNT = { 12, 3, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_ALRMBR_MSK2 = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_ALRMBR_HU = { 16, 4, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_ALRMBR_HT = { 20, 2, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_ALRMBR_PM = { 22, 1, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_ALRMBR_MSK3 = { 23, 1, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_ALRMBR_DU = { 24, 4, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_ALRMBR_DT = { 28, 2, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_ALRMBR_WDSEL = { 30, 1, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_ALRMBR_MSK4 = { 31, 1, 0 };


constexpr static u32 RTC_RTC_ALRMBSSR_BASE = RTC_BASE + 76;
constexpr static RegisterFieldDescriptor RTC_RTC_ALRMBSSR_SS = { 0, 15, 0 };
constexpr static RegisterFieldDescriptor RTC_RTC_ALRMBSSR_MASKSS = { 24, 4, 0 };


constexpr static u32 RTC_RTC_SR_BASE = RTC_BASE + 80;
constexpr static RegisterFieldDescriptor RTC_RTC_SR_ALRAF = { 0, 1, 1 };
constexpr static RegisterFieldDescriptor RTC_RTC_SR_ALRBF = { 1, 1, 1 };
constexpr static RegisterFieldDescriptor RTC_RTC_SR_WUTF = { 2, 1, 1 };
constexpr static RegisterFieldDescriptor RTC_RTC_SR_TSF = { 3, 1, 1 };
constexpr static RegisterFieldDescriptor RTC_RTC_SR_TSOVF = { 4, 1, 1 };
constexpr static RegisterFieldDescriptor RTC_RTC_SR_ITSF = { 5, 1, 1 };


constexpr static u32 RTC_RTC_MISR_BASE = RTC_BASE + 84;
constexpr static RegisterFieldDescriptor RTC_RTC_MISR_ALRAMF = { 0, 1, 1 };
constexpr static RegisterFieldDescriptor RTC_RTC_MISR_ALRBMF = { 1, 1, 1 };
constexpr static RegisterFieldDescriptor RTC_RTC_MISR_WUTMF = { 2, 1, 1 };
constexpr static RegisterFieldDescriptor RTC_RTC_MISR_TSMF = { 3, 1, 1 };
constexpr static RegisterFieldDescriptor RTC_RTC_MISR_TSOVMF = { 4, 1, 1 };
constexpr static RegisterFieldDescriptor RTC_RTC_MISR_ITSMF = { 5, 1, 1 };


constexpr static u32 RTC_RTC_SCR_BASE = RTC_BASE + 92;
constexpr static RegisterFieldDescriptor RTC_RTC_SCR_CALRAF = { 0, 1, 2 };
constexpr static RegisterFieldDescriptor RTC_RTC_SCR_CALRBF = { 1, 1, 2 };
constexpr static RegisterFieldDescriptor RTC_RTC_SCR_CWUTF = { 2, 1, 2 };
constexpr static RegisterFieldDescriptor RTC_RTC_SCR_CTSF = { 3, 1, 2 };
constexpr static RegisterFieldDescriptor RTC_RTC_SCR_CTSOVF = { 4, 1, 2 };
constexpr static RegisterFieldDescriptor RTC_RTC_SCR_CITSF = { 5, 1, 2 };




constexpr static u32 TIM14_BASE = 1073750016;
constexpr static u32 TIM14_CR1_BASE = TIM14_BASE + 0;
constexpr static RegisterFieldDescriptor TIM14_CR1_CEN = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor TIM14_CR1_UDIS = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor TIM14_CR1_URS = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor TIM14_CR1_OPM = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor TIM14_CR1_ARPE = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor TIM14_CR1_CKD = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor TIM14_CR1_UIFREMAP = { 11, 1, 0 };


constexpr static u32 TIM14_DIER_BASE = TIM14_BASE + 12;
constexpr static RegisterFieldDescriptor TIM14_DIER_UIE = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor TIM14_DIER_CC1IE = { 1, 1, 0 };


constexpr static u32 TIM14_SR_BASE = TIM14_BASE + 16;
constexpr static RegisterFieldDescriptor TIM14_SR_UIF = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor TIM14_SR_CC1IF = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor TIM14_SR_CC1OF = { 9, 1, 0 };


constexpr static u32 TIM14_EGR_BASE = TIM14_BASE + 20;
constexpr static RegisterFieldDescriptor TIM14_EGR_UG = { 0, 1, 2 };
constexpr static RegisterFieldDescriptor TIM14_EGR_CC1G = { 1, 1, 2 };


constexpr static u32 TIM14_CCMR1_Output_BASE = TIM14_BASE + 24;
constexpr static RegisterFieldDescriptor TIM14_CCMR1_Output_CC1S = { 0, 2, 0 };
constexpr static RegisterFieldDescriptor TIM14_CCMR1_Output_OC1FE = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor TIM14_CCMR1_Output_OC1PE = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor TIM14_CCMR1_Output_OC1M = { 4, 3, 0 };
constexpr static RegisterFieldDescriptor TIM14_CCMR1_Output_OC1CE = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor TIM14_CCMR1_Output_OC1M_3 = { 16, 1, 0 };


constexpr static u32 TIM14_CCMR1_Input_BASE = TIM14_BASE + 24;
constexpr static RegisterFieldDescriptor TIM14_CCMR1_Input_CC1S = { 0, 2, 0 };
constexpr static RegisterFieldDescriptor TIM14_CCMR1_Input_ICPCS = { 2, 2, 0 };
constexpr static RegisterFieldDescriptor TIM14_CCMR1_Input_IC1F = { 4, 4, 0 };


constexpr static u32 TIM14_CCER_BASE = TIM14_BASE + 32;
constexpr static RegisterFieldDescriptor TIM14_CCER_CC1E = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor TIM14_CCER_CC1P = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor TIM14_CCER_CC1NP = { 3, 1, 0 };


constexpr static u32 TIM14_CNT_BASE = TIM14_BASE + 36;
constexpr static RegisterFieldDescriptor TIM14_CNT_CNT = { 0, 16, 0 };
constexpr static RegisterFieldDescriptor TIM14_CNT_UIFCPY = { 31, 1, 0 };


constexpr static u32 TIM14_PSC_BASE = TIM14_BASE + 40;
constexpr static RegisterFieldDescriptor TIM14_PSC_PSC = { 0, 16, 0 };


constexpr static u32 TIM14_ARR_BASE = TIM14_BASE + 44;
constexpr static RegisterFieldDescriptor TIM14_ARR_ARR = { 0, 16, 0 };


constexpr static u32 TIM14_CCR1_BASE = TIM14_BASE + 52;
constexpr static RegisterFieldDescriptor TIM14_CCR1_CCR1 = { 0, 16, 0 };


constexpr static u32 TIM14_TISEL_BASE = TIM14_BASE + 104;
constexpr static RegisterFieldDescriptor TIM14_TISEL_TISEL = { 0, 4, 0 };




constexpr static u32 TIM2_BASE = 1073741824;
constexpr static u32 TIM2_CR1_BASE = TIM2_BASE + 0;
constexpr static RegisterFieldDescriptor TIM2_CR1_CEN = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_CR1_UDIS = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_CR1_URS = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_CR1_OPM = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_CR1_DIR = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_CR1_CMS = { 5, 2, 0 };
constexpr static RegisterFieldDescriptor TIM2_CR1_ARPE = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_CR1_CKD = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor TIM2_CR1_UIFREMAP = { 11, 1, 0 };


constexpr static u32 TIM2_CR2_BASE = TIM2_BASE + 4;
constexpr static RegisterFieldDescriptor TIM2_CR2_CCDS = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_CR2_MMS = { 4, 3, 0 };
constexpr static RegisterFieldDescriptor TIM2_CR2_TI1S = { 7, 1, 0 };


constexpr static u32 TIM2_SMCR_BASE = TIM2_BASE + 8;
constexpr static RegisterFieldDescriptor TIM2_SMCR_SMS = { 0, 3, 0 };
constexpr static RegisterFieldDescriptor TIM2_SMCR_OCCS = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_SMCR_TS = { 4, 3, 0 };
constexpr static RegisterFieldDescriptor TIM2_SMCR_MSM = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_SMCR_ETF = { 8, 4, 0 };
constexpr static RegisterFieldDescriptor TIM2_SMCR_ETPS = { 12, 2, 0 };
constexpr static RegisterFieldDescriptor TIM2_SMCR_ECE = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_SMCR_ETP = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_SMCR_SMS_3 = { 16, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_SMCR_TS_4_3 = { 20, 2, 0 };


constexpr static u32 TIM2_DIER_BASE = TIM2_BASE + 12;
constexpr static RegisterFieldDescriptor TIM2_DIER_UIE = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_DIER_CC1IE = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_DIER_CC2IE = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_DIER_CC3IE = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_DIER_CC4IE = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_DIER_TIE = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_DIER_UDE = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_DIER_CC1DE = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_DIER_CC2DE = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_DIER_CC3DE = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_DIER_CC4DE = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_DIER_TDE = { 14, 1, 0 };


constexpr static u32 TIM2_SR_BASE = TIM2_BASE + 16;
constexpr static RegisterFieldDescriptor TIM2_SR_UIF = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_SR_CC1IF = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_SR_CC2IF = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_SR_CC3IF = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_SR_CC4IF = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_SR_TIF = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_SR_CC1OF = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_SR_CC2OF = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_SR_CC3OF = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_SR_CC4OF = { 12, 1, 0 };


constexpr static u32 TIM2_EGR_BASE = TIM2_BASE + 20;
constexpr static RegisterFieldDescriptor TIM2_EGR_UG = { 0, 1, 2 };
constexpr static RegisterFieldDescriptor TIM2_EGR_CC1G = { 1, 1, 2 };
constexpr static RegisterFieldDescriptor TIM2_EGR_CC2G = { 2, 1, 2 };
constexpr static RegisterFieldDescriptor TIM2_EGR_CC3G = { 3, 1, 2 };
constexpr static RegisterFieldDescriptor TIM2_EGR_CC4G = { 4, 1, 2 };
constexpr static RegisterFieldDescriptor TIM2_EGR_TG = { 6, 1, 2 };


constexpr static u32 TIM2_CCMR1_Output_BASE = TIM2_BASE + 24;
constexpr static RegisterFieldDescriptor TIM2_CCMR1_Output_CC1S = { 0, 2, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCMR1_Output_OC1FE = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCMR1_Output_OC1PE = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCMR1_Output_OC1M = { 4, 3, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCMR1_Output_OC1CE = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCMR1_Output_CC2S = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCMR1_Output_OC2FE = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCMR1_Output_OC2PE = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCMR1_Output_OC2M = { 12, 3, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCMR1_Output_OC2CE = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCMR1_Output_OC1M_3 = { 16, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCMR1_Output_OC2M_3 = { 24, 1, 0 };


constexpr static u32 TIM2_CCMR1_Input_BASE = TIM2_BASE + 24;
constexpr static RegisterFieldDescriptor TIM2_CCMR1_Input_CC1S = { 0, 2, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCMR1_Input_IC1PSC = { 2, 2, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCMR1_Input_IC1F = { 4, 4, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCMR1_Input_CC2S = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCMR1_Input_IC2PSC = { 10, 2, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCMR1_Input_IC2F = { 12, 4, 0 };


constexpr static u32 TIM2_CCMR2_Output_BASE = TIM2_BASE + 28;
constexpr static RegisterFieldDescriptor TIM2_CCMR2_Output_CC3S = { 0, 2, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCMR2_Output_OC3FE = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCMR2_Output_OC3PE = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCMR2_Output_OC3M = { 4, 3, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCMR2_Output_OC3CE = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCMR2_Output_CC4S = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCMR2_Output_OC4FE = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCMR2_Output_OC4PE = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCMR2_Output_OC4M = { 12, 3, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCMR2_Output_OC4CE = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCMR2_Output_OC3M_3 = { 16, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCMR2_Output_OC4M_3 = { 24, 1, 0 };


constexpr static u32 TIM2_CCMR2_Input_BASE = TIM2_BASE + 28;
constexpr static RegisterFieldDescriptor TIM2_CCMR2_Input_CC3S = { 0, 2, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCMR2_Input_IC3PSC = { 2, 2, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCMR2_Input_IC3F = { 4, 4, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCMR2_Input_CC4S = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCMR2_Input_IC4PSC = { 10, 2, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCMR2_Input_IC4F = { 12, 4, 0 };


constexpr static u32 TIM2_CCER_BASE = TIM2_BASE + 32;
constexpr static RegisterFieldDescriptor TIM2_CCER_CC1E = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCER_CC1P = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCER_CC1NP = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCER_CC2E = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCER_CC2P = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCER_CC2NP = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCER_CC3E = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCER_CC3P = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCER_CC3NP = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCER_CC4E = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCER_CC4P = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCER_CC4NP = { 15, 1, 0 };


constexpr static u32 TIM2_CNT_BASE = TIM2_BASE + 36;
constexpr static RegisterFieldDescriptor TIM2_CNT_CNT_L = { 0, 16, 0 };
constexpr static RegisterFieldDescriptor TIM2_CNT_CNT_H = { 16, 16, 0 };


constexpr static u32 TIM2_PSC_BASE = TIM2_BASE + 40;
constexpr static RegisterFieldDescriptor TIM2_PSC_PSC = { 0, 16, 0 };


constexpr static u32 TIM2_ARR_BASE = TIM2_BASE + 44;
constexpr static RegisterFieldDescriptor TIM2_ARR_ARR_L = { 0, 16, 0 };
constexpr static RegisterFieldDescriptor TIM2_ARR_ARR_H = { 16, 16, 0 };


constexpr static u32 TIM2_CCR1_BASE = TIM2_BASE + 52;
constexpr static RegisterFieldDescriptor TIM2_CCR1_CCR1_L = { 0, 16, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCR1_CCR1_H = { 16, 16, 0 };


constexpr static u32 TIM2_CCR2_BASE = TIM2_BASE + 56;
constexpr static RegisterFieldDescriptor TIM2_CCR2_CCR2_L = { 0, 16, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCR2_CCR2_H = { 16, 16, 0 };


constexpr static u32 TIM2_CCR3_BASE = TIM2_BASE + 60;
constexpr static RegisterFieldDescriptor TIM2_CCR3_CCR3_L = { 0, 16, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCR3_CCR3_H = { 16, 16, 0 };


constexpr static u32 TIM2_CCR4_BASE = TIM2_BASE + 64;
constexpr static RegisterFieldDescriptor TIM2_CCR4_CCR4_L = { 0, 16, 0 };
constexpr static RegisterFieldDescriptor TIM2_CCR4_CCR4_H = { 16, 16, 0 };


constexpr static u32 TIM2_DCR_BASE = TIM2_BASE + 72;
constexpr static RegisterFieldDescriptor TIM2_DCR_DBA = { 0, 5, 0 };
constexpr static RegisterFieldDescriptor TIM2_DCR_DBL = { 8, 5, 0 };


constexpr static u32 TIM2_DMAR_BASE = TIM2_BASE + 76;
constexpr static RegisterFieldDescriptor TIM2_DMAR_DMAB = { 0, 16, 0 };


constexpr static u32 TIM2_OR1_BASE = TIM2_BASE + 80;
constexpr static RegisterFieldDescriptor TIM2_OR1_IOCREF_CLR = { 0, 1, 0 };


constexpr static u32 TIM2_AF1_BASE = TIM2_BASE + 96;
constexpr static RegisterFieldDescriptor TIM2_AF1_ETRSEL = { 14, 4, 0 };


constexpr static u32 TIM2_TISEL_BASE = TIM2_BASE + 104;
constexpr static RegisterFieldDescriptor TIM2_TISEL_TI1SEL = { 0, 4, 0 };
constexpr static RegisterFieldDescriptor TIM2_TISEL_TI2SEL = { 8, 4, 0 };




constexpr static u32 TIM3_BASE = 1073742848;
constexpr static u32 TIM3_CR1_BASE = TIM3_BASE + 0;
constexpr static RegisterFieldDescriptor TIM3_CR1_CEN = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_CR1_UDIS = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_CR1_URS = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_CR1_OPM = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_CR1_DIR = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_CR1_CMS = { 5, 2, 0 };
constexpr static RegisterFieldDescriptor TIM3_CR1_ARPE = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_CR1_CKD = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor TIM3_CR1_UIFREMAP = { 11, 1, 0 };


constexpr static u32 TIM3_CR2_BASE = TIM3_BASE + 4;
constexpr static RegisterFieldDescriptor TIM3_CR2_CCDS = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_CR2_MMS = { 4, 3, 0 };
constexpr static RegisterFieldDescriptor TIM3_CR2_TI1S = { 7, 1, 0 };


constexpr static u32 TIM3_SMCR_BASE = TIM3_BASE + 8;
constexpr static RegisterFieldDescriptor TIM3_SMCR_SMS = { 0, 3, 0 };
constexpr static RegisterFieldDescriptor TIM3_SMCR_OCCS = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_SMCR_TS = { 4, 3, 0 };
constexpr static RegisterFieldDescriptor TIM3_SMCR_MSM = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_SMCR_ETF = { 8, 4, 0 };
constexpr static RegisterFieldDescriptor TIM3_SMCR_ETPS = { 12, 2, 0 };
constexpr static RegisterFieldDescriptor TIM3_SMCR_ECE = { 14, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_SMCR_ETP = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_SMCR_SMS_3 = { 16, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_SMCR_TS_4_3 = { 20, 2, 0 };


constexpr static u32 TIM3_DIER_BASE = TIM3_BASE + 12;
constexpr static RegisterFieldDescriptor TIM3_DIER_UIE = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_DIER_CC1IE = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_DIER_CC2IE = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_DIER_CC3IE = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_DIER_CC4IE = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_DIER_TIE = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_DIER_UDE = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_DIER_CC1DE = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_DIER_CC2DE = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_DIER_CC3DE = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_DIER_CC4DE = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_DIER_TDE = { 14, 1, 0 };


constexpr static u32 TIM3_SR_BASE = TIM3_BASE + 16;
constexpr static RegisterFieldDescriptor TIM3_SR_UIF = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_SR_CC1IF = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_SR_CC2IF = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_SR_CC3IF = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_SR_CC4IF = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_SR_TIF = { 6, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_SR_CC1OF = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_SR_CC2OF = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_SR_CC3OF = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_SR_CC4OF = { 12, 1, 0 };


constexpr static u32 TIM3_EGR_BASE = TIM3_BASE + 20;
constexpr static RegisterFieldDescriptor TIM3_EGR_UG = { 0, 1, 2 };
constexpr static RegisterFieldDescriptor TIM3_EGR_CC1G = { 1, 1, 2 };
constexpr static RegisterFieldDescriptor TIM3_EGR_CC2G = { 2, 1, 2 };
constexpr static RegisterFieldDescriptor TIM3_EGR_CC3G = { 3, 1, 2 };
constexpr static RegisterFieldDescriptor TIM3_EGR_CC4G = { 4, 1, 2 };
constexpr static RegisterFieldDescriptor TIM3_EGR_TG = { 6, 1, 2 };


constexpr static u32 TIM3_CCMR1_Output_BASE = TIM3_BASE + 24;
constexpr static RegisterFieldDescriptor TIM3_CCMR1_Output_CC1S = { 0, 2, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCMR1_Output_OC1FE = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCMR1_Output_OC1PE = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCMR1_Output_OC1M = { 4, 3, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCMR1_Output_OC1CE = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCMR1_Output_CC2S = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCMR1_Output_OC2FE = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCMR1_Output_OC2PE = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCMR1_Output_OC2M = { 12, 3, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCMR1_Output_OC2CE = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCMR1_Output_OC1M_3 = { 16, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCMR1_Output_OC2M_3 = { 24, 1, 0 };


constexpr static u32 TIM3_CCMR1_Input_BASE = TIM3_BASE + 24;
constexpr static RegisterFieldDescriptor TIM3_CCMR1_Input_CC1S = { 0, 2, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCMR1_Input_IC1PSC = { 2, 2, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCMR1_Input_IC1F = { 4, 4, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCMR1_Input_CC2S = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCMR1_Input_IC2PSC = { 10, 2, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCMR1_Input_IC2F = { 12, 4, 0 };


constexpr static u32 TIM3_CCMR2_Output_BASE = TIM3_BASE + 28;
constexpr static RegisterFieldDescriptor TIM3_CCMR2_Output_CC3S = { 0, 2, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCMR2_Output_OC3FE = { 2, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCMR2_Output_OC3PE = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCMR2_Output_OC3M = { 4, 3, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCMR2_Output_OC3CE = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCMR2_Output_CC4S = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCMR2_Output_OC4FE = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCMR2_Output_OC4PE = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCMR2_Output_OC4M = { 12, 3, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCMR2_Output_OC4CE = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCMR2_Output_OC3M_3 = { 16, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCMR2_Output_OC4M_3 = { 24, 1, 0 };


constexpr static u32 TIM3_CCMR2_Input_BASE = TIM3_BASE + 28;
constexpr static RegisterFieldDescriptor TIM3_CCMR2_Input_CC3S = { 0, 2, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCMR2_Input_IC3PSC = { 2, 2, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCMR2_Input_IC3F = { 4, 4, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCMR2_Input_CC4S = { 8, 2, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCMR2_Input_IC4PSC = { 10, 2, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCMR2_Input_IC4F = { 12, 4, 0 };


constexpr static u32 TIM3_CCER_BASE = TIM3_BASE + 32;
constexpr static RegisterFieldDescriptor TIM3_CCER_CC1E = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCER_CC1P = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCER_CC1NP = { 3, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCER_CC2E = { 4, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCER_CC2P = { 5, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCER_CC2NP = { 7, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCER_CC3E = { 8, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCER_CC3P = { 9, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCER_CC3NP = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCER_CC4E = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCER_CC4P = { 13, 1, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCER_CC4NP = { 15, 1, 0 };


constexpr static u32 TIM3_CNT_BASE = TIM3_BASE + 36;
constexpr static RegisterFieldDescriptor TIM3_CNT_CNT_L = { 0, 16, 0 };
constexpr static RegisterFieldDescriptor TIM3_CNT_CNT_H = { 16, 16, 0 };


constexpr static u32 TIM3_PSC_BASE = TIM3_BASE + 40;
constexpr static RegisterFieldDescriptor TIM3_PSC_PSC = { 0, 16, 0 };


constexpr static u32 TIM3_ARR_BASE = TIM3_BASE + 44;
constexpr static RegisterFieldDescriptor TIM3_ARR_ARR_L = { 0, 16, 0 };
constexpr static RegisterFieldDescriptor TIM3_ARR_ARR_H = { 16, 16, 0 };


constexpr static u32 TIM3_CCR1_BASE = TIM3_BASE + 52;
constexpr static RegisterFieldDescriptor TIM3_CCR1_CCR1_L = { 0, 16, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCR1_CCR1_H = { 16, 16, 0 };


constexpr static u32 TIM3_CCR2_BASE = TIM3_BASE + 56;
constexpr static RegisterFieldDescriptor TIM3_CCR2_CCR2_L = { 0, 16, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCR2_CCR2_H = { 16, 16, 0 };


constexpr static u32 TIM3_CCR3_BASE = TIM3_BASE + 60;
constexpr static RegisterFieldDescriptor TIM3_CCR3_CCR3_L = { 0, 16, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCR3_CCR3_H = { 16, 16, 0 };


constexpr static u32 TIM3_CCR4_BASE = TIM3_BASE + 64;
constexpr static RegisterFieldDescriptor TIM3_CCR4_CCR4_L = { 0, 16, 0 };
constexpr static RegisterFieldDescriptor TIM3_CCR4_CCR4_H = { 16, 16, 0 };


constexpr static u32 TIM3_DCR_BASE = TIM3_BASE + 72;
constexpr static RegisterFieldDescriptor TIM3_DCR_DBA = { 0, 5, 0 };
constexpr static RegisterFieldDescriptor TIM3_DCR_DBL = { 8, 5, 0 };


constexpr static u32 TIM3_DMAR_BASE = TIM3_BASE + 76;
constexpr static RegisterFieldDescriptor TIM3_DMAR_DMAB = { 0, 16, 0 };


constexpr static u32 TIM3_OR1_BASE = TIM3_BASE + 80;
constexpr static RegisterFieldDescriptor TIM3_OR1_IOCREF_CLR = { 0, 1, 0 };


constexpr static u32 TIM3_AF1_BASE = TIM3_BASE + 96;
constexpr static RegisterFieldDescriptor TIM3_AF1_ETRSEL = { 14, 4, 0 };


constexpr static u32 TIM3_TISEL_BASE = TIM3_BASE + 104;
constexpr static RegisterFieldDescriptor TIM3_TISEL_TI1SEL = { 0, 4, 0 };
constexpr static RegisterFieldDescriptor TIM3_TISEL_TI2SEL = { 8, 4, 0 };




constexpr static u32 VREFBUF_BASE = 1073807408;
constexpr static u32 VREFBUF_CSR_BASE = VREFBUF_BASE + 0;
constexpr static RegisterFieldDescriptor VREFBUF_CSR_ENVR = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor VREFBUF_CSR_HIZ = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor VREFBUF_CSR_VRR = { 3, 1, 1 };
constexpr static RegisterFieldDescriptor VREFBUF_CSR_VRS = { 4, 3, 0 };


constexpr static u32 VREFBUF_CCR_BASE = VREFBUF_BASE + 4;
constexpr static RegisterFieldDescriptor VREFBUF_CCR_TRIM = { 0, 6, 0 };




constexpr static u32 DBG_BASE = 1073829888;
constexpr static u32 DBG_IDCODE_BASE = DBG_BASE + 0;
constexpr static RegisterFieldDescriptor DBG_IDCODE_DEV_ID = { 0, 12, 1 };
constexpr static RegisterFieldDescriptor DBG_IDCODE_REV_ID = { 16, 16, 1 };


constexpr static u32 DBG_CR_BASE = DBG_BASE + 4;
constexpr static RegisterFieldDescriptor DBG_CR_DBG_STOP = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor DBG_CR_DBG_STANDBY = { 2, 1, 0 };


constexpr static u32 DBG_APB_FZ1_BASE = DBG_BASE + 8;
constexpr static RegisterFieldDescriptor DBG_APB_FZ1_DBG_TIM2_STOP = { 0, 1, 0 };
constexpr static RegisterFieldDescriptor DBG_APB_FZ1_DBG_TIM3_STOP = { 1, 1, 0 };
constexpr static RegisterFieldDescriptor DBG_APB_FZ1_DBG_RTC_STOP = { 10, 1, 0 };
constexpr static RegisterFieldDescriptor DBG_APB_FZ1_DBG_WWDG_STOP = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor DBG_APB_FZ1_DBG_IWDG_STOP = { 12, 1, 0 };
constexpr static RegisterFieldDescriptor DBG_APB_FZ1_DBG_I2C1_STOP = { 21, 1, 0 };


constexpr static u32 DBG_APB_FZ2_BASE = DBG_BASE + 12;
constexpr static RegisterFieldDescriptor DBG_APB_FZ2_DBG_TIM1_STOP = { 11, 1, 0 };
constexpr static RegisterFieldDescriptor DBG_APB_FZ2_DBG_TIM14_STOP = { 15, 1, 0 };
constexpr static RegisterFieldDescriptor DBG_APB_FZ2_DBG_TIM16_STOP = { 17, 1, 0 };
constexpr static RegisterFieldDescriptor DBG_APB_FZ2_DBG_TIM17_STOP = { 18, 1, 0 };




struct ADC {
	struct ADC_ISR {
		DECL_REGISTER(ADC_ADC_ISR_BASE);
		constexpr static RegisterField<ADC_ADC_ISR_ADRDY> ADRDY {};
		constexpr static RegisterField<ADC_ADC_ISR_EOSMP> EOSMP {};
		constexpr static RegisterField<ADC_ADC_ISR_EOC> EOC {};
		constexpr static RegisterField<ADC_ADC_ISR_EOS> EOS {};
		constexpr static RegisterField<ADC_ADC_ISR_OVR> OVR {};
		constexpr static RegisterField<ADC_ADC_ISR_AWD1> AWD1 {};
		constexpr static RegisterField<ADC_ADC_ISR_AWD2> AWD2 {};
		constexpr static RegisterField<ADC_ADC_ISR_AWD3> AWD3 {};
		constexpr static RegisterField<ADC_ADC_ISR_EOCAL> EOCAL {};
		constexpr static RegisterField<ADC_ADC_ISR_CCRDY> CCRDY {};
	};

	struct ADC_IER {
		DECL_REGISTER(ADC_ADC_IER_BASE);
		constexpr static RegisterField<ADC_ADC_IER_ADRDYIE> ADRDYIE {};
		constexpr static RegisterField<ADC_ADC_IER_EOSMPIE> EOSMPIE {};
		constexpr static RegisterField<ADC_ADC_IER_EOCIE> EOCIE {};
		constexpr static RegisterField<ADC_ADC_IER_EOSIE> EOSIE {};
		constexpr static RegisterField<ADC_ADC_IER_OVRIE> OVRIE {};
		constexpr static RegisterField<ADC_ADC_IER_AWD1IE> AWD1IE {};
		constexpr static RegisterField<ADC_ADC_IER_AWD2IE> AWD2IE {};
		constexpr static RegisterField<ADC_ADC_IER_AWD3IE> AWD3IE {};
		constexpr static RegisterField<ADC_ADC_IER_EOCALIE> EOCALIE {};
		constexpr static RegisterField<ADC_ADC_IER_CCRDYIE> CCRDYIE {};
	};

	struct ADC_CR {
		DECL_REGISTER(ADC_ADC_CR_BASE);
		constexpr static RegisterField<ADC_ADC_CR_ADEN> ADEN {};
		constexpr static RegisterField<ADC_ADC_CR_ADDIS> ADDIS {};
		constexpr static RegisterField<ADC_ADC_CR_ADSTART> ADSTART {};
		constexpr static RegisterField<ADC_ADC_CR_ADSTP> ADSTP {};
		constexpr static RegisterField<ADC_ADC_CR_ADVREGEN> ADVREGEN {};
		constexpr static RegisterField<ADC_ADC_CR_ADCAL> ADCAL {};
	};

	struct ADC_CFGR1 {
		DECL_REGISTER(ADC_ADC_CFGR1_BASE);
		constexpr static RegisterField<ADC_ADC_CFGR1_DMAEN> DMAEN {};
		constexpr static RegisterField<ADC_ADC_CFGR1_DMACFG> DMACFG {};
		constexpr static RegisterField<ADC_ADC_CFGR1_SCANDIR> SCANDIR {};
		constexpr static RegisterField<ADC_ADC_CFGR1_RES> RES {};
		constexpr static RegisterField<ADC_ADC_CFGR1_ALIGN> ALIGN {};
		constexpr static RegisterField<ADC_ADC_CFGR1_EXTSEL> EXTSEL {};
		constexpr static RegisterField<ADC_ADC_CFGR1_EXTEN> EXTEN {};
		constexpr static RegisterField<ADC_ADC_CFGR1_OVRMOD> OVRMOD {};
		constexpr static RegisterField<ADC_ADC_CFGR1_CONT> CONT {};
		constexpr static RegisterField<ADC_ADC_CFGR1_WAIT> WAIT {};
		constexpr static RegisterField<ADC_ADC_CFGR1_AUTOFF> AUTOFF {};
		constexpr static RegisterField<ADC_ADC_CFGR1_DISCEN> DISCEN {};
		constexpr static RegisterField<ADC_ADC_CFGR1_CHSELRMOD> CHSELRMOD {};
		constexpr static RegisterField<ADC_ADC_CFGR1_AWD1SGL> AWD1SGL {};
		constexpr static RegisterField<ADC_ADC_CFGR1_AWD1EN> AWD1EN {};
		constexpr static RegisterField<ADC_ADC_CFGR1_AWD1CH> AWD1CH {};
	};

	struct ADC_CFGR2 {
		DECL_REGISTER(ADC_ADC_CFGR2_BASE);
		constexpr static RegisterField<ADC_ADC_CFGR2_OVSE> OVSE {};
		constexpr static RegisterField<ADC_ADC_CFGR2_OVSR> OVSR {};
		constexpr static RegisterField<ADC_ADC_CFGR2_OVSS> OVSS {};
		constexpr static RegisterField<ADC_ADC_CFGR2_TOVS> TOVS {};
		constexpr static RegisterField<ADC_ADC_CFGR2_LFTRIG> LFTRIG {};
		constexpr static RegisterField<ADC_ADC_CFGR2_CKMODE> CKMODE {};
	};

	struct ADC_SMPR {
		DECL_REGISTER(ADC_ADC_SMPR_BASE);
		constexpr static RegisterField<ADC_ADC_SMPR_SMP1> SMP1 {};
		constexpr static RegisterField<ADC_ADC_SMPR_SMP2> SMP2 {};
		constexpr static RegisterField<ADC_ADC_SMPR_SMPSEL0> SMPSEL0 {};
		constexpr static RegisterField<ADC_ADC_SMPR_SMPSEL1> SMPSEL1 {};
		constexpr static RegisterField<ADC_ADC_SMPR_SMPSEL2> SMPSEL2 {};
		constexpr static RegisterField<ADC_ADC_SMPR_SMPSEL3> SMPSEL3 {};
		constexpr static RegisterField<ADC_ADC_SMPR_SMPSEL4> SMPSEL4 {};
		constexpr static RegisterField<ADC_ADC_SMPR_SMPSEL5> SMPSEL5 {};
		constexpr static RegisterField<ADC_ADC_SMPR_SMPSEL6> SMPSEL6 {};
		constexpr static RegisterField<ADC_ADC_SMPR_SMPSEL7> SMPSEL7 {};
		constexpr static RegisterField<ADC_ADC_SMPR_SMPSEL8> SMPSEL8 {};
		constexpr static RegisterField<ADC_ADC_SMPR_SMPSEL9> SMPSEL9 {};
		constexpr static RegisterField<ADC_ADC_SMPR_SMPSEL10> SMPSEL10 {};
		constexpr static RegisterField<ADC_ADC_SMPR_SMPSEL11> SMPSEL11 {};
		constexpr static RegisterField<ADC_ADC_SMPR_SMPSEL12> SMPSEL12 {};
		constexpr static RegisterField<ADC_ADC_SMPR_SMPSEL13> SMPSEL13 {};
		constexpr static RegisterField<ADC_ADC_SMPR_SMPSEL14> SMPSEL14 {};
		constexpr static RegisterField<ADC_ADC_SMPR_SMPSEL15> SMPSEL15 {};
		constexpr static RegisterField<ADC_ADC_SMPR_SMPSEL16> SMPSEL16 {};
		constexpr static RegisterField<ADC_ADC_SMPR_SMPSEL17> SMPSEL17 {};
		constexpr static RegisterField<ADC_ADC_SMPR_SMPSEL18> SMPSEL18 {};
	};

	struct ADC_AWD1TR {
		DECL_REGISTER(ADC_ADC_AWD1TR_BASE);
		constexpr static RegisterField<ADC_ADC_AWD1TR_LT1> LT1 {};
		constexpr static RegisterField<ADC_ADC_AWD1TR_HT1> HT1 {};
	};

	struct ADC_AWD2TR {
		DECL_REGISTER(ADC_ADC_AWD2TR_BASE);
		constexpr static RegisterField<ADC_ADC_AWD2TR_LT2> LT2 {};
		constexpr static RegisterField<ADC_ADC_AWD2TR_HT2> HT2 {};
	};

	struct ADC_CHSELR_0 {
		DECL_REGISTER(ADC_ADC_CHSELR_0_BASE);
		constexpr static RegisterField<ADC_ADC_CHSELR_0_CHSEL0> CHSEL0 {};
		constexpr static RegisterField<ADC_ADC_CHSELR_0_CHSEL1> CHSEL1 {};
		constexpr static RegisterField<ADC_ADC_CHSELR_0_CHSEL2> CHSEL2 {};
		constexpr static RegisterField<ADC_ADC_CHSELR_0_CHSEL3> CHSEL3 {};
		constexpr static RegisterField<ADC_ADC_CHSELR_0_CHSEL4> CHSEL4 {};
		constexpr static RegisterField<ADC_ADC_CHSELR_0_CHSEL5> CHSEL5 {};
		constexpr static RegisterField<ADC_ADC_CHSELR_0_CHSEL6> CHSEL6 {};
		constexpr static RegisterField<ADC_ADC_CHSELR_0_CHSEL7> CHSEL7 {};
		constexpr static RegisterField<ADC_ADC_CHSELR_0_CHSEL8> CHSEL8 {};
		constexpr static RegisterField<ADC_ADC_CHSELR_0_CHSEL9> CHSEL9 {};
		constexpr static RegisterField<ADC_ADC_CHSELR_0_CHSEL10> CHSEL10 {};
		constexpr static RegisterField<ADC_ADC_CHSELR_0_CHSEL11> CHSEL11 {};
		constexpr static RegisterField<ADC_ADC_CHSELR_0_CHSEL12> CHSEL12 {};
		constexpr static RegisterField<ADC_ADC_CHSELR_0_CHSEL13> CHSEL13 {};
		constexpr static RegisterField<ADC_ADC_CHSELR_0_CHSEL14> CHSEL14 {};
		constexpr static RegisterField<ADC_ADC_CHSELR_0_CHSEL15> CHSEL15 {};
		constexpr static RegisterField<ADC_ADC_CHSELR_0_CHSEL16> CHSEL16 {};
		constexpr static RegisterField<ADC_ADC_CHSELR_0_CHSEL17> CHSEL17 {};
		constexpr static RegisterField<ADC_ADC_CHSELR_0_CHSEL18> CHSEL18 {};
	};

	struct ADC_CHSELR_1 {
		DECL_REGISTER(ADC_ADC_CHSELR_1_BASE);
		constexpr static RegisterField<ADC_ADC_CHSELR_1_SQ1> SQ1 {};
		constexpr static RegisterField<ADC_ADC_CHSELR_1_SQ2> SQ2 {};
		constexpr static RegisterField<ADC_ADC_CHSELR_1_SQ3> SQ3 {};
		constexpr static RegisterField<ADC_ADC_CHSELR_1_SQ4> SQ4 {};
		constexpr static RegisterField<ADC_ADC_CHSELR_1_SQ5> SQ5 {};
		constexpr static RegisterField<ADC_ADC_CHSELR_1_SQ6> SQ6 {};
		constexpr static RegisterField<ADC_ADC_CHSELR_1_SQ7> SQ7 {};
		constexpr static RegisterField<ADC_ADC_CHSELR_1_SQ8> SQ8 {};
	};

	struct ADC_AWD3TR {
		DECL_REGISTER(ADC_ADC_AWD3TR_BASE);
		constexpr static RegisterField<ADC_ADC_AWD3TR_LT3> LT3 {};
		constexpr static RegisterField<ADC_ADC_AWD3TR_HT3> HT3 {};
	};

	struct ADC_DR {
		DECL_REGISTER(ADC_ADC_DR_BASE);
		constexpr static RegisterField<ADC_ADC_DR_DATA> DATA {};
	};

	struct ADC_AWD2CR {
		DECL_REGISTER(ADC_ADC_AWD2CR_BASE);
		constexpr static RegisterField<ADC_ADC_AWD2CR_AWD2CH0> AWD2CH0 {};
		constexpr static RegisterField<ADC_ADC_AWD2CR_AWD2CH1> AWD2CH1 {};
		constexpr static RegisterField<ADC_ADC_AWD2CR_AWD2CH2> AWD2CH2 {};
		constexpr static RegisterField<ADC_ADC_AWD2CR_AWD2CH3> AWD2CH3 {};
		constexpr static RegisterField<ADC_ADC_AWD2CR_AWD2CH4> AWD2CH4 {};
		constexpr static RegisterField<ADC_ADC_AWD2CR_AWD2CH5> AWD2CH5 {};
		constexpr static RegisterField<ADC_ADC_AWD2CR_AWD2CH6> AWD2CH6 {};
		constexpr static RegisterField<ADC_ADC_AWD2CR_AWD2CH7> AWD2CH7 {};
		constexpr static RegisterField<ADC_ADC_AWD2CR_AWD2CH8> AWD2CH8 {};
		constexpr static RegisterField<ADC_ADC_AWD2CR_AWD2CH9> AWD2CH9 {};
		constexpr static RegisterField<ADC_ADC_AWD2CR_AWD2CH10> AWD2CH10 {};
		constexpr static RegisterField<ADC_ADC_AWD2CR_AWD2CH11> AWD2CH11 {};
		constexpr static RegisterField<ADC_ADC_AWD2CR_AWD2CH12> AWD2CH12 {};
		constexpr static RegisterField<ADC_ADC_AWD2CR_AWD2CH13> AWD2CH13 {};
		constexpr static RegisterField<ADC_ADC_AWD2CR_AWD2CH14> AWD2CH14 {};
		constexpr static RegisterField<ADC_ADC_AWD2CR_AWD2CH15> AWD2CH15 {};
		constexpr static RegisterField<ADC_ADC_AWD2CR_AWD2CH16> AWD2CH16 {};
		constexpr static RegisterField<ADC_ADC_AWD2CR_AWD2CH17> AWD2CH17 {};
		constexpr static RegisterField<ADC_ADC_AWD2CR_AWD2CH18> AWD2CH18 {};
	};

	struct ADC_AWD3CR {
		DECL_REGISTER(ADC_ADC_AWD3CR_BASE);
		constexpr static RegisterField<ADC_ADC_AWD3CR_AWD3CH0> AWD3CH0 {};
		constexpr static RegisterField<ADC_ADC_AWD3CR_AWD3CH1> AWD3CH1 {};
		constexpr static RegisterField<ADC_ADC_AWD3CR_AWD3CH2> AWD3CH2 {};
		constexpr static RegisterField<ADC_ADC_AWD3CR_AWD3CH3> AWD3CH3 {};
		constexpr static RegisterField<ADC_ADC_AWD3CR_AWD3CH4> AWD3CH4 {};
		constexpr static RegisterField<ADC_ADC_AWD3CR_AWD3CH5> AWD3CH5 {};
		constexpr static RegisterField<ADC_ADC_AWD3CR_AWD3CH6> AWD3CH6 {};
		constexpr static RegisterField<ADC_ADC_AWD3CR_AWD3CH7> AWD3CH7 {};
		constexpr static RegisterField<ADC_ADC_AWD3CR_AWD3CH8> AWD3CH8 {};
		constexpr static RegisterField<ADC_ADC_AWD3CR_AWD3CH9> AWD3CH9 {};
		constexpr static RegisterField<ADC_ADC_AWD3CR_AWD3CH10> AWD3CH10 {};
		constexpr static RegisterField<ADC_ADC_AWD3CR_AWD3CH11> AWD3CH11 {};
		constexpr static RegisterField<ADC_ADC_AWD3CR_AWD3CH12> AWD3CH12 {};
		constexpr static RegisterField<ADC_ADC_AWD3CR_AWD3CH13> AWD3CH13 {};
		constexpr static RegisterField<ADC_ADC_AWD3CR_AWD3CH14> AWD3CH14 {};
		constexpr static RegisterField<ADC_ADC_AWD3CR_AWD3CH15> AWD3CH15 {};
		constexpr static RegisterField<ADC_ADC_AWD3CR_AWD3CH16> AWD3CH16 {};
		constexpr static RegisterField<ADC_ADC_AWD3CR_AWD3CH17> AWD3CH17 {};
		constexpr static RegisterField<ADC_ADC_AWD3CR_AWD3CH18> AWD3CH18 {};
	};

	struct ADC_CALFACT {
		DECL_REGISTER(ADC_ADC_CALFACT_BASE);
		constexpr static RegisterField<ADC_ADC_CALFACT_CALFACT> CALFACT {};
	};

	struct ADC_CCR {
		DECL_REGISTER(ADC_ADC_CCR_BASE);
		constexpr static RegisterField<ADC_ADC_CCR_PRESC> PRESC {};
		constexpr static RegisterField<ADC_ADC_CCR_VREFEN> VREFEN {};
		constexpr static RegisterField<ADC_ADC_CCR_TSEN> TSEN {};
		constexpr static RegisterField<ADC_ADC_CCR_VBATEN> VBATEN {};
	};

};

struct IWDG {
	struct KR {
		DECL_REGISTER(IWDG_KR_BASE);
		constexpr static RegisterField<IWDG_KR_KEY> KEY {};
	};

	struct PR {
		DECL_REGISTER(IWDG_PR_BASE);
		constexpr static RegisterField<IWDG_PR_PR> PRV {};
	};

	struct RLR {
		DECL_REGISTER(IWDG_RLR_BASE);
		constexpr static RegisterField<IWDG_RLR_RL> RL {};
	};

	struct SR {
		DECL_REGISTER(IWDG_SR_BASE);
		constexpr static RegisterField<IWDG_SR_PVU> PVU {};
		constexpr static RegisterField<IWDG_SR_RVU> RVU {};
		constexpr static RegisterField<IWDG_SR_WVU> WVU {};
	};

	struct WINR {
		DECL_REGISTER(IWDG_WINR_BASE);
		constexpr static RegisterField<IWDG_WINR_WIN> WIN {};
	};

};

struct WWDG {
	struct CR {
		DECL_REGISTER(WWDG_CR_BASE);
		constexpr static RegisterField<WWDG_CR_T> T {};
		constexpr static RegisterField<WWDG_CR_WDGA> WDGA {};
	};

	struct CFR {
		DECL_REGISTER(WWDG_CFR_BASE);
		constexpr static RegisterField<WWDG_CFR_W> W {};
		constexpr static RegisterField<WWDG_CFR_EWI> EWI {};
		constexpr static RegisterField<WWDG_CFR_WDGTB> WDGTB {};
	};

	struct SR {
		DECL_REGISTER(WWDG_SR_BASE);
		constexpr static RegisterField<WWDG_SR_EWIF> EWIF {};
	};

};

struct FLASH {
	struct ACR {
		DECL_REGISTER(FLASH_ACR_BASE);
		constexpr static RegisterField<FLASH_ACR_LATENCY> LATENCY {};
		constexpr static RegisterField<FLASH_ACR_PRFTEN> PRFTEN {};
		constexpr static RegisterField<FLASH_ACR_ICEN> ICEN {};
		constexpr static RegisterField<FLASH_ACR_ICRST> ICRST {};
		constexpr static RegisterField<FLASH_ACR_EMPTY> EMPTY {};
	};

	struct KEYR {
		DECL_REGISTER(FLASH_KEYR_BASE);
		constexpr static RegisterField<FLASH_KEYR_KEYR> KEYRV {};
	};

	struct OPTKEYR {
		DECL_REGISTER(FLASH_OPTKEYR_BASE);
		constexpr static RegisterField<FLASH_OPTKEYR_OPTKEYR> OPTKEYRV {};
	};

	struct SR {
		DECL_REGISTER(FLASH_SR_BASE);
		constexpr static RegisterField<FLASH_SR_EOP> EOP {};
		constexpr static RegisterField<FLASH_SR_OPERR> OPERR {};
		constexpr static RegisterField<FLASH_SR_PROGERR> PROGERR {};
		constexpr static RegisterField<FLASH_SR_WRPERR> WRPERR {};
		constexpr static RegisterField<FLASH_SR_PGAERR> PGAERR {};
		constexpr static RegisterField<FLASH_SR_SIZERR> SIZERR {};
		constexpr static RegisterField<FLASH_SR_PGSERR> PGSERR {};
		constexpr static RegisterField<FLASH_SR_MISERR> MISERR {};
		constexpr static RegisterField<FLASH_SR_FASTERR> FASTERR {};
		constexpr static RegisterField<FLASH_SR_OPTVERR> OPTVERR {};
		constexpr static RegisterField<FLASH_SR_BSY1> BSY1 {};
		constexpr static RegisterField<FLASH_SR_BSY2> BSY2 {};
		constexpr static RegisterField<FLASH_SR_CFGBSY> CFGBSY {};
	};

	struct CR {
		DECL_REGISTER(FLASH_CR_BASE);
		constexpr static RegisterField<FLASH_CR_PG> PG {};
		constexpr static RegisterField<FLASH_CR_PER> PER {};
		constexpr static RegisterField<FLASH_CR_MER1> MER1 {};
		constexpr static RegisterField<FLASH_CR_PNB> PNB {};
		constexpr static RegisterField<FLASH_CR_BKER> BKER {};
		constexpr static RegisterField<FLASH_CR_MER2> MER2 {};
		constexpr static RegisterField<FLASH_CR_STRT> STRT {};
		constexpr static RegisterField<FLASH_CR_OPTSTRT> OPTSTRT {};
		constexpr static RegisterField<FLASH_CR_FSTPG> FSTPG {};
		constexpr static RegisterField<FLASH_CR_EOPIE> EOPIE {};
		constexpr static RegisterField<FLASH_CR_ERRIE> ERRIE {};
		constexpr static RegisterField<FLASH_CR_OBL_LAUNCH> OBL_LAUNCH {};
		constexpr static RegisterField<FLASH_CR_OPTLOCK> OPTLOCK {};
		constexpr static RegisterField<FLASH_CR_LOCK> LOCK {};
	};

	struct ECCR {
		DECL_REGISTER(FLASH_ECCR_BASE);
		constexpr static RegisterField<FLASH_ECCR_ADDR_ECC> ADDR_ECC {};
		constexpr static RegisterField<FLASH_ECCR_SYSF_ECC> SYSF_ECC {};
		constexpr static RegisterField<FLASH_ECCR_ECCIE> ECCIE {};
		constexpr static RegisterField<FLASH_ECCR_ECCC> ECCC {};
		constexpr static RegisterField<FLASH_ECCR_ECCD> ECCD {};
	};

	struct ECCR2 {
		DECL_REGISTER(FLASH_ECCR2_BASE);
		constexpr static RegisterField<FLASH_ECCR2_ADDR_ECC> ADDR_ECC {};
		constexpr static RegisterField<FLASH_ECCR2_SYSF_ECC> SYSF_ECC {};
		constexpr static RegisterField<FLASH_ECCR2_ECCIE> ECCIE {};
		constexpr static RegisterField<FLASH_ECCR2_ECCC> ECCC {};
		constexpr static RegisterField<FLASH_ECCR2_ECCD> ECCD {};
	};

	struct OPTR {
		DECL_REGISTER(FLASH_OPTR_BASE);
		constexpr static RegisterField<FLASH_OPTR_RDP> RDP {};
		constexpr static RegisterField<FLASH_OPTR_nRST_STOP> nRST_STOP {};
		constexpr static RegisterField<FLASH_OPTR_nRST_STDBY> nRST_STDBY {};
		constexpr static RegisterField<FLASH_OPTR_IDWG_SW> IDWG_SW {};
		constexpr static RegisterField<FLASH_OPTR_IWDG_STOP> IWDG_STOP {};
		constexpr static RegisterField<FLASH_OPTR_IWDG_STDBY> IWDG_STDBY {};
		constexpr static RegisterField<FLASH_OPTR_WWDG_SW> WWDG_SW {};
		constexpr static RegisterField<FLASH_OPTR_nSWAP_BANK> nSWAP_BANK {};
		constexpr static RegisterField<FLASH_OPTR_DUAL_BANK> DUAL_BANK {};
		constexpr static RegisterField<FLASH_OPTR_RAM_PARITY_CHECK> RAM_PARITY_CHECK {};
		constexpr static RegisterField<FLASH_OPTR_nBOOT_SEL> nBOOT_SEL {};
		constexpr static RegisterField<FLASH_OPTR_nBOOT1> nBOOT1 {};
		constexpr static RegisterField<FLASH_OPTR_nBOOT0> nBOOT0 {};
	};

	struct WRP1AR {
		DECL_REGISTER(FLASH_WRP1AR_BASE);
		constexpr static RegisterField<FLASH_WRP1AR_WRP1A_STRT> WRP1A_STRT {};
		constexpr static RegisterField<FLASH_WRP1AR_WRP1A_END> WRP1A_END {};
	};

	struct WRP1BR {
		DECL_REGISTER(FLASH_WRP1BR_BASE);
		constexpr static RegisterField<FLASH_WRP1BR_WRP1B_STRT> WRP1B_STRT {};
		constexpr static RegisterField<FLASH_WRP1BR_WRP1B_END> WRP1B_END {};
	};

	struct WRP2AR {
		DECL_REGISTER(FLASH_WRP2AR_BASE);
		constexpr static RegisterField<FLASH_WRP2AR_WRP2A_STRT> WRP2A_STRT {};
		constexpr static RegisterField<FLASH_WRP2AR_WRP2A_END> WRP2A_END {};
	};

	struct WRP2BR {
		DECL_REGISTER(FLASH_WRP2BR_BASE);
		constexpr static RegisterField<FLASH_WRP2BR_WRP2B_STRT> WRP2B_STRT {};
		constexpr static RegisterField<FLASH_WRP2BR_WRP2B_END> WRP2B_END {};
	};

};

struct RCC {
	struct CR {
		DECL_REGISTER(RCC_CR_BASE);
		constexpr static RegisterField<RCC_CR_HSION> HSION {};
		constexpr static RegisterField<RCC_CR_HSIKERON> HSIKERON {};
		constexpr static RegisterField<RCC_CR_HSIRDY> HSIRDY {};
		constexpr static RegisterField<RCC_CR_HSIDIV> HSIDIV {};
		constexpr static RegisterField<RCC_CR_HSEON> HSEON {};
		constexpr static RegisterField<RCC_CR_HSERDY> HSERDY {};
		constexpr static RegisterField<RCC_CR_HSEBYP> HSEBYP {};
		constexpr static RegisterField<RCC_CR_CSSON> CSSON {};
		constexpr static RegisterField<RCC_CR_PLLON> PLLON {};
		constexpr static RegisterField<RCC_CR_PLLRDY> PLLRDY {};
	};

	struct ICSCR {
		DECL_REGISTER(RCC_ICSCR_BASE);
		constexpr static RegisterField<RCC_ICSCR_HSICAL> HSICAL {};
		constexpr static RegisterField<RCC_ICSCR_HSITRIM> HSITRIM {};
	};

	struct CFGR {
		DECL_REGISTER(RCC_CFGR_BASE);
		constexpr static RegisterField<RCC_CFGR_SW> SW {};
		constexpr static RegisterField<RCC_CFGR_SWS> SWS {};
		constexpr static RegisterField<RCC_CFGR_HPRE> HPRE {};
		constexpr static RegisterField<RCC_CFGR_PPRE> PPRE {};
		constexpr static RegisterField<RCC_CFGR_MCO2SEL> MCO2SEL {};
		constexpr static RegisterField<RCC_CFGR_MCO2PRE> MCO2PRE {};
		constexpr static RegisterField<RCC_CFGR_MCOSEL> MCOSEL {};
		constexpr static RegisterField<RCC_CFGR_MCOPRE> MCOPRE {};
	};

	struct PLLSYSCFGR {
		DECL_REGISTER(RCC_PLLSYSCFGR_BASE);
		constexpr static RegisterField<RCC_PLLSYSCFGR_PLLSRC> PLLSRC {};
		constexpr static RegisterField<RCC_PLLSYSCFGR_PLLM> PLLM {};
		constexpr static RegisterField<RCC_PLLSYSCFGR_PLLN> PLLN {};
		constexpr static RegisterField<RCC_PLLSYSCFGR_PLLPEN> PLLPEN {};
		constexpr static RegisterField<RCC_PLLSYSCFGR_PLLP> PLLP {};
		constexpr static RegisterField<RCC_PLLSYSCFGR_PLLQEN> PLLQEN {};
		constexpr static RegisterField<RCC_PLLSYSCFGR_PLLQ> PLLQ {};
		constexpr static RegisterField<RCC_PLLSYSCFGR_PLLREN> PLLREN {};
		constexpr static RegisterField<RCC_PLLSYSCFGR_PLLR> PLLR {};
	};

	struct CIER {
		DECL_REGISTER(RCC_CIER_BASE);
		constexpr static RegisterField<RCC_CIER_LSIRDYIE> LSIRDYIE {};
		constexpr static RegisterField<RCC_CIER_LSERDYIE> LSERDYIE {};
		constexpr static RegisterField<RCC_CIER_HSIRDYIE> HSIRDYIE {};
		constexpr static RegisterField<RCC_CIER_HSERDYIE> HSERDYIE {};
		constexpr static RegisterField<RCC_CIER_PLLSYSRDYIE> PLLSYSRDYIE {};
	};

	struct CIFR {
		DECL_REGISTER(RCC_CIFR_BASE);
		constexpr static RegisterField<RCC_CIFR_LSIRDYF> LSIRDYF {};
		constexpr static RegisterField<RCC_CIFR_LSERDYF> LSERDYF {};
		constexpr static RegisterField<RCC_CIFR_HSIRDYF> HSIRDYF {};
		constexpr static RegisterField<RCC_CIFR_HSERDYF> HSERDYF {};
		constexpr static RegisterField<RCC_CIFR_PLLSYSRDYF> PLLSYSRDYF {};
		constexpr static RegisterField<RCC_CIFR_CSSF> CSSF {};
		constexpr static RegisterField<RCC_CIFR_LSECSSF> LSECSSF {};
	};

	struct CICR {
		DECL_REGISTER(RCC_CICR_BASE);
		constexpr static RegisterField<RCC_CICR_LSIRDYC> LSIRDYC {};
		constexpr static RegisterField<RCC_CICR_LSERDYC> LSERDYC {};
		constexpr static RegisterField<RCC_CICR_HSIRDYC> HSIRDYC {};
		constexpr static RegisterField<RCC_CICR_HSERDYC> HSERDYC {};
		constexpr static RegisterField<RCC_CICR_PLLSYSRDYC> PLLSYSRDYC {};
		constexpr static RegisterField<RCC_CICR_CSSC> CSSC {};
		constexpr static RegisterField<RCC_CICR_LSECSSC> LSECSSC {};
	};

	struct IOPRSTR {
		DECL_REGISTER(RCC_IOPRSTR_BASE);
		constexpr static RegisterField<RCC_IOPRSTR_GPIOARST> GPIOARST {};
		constexpr static RegisterField<RCC_IOPRSTR_GPIOBRST> GPIOBRST {};
		constexpr static RegisterField<RCC_IOPRSTR_GPIOCRST> GPIOCRST {};
		constexpr static RegisterField<RCC_IOPRSTR_GPIODRST> GPIODRST {};
		constexpr static RegisterField<RCC_IOPRSTR_GPIOERST> GPIOERST {};
		constexpr static RegisterField<RCC_IOPRSTR_GPIOFRST> GPIOFRST {};
	};

	struct AHBRSTR {
		DECL_REGISTER(RCC_AHBRSTR_BASE);
		constexpr static RegisterField<RCC_AHBRSTR_DMA1RST> DMA1RST {};
		constexpr static RegisterField<RCC_AHBRSTR_DMA2RST> DMA2RST {};
		constexpr static RegisterField<RCC_AHBRSTR_FLASHRST> FLASHRST {};
		constexpr static RegisterField<RCC_AHBRSTR_CRCRST> CRCRST {};
	};

	struct APBRSTR1 {
		DECL_REGISTER(RCC_APBRSTR1_BASE);
		constexpr static RegisterField<RCC_APBRSTR1_TIM3RST> TIM3RST {};
		constexpr static RegisterField<RCC_APBRSTR1_TIM4RST> TIM4RST {};
		constexpr static RegisterField<RCC_APBRSTR1_TIM6RST> TIM6RST {};
		constexpr static RegisterField<RCC_APBRSTR1_TIM7RST> TIM7RST {};
		constexpr static RegisterField<RCC_APBRSTR1_USART5RST> USART5RST {};
		constexpr static RegisterField<RCC_APBRSTR1_USART6RST> USART6RST {};
		constexpr static RegisterField<RCC_APBRSTR1_USBRST> USBRST {};
		constexpr static RegisterField<RCC_APBRSTR1_SPI2RST> SPI2RST {};
		constexpr static RegisterField<RCC_APBRSTR1_SPI3RST> SPI3RST {};
		constexpr static RegisterField<RCC_APBRSTR1_USART2RST> USART2RST {};
		constexpr static RegisterField<RCC_APBRSTR1_USART3RST> USART3RST {};
		constexpr static RegisterField<RCC_APBRSTR1_USART4RST> USART4RST {};
		constexpr static RegisterField<RCC_APBRSTR1_I2C1RST> I2C1RST {};
		constexpr static RegisterField<RCC_APBRSTR1_I2C2RST> I2C2RST {};
		constexpr static RegisterField<RCC_APBRSTR1_I2C3RST> I2C3RST {};
		constexpr static RegisterField<RCC_APBRSTR1_DBGRST> DBGRST {};
		constexpr static RegisterField<RCC_APBRSTR1_PWRRST> PWRRST {};
	};

	struct APBRSTR2 {
		DECL_REGISTER(RCC_APBRSTR2_BASE);
		constexpr static RegisterField<RCC_APBRSTR2_SYSCFGRST> SYSCFGRST {};
		constexpr static RegisterField<RCC_APBRSTR2_TIM1RST> TIM1RST {};
		constexpr static RegisterField<RCC_APBRSTR2_SPI1RST> SPI1RST {};
		constexpr static RegisterField<RCC_APBRSTR2_USART1RST> USART1RST {};
		constexpr static RegisterField<RCC_APBRSTR2_TIM14RST> TIM14RST {};
		constexpr static RegisterField<RCC_APBRSTR2_TIM15RST> TIM15RST {};
		constexpr static RegisterField<RCC_APBRSTR2_TIM16RST> TIM16RST {};
		constexpr static RegisterField<RCC_APBRSTR2_TIM17RST> TIM17RST {};
		constexpr static RegisterField<RCC_APBRSTR2_ADCRST> ADCRST {};
	};

	struct IOPENR {
		DECL_REGISTER(RCC_IOPENR_BASE);
		constexpr static RegisterField<RCC_IOPENR_GPIOAEN> GPIOAEN {};
		constexpr static RegisterField<RCC_IOPENR_GPIOBEN> GPIOBEN {};
		constexpr static RegisterField<RCC_IOPENR_GPIOCEN> GPIOCEN {};
		constexpr static RegisterField<RCC_IOPENR_GPIODEN> GPIODEN {};
		constexpr static RegisterField<RCC_IOPENR_GPIOFEN> GPIOFEN {};
	};

	struct AHBENR {
		DECL_REGISTER(RCC_AHBENR_BASE);
		constexpr static RegisterField<RCC_AHBENR_DMA1EN> DMA1EN {};
		constexpr static RegisterField<RCC_AHBENR_FLASHEN> FLASHEN {};
		constexpr static RegisterField<RCC_AHBENR_CRCEN> CRCEN {};
	};

	struct APBENR1 {
		DECL_REGISTER(RCC_APBENR1_BASE);
		constexpr static RegisterField<RCC_APBENR1_TIM3EN> TIM3EN {};
		constexpr static RegisterField<RCC_APBENR1_RTCAPBEN> RTCAPBEN {};
		constexpr static RegisterField<RCC_APBENR1_WWDGEN> WWDGEN {};
		constexpr static RegisterField<RCC_APBENR1_SPI2EN> SPI2EN {};
		constexpr static RegisterField<RCC_APBENR1_USART2EN> USART2EN {};
		constexpr static RegisterField<RCC_APBENR1_I2C1EN> I2C1EN {};
		constexpr static RegisterField<RCC_APBENR1_I2C2EN> I2C2EN {};
		constexpr static RegisterField<RCC_APBENR1_DBGEN> DBGEN {};
		constexpr static RegisterField<RCC_APBENR1_PWREN> PWREN {};
	};

	struct APBENR2 {
		DECL_REGISTER(RCC_APBENR2_BASE);
		constexpr static RegisterField<RCC_APBENR2_SYSCFGEN> SYSCFGEN {};
		constexpr static RegisterField<RCC_APBENR2_TIM1EN> TIM1EN {};
		constexpr static RegisterField<RCC_APBENR2_SPI1EN> SPI1EN {};
		constexpr static RegisterField<RCC_APBENR2_USART1EN> USART1EN {};
		constexpr static RegisterField<RCC_APBENR2_TIM14EN> TIM14EN {};
		constexpr static RegisterField<RCC_APBENR2_TIM16EN> TIM16EN {};
		constexpr static RegisterField<RCC_APBENR2_TIM17EN> TIM17EN {};
		constexpr static RegisterField<RCC_APBENR2_ADCEN> ADCEN {};
	};

	struct IOPSMENR {
		DECL_REGISTER(RCC_IOPSMENR_BASE);
		constexpr static RegisterField<RCC_IOPSMENR_GPIOASMEN> GPIOASMEN {};
		constexpr static RegisterField<RCC_IOPSMENR_GPIOBSMEN> GPIOBSMEN {};
		constexpr static RegisterField<RCC_IOPSMENR_GPIOCSMEN> GPIOCSMEN {};
		constexpr static RegisterField<RCC_IOPSMENR_GPIODSMEN> GPIODSMEN {};
		constexpr static RegisterField<RCC_IOPSMENR_GPIOFSMEN> GPIOFSMEN {};
	};

	struct AHBSMENR {
		DECL_REGISTER(RCC_AHBSMENR_BASE);
		constexpr static RegisterField<RCC_AHBSMENR_DMA1SMEN> DMA1SMEN {};
		constexpr static RegisterField<RCC_AHBSMENR_FLASHSMEN> FLASHSMEN {};
		constexpr static RegisterField<RCC_AHBSMENR_SRAMSMEN> SRAMSMEN {};
		constexpr static RegisterField<RCC_AHBSMENR_CRCSMEN> CRCSMEN {};
	};

	struct APBSMENR1 {
		DECL_REGISTER(RCC_APBSMENR1_BASE);
		constexpr static RegisterField<RCC_APBSMENR1_TIM3SMEN> TIM3SMEN {};
		constexpr static RegisterField<RCC_APBSMENR1_RTCAPBSMEN> RTCAPBSMEN {};
		constexpr static RegisterField<RCC_APBSMENR1_WWDGSMEN> WWDGSMEN {};
		constexpr static RegisterField<RCC_APBSMENR1_SPI2SMEN> SPI2SMEN {};
		constexpr static RegisterField<RCC_APBSMENR1_USART2SMEN> USART2SMEN {};
		constexpr static RegisterField<RCC_APBSMENR1_I2C1SMEN> I2C1SMEN {};
		constexpr static RegisterField<RCC_APBSMENR1_I2C2SMEN> I2C2SMEN {};
		constexpr static RegisterField<RCC_APBSMENR1_DBGSMEN> DBGSMEN {};
		constexpr static RegisterField<RCC_APBSMENR1_PWRSMEN> PWRSMEN {};
	};

	struct APBSMENR2 {
		DECL_REGISTER(RCC_APBSMENR2_BASE);
		constexpr static RegisterField<RCC_APBSMENR2_SYSCFGSMEN> SYSCFGSMEN {};
		constexpr static RegisterField<RCC_APBSMENR2_TIM1SMEN> TIM1SMEN {};
		constexpr static RegisterField<RCC_APBSMENR2_SPI1SMEN> SPI1SMEN {};
		constexpr static RegisterField<RCC_APBSMENR2_USART1SMEN> USART1SMEN {};
		constexpr static RegisterField<RCC_APBSMENR2_TIM14SMEN> TIM14SMEN {};
		constexpr static RegisterField<RCC_APBSMENR2_TIM16SMEN> TIM16SMEN {};
		constexpr static RegisterField<RCC_APBSMENR2_TIM17SMEN> TIM17SMEN {};
		constexpr static RegisterField<RCC_APBSMENR2_ADCSMEN> ADCSMEN {};
	};

	struct CCIPR {
		DECL_REGISTER(RCC_CCIPR_BASE);
		constexpr static RegisterField<RCC_CCIPR_USART1SEL> USART1SEL {};
		constexpr static RegisterField<RCC_CCIPR_I2C1SEL> I2C1SEL {};
		constexpr static RegisterField<RCC_CCIPR_I2C2I2S1SEL> I2C2I2S1SEL {};
		constexpr static RegisterField<RCC_CCIPR_TIM1SEL> TIM1SEL {};
		constexpr static RegisterField<RCC_CCIPR_ADCSEL> ADCSEL {};
	};

	struct BDCR {
		DECL_REGISTER(RCC_BDCR_BASE);
		constexpr static RegisterField<RCC_BDCR_LSEON> LSEON {};
		constexpr static RegisterField<RCC_BDCR_LSERDY> LSERDY {};
		constexpr static RegisterField<RCC_BDCR_LSEBYP> LSEBYP {};
		constexpr static RegisterField<RCC_BDCR_LSEDRV> LSEDRV {};
		constexpr static RegisterField<RCC_BDCR_LSECSSON> LSECSSON {};
		constexpr static RegisterField<RCC_BDCR_LSECSSD> LSECSSD {};
		constexpr static RegisterField<RCC_BDCR_RTCSEL> RTCSEL {};
		constexpr static RegisterField<RCC_BDCR_RTCEN> RTCEN {};
		constexpr static RegisterField<RCC_BDCR_BDRST> BDRST {};
		constexpr static RegisterField<RCC_BDCR_LSCOEN> LSCOEN {};
		constexpr static RegisterField<RCC_BDCR_LSCOSEL> LSCOSEL {};
	};

	struct CSR {
		DECL_REGISTER(RCC_CSR_BASE);
		constexpr static RegisterField<RCC_CSR_LSION> LSION {};
		constexpr static RegisterField<RCC_CSR_LSIRDY> LSIRDY {};
		constexpr static RegisterField<RCC_CSR_RMVF> RMVF {};
		constexpr static RegisterField<RCC_CSR_OBLRSTF> OBLRSTF {};
		constexpr static RegisterField<RCC_CSR_PINRSTF> PINRSTF {};
		constexpr static RegisterField<RCC_CSR_PWRRSTF> PWRRSTF {};
		constexpr static RegisterField<RCC_CSR_SFTRSTF> SFTRSTF {};
		constexpr static RegisterField<RCC_CSR_IWDGRSTF> IWDGRSTF {};
		constexpr static RegisterField<RCC_CSR_WWDGRSTF> WWDGRSTF {};
		constexpr static RegisterField<RCC_CSR_LPWRRSTF> LPWRRSTF {};
	};

};

struct PWR {
	struct CR1 {
		DECL_REGISTER(PWR_CR1_BASE);
		constexpr static RegisterField<PWR_CR1_LPMS> LPMS {};
		constexpr static RegisterField<PWR_CR1_FPD_STOP> FPD_STOP {};
		constexpr static RegisterField<PWR_CR1_FPD_LPRUN> FPD_LPRUN {};
		constexpr static RegisterField<PWR_CR1_FPD_LPSLP> FPD_LPSLP {};
		constexpr static RegisterField<PWR_CR1_DBP> DBP {};
		constexpr static RegisterField<PWR_CR1_VOS> VOS {};
		constexpr static RegisterField<PWR_CR1_LPR> LPR {};
	};

	struct CR2 {
		DECL_REGISTER(PWR_CR2_BASE);
		constexpr static RegisterField<PWR_CR2_USV> USV {};
	};

	struct CR3 {
		DECL_REGISTER(PWR_CR3_BASE);
		constexpr static RegisterField<PWR_CR3_EWUP1> EWUP1 {};
		constexpr static RegisterField<PWR_CR3_EWUP2> EWUP2 {};
		constexpr static RegisterField<PWR_CR3_EWUP3> EWUP3 {};
		constexpr static RegisterField<PWR_CR3_EWUP4> EWUP4 {};
		constexpr static RegisterField<PWR_CR3_EWUP5> EWUP5 {};
		constexpr static RegisterField<PWR_CR3_EWUP6> EWUP6 {};
		constexpr static RegisterField<PWR_CR3_APC> APC {};
		constexpr static RegisterField<PWR_CR3_EIWUL> EIWUL {};
	};

	struct CR4 {
		DECL_REGISTER(PWR_CR4_BASE);
		constexpr static RegisterField<PWR_CR4_WP1> WP1 {};
		constexpr static RegisterField<PWR_CR4_WP2> WP2 {};
		constexpr static RegisterField<PWR_CR4_WP3> WP3 {};
		constexpr static RegisterField<PWR_CR4_WP4> WP4 {};
		constexpr static RegisterField<PWR_CR4_WP5> WP5 {};
		constexpr static RegisterField<PWR_CR4_WP6> WP6 {};
		constexpr static RegisterField<PWR_CR4_VBE> VBE {};
		constexpr static RegisterField<PWR_CR4_VBRS> VBRS {};
	};

	struct SR1 {
		DECL_REGISTER(PWR_SR1_BASE);
		constexpr static RegisterField<PWR_SR1_WUF1> WUF1 {};
		constexpr static RegisterField<PWR_SR1_WUF2> WUF2 {};
		constexpr static RegisterField<PWR_SR1_WUF3> WUF3 {};
		constexpr static RegisterField<PWR_SR1_WUF4> WUF4 {};
		constexpr static RegisterField<PWR_SR1_WUF5> WUF5 {};
		constexpr static RegisterField<PWR_SR1_WUF6> WUF6 {};
		constexpr static RegisterField<PWR_SR1_SBF> SBF {};
		constexpr static RegisterField<PWR_SR1_WUFI> WUFI {};
	};

	struct SR2 {
		DECL_REGISTER(PWR_SR2_BASE);
		constexpr static RegisterField<PWR_SR2_FLASH_RDY> FLASH_RDY {};
		constexpr static RegisterField<PWR_SR2_REGLPS> REGLPS {};
		constexpr static RegisterField<PWR_SR2_REGLPF> REGLPF {};
		constexpr static RegisterField<PWR_SR2_VOSF> VOSF {};
	};

	struct SCR {
		DECL_REGISTER(PWR_SCR_BASE);
		constexpr static RegisterField<PWR_SCR_CWUF1> CWUF1 {};
		constexpr static RegisterField<PWR_SCR_CWUF2> CWUF2 {};
		constexpr static RegisterField<PWR_SCR_CWUF3> CWUF3 {};
		constexpr static RegisterField<PWR_SCR_CWUF4> CWUF4 {};
		constexpr static RegisterField<PWR_SCR_CWUF5> CWUF5 {};
		constexpr static RegisterField<PWR_SCR_CWUF6> CWUF6 {};
		constexpr static RegisterField<PWR_SCR_CSBF> CSBF {};
	};

	struct PUCRA {
		DECL_REGISTER(PWR_PUCRA_BASE);
		constexpr static RegisterField<PWR_PUCRA_PU0> PU0 {};
		constexpr static RegisterField<PWR_PUCRA_PU1> PU1 {};
		constexpr static RegisterField<PWR_PUCRA_PU2> PU2 {};
		constexpr static RegisterField<PWR_PUCRA_PU3> PU3 {};
		constexpr static RegisterField<PWR_PUCRA_PU4> PU4 {};
		constexpr static RegisterField<PWR_PUCRA_PU5> PU5 {};
		constexpr static RegisterField<PWR_PUCRA_PU6> PU6 {};
		constexpr static RegisterField<PWR_PUCRA_PU7> PU7 {};
		constexpr static RegisterField<PWR_PUCRA_PU8> PU8 {};
		constexpr static RegisterField<PWR_PUCRA_PU9> PU9 {};
		constexpr static RegisterField<PWR_PUCRA_PU10> PU10 {};
		constexpr static RegisterField<PWR_PUCRA_PU11> PU11 {};
		constexpr static RegisterField<PWR_PUCRA_PU12> PU12 {};
		constexpr static RegisterField<PWR_PUCRA_PU13> PU13 {};
		constexpr static RegisterField<PWR_PUCRA_PU14> PU14 {};
		constexpr static RegisterField<PWR_PUCRA_PU15> PU15 {};
	};

	struct PDCRA {
		DECL_REGISTER(PWR_PDCRA_BASE);
		constexpr static RegisterField<PWR_PDCRA_PD0> PD0 {};
		constexpr static RegisterField<PWR_PDCRA_PD1> PD1 {};
		constexpr static RegisterField<PWR_PDCRA_PD2> PD2 {};
		constexpr static RegisterField<PWR_PDCRA_PD3> PD3 {};
		constexpr static RegisterField<PWR_PDCRA_PD4> PD4 {};
		constexpr static RegisterField<PWR_PDCRA_PD5> PD5 {};
		constexpr static RegisterField<PWR_PDCRA_PD6> PD6 {};
		constexpr static RegisterField<PWR_PDCRA_PD7> PD7 {};
		constexpr static RegisterField<PWR_PDCRA_PD8> PD8 {};
		constexpr static RegisterField<PWR_PDCRA_PD9> PD9 {};
		constexpr static RegisterField<PWR_PDCRA_PD10> PD10 {};
		constexpr static RegisterField<PWR_PDCRA_PD11> PD11 {};
		constexpr static RegisterField<PWR_PDCRA_PD12> PD12 {};
		constexpr static RegisterField<PWR_PDCRA_PD13> PD13 {};
		constexpr static RegisterField<PWR_PDCRA_PD14> PD14 {};
		constexpr static RegisterField<PWR_PDCRA_PD15> PD15 {};
	};

	struct PUCRB {
		DECL_REGISTER(PWR_PUCRB_BASE);
		constexpr static RegisterField<PWR_PUCRB_PU0> PU0 {};
		constexpr static RegisterField<PWR_PUCRB_PU1> PU1 {};
		constexpr static RegisterField<PWR_PUCRB_PU2> PU2 {};
		constexpr static RegisterField<PWR_PUCRB_PU3> PU3 {};
		constexpr static RegisterField<PWR_PUCRB_PU4> PU4 {};
		constexpr static RegisterField<PWR_PUCRB_PU5> PU5 {};
		constexpr static RegisterField<PWR_PUCRB_PU6> PU6 {};
		constexpr static RegisterField<PWR_PUCRB_PU7> PU7 {};
		constexpr static RegisterField<PWR_PUCRB_PU8> PU8 {};
		constexpr static RegisterField<PWR_PUCRB_PU9> PU9 {};
		constexpr static RegisterField<PWR_PUCRB_PU10> PU10 {};
		constexpr static RegisterField<PWR_PUCRB_PU11> PU11 {};
		constexpr static RegisterField<PWR_PUCRB_PU12> PU12 {};
		constexpr static RegisterField<PWR_PUCRB_PU13> PU13 {};
		constexpr static RegisterField<PWR_PUCRB_PU14> PU14 {};
		constexpr static RegisterField<PWR_PUCRB_PU15> PU15 {};
	};

	struct PDCRB {
		DECL_REGISTER(PWR_PDCRB_BASE);
		constexpr static RegisterField<PWR_PDCRB_PD0> PD0 {};
		constexpr static RegisterField<PWR_PDCRB_PD1> PD1 {};
		constexpr static RegisterField<PWR_PDCRB_PD2> PD2 {};
		constexpr static RegisterField<PWR_PDCRB_PD3> PD3 {};
		constexpr static RegisterField<PWR_PDCRB_PD4> PD4 {};
		constexpr static RegisterField<PWR_PDCRB_PD5> PD5 {};
		constexpr static RegisterField<PWR_PDCRB_PD6> PD6 {};
		constexpr static RegisterField<PWR_PDCRB_PD7> PD7 {};
		constexpr static RegisterField<PWR_PDCRB_PD8> PD8 {};
		constexpr static RegisterField<PWR_PDCRB_PD9> PD9 {};
		constexpr static RegisterField<PWR_PDCRB_PD10> PD10 {};
		constexpr static RegisterField<PWR_PDCRB_PD11> PD11 {};
		constexpr static RegisterField<PWR_PDCRB_PD12> PD12 {};
		constexpr static RegisterField<PWR_PDCRB_PD13> PD13 {};
		constexpr static RegisterField<PWR_PDCRB_PD14> PD14 {};
		constexpr static RegisterField<PWR_PDCRB_PD15> PD15 {};
	};

	struct PUCRC {
		DECL_REGISTER(PWR_PUCRC_BASE);
		constexpr static RegisterField<PWR_PUCRC_PU0> PU0 {};
		constexpr static RegisterField<PWR_PUCRC_PU1> PU1 {};
		constexpr static RegisterField<PWR_PUCRC_PU2> PU2 {};
		constexpr static RegisterField<PWR_PUCRC_PU3> PU3 {};
		constexpr static RegisterField<PWR_PUCRC_PU4> PU4 {};
		constexpr static RegisterField<PWR_PUCRC_PU5> PU5 {};
		constexpr static RegisterField<PWR_PUCRC_PU6> PU6 {};
		constexpr static RegisterField<PWR_PUCRC_PU7> PU7 {};
		constexpr static RegisterField<PWR_PUCRC_PU8> PU8 {};
		constexpr static RegisterField<PWR_PUCRC_PU9> PU9 {};
		constexpr static RegisterField<PWR_PUCRC_PU10> PU10 {};
		constexpr static RegisterField<PWR_PUCRC_PU11> PU11 {};
		constexpr static RegisterField<PWR_PUCRC_PU12> PU12 {};
		constexpr static RegisterField<PWR_PUCRC_PU13> PU13 {};
		constexpr static RegisterField<PWR_PUCRC_PU14> PU14 {};
		constexpr static RegisterField<PWR_PUCRC_PU15> PU15 {};
	};

	struct PDCRC {
		DECL_REGISTER(PWR_PDCRC_BASE);
		constexpr static RegisterField<PWR_PDCRC_PD0> PD0 {};
		constexpr static RegisterField<PWR_PDCRC_PD1> PD1 {};
		constexpr static RegisterField<PWR_PDCRC_PD2> PD2 {};
		constexpr static RegisterField<PWR_PDCRC_PD3> PD3 {};
		constexpr static RegisterField<PWR_PDCRC_PD4> PD4 {};
		constexpr static RegisterField<PWR_PDCRC_PD5> PD5 {};
		constexpr static RegisterField<PWR_PDCRC_PD6> PD6 {};
		constexpr static RegisterField<PWR_PDCRC_PD7> PD7 {};
		constexpr static RegisterField<PWR_PDCRC_PD8> PD8 {};
		constexpr static RegisterField<PWR_PDCRC_PD9> PD9 {};
		constexpr static RegisterField<PWR_PDCRC_PD10> PD10 {};
		constexpr static RegisterField<PWR_PDCRC_PD11> PD11 {};
		constexpr static RegisterField<PWR_PDCRC_PD12> PD12 {};
		constexpr static RegisterField<PWR_PDCRC_PD13> PD13 {};
		constexpr static RegisterField<PWR_PDCRC_PD14> PD14 {};
		constexpr static RegisterField<PWR_PDCRC_PD15> PD15 {};
	};

	struct PUCRD {
		DECL_REGISTER(PWR_PUCRD_BASE);
		constexpr static RegisterField<PWR_PUCRD_PU0> PU0 {};
		constexpr static RegisterField<PWR_PUCRD_PU1> PU1 {};
		constexpr static RegisterField<PWR_PUCRD_PU2> PU2 {};
		constexpr static RegisterField<PWR_PUCRD_PU3> PU3 {};
		constexpr static RegisterField<PWR_PUCRD_PU4> PU4 {};
		constexpr static RegisterField<PWR_PUCRD_PU5> PU5 {};
		constexpr static RegisterField<PWR_PUCRD_PU6> PU6 {};
		constexpr static RegisterField<PWR_PUCRD_PU7> PU7 {};
		constexpr static RegisterField<PWR_PUCRD_PU8> PU8 {};
		constexpr static RegisterField<PWR_PUCRD_PU9> PU9 {};
		constexpr static RegisterField<PWR_PUCRD_PU10> PU10 {};
		constexpr static RegisterField<PWR_PUCRD_PU11> PU11 {};
		constexpr static RegisterField<PWR_PUCRD_PU12> PU12 {};
		constexpr static RegisterField<PWR_PUCRD_PU13> PU13 {};
		constexpr static RegisterField<PWR_PUCRD_PU14> PU14 {};
		constexpr static RegisterField<PWR_PUCRD_PU15> PU15 {};
	};

	struct PDCRD {
		DECL_REGISTER(PWR_PDCRD_BASE);
		constexpr static RegisterField<PWR_PDCRD_PD0> PD0 {};
		constexpr static RegisterField<PWR_PDCRD_PD1> PD1 {};
		constexpr static RegisterField<PWR_PDCRD_PD2> PD2 {};
		constexpr static RegisterField<PWR_PDCRD_PD3> PD3 {};
		constexpr static RegisterField<PWR_PDCRD_PD4> PD4 {};
		constexpr static RegisterField<PWR_PDCRD_PD5> PD5 {};
		constexpr static RegisterField<PWR_PDCRD_PD6> PD6 {};
		constexpr static RegisterField<PWR_PDCRD_PD7> PD7 {};
		constexpr static RegisterField<PWR_PDCRD_PD8> PD8 {};
		constexpr static RegisterField<PWR_PDCRD_PD9> PD9 {};
		constexpr static RegisterField<PWR_PDCRD_PD10> PD10 {};
		constexpr static RegisterField<PWR_PDCRD_PD11> PD11 {};
		constexpr static RegisterField<PWR_PDCRD_PD12> PD12 {};
		constexpr static RegisterField<PWR_PDCRD_PD13> PD13 {};
		constexpr static RegisterField<PWR_PDCRD_PD14> PD14 {};
		constexpr static RegisterField<PWR_PDCRD_PD15> PD15 {};
	};

	struct PUCRE {
		DECL_REGISTER(PWR_PUCRE_BASE);
		constexpr static RegisterField<PWR_PUCRE_PU0> PU0 {};
		constexpr static RegisterField<PWR_PUCRE_PU1> PU1 {};
		constexpr static RegisterField<PWR_PUCRE_PU2> PU2 {};
		constexpr static RegisterField<PWR_PUCRE_PU3> PU3 {};
		constexpr static RegisterField<PWR_PUCRE_PU4> PU4 {};
		constexpr static RegisterField<PWR_PUCRE_PU5> PU5 {};
		constexpr static RegisterField<PWR_PUCRE_PU6> PU6 {};
		constexpr static RegisterField<PWR_PUCRE_PU7> PU7 {};
		constexpr static RegisterField<PWR_PUCRE_PU8> PU8 {};
		constexpr static RegisterField<PWR_PUCRE_PU9> PU9 {};
		constexpr static RegisterField<PWR_PUCRE_PU10> PU10 {};
		constexpr static RegisterField<PWR_PUCRE_PU11> PU11 {};
		constexpr static RegisterField<PWR_PUCRE_PU12> PU12 {};
		constexpr static RegisterField<PWR_PUCRE_PU13> PU13 {};
		constexpr static RegisterField<PWR_PUCRE_PU14> PU14 {};
		constexpr static RegisterField<PWR_PUCRE_PU15> PU15 {};
	};

	struct PDCRE {
		DECL_REGISTER(PWR_PDCRE_BASE);
		constexpr static RegisterField<PWR_PDCRE_PD0> PD0 {};
		constexpr static RegisterField<PWR_PDCRE_PD1> PD1 {};
		constexpr static RegisterField<PWR_PDCRE_PD2> PD2 {};
		constexpr static RegisterField<PWR_PDCRE_PD3> PD3 {};
		constexpr static RegisterField<PWR_PDCRE_PD4> PD4 {};
		constexpr static RegisterField<PWR_PDCRE_PD5> PD5 {};
		constexpr static RegisterField<PWR_PDCRE_PD6> PD6 {};
		constexpr static RegisterField<PWR_PDCRE_PD7> PD7 {};
		constexpr static RegisterField<PWR_PDCRE_PD8> PD8 {};
		constexpr static RegisterField<PWR_PDCRE_PD9> PD9 {};
		constexpr static RegisterField<PWR_PDCRE_PD10> PD10 {};
		constexpr static RegisterField<PWR_PDCRE_PD11> PD11 {};
		constexpr static RegisterField<PWR_PDCRE_PD12> PD12 {};
		constexpr static RegisterField<PWR_PDCRE_PD13> PD13 {};
		constexpr static RegisterField<PWR_PDCRE_PD14> PD14 {};
		constexpr static RegisterField<PWR_PDCRE_PD15> PD15 {};
	};

	struct PUCRF {
		DECL_REGISTER(PWR_PUCRF_BASE);
		constexpr static RegisterField<PWR_PUCRF_PU0> PU0 {};
		constexpr static RegisterField<PWR_PUCRF_PU1> PU1 {};
		constexpr static RegisterField<PWR_PUCRF_PU2> PU2 {};
		constexpr static RegisterField<PWR_PUCRF_PU3> PU3 {};
		constexpr static RegisterField<PWR_PUCRF_PU4> PU4 {};
		constexpr static RegisterField<PWR_PUCRF_PU5> PU5 {};
		constexpr static RegisterField<PWR_PUCRF_PU6> PU6 {};
		constexpr static RegisterField<PWR_PUCRF_PU7> PU7 {};
		constexpr static RegisterField<PWR_PUCRF_PU8> PU8 {};
		constexpr static RegisterField<PWR_PUCRF_PU9> PU9 {};
		constexpr static RegisterField<PWR_PUCRF_PU10> PU10 {};
		constexpr static RegisterField<PWR_PUCRF_PU11> PU11 {};
		constexpr static RegisterField<PWR_PUCRF_PU12> PU12 {};
		constexpr static RegisterField<PWR_PUCRF_PU13> PU13 {};
	};

	struct PDCRF {
		DECL_REGISTER(PWR_PDCRF_BASE);
		constexpr static RegisterField<PWR_PDCRF_PD0> PD0 {};
		constexpr static RegisterField<PWR_PDCRF_PD1> PD1 {};
		constexpr static RegisterField<PWR_PDCRF_PD2> PD2 {};
		constexpr static RegisterField<PWR_PDCRF_PD3> PD3 {};
		constexpr static RegisterField<PWR_PDCRF_PD4> PD4 {};
		constexpr static RegisterField<PWR_PDCRF_PD5> PD5 {};
		constexpr static RegisterField<PWR_PDCRF_PD6> PD6 {};
		constexpr static RegisterField<PWR_PDCRF_PD7> PD7 {};
		constexpr static RegisterField<PWR_PDCRF_PD8> PD8 {};
		constexpr static RegisterField<PWR_PDCRF_PD9> PD9 {};
		constexpr static RegisterField<PWR_PDCRF_PD10> PD10 {};
		constexpr static RegisterField<PWR_PDCRF_PD11> PD11 {};
		constexpr static RegisterField<PWR_PDCRF_PD12> PD12 {};
		constexpr static RegisterField<PWR_PDCRF_PD13> PD13 {};
	};

};

struct DMA1 {
	struct DMA_ISR {
		DECL_REGISTER(DMA1_DMA_ISR_BASE);
		constexpr static RegisterField<DMA1_DMA_ISR_GIF1> GIF1 {};
		constexpr static RegisterField<DMA1_DMA_ISR_TCIF1> TCIF1 {};
		constexpr static RegisterField<DMA1_DMA_ISR_HTIF1> HTIF1 {};
		constexpr static RegisterField<DMA1_DMA_ISR_TEIF1> TEIF1 {};
		constexpr static RegisterField<DMA1_DMA_ISR_GIF2> GIF2 {};
		constexpr static RegisterField<DMA1_DMA_ISR_TCIF2> TCIF2 {};
		constexpr static RegisterField<DMA1_DMA_ISR_HTIF2> HTIF2 {};
		constexpr static RegisterField<DMA1_DMA_ISR_TEIF2> TEIF2 {};
		constexpr static RegisterField<DMA1_DMA_ISR_GIF3> GIF3 {};
		constexpr static RegisterField<DMA1_DMA_ISR_TCIF3> TCIF3 {};
		constexpr static RegisterField<DMA1_DMA_ISR_HTIF3> HTIF3 {};
		constexpr static RegisterField<DMA1_DMA_ISR_TEIF3> TEIF3 {};
		constexpr static RegisterField<DMA1_DMA_ISR_GIF4> GIF4 {};
		constexpr static RegisterField<DMA1_DMA_ISR_TCIF4> TCIF4 {};
		constexpr static RegisterField<DMA1_DMA_ISR_HTIF4> HTIF4 {};
		constexpr static RegisterField<DMA1_DMA_ISR_TEIF4> TEIF4 {};
		constexpr static RegisterField<DMA1_DMA_ISR_GIF5> GIF5 {};
		constexpr static RegisterField<DMA1_DMA_ISR_TCIF5> TCIF5 {};
		constexpr static RegisterField<DMA1_DMA_ISR_HTIF5> HTIF5 {};
		constexpr static RegisterField<DMA1_DMA_ISR_TEIF5> TEIF5 {};
		constexpr static RegisterField<DMA1_DMA_ISR_GIF6> GIF6 {};
		constexpr static RegisterField<DMA1_DMA_ISR_TCIF6> TCIF6 {};
		constexpr static RegisterField<DMA1_DMA_ISR_HTIF6> HTIF6 {};
		constexpr static RegisterField<DMA1_DMA_ISR_TEIF6> TEIF6 {};
		constexpr static RegisterField<DMA1_DMA_ISR_GIF7> GIF7 {};
		constexpr static RegisterField<DMA1_DMA_ISR_TCIF7> TCIF7 {};
		constexpr static RegisterField<DMA1_DMA_ISR_HTIF7> HTIF7 {};
		constexpr static RegisterField<DMA1_DMA_ISR_TEIF7> TEIF7 {};
	};

	struct DMA_IFCR {
		DECL_REGISTER(DMA1_DMA_IFCR_BASE);
		constexpr static RegisterField<DMA1_DMA_IFCR_CGIF1> CGIF1 {};
		constexpr static RegisterField<DMA1_DMA_IFCR_CTCIF1> CTCIF1 {};
		constexpr static RegisterField<DMA1_DMA_IFCR_CHTIF1> CHTIF1 {};
		constexpr static RegisterField<DMA1_DMA_IFCR_CTEIF1> CTEIF1 {};
		constexpr static RegisterField<DMA1_DMA_IFCR_CGIF2> CGIF2 {};
		constexpr static RegisterField<DMA1_DMA_IFCR_CTCIF2> CTCIF2 {};
		constexpr static RegisterField<DMA1_DMA_IFCR_CHTIF2> CHTIF2 {};
		constexpr static RegisterField<DMA1_DMA_IFCR_CTEIF2> CTEIF2 {};
		constexpr static RegisterField<DMA1_DMA_IFCR_CGIF3> CGIF3 {};
		constexpr static RegisterField<DMA1_DMA_IFCR_CTCIF3> CTCIF3 {};
		constexpr static RegisterField<DMA1_DMA_IFCR_CHTIF3> CHTIF3 {};
		constexpr static RegisterField<DMA1_DMA_IFCR_CTEIF3> CTEIF3 {};
		constexpr static RegisterField<DMA1_DMA_IFCR_CGIF4> CGIF4 {};
		constexpr static RegisterField<DMA1_DMA_IFCR_CTCIF4> CTCIF4 {};
		constexpr static RegisterField<DMA1_DMA_IFCR_CHTIF4> CHTIF4 {};
		constexpr static RegisterField<DMA1_DMA_IFCR_CTEIF4> CTEIF4 {};
		constexpr static RegisterField<DMA1_DMA_IFCR_CGIF5> CGIF5 {};
		constexpr static RegisterField<DMA1_DMA_IFCR_CTCIF5> CTCIF5 {};
		constexpr static RegisterField<DMA1_DMA_IFCR_CHTIF5> CHTIF5 {};
		constexpr static RegisterField<DMA1_DMA_IFCR_CTEIF5> CTEIF5 {};
		constexpr static RegisterField<DMA1_DMA_IFCR_CGIF6> CGIF6 {};
		constexpr static RegisterField<DMA1_DMA_IFCR_CTCIF6> CTCIF6 {};
		constexpr static RegisterField<DMA1_DMA_IFCR_CHTIF6> CHTIF6 {};
		constexpr static RegisterField<DMA1_DMA_IFCR_CTEIF6> CTEIF6 {};
		constexpr static RegisterField<DMA1_DMA_IFCR_CGIF7> CGIF7 {};
		constexpr static RegisterField<DMA1_DMA_IFCR_CTCIF7> CTCIF7 {};
		constexpr static RegisterField<DMA1_DMA_IFCR_CHTIF7> CHTIF7 {};
		constexpr static RegisterField<DMA1_DMA_IFCR_CTEIF7> CTEIF7 {};
	};

	struct DMA_CCR1 {
		DECL_REGISTER(DMA1_DMA_CCR1_BASE);
		constexpr static RegisterField<DMA1_DMA_CCR1_EN> EN {};
		constexpr static RegisterField<DMA1_DMA_CCR1_TCIE> TCIE {};
		constexpr static RegisterField<DMA1_DMA_CCR1_HTIE> HTIE {};
		constexpr static RegisterField<DMA1_DMA_CCR1_TEIE> TEIE {};
		constexpr static RegisterField<DMA1_DMA_CCR1_DIR> DIR {};
		constexpr static RegisterField<DMA1_DMA_CCR1_CIRC> CIRC {};
		constexpr static RegisterField<DMA1_DMA_CCR1_PINC> PINC {};
		constexpr static RegisterField<DMA1_DMA_CCR1_MINC> MINC {};
		constexpr static RegisterField<DMA1_DMA_CCR1_PSIZE> PSIZE {};
		constexpr static RegisterField<DMA1_DMA_CCR1_MSIZE> MSIZE {};
		constexpr static RegisterField<DMA1_DMA_CCR1_PL> PL {};
		constexpr static RegisterField<DMA1_DMA_CCR1_MEM2MEM> MEM2MEM {};
	};

	struct DMA_CNDTR1 {
		DECL_REGISTER(DMA1_DMA_CNDTR1_BASE);
		constexpr static RegisterField<DMA1_DMA_CNDTR1_NDT> NDT {};
	};

	struct DMA_CPAR1 {
		DECL_REGISTER(DMA1_DMA_CPAR1_BASE);
		constexpr static RegisterField<DMA1_DMA_CPAR1_PA> PA {};
	};

	struct DMA_CMAR1 {
		DECL_REGISTER(DMA1_DMA_CMAR1_BASE);
		constexpr static RegisterField<DMA1_DMA_CMAR1_MA> MA {};
	};

	struct DMA_CCR2 {
		DECL_REGISTER(DMA1_DMA_CCR2_BASE);
		constexpr static RegisterField<DMA1_DMA_CCR2_EN> EN {};
		constexpr static RegisterField<DMA1_DMA_CCR2_TCIE> TCIE {};
		constexpr static RegisterField<DMA1_DMA_CCR2_HTIE> HTIE {};
		constexpr static RegisterField<DMA1_DMA_CCR2_TEIE> TEIE {};
		constexpr static RegisterField<DMA1_DMA_CCR2_DIR> DIR {};
		constexpr static RegisterField<DMA1_DMA_CCR2_CIRC> CIRC {};
		constexpr static RegisterField<DMA1_DMA_CCR2_PINC> PINC {};
		constexpr static RegisterField<DMA1_DMA_CCR2_MINC> MINC {};
		constexpr static RegisterField<DMA1_DMA_CCR2_PSIZE> PSIZE {};
		constexpr static RegisterField<DMA1_DMA_CCR2_MSIZE> MSIZE {};
		constexpr static RegisterField<DMA1_DMA_CCR2_PL> PL {};
		constexpr static RegisterField<DMA1_DMA_CCR2_MEM2MEM> MEM2MEM {};
	};

	struct DMA_CNDTR2 {
		DECL_REGISTER(DMA1_DMA_CNDTR2_BASE);
		constexpr static RegisterField<DMA1_DMA_CNDTR2_NDT> NDT {};
	};

	struct DMA_CPAR2 {
		DECL_REGISTER(DMA1_DMA_CPAR2_BASE);
		constexpr static RegisterField<DMA1_DMA_CPAR2_PA> PA {};
	};

	struct DMA_CMAR2 {
		DECL_REGISTER(DMA1_DMA_CMAR2_BASE);
		constexpr static RegisterField<DMA1_DMA_CMAR2_MA> MA {};
	};

	struct DMA_CCR3 {
		DECL_REGISTER(DMA1_DMA_CCR3_BASE);
		constexpr static RegisterField<DMA1_DMA_CCR3_EN> EN {};
		constexpr static RegisterField<DMA1_DMA_CCR3_TCIE> TCIE {};
		constexpr static RegisterField<DMA1_DMA_CCR3_HTIE> HTIE {};
		constexpr static RegisterField<DMA1_DMA_CCR3_TEIE> TEIE {};
		constexpr static RegisterField<DMA1_DMA_CCR3_DIR> DIR {};
		constexpr static RegisterField<DMA1_DMA_CCR3_CIRC> CIRC {};
		constexpr static RegisterField<DMA1_DMA_CCR3_PINC> PINC {};
		constexpr static RegisterField<DMA1_DMA_CCR3_MINC> MINC {};
		constexpr static RegisterField<DMA1_DMA_CCR3_PSIZE> PSIZE {};
		constexpr static RegisterField<DMA1_DMA_CCR3_MSIZE> MSIZE {};
		constexpr static RegisterField<DMA1_DMA_CCR3_PL> PL {};
		constexpr static RegisterField<DMA1_DMA_CCR3_MEM2MEM> MEM2MEM {};
	};

	struct DMA_CNDTR3 {
		DECL_REGISTER(DMA1_DMA_CNDTR3_BASE);
		constexpr static RegisterField<DMA1_DMA_CNDTR3_NDT> NDT {};
	};

	struct DMA_CPAR3 {
		DECL_REGISTER(DMA1_DMA_CPAR3_BASE);
		constexpr static RegisterField<DMA1_DMA_CPAR3_PA> PA {};
	};

	struct DMA_CMAR3 {
		DECL_REGISTER(DMA1_DMA_CMAR3_BASE);
		constexpr static RegisterField<DMA1_DMA_CMAR3_MA> MA {};
	};

	struct DMA_CCR4 {
		DECL_REGISTER(DMA1_DMA_CCR4_BASE);
		constexpr static RegisterField<DMA1_DMA_CCR4_EN> EN {};
		constexpr static RegisterField<DMA1_DMA_CCR4_TCIE> TCIE {};
		constexpr static RegisterField<DMA1_DMA_CCR4_HTIE> HTIE {};
		constexpr static RegisterField<DMA1_DMA_CCR4_TEIE> TEIE {};
		constexpr static RegisterField<DMA1_DMA_CCR4_DIR> DIR {};
		constexpr static RegisterField<DMA1_DMA_CCR4_CIRC> CIRC {};
		constexpr static RegisterField<DMA1_DMA_CCR4_PINC> PINC {};
		constexpr static RegisterField<DMA1_DMA_CCR4_MINC> MINC {};
		constexpr static RegisterField<DMA1_DMA_CCR4_PSIZE> PSIZE {};
		constexpr static RegisterField<DMA1_DMA_CCR4_MSIZE> MSIZE {};
		constexpr static RegisterField<DMA1_DMA_CCR4_PL> PL {};
		constexpr static RegisterField<DMA1_DMA_CCR4_MEM2MEM> MEM2MEM {};
	};

	struct DMA_CNDTR4 {
		DECL_REGISTER(DMA1_DMA_CNDTR4_BASE);
		constexpr static RegisterField<DMA1_DMA_CNDTR4_NDT> NDT {};
	};

	struct DMA_CPAR4 {
		DECL_REGISTER(DMA1_DMA_CPAR4_BASE);
		constexpr static RegisterField<DMA1_DMA_CPAR4_PA> PA {};
	};

	struct DMA_CMAR4 {
		DECL_REGISTER(DMA1_DMA_CMAR4_BASE);
		constexpr static RegisterField<DMA1_DMA_CMAR4_MA> MA {};
	};

	struct DMA_CCR5 {
		DECL_REGISTER(DMA1_DMA_CCR5_BASE);
		constexpr static RegisterField<DMA1_DMA_CCR5_EN> EN {};
		constexpr static RegisterField<DMA1_DMA_CCR5_TCIE> TCIE {};
		constexpr static RegisterField<DMA1_DMA_CCR5_HTIE> HTIE {};
		constexpr static RegisterField<DMA1_DMA_CCR5_TEIE> TEIE {};
		constexpr static RegisterField<DMA1_DMA_CCR5_DIR> DIR {};
		constexpr static RegisterField<DMA1_DMA_CCR5_CIRC> CIRC {};
		constexpr static RegisterField<DMA1_DMA_CCR5_PINC> PINC {};
		constexpr static RegisterField<DMA1_DMA_CCR5_MINC> MINC {};
		constexpr static RegisterField<DMA1_DMA_CCR5_PSIZE> PSIZE {};
		constexpr static RegisterField<DMA1_DMA_CCR5_MSIZE> MSIZE {};
		constexpr static RegisterField<DMA1_DMA_CCR5_PL> PL {};
		constexpr static RegisterField<DMA1_DMA_CCR5_MEM2MEM> MEM2MEM {};
	};

	struct DMA_CNDTR5 {
		DECL_REGISTER(DMA1_DMA_CNDTR5_BASE);
		constexpr static RegisterField<DMA1_DMA_CNDTR5_NDT> NDT {};
	};

	struct DMA_CPAR5 {
		DECL_REGISTER(DMA1_DMA_CPAR5_BASE);
		constexpr static RegisterField<DMA1_DMA_CPAR5_PA> PA {};
	};

	struct DMA_CMAR5 {
		DECL_REGISTER(DMA1_DMA_CMAR5_BASE);
		constexpr static RegisterField<DMA1_DMA_CMAR5_MA> MA {};
	};

	struct DMA_CCR6 {
		DECL_REGISTER(DMA1_DMA_CCR6_BASE);
		constexpr static RegisterField<DMA1_DMA_CCR6_EN> EN {};
		constexpr static RegisterField<DMA1_DMA_CCR6_TCIE> TCIE {};
		constexpr static RegisterField<DMA1_DMA_CCR6_HTIE> HTIE {};
		constexpr static RegisterField<DMA1_DMA_CCR6_TEIE> TEIE {};
		constexpr static RegisterField<DMA1_DMA_CCR6_DIR> DIR {};
		constexpr static RegisterField<DMA1_DMA_CCR6_CIRC> CIRC {};
		constexpr static RegisterField<DMA1_DMA_CCR6_PINC> PINC {};
		constexpr static RegisterField<DMA1_DMA_CCR6_MINC> MINC {};
		constexpr static RegisterField<DMA1_DMA_CCR6_PSIZE> PSIZE {};
		constexpr static RegisterField<DMA1_DMA_CCR6_MSIZE> MSIZE {};
		constexpr static RegisterField<DMA1_DMA_CCR6_PL> PL {};
		constexpr static RegisterField<DMA1_DMA_CCR6_MEM2MEM> MEM2MEM {};
	};

	struct DMA_CNDTR6 {
		DECL_REGISTER(DMA1_DMA_CNDTR6_BASE);
		constexpr static RegisterField<DMA1_DMA_CNDTR6_NDT> NDT {};
	};

	struct DMA_CPAR6 {
		DECL_REGISTER(DMA1_DMA_CPAR6_BASE);
		constexpr static RegisterField<DMA1_DMA_CPAR6_PA> PA {};
	};

	struct DMA_CMAR6 {
		DECL_REGISTER(DMA1_DMA_CMAR6_BASE);
		constexpr static RegisterField<DMA1_DMA_CMAR6_MA> MA {};
	};

	struct DMA_CCR7 {
		DECL_REGISTER(DMA1_DMA_CCR7_BASE);
		constexpr static RegisterField<DMA1_DMA_CCR7_EN> EN {};
		constexpr static RegisterField<DMA1_DMA_CCR7_TCIE> TCIE {};
		constexpr static RegisterField<DMA1_DMA_CCR7_HTIE> HTIE {};
		constexpr static RegisterField<DMA1_DMA_CCR7_TEIE> TEIE {};
		constexpr static RegisterField<DMA1_DMA_CCR7_DIR> DIR {};
		constexpr static RegisterField<DMA1_DMA_CCR7_CIRC> CIRC {};
		constexpr static RegisterField<DMA1_DMA_CCR7_PINC> PINC {};
		constexpr static RegisterField<DMA1_DMA_CCR7_MINC> MINC {};
		constexpr static RegisterField<DMA1_DMA_CCR7_PSIZE> PSIZE {};
		constexpr static RegisterField<DMA1_DMA_CCR7_MSIZE> MSIZE {};
		constexpr static RegisterField<DMA1_DMA_CCR7_PL> PL {};
		constexpr static RegisterField<DMA1_DMA_CCR7_MEM2MEM> MEM2MEM {};
	};

	struct DMA_CNDTR7 {
		DECL_REGISTER(DMA1_DMA_CNDTR7_BASE);
		constexpr static RegisterField<DMA1_DMA_CNDTR7_NDT> NDT {};
	};

	struct DMA_CPAR7 {
		DECL_REGISTER(DMA1_DMA_CPAR7_BASE);
		constexpr static RegisterField<DMA1_DMA_CPAR7_PA> PA {};
	};

	struct DMA_CMAR7 {
		DECL_REGISTER(DMA1_DMA_CMAR7_BASE);
		constexpr static RegisterField<DMA1_DMA_CMAR7_MA> MA {};
	};

};

struct DMA2 {
	struct DMA_ISR {
		DECL_REGISTER(DMA2_DMA_ISR_BASE);
		constexpr static RegisterField<DMA2_DMA_ISR_GIF1> GIF1 {};
		constexpr static RegisterField<DMA2_DMA_ISR_TCIF1> TCIF1 {};
		constexpr static RegisterField<DMA2_DMA_ISR_HTIF1> HTIF1 {};
		constexpr static RegisterField<DMA2_DMA_ISR_TEIF1> TEIF1 {};
		constexpr static RegisterField<DMA2_DMA_ISR_GIF2> GIF2 {};
		constexpr static RegisterField<DMA2_DMA_ISR_TCIF2> TCIF2 {};
		constexpr static RegisterField<DMA2_DMA_ISR_HTIF2> HTIF2 {};
		constexpr static RegisterField<DMA2_DMA_ISR_TEIF2> TEIF2 {};
		constexpr static RegisterField<DMA2_DMA_ISR_GIF3> GIF3 {};
		constexpr static RegisterField<DMA2_DMA_ISR_TCIF3> TCIF3 {};
		constexpr static RegisterField<DMA2_DMA_ISR_HTIF3> HTIF3 {};
		constexpr static RegisterField<DMA2_DMA_ISR_TEIF3> TEIF3 {};
		constexpr static RegisterField<DMA2_DMA_ISR_GIF4> GIF4 {};
		constexpr static RegisterField<DMA2_DMA_ISR_TCIF4> TCIF4 {};
		constexpr static RegisterField<DMA2_DMA_ISR_HTIF4> HTIF4 {};
		constexpr static RegisterField<DMA2_DMA_ISR_TEIF4> TEIF4 {};
		constexpr static RegisterField<DMA2_DMA_ISR_GIF5> GIF5 {};
		constexpr static RegisterField<DMA2_DMA_ISR_TCIF5> TCIF5 {};
		constexpr static RegisterField<DMA2_DMA_ISR_HTIF5> HTIF5 {};
		constexpr static RegisterField<DMA2_DMA_ISR_TEIF5> TEIF5 {};
		constexpr static RegisterField<DMA2_DMA_ISR_GIF6> GIF6 {};
		constexpr static RegisterField<DMA2_DMA_ISR_TCIF6> TCIF6 {};
		constexpr static RegisterField<DMA2_DMA_ISR_HTIF6> HTIF6 {};
		constexpr static RegisterField<DMA2_DMA_ISR_TEIF6> TEIF6 {};
		constexpr static RegisterField<DMA2_DMA_ISR_GIF7> GIF7 {};
		constexpr static RegisterField<DMA2_DMA_ISR_TCIF7> TCIF7 {};
		constexpr static RegisterField<DMA2_DMA_ISR_HTIF7> HTIF7 {};
		constexpr static RegisterField<DMA2_DMA_ISR_TEIF7> TEIF7 {};
	};

	struct DMA_IFCR {
		DECL_REGISTER(DMA2_DMA_IFCR_BASE);
		constexpr static RegisterField<DMA2_DMA_IFCR_CGIF1> CGIF1 {};
		constexpr static RegisterField<DMA2_DMA_IFCR_CTCIF1> CTCIF1 {};
		constexpr static RegisterField<DMA2_DMA_IFCR_CHTIF1> CHTIF1 {};
		constexpr static RegisterField<DMA2_DMA_IFCR_CTEIF1> CTEIF1 {};
		constexpr static RegisterField<DMA2_DMA_IFCR_CGIF2> CGIF2 {};
		constexpr static RegisterField<DMA2_DMA_IFCR_CTCIF2> CTCIF2 {};
		constexpr static RegisterField<DMA2_DMA_IFCR_CHTIF2> CHTIF2 {};
		constexpr static RegisterField<DMA2_DMA_IFCR_CTEIF2> CTEIF2 {};
		constexpr static RegisterField<DMA2_DMA_IFCR_CGIF3> CGIF3 {};
		constexpr static RegisterField<DMA2_DMA_IFCR_CTCIF3> CTCIF3 {};
		constexpr static RegisterField<DMA2_DMA_IFCR_CHTIF3> CHTIF3 {};
		constexpr static RegisterField<DMA2_DMA_IFCR_CTEIF3> CTEIF3 {};
		constexpr static RegisterField<DMA2_DMA_IFCR_CGIF4> CGIF4 {};
		constexpr static RegisterField<DMA2_DMA_IFCR_CTCIF4> CTCIF4 {};
		constexpr static RegisterField<DMA2_DMA_IFCR_CHTIF4> CHTIF4 {};
		constexpr static RegisterField<DMA2_DMA_IFCR_CTEIF4> CTEIF4 {};
		constexpr static RegisterField<DMA2_DMA_IFCR_CGIF5> CGIF5 {};
		constexpr static RegisterField<DMA2_DMA_IFCR_CTCIF5> CTCIF5 {};
		constexpr static RegisterField<DMA2_DMA_IFCR_CHTIF5> CHTIF5 {};
		constexpr static RegisterField<DMA2_DMA_IFCR_CTEIF5> CTEIF5 {};
		constexpr static RegisterField<DMA2_DMA_IFCR_CGIF6> CGIF6 {};
		constexpr static RegisterField<DMA2_DMA_IFCR_CTCIF6> CTCIF6 {};
		constexpr static RegisterField<DMA2_DMA_IFCR_CHTIF6> CHTIF6 {};
		constexpr static RegisterField<DMA2_DMA_IFCR_CTEIF6> CTEIF6 {};
		constexpr static RegisterField<DMA2_DMA_IFCR_CGIF7> CGIF7 {};
		constexpr static RegisterField<DMA2_DMA_IFCR_CTCIF7> CTCIF7 {};
		constexpr static RegisterField<DMA2_DMA_IFCR_CHTIF7> CHTIF7 {};
		constexpr static RegisterField<DMA2_DMA_IFCR_CTEIF7> CTEIF7 {};
	};

	struct DMA_CCR1 {
		DECL_REGISTER(DMA2_DMA_CCR1_BASE);
		constexpr static RegisterField<DMA2_DMA_CCR1_EN> EN {};
		constexpr static RegisterField<DMA2_DMA_CCR1_TCIE> TCIE {};
		constexpr static RegisterField<DMA2_DMA_CCR1_HTIE> HTIE {};
		constexpr static RegisterField<DMA2_DMA_CCR1_TEIE> TEIE {};
		constexpr static RegisterField<DMA2_DMA_CCR1_DIR> DIR {};
		constexpr static RegisterField<DMA2_DMA_CCR1_CIRC> CIRC {};
		constexpr static RegisterField<DMA2_DMA_CCR1_PINC> PINC {};
		constexpr static RegisterField<DMA2_DMA_CCR1_MINC> MINC {};
		constexpr static RegisterField<DMA2_DMA_CCR1_PSIZE> PSIZE {};
		constexpr static RegisterField<DMA2_DMA_CCR1_MSIZE> MSIZE {};
		constexpr static RegisterField<DMA2_DMA_CCR1_PL> PL {};
		constexpr static RegisterField<DMA2_DMA_CCR1_MEM2MEM> MEM2MEM {};
	};

	struct DMA_CNDTR1 {
		DECL_REGISTER(DMA2_DMA_CNDTR1_BASE);
		constexpr static RegisterField<DMA2_DMA_CNDTR1_NDT> NDT {};
	};

	struct DMA_CPAR1 {
		DECL_REGISTER(DMA2_DMA_CPAR1_BASE);
		constexpr static RegisterField<DMA2_DMA_CPAR1_PA> PA {};
	};

	struct DMA_CMAR1 {
		DECL_REGISTER(DMA2_DMA_CMAR1_BASE);
		constexpr static RegisterField<DMA2_DMA_CMAR1_MA> MA {};
	};

	struct DMA_CCR2 {
		DECL_REGISTER(DMA2_DMA_CCR2_BASE);
		constexpr static RegisterField<DMA2_DMA_CCR2_EN> EN {};
		constexpr static RegisterField<DMA2_DMA_CCR2_TCIE> TCIE {};
		constexpr static RegisterField<DMA2_DMA_CCR2_HTIE> HTIE {};
		constexpr static RegisterField<DMA2_DMA_CCR2_TEIE> TEIE {};
		constexpr static RegisterField<DMA2_DMA_CCR2_DIR> DIR {};
		constexpr static RegisterField<DMA2_DMA_CCR2_CIRC> CIRC {};
		constexpr static RegisterField<DMA2_DMA_CCR2_PINC> PINC {};
		constexpr static RegisterField<DMA2_DMA_CCR2_MINC> MINC {};
		constexpr static RegisterField<DMA2_DMA_CCR2_PSIZE> PSIZE {};
		constexpr static RegisterField<DMA2_DMA_CCR2_MSIZE> MSIZE {};
		constexpr static RegisterField<DMA2_DMA_CCR2_PL> PL {};
		constexpr static RegisterField<DMA2_DMA_CCR2_MEM2MEM> MEM2MEM {};
	};

	struct DMA_CNDTR2 {
		DECL_REGISTER(DMA2_DMA_CNDTR2_BASE);
		constexpr static RegisterField<DMA2_DMA_CNDTR2_NDT> NDT {};
	};

	struct DMA_CPAR2 {
		DECL_REGISTER(DMA2_DMA_CPAR2_BASE);
		constexpr static RegisterField<DMA2_DMA_CPAR2_PA> PA {};
	};

	struct DMA_CMAR2 {
		DECL_REGISTER(DMA2_DMA_CMAR2_BASE);
		constexpr static RegisterField<DMA2_DMA_CMAR2_MA> MA {};
	};

	struct DMA_CCR3 {
		DECL_REGISTER(DMA2_DMA_CCR3_BASE);
		constexpr static RegisterField<DMA2_DMA_CCR3_EN> EN {};
		constexpr static RegisterField<DMA2_DMA_CCR3_TCIE> TCIE {};
		constexpr static RegisterField<DMA2_DMA_CCR3_HTIE> HTIE {};
		constexpr static RegisterField<DMA2_DMA_CCR3_TEIE> TEIE {};
		constexpr static RegisterField<DMA2_DMA_CCR3_DIR> DIR {};
		constexpr static RegisterField<DMA2_DMA_CCR3_CIRC> CIRC {};
		constexpr static RegisterField<DMA2_DMA_CCR3_PINC> PINC {};
		constexpr static RegisterField<DMA2_DMA_CCR3_MINC> MINC {};
		constexpr static RegisterField<DMA2_DMA_CCR3_PSIZE> PSIZE {};
		constexpr static RegisterField<DMA2_DMA_CCR3_MSIZE> MSIZE {};
		constexpr static RegisterField<DMA2_DMA_CCR3_PL> PL {};
		constexpr static RegisterField<DMA2_DMA_CCR3_MEM2MEM> MEM2MEM {};
	};

	struct DMA_CNDTR3 {
		DECL_REGISTER(DMA2_DMA_CNDTR3_BASE);
		constexpr static RegisterField<DMA2_DMA_CNDTR3_NDT> NDT {};
	};

	struct DMA_CPAR3 {
		DECL_REGISTER(DMA2_DMA_CPAR3_BASE);
		constexpr static RegisterField<DMA2_DMA_CPAR3_PA> PA {};
	};

	struct DMA_CMAR3 {
		DECL_REGISTER(DMA2_DMA_CMAR3_BASE);
		constexpr static RegisterField<DMA2_DMA_CMAR3_MA> MA {};
	};

	struct DMA_CCR4 {
		DECL_REGISTER(DMA2_DMA_CCR4_BASE);
		constexpr static RegisterField<DMA2_DMA_CCR4_EN> EN {};
		constexpr static RegisterField<DMA2_DMA_CCR4_TCIE> TCIE {};
		constexpr static RegisterField<DMA2_DMA_CCR4_HTIE> HTIE {};
		constexpr static RegisterField<DMA2_DMA_CCR4_TEIE> TEIE {};
		constexpr static RegisterField<DMA2_DMA_CCR4_DIR> DIR {};
		constexpr static RegisterField<DMA2_DMA_CCR4_CIRC> CIRC {};
		constexpr static RegisterField<DMA2_DMA_CCR4_PINC> PINC {};
		constexpr static RegisterField<DMA2_DMA_CCR4_MINC> MINC {};
		constexpr static RegisterField<DMA2_DMA_CCR4_PSIZE> PSIZE {};
		constexpr static RegisterField<DMA2_DMA_CCR4_MSIZE> MSIZE {};
		constexpr static RegisterField<DMA2_DMA_CCR4_PL> PL {};
		constexpr static RegisterField<DMA2_DMA_CCR4_MEM2MEM> MEM2MEM {};
	};

	struct DMA_CNDTR4 {
		DECL_REGISTER(DMA2_DMA_CNDTR4_BASE);
		constexpr static RegisterField<DMA2_DMA_CNDTR4_NDT> NDT {};
	};

	struct DMA_CPAR4 {
		DECL_REGISTER(DMA2_DMA_CPAR4_BASE);
		constexpr static RegisterField<DMA2_DMA_CPAR4_PA> PA {};
	};

	struct DMA_CMAR4 {
		DECL_REGISTER(DMA2_DMA_CMAR4_BASE);
		constexpr static RegisterField<DMA2_DMA_CMAR4_MA> MA {};
	};

	struct DMA_CCR5 {
		DECL_REGISTER(DMA2_DMA_CCR5_BASE);
		constexpr static RegisterField<DMA2_DMA_CCR5_EN> EN {};
		constexpr static RegisterField<DMA2_DMA_CCR5_TCIE> TCIE {};
		constexpr static RegisterField<DMA2_DMA_CCR5_HTIE> HTIE {};
		constexpr static RegisterField<DMA2_DMA_CCR5_TEIE> TEIE {};
		constexpr static RegisterField<DMA2_DMA_CCR5_DIR> DIR {};
		constexpr static RegisterField<DMA2_DMA_CCR5_CIRC> CIRC {};
		constexpr static RegisterField<DMA2_DMA_CCR5_PINC> PINC {};
		constexpr static RegisterField<DMA2_DMA_CCR5_MINC> MINC {};
		constexpr static RegisterField<DMA2_DMA_CCR5_PSIZE> PSIZE {};
		constexpr static RegisterField<DMA2_DMA_CCR5_MSIZE> MSIZE {};
		constexpr static RegisterField<DMA2_DMA_CCR5_PL> PL {};
		constexpr static RegisterField<DMA2_DMA_CCR5_MEM2MEM> MEM2MEM {};
	};

	struct DMA_CNDTR5 {
		DECL_REGISTER(DMA2_DMA_CNDTR5_BASE);
		constexpr static RegisterField<DMA2_DMA_CNDTR5_NDT> NDT {};
	};

	struct DMA_CPAR5 {
		DECL_REGISTER(DMA2_DMA_CPAR5_BASE);
		constexpr static RegisterField<DMA2_DMA_CPAR5_PA> PA {};
	};

	struct DMA_CMAR5 {
		DECL_REGISTER(DMA2_DMA_CMAR5_BASE);
		constexpr static RegisterField<DMA2_DMA_CMAR5_MA> MA {};
	};

	struct DMA_CCR6 {
		DECL_REGISTER(DMA2_DMA_CCR6_BASE);
		constexpr static RegisterField<DMA2_DMA_CCR6_EN> EN {};
		constexpr static RegisterField<DMA2_DMA_CCR6_TCIE> TCIE {};
		constexpr static RegisterField<DMA2_DMA_CCR6_HTIE> HTIE {};
		constexpr static RegisterField<DMA2_DMA_CCR6_TEIE> TEIE {};
		constexpr static RegisterField<DMA2_DMA_CCR6_DIR> DIR {};
		constexpr static RegisterField<DMA2_DMA_CCR6_CIRC> CIRC {};
		constexpr static RegisterField<DMA2_DMA_CCR6_PINC> PINC {};
		constexpr static RegisterField<DMA2_DMA_CCR6_MINC> MINC {};
		constexpr static RegisterField<DMA2_DMA_CCR6_PSIZE> PSIZE {};
		constexpr static RegisterField<DMA2_DMA_CCR6_MSIZE> MSIZE {};
		constexpr static RegisterField<DMA2_DMA_CCR6_PL> PL {};
		constexpr static RegisterField<DMA2_DMA_CCR6_MEM2MEM> MEM2MEM {};
	};

	struct DMA_CNDTR6 {
		DECL_REGISTER(DMA2_DMA_CNDTR6_BASE);
		constexpr static RegisterField<DMA2_DMA_CNDTR6_NDT> NDT {};
	};

	struct DMA_CPAR6 {
		DECL_REGISTER(DMA2_DMA_CPAR6_BASE);
		constexpr static RegisterField<DMA2_DMA_CPAR6_PA> PA {};
	};

	struct DMA_CMAR6 {
		DECL_REGISTER(DMA2_DMA_CMAR6_BASE);
		constexpr static RegisterField<DMA2_DMA_CMAR6_MA> MA {};
	};

	struct DMA_CCR7 {
		DECL_REGISTER(DMA2_DMA_CCR7_BASE);
		constexpr static RegisterField<DMA2_DMA_CCR7_EN> EN {};
		constexpr static RegisterField<DMA2_DMA_CCR7_TCIE> TCIE {};
		constexpr static RegisterField<DMA2_DMA_CCR7_HTIE> HTIE {};
		constexpr static RegisterField<DMA2_DMA_CCR7_TEIE> TEIE {};
		constexpr static RegisterField<DMA2_DMA_CCR7_DIR> DIR {};
		constexpr static RegisterField<DMA2_DMA_CCR7_CIRC> CIRC {};
		constexpr static RegisterField<DMA2_DMA_CCR7_PINC> PINC {};
		constexpr static RegisterField<DMA2_DMA_CCR7_MINC> MINC {};
		constexpr static RegisterField<DMA2_DMA_CCR7_PSIZE> PSIZE {};
		constexpr static RegisterField<DMA2_DMA_CCR7_MSIZE> MSIZE {};
		constexpr static RegisterField<DMA2_DMA_CCR7_PL> PL {};
		constexpr static RegisterField<DMA2_DMA_CCR7_MEM2MEM> MEM2MEM {};
	};

	struct DMA_CNDTR7 {
		DECL_REGISTER(DMA2_DMA_CNDTR7_BASE);
		constexpr static RegisterField<DMA2_DMA_CNDTR7_NDT> NDT {};
	};

	struct DMA_CPAR7 {
		DECL_REGISTER(DMA2_DMA_CPAR7_BASE);
		constexpr static RegisterField<DMA2_DMA_CPAR7_PA> PA {};
	};

	struct DMA_CMAR7 {
		DECL_REGISTER(DMA2_DMA_CMAR7_BASE);
		constexpr static RegisterField<DMA2_DMA_CMAR7_MA> MA {};
	};

};

struct DMAMUX {
	struct C0CR {
		DECL_REGISTER(DMAMUX_C0CR_BASE);
		constexpr static RegisterField<DMAMUX_C0CR_DMAREQ_ID> DMAREQ_ID {};
		constexpr static RegisterField<DMAMUX_C0CR_SOIE> SOIE {};
		constexpr static RegisterField<DMAMUX_C0CR_EGE> EGE {};
		constexpr static RegisterField<DMAMUX_C0CR_SE> SE {};
		constexpr static RegisterField<DMAMUX_C0CR_SPOL> SPOL {};
		constexpr static RegisterField<DMAMUX_C0CR_NBREQ> NBREQ {};
		constexpr static RegisterField<DMAMUX_C0CR_SYNC_ID> SYNC_ID {};
	};

	struct C1CR {
		DECL_REGISTER(DMAMUX_C1CR_BASE);
		constexpr static RegisterField<DMAMUX_C1CR_DMAREQ_ID> DMAREQ_ID {};
		constexpr static RegisterField<DMAMUX_C1CR_SOIE> SOIE {};
		constexpr static RegisterField<DMAMUX_C1CR_EGE> EGE {};
		constexpr static RegisterField<DMAMUX_C1CR_SE> SE {};
		constexpr static RegisterField<DMAMUX_C1CR_SPOL> SPOL {};
		constexpr static RegisterField<DMAMUX_C1CR_NBREQ> NBREQ {};
		constexpr static RegisterField<DMAMUX_C1CR_SYNC_ID> SYNC_ID {};
	};

	struct C2CR {
		DECL_REGISTER(DMAMUX_C2CR_BASE);
		constexpr static RegisterField<DMAMUX_C2CR_DMAREQ_ID> DMAREQ_ID {};
		constexpr static RegisterField<DMAMUX_C2CR_SOIE> SOIE {};
		constexpr static RegisterField<DMAMUX_C2CR_EGE> EGE {};
		constexpr static RegisterField<DMAMUX_C2CR_SE> SE {};
		constexpr static RegisterField<DMAMUX_C2CR_SPOL> SPOL {};
		constexpr static RegisterField<DMAMUX_C2CR_NBREQ> NBREQ {};
		constexpr static RegisterField<DMAMUX_C2CR_SYNC_ID> SYNC_ID {};
	};

	struct C3CR {
		DECL_REGISTER(DMAMUX_C3CR_BASE);
		constexpr static RegisterField<DMAMUX_C3CR_DMAREQ_ID> DMAREQ_ID {};
		constexpr static RegisterField<DMAMUX_C3CR_SOIE> SOIE {};
		constexpr static RegisterField<DMAMUX_C3CR_EGE> EGE {};
		constexpr static RegisterField<DMAMUX_C3CR_SE> SE {};
		constexpr static RegisterField<DMAMUX_C3CR_SPOL> SPOL {};
		constexpr static RegisterField<DMAMUX_C3CR_NBREQ> NBREQ {};
		constexpr static RegisterField<DMAMUX_C3CR_SYNC_ID> SYNC_ID {};
	};

	struct C4CR {
		DECL_REGISTER(DMAMUX_C4CR_BASE);
		constexpr static RegisterField<DMAMUX_C4CR_DMAREQ_ID> DMAREQ_ID {};
		constexpr static RegisterField<DMAMUX_C4CR_SOIE> SOIE {};
		constexpr static RegisterField<DMAMUX_C4CR_EGE> EGE {};
		constexpr static RegisterField<DMAMUX_C4CR_SE> SE {};
		constexpr static RegisterField<DMAMUX_C4CR_SPOL> SPOL {};
		constexpr static RegisterField<DMAMUX_C4CR_NBREQ> NBREQ {};
		constexpr static RegisterField<DMAMUX_C4CR_SYNC_ID> SYNC_ID {};
	};

	struct C5CR {
		DECL_REGISTER(DMAMUX_C5CR_BASE);
		constexpr static RegisterField<DMAMUX_C5CR_DMAREQ_ID> DMAREQ_ID {};
		constexpr static RegisterField<DMAMUX_C5CR_SOIE> SOIE {};
		constexpr static RegisterField<DMAMUX_C5CR_EGE> EGE {};
		constexpr static RegisterField<DMAMUX_C5CR_SE> SE {};
		constexpr static RegisterField<DMAMUX_C5CR_SPOL> SPOL {};
		constexpr static RegisterField<DMAMUX_C5CR_NBREQ> NBREQ {};
		constexpr static RegisterField<DMAMUX_C5CR_SYNC_ID> SYNC_ID {};
	};

	struct C6CR {
		DECL_REGISTER(DMAMUX_C6CR_BASE);
		constexpr static RegisterField<DMAMUX_C6CR_DMAREQ_ID> DMAREQ_ID {};
		constexpr static RegisterField<DMAMUX_C6CR_SOIE> SOIE {};
		constexpr static RegisterField<DMAMUX_C6CR_EGE> EGE {};
		constexpr static RegisterField<DMAMUX_C6CR_SE> SE {};
		constexpr static RegisterField<DMAMUX_C6CR_SPOL> SPOL {};
		constexpr static RegisterField<DMAMUX_C6CR_NBREQ> NBREQ {};
		constexpr static RegisterField<DMAMUX_C6CR_SYNC_ID> SYNC_ID {};
	};

	struct RG0CR {
		DECL_REGISTER(DMAMUX_RG0CR_BASE);
		constexpr static RegisterField<DMAMUX_RG0CR_SIG_ID> SIG_ID {};
		constexpr static RegisterField<DMAMUX_RG0CR_OIE> OIE {};
		constexpr static RegisterField<DMAMUX_RG0CR_GE> GE {};
		constexpr static RegisterField<DMAMUX_RG0CR_GPOL> GPOL {};
		constexpr static RegisterField<DMAMUX_RG0CR_GNBREQ> GNBREQ {};
	};

	struct RG1CR {
		DECL_REGISTER(DMAMUX_RG1CR_BASE);
		constexpr static RegisterField<DMAMUX_RG1CR_SIG_ID> SIG_ID {};
		constexpr static RegisterField<DMAMUX_RG1CR_OIE> OIE {};
		constexpr static RegisterField<DMAMUX_RG1CR_GE> GE {};
		constexpr static RegisterField<DMAMUX_RG1CR_GPOL> GPOL {};
		constexpr static RegisterField<DMAMUX_RG1CR_GNBREQ> GNBREQ {};
	};

	struct RG2CR {
		DECL_REGISTER(DMAMUX_RG2CR_BASE);
		constexpr static RegisterField<DMAMUX_RG2CR_SIG_ID> SIG_ID {};
		constexpr static RegisterField<DMAMUX_RG2CR_OIE> OIE {};
		constexpr static RegisterField<DMAMUX_RG2CR_GE> GE {};
		constexpr static RegisterField<DMAMUX_RG2CR_GPOL> GPOL {};
		constexpr static RegisterField<DMAMUX_RG2CR_GNBREQ> GNBREQ {};
	};

	struct RG3CR {
		DECL_REGISTER(DMAMUX_RG3CR_BASE);
		constexpr static RegisterField<DMAMUX_RG3CR_SIG_ID> SIG_ID {};
		constexpr static RegisterField<DMAMUX_RG3CR_OIE> OIE {};
		constexpr static RegisterField<DMAMUX_RG3CR_GE> GE {};
		constexpr static RegisterField<DMAMUX_RG3CR_GPOL> GPOL {};
		constexpr static RegisterField<DMAMUX_RG3CR_GNBREQ> GNBREQ {};
	};

	struct RGSR {
		DECL_REGISTER(DMAMUX_RGSR_BASE);
		constexpr static RegisterField<DMAMUX_RGSR_OF> OF {};
	};

	struct RGCFR {
		DECL_REGISTER(DMAMUX_RGCFR_BASE);
		constexpr static RegisterField<DMAMUX_RGCFR_COF> COF {};
	};

};

struct GPIOA {
	struct MODER {
		DECL_REGISTER(GPIOA_MODER_BASE);
		constexpr static RegisterField<GPIOA_MODER_MODER0> MODER0 {};
		constexpr static RegisterField<GPIOA_MODER_MODER1> MODER1 {};
		constexpr static RegisterField<GPIOA_MODER_MODER2> MODER2 {};
		constexpr static RegisterField<GPIOA_MODER_MODER3> MODER3 {};
		constexpr static RegisterField<GPIOA_MODER_MODER4> MODER4 {};
		constexpr static RegisterField<GPIOA_MODER_MODER5> MODER5 {};
		constexpr static RegisterField<GPIOA_MODER_MODER6> MODER6 {};
		constexpr static RegisterField<GPIOA_MODER_MODER7> MODER7 {};
		constexpr static RegisterField<GPIOA_MODER_MODER8> MODER8 {};
		constexpr static RegisterField<GPIOA_MODER_MODER9> MODER9 {};
		constexpr static RegisterField<GPIOA_MODER_MODER10> MODER10 {};
		constexpr static RegisterField<GPIOA_MODER_MODER11> MODER11 {};
		constexpr static RegisterField<GPIOA_MODER_MODER12> MODER12 {};
		constexpr static RegisterField<GPIOA_MODER_MODER13> MODER13 {};
		constexpr static RegisterField<GPIOA_MODER_MODER14> MODER14 {};
		constexpr static RegisterField<GPIOA_MODER_MODER15> MODER15 {};
	};

	struct OTYPER {
		DECL_REGISTER(GPIOA_OTYPER_BASE);
		constexpr static RegisterField<GPIOA_OTYPER_OT0> OT0 {};
		constexpr static RegisterField<GPIOA_OTYPER_OT1> OT1 {};
		constexpr static RegisterField<GPIOA_OTYPER_OT2> OT2 {};
		constexpr static RegisterField<GPIOA_OTYPER_OT3> OT3 {};
		constexpr static RegisterField<GPIOA_OTYPER_OT4> OT4 {};
		constexpr static RegisterField<GPIOA_OTYPER_OT5> OT5 {};
		constexpr static RegisterField<GPIOA_OTYPER_OT6> OT6 {};
		constexpr static RegisterField<GPIOA_OTYPER_OT7> OT7 {};
		constexpr static RegisterField<GPIOA_OTYPER_OT8> OT8 {};
		constexpr static RegisterField<GPIOA_OTYPER_OT9> OT9 {};
		constexpr static RegisterField<GPIOA_OTYPER_OT10> OT10 {};
		constexpr static RegisterField<GPIOA_OTYPER_OT11> OT11 {};
		constexpr static RegisterField<GPIOA_OTYPER_OT12> OT12 {};
		constexpr static RegisterField<GPIOA_OTYPER_OT13> OT13 {};
		constexpr static RegisterField<GPIOA_OTYPER_OT14> OT14 {};
		constexpr static RegisterField<GPIOA_OTYPER_OT15> OT15 {};
	};

	struct OSPEEDR {
		DECL_REGISTER(GPIOA_OSPEEDR_BASE);
		constexpr static RegisterField<GPIOA_OSPEEDR_OSPEEDR0> OSPEEDR0 {};
		constexpr static RegisterField<GPIOA_OSPEEDR_OSPEEDR1> OSPEEDR1 {};
		constexpr static RegisterField<GPIOA_OSPEEDR_OSPEEDR2> OSPEEDR2 {};
		constexpr static RegisterField<GPIOA_OSPEEDR_OSPEEDR3> OSPEEDR3 {};
		constexpr static RegisterField<GPIOA_OSPEEDR_OSPEEDR4> OSPEEDR4 {};
		constexpr static RegisterField<GPIOA_OSPEEDR_OSPEEDR5> OSPEEDR5 {};
		constexpr static RegisterField<GPIOA_OSPEEDR_OSPEEDR6> OSPEEDR6 {};
		constexpr static RegisterField<GPIOA_OSPEEDR_OSPEEDR7> OSPEEDR7 {};
		constexpr static RegisterField<GPIOA_OSPEEDR_OSPEEDR8> OSPEEDR8 {};
		constexpr static RegisterField<GPIOA_OSPEEDR_OSPEEDR9> OSPEEDR9 {};
		constexpr static RegisterField<GPIOA_OSPEEDR_OSPEEDR10> OSPEEDR10 {};
		constexpr static RegisterField<GPIOA_OSPEEDR_OSPEEDR11> OSPEEDR11 {};
		constexpr static RegisterField<GPIOA_OSPEEDR_OSPEEDR12> OSPEEDR12 {};
		constexpr static RegisterField<GPIOA_OSPEEDR_OSPEEDR13> OSPEEDR13 {};
		constexpr static RegisterField<GPIOA_OSPEEDR_OSPEEDR14> OSPEEDR14 {};
		constexpr static RegisterField<GPIOA_OSPEEDR_OSPEEDR15> OSPEEDR15 {};
	};

	struct PUPDR {
		DECL_REGISTER(GPIOA_PUPDR_BASE);
		constexpr static RegisterField<GPIOA_PUPDR_PUPDR0> PUPDR0 {};
		constexpr static RegisterField<GPIOA_PUPDR_PUPDR1> PUPDR1 {};
		constexpr static RegisterField<GPIOA_PUPDR_PUPDR2> PUPDR2 {};
		constexpr static RegisterField<GPIOA_PUPDR_PUPDR3> PUPDR3 {};
		constexpr static RegisterField<GPIOA_PUPDR_PUPDR4> PUPDR4 {};
		constexpr static RegisterField<GPIOA_PUPDR_PUPDR5> PUPDR5 {};
		constexpr static RegisterField<GPIOA_PUPDR_PUPDR6> PUPDR6 {};
		constexpr static RegisterField<GPIOA_PUPDR_PUPDR7> PUPDR7 {};
		constexpr static RegisterField<GPIOA_PUPDR_PUPDR8> PUPDR8 {};
		constexpr static RegisterField<GPIOA_PUPDR_PUPDR9> PUPDR9 {};
		constexpr static RegisterField<GPIOA_PUPDR_PUPDR10> PUPDR10 {};
		constexpr static RegisterField<GPIOA_PUPDR_PUPDR11> PUPDR11 {};
		constexpr static RegisterField<GPIOA_PUPDR_PUPDR12> PUPDR12 {};
		constexpr static RegisterField<GPIOA_PUPDR_PUPDR13> PUPDR13 {};
		constexpr static RegisterField<GPIOA_PUPDR_PUPDR14> PUPDR14 {};
		constexpr static RegisterField<GPIOA_PUPDR_PUPDR15> PUPDR15 {};
	};

	struct IDR {
		DECL_REGISTER(GPIOA_IDR_BASE);
		constexpr static RegisterField<GPIOA_IDR_IDR0> IDR0 {};
		constexpr static RegisterField<GPIOA_IDR_IDR1> IDR1 {};
		constexpr static RegisterField<GPIOA_IDR_IDR2> IDR2 {};
		constexpr static RegisterField<GPIOA_IDR_IDR3> IDR3 {};
		constexpr static RegisterField<GPIOA_IDR_IDR4> IDR4 {};
		constexpr static RegisterField<GPIOA_IDR_IDR5> IDR5 {};
		constexpr static RegisterField<GPIOA_IDR_IDR6> IDR6 {};
		constexpr static RegisterField<GPIOA_IDR_IDR7> IDR7 {};
		constexpr static RegisterField<GPIOA_IDR_IDR8> IDR8 {};
		constexpr static RegisterField<GPIOA_IDR_IDR9> IDR9 {};
		constexpr static RegisterField<GPIOA_IDR_IDR10> IDR10 {};
		constexpr static RegisterField<GPIOA_IDR_IDR11> IDR11 {};
		constexpr static RegisterField<GPIOA_IDR_IDR12> IDR12 {};
		constexpr static RegisterField<GPIOA_IDR_IDR13> IDR13 {};
		constexpr static RegisterField<GPIOA_IDR_IDR14> IDR14 {};
		constexpr static RegisterField<GPIOA_IDR_IDR15> IDR15 {};
	};

	struct ODR {
		DECL_REGISTER(GPIOA_ODR_BASE);
		constexpr static RegisterField<GPIOA_ODR_ODR0> ODR0 {};
		constexpr static RegisterField<GPIOA_ODR_ODR1> ODR1 {};
		constexpr static RegisterField<GPIOA_ODR_ODR2> ODR2 {};
		constexpr static RegisterField<GPIOA_ODR_ODR3> ODR3 {};
		constexpr static RegisterField<GPIOA_ODR_ODR4> ODR4 {};
		constexpr static RegisterField<GPIOA_ODR_ODR5> ODR5 {};
		constexpr static RegisterField<GPIOA_ODR_ODR6> ODR6 {};
		constexpr static RegisterField<GPIOA_ODR_ODR7> ODR7 {};
		constexpr static RegisterField<GPIOA_ODR_ODR8> ODR8 {};
		constexpr static RegisterField<GPIOA_ODR_ODR9> ODR9 {};
		constexpr static RegisterField<GPIOA_ODR_ODR10> ODR10 {};
		constexpr static RegisterField<GPIOA_ODR_ODR11> ODR11 {};
		constexpr static RegisterField<GPIOA_ODR_ODR12> ODR12 {};
		constexpr static RegisterField<GPIOA_ODR_ODR13> ODR13 {};
		constexpr static RegisterField<GPIOA_ODR_ODR14> ODR14 {};
		constexpr static RegisterField<GPIOA_ODR_ODR15> ODR15 {};
	};

	struct BSRR {
		DECL_REGISTER(GPIOA_BSRR_BASE);
		constexpr static RegisterField<GPIOA_BSRR_BS0> BS0 {};
		constexpr static RegisterField<GPIOA_BSRR_BS1> BS1 {};
		constexpr static RegisterField<GPIOA_BSRR_BS2> BS2 {};
		constexpr static RegisterField<GPIOA_BSRR_BS3> BS3 {};
		constexpr static RegisterField<GPIOA_BSRR_BS4> BS4 {};
		constexpr static RegisterField<GPIOA_BSRR_BS5> BS5 {};
		constexpr static RegisterField<GPIOA_BSRR_BS6> BS6 {};
		constexpr static RegisterField<GPIOA_BSRR_BS7> BS7 {};
		constexpr static RegisterField<GPIOA_BSRR_BS8> BS8 {};
		constexpr static RegisterField<GPIOA_BSRR_BS9> BS9 {};
		constexpr static RegisterField<GPIOA_BSRR_BS10> BS10 {};
		constexpr static RegisterField<GPIOA_BSRR_BS11> BS11 {};
		constexpr static RegisterField<GPIOA_BSRR_BS12> BS12 {};
		constexpr static RegisterField<GPIOA_BSRR_BS13> BS13 {};
		constexpr static RegisterField<GPIOA_BSRR_BS14> BS14 {};
		constexpr static RegisterField<GPIOA_BSRR_BS15> BS15 {};
		constexpr static RegisterField<GPIOA_BSRR_BR0> BR0 {};
		constexpr static RegisterField<GPIOA_BSRR_BR1> BR1 {};
		constexpr static RegisterField<GPIOA_BSRR_BR2> BR2 {};
		constexpr static RegisterField<GPIOA_BSRR_BR3> BR3 {};
		constexpr static RegisterField<GPIOA_BSRR_BR4> BR4 {};
		constexpr static RegisterField<GPIOA_BSRR_BR5> BR5 {};
		constexpr static RegisterField<GPIOA_BSRR_BR6> BR6 {};
		constexpr static RegisterField<GPIOA_BSRR_BR7> BR7 {};
		constexpr static RegisterField<GPIOA_BSRR_BR8> BR8 {};
		constexpr static RegisterField<GPIOA_BSRR_BR9> BR9 {};
		constexpr static RegisterField<GPIOA_BSRR_BR10> BR10 {};
		constexpr static RegisterField<GPIOA_BSRR_BR11> BR11 {};
		constexpr static RegisterField<GPIOA_BSRR_BR12> BR12 {};
		constexpr static RegisterField<GPIOA_BSRR_BR13> BR13 {};
		constexpr static RegisterField<GPIOA_BSRR_BR14> BR14 {};
		constexpr static RegisterField<GPIOA_BSRR_BR15> BR15 {};
	};

	struct LCKR {
		DECL_REGISTER(GPIOA_LCKR_BASE);
		constexpr static RegisterField<GPIOA_LCKR_LCK0> LCK0 {};
		constexpr static RegisterField<GPIOA_LCKR_LCK1> LCK1 {};
		constexpr static RegisterField<GPIOA_LCKR_LCK2> LCK2 {};
		constexpr static RegisterField<GPIOA_LCKR_LCK3> LCK3 {};
		constexpr static RegisterField<GPIOA_LCKR_LCK4> LCK4 {};
		constexpr static RegisterField<GPIOA_LCKR_LCK5> LCK5 {};
		constexpr static RegisterField<GPIOA_LCKR_LCK6> LCK6 {};
		constexpr static RegisterField<GPIOA_LCKR_LCK7> LCK7 {};
		constexpr static RegisterField<GPIOA_LCKR_LCK8> LCK8 {};
		constexpr static RegisterField<GPIOA_LCKR_LCK9> LCK9 {};
		constexpr static RegisterField<GPIOA_LCKR_LCK10> LCK10 {};
		constexpr static RegisterField<GPIOA_LCKR_LCK11> LCK11 {};
		constexpr static RegisterField<GPIOA_LCKR_LCK12> LCK12 {};
		constexpr static RegisterField<GPIOA_LCKR_LCK13> LCK13 {};
		constexpr static RegisterField<GPIOA_LCKR_LCK14> LCK14 {};
		constexpr static RegisterField<GPIOA_LCKR_LCK15> LCK15 {};
		constexpr static RegisterField<GPIOA_LCKR_LCKK> LCKK {};
	};

	struct AFRL {
		DECL_REGISTER(GPIOA_AFRL_BASE);
		constexpr static RegisterField<GPIOA_AFRL_AFSEL0> AFSEL0 {};
		constexpr static RegisterField<GPIOA_AFRL_AFSEL1> AFSEL1 {};
		constexpr static RegisterField<GPIOA_AFRL_AFSEL2> AFSEL2 {};
		constexpr static RegisterField<GPIOA_AFRL_AFSEL3> AFSEL3 {};
		constexpr static RegisterField<GPIOA_AFRL_AFSEL4> AFSEL4 {};
		constexpr static RegisterField<GPIOA_AFRL_AFSEL5> AFSEL5 {};
		constexpr static RegisterField<GPIOA_AFRL_AFSEL6> AFSEL6 {};
		constexpr static RegisterField<GPIOA_AFRL_AFSEL7> AFSEL7 {};
	};

	struct AFRH {
		DECL_REGISTER(GPIOA_AFRH_BASE);
		constexpr static RegisterField<GPIOA_AFRH_AFSEL8> AFSEL8 {};
		constexpr static RegisterField<GPIOA_AFRH_AFSEL9> AFSEL9 {};
		constexpr static RegisterField<GPIOA_AFRH_AFSEL10> AFSEL10 {};
		constexpr static RegisterField<GPIOA_AFRH_AFSEL11> AFSEL11 {};
		constexpr static RegisterField<GPIOA_AFRH_AFSEL12> AFSEL12 {};
		constexpr static RegisterField<GPIOA_AFRH_AFSEL13> AFSEL13 {};
		constexpr static RegisterField<GPIOA_AFRH_AFSEL14> AFSEL14 {};
		constexpr static RegisterField<GPIOA_AFRH_AFSEL15> AFSEL15 {};
	};

	struct BRR {
		DECL_REGISTER(GPIOA_BRR_BASE);
		constexpr static RegisterField<GPIOA_BRR_BR0> BR0 {};
		constexpr static RegisterField<GPIOA_BRR_BR1> BR1 {};
		constexpr static RegisterField<GPIOA_BRR_BR2> BR2 {};
		constexpr static RegisterField<GPIOA_BRR_BR3> BR3 {};
		constexpr static RegisterField<GPIOA_BRR_BR4> BR4 {};
		constexpr static RegisterField<GPIOA_BRR_BR5> BR5 {};
		constexpr static RegisterField<GPIOA_BRR_BR6> BR6 {};
		constexpr static RegisterField<GPIOA_BRR_BR7> BR7 {};
		constexpr static RegisterField<GPIOA_BRR_BR8> BR8 {};
		constexpr static RegisterField<GPIOA_BRR_BR9> BR9 {};
		constexpr static RegisterField<GPIOA_BRR_BR10> BR10 {};
		constexpr static RegisterField<GPIOA_BRR_BR11> BR11 {};
		constexpr static RegisterField<GPIOA_BRR_BR12> BR12 {};
		constexpr static RegisterField<GPIOA_BRR_BR13> BR13 {};
		constexpr static RegisterField<GPIOA_BRR_BR14> BR14 {};
		constexpr static RegisterField<GPIOA_BRR_BR15> BR15 {};
	};

};

struct GPIOB {
	struct MODER {
		DECL_REGISTER(GPIOB_MODER_BASE);
		constexpr static RegisterField<GPIOB_MODER_MODER0> MODER0 {};
		constexpr static RegisterField<GPIOB_MODER_MODER1> MODER1 {};
		constexpr static RegisterField<GPIOB_MODER_MODER2> MODER2 {};
		constexpr static RegisterField<GPIOB_MODER_MODER3> MODER3 {};
		constexpr static RegisterField<GPIOB_MODER_MODER4> MODER4 {};
		constexpr static RegisterField<GPIOB_MODER_MODER5> MODER5 {};
		constexpr static RegisterField<GPIOB_MODER_MODER6> MODER6 {};
		constexpr static RegisterField<GPIOB_MODER_MODER7> MODER7 {};
		constexpr static RegisterField<GPIOB_MODER_MODER8> MODER8 {};
		constexpr static RegisterField<GPIOB_MODER_MODER9> MODER9 {};
		constexpr static RegisterField<GPIOB_MODER_MODER10> MODER10 {};
		constexpr static RegisterField<GPIOB_MODER_MODER11> MODER11 {};
		constexpr static RegisterField<GPIOB_MODER_MODER12> MODER12 {};
		constexpr static RegisterField<GPIOB_MODER_MODER13> MODER13 {};
		constexpr static RegisterField<GPIOB_MODER_MODER14> MODER14 {};
		constexpr static RegisterField<GPIOB_MODER_MODER15> MODER15 {};
	};

	struct OTYPER {
		DECL_REGISTER(GPIOB_OTYPER_BASE);
		constexpr static RegisterField<GPIOB_OTYPER_OT0> OT0 {};
		constexpr static RegisterField<GPIOB_OTYPER_OT1> OT1 {};
		constexpr static RegisterField<GPIOB_OTYPER_OT2> OT2 {};
		constexpr static RegisterField<GPIOB_OTYPER_OT3> OT3 {};
		constexpr static RegisterField<GPIOB_OTYPER_OT4> OT4 {};
		constexpr static RegisterField<GPIOB_OTYPER_OT5> OT5 {};
		constexpr static RegisterField<GPIOB_OTYPER_OT6> OT6 {};
		constexpr static RegisterField<GPIOB_OTYPER_OT7> OT7 {};
		constexpr static RegisterField<GPIOB_OTYPER_OT8> OT8 {};
		constexpr static RegisterField<GPIOB_OTYPER_OT9> OT9 {};
		constexpr static RegisterField<GPIOB_OTYPER_OT10> OT10 {};
		constexpr static RegisterField<GPIOB_OTYPER_OT11> OT11 {};
		constexpr static RegisterField<GPIOB_OTYPER_OT12> OT12 {};
		constexpr static RegisterField<GPIOB_OTYPER_OT13> OT13 {};
		constexpr static RegisterField<GPIOB_OTYPER_OT14> OT14 {};
		constexpr static RegisterField<GPIOB_OTYPER_OT15> OT15 {};
	};

	struct OSPEEDR {
		DECL_REGISTER(GPIOB_OSPEEDR_BASE);
		constexpr static RegisterField<GPIOB_OSPEEDR_OSPEEDR0> OSPEEDR0 {};
		constexpr static RegisterField<GPIOB_OSPEEDR_OSPEEDR1> OSPEEDR1 {};
		constexpr static RegisterField<GPIOB_OSPEEDR_OSPEEDR2> OSPEEDR2 {};
		constexpr static RegisterField<GPIOB_OSPEEDR_OSPEEDR3> OSPEEDR3 {};
		constexpr static RegisterField<GPIOB_OSPEEDR_OSPEEDR4> OSPEEDR4 {};
		constexpr static RegisterField<GPIOB_OSPEEDR_OSPEEDR5> OSPEEDR5 {};
		constexpr static RegisterField<GPIOB_OSPEEDR_OSPEEDR6> OSPEEDR6 {};
		constexpr static RegisterField<GPIOB_OSPEEDR_OSPEEDR7> OSPEEDR7 {};
		constexpr static RegisterField<GPIOB_OSPEEDR_OSPEEDR8> OSPEEDR8 {};
		constexpr static RegisterField<GPIOB_OSPEEDR_OSPEEDR9> OSPEEDR9 {};
		constexpr static RegisterField<GPIOB_OSPEEDR_OSPEEDR10> OSPEEDR10 {};
		constexpr static RegisterField<GPIOB_OSPEEDR_OSPEEDR11> OSPEEDR11 {};
		constexpr static RegisterField<GPIOB_OSPEEDR_OSPEEDR12> OSPEEDR12 {};
		constexpr static RegisterField<GPIOB_OSPEEDR_OSPEEDR13> OSPEEDR13 {};
		constexpr static RegisterField<GPIOB_OSPEEDR_OSPEEDR14> OSPEEDR14 {};
		constexpr static RegisterField<GPIOB_OSPEEDR_OSPEEDR15> OSPEEDR15 {};
	};

	struct PUPDR {
		DECL_REGISTER(GPIOB_PUPDR_BASE);
		constexpr static RegisterField<GPIOB_PUPDR_PUPDR0> PUPDR0 {};
		constexpr static RegisterField<GPIOB_PUPDR_PUPDR1> PUPDR1 {};
		constexpr static RegisterField<GPIOB_PUPDR_PUPDR2> PUPDR2 {};
		constexpr static RegisterField<GPIOB_PUPDR_PUPDR3> PUPDR3 {};
		constexpr static RegisterField<GPIOB_PUPDR_PUPDR4> PUPDR4 {};
		constexpr static RegisterField<GPIOB_PUPDR_PUPDR5> PUPDR5 {};
		constexpr static RegisterField<GPIOB_PUPDR_PUPDR6> PUPDR6 {};
		constexpr static RegisterField<GPIOB_PUPDR_PUPDR7> PUPDR7 {};
		constexpr static RegisterField<GPIOB_PUPDR_PUPDR8> PUPDR8 {};
		constexpr static RegisterField<GPIOB_PUPDR_PUPDR9> PUPDR9 {};
		constexpr static RegisterField<GPIOB_PUPDR_PUPDR10> PUPDR10 {};
		constexpr static RegisterField<GPIOB_PUPDR_PUPDR11> PUPDR11 {};
		constexpr static RegisterField<GPIOB_PUPDR_PUPDR12> PUPDR12 {};
		constexpr static RegisterField<GPIOB_PUPDR_PUPDR13> PUPDR13 {};
		constexpr static RegisterField<GPIOB_PUPDR_PUPDR14> PUPDR14 {};
		constexpr static RegisterField<GPIOB_PUPDR_PUPDR15> PUPDR15 {};
	};

	struct IDR {
		DECL_REGISTER(GPIOB_IDR_BASE);
		constexpr static RegisterField<GPIOB_IDR_IDR0> IDR0 {};
		constexpr static RegisterField<GPIOB_IDR_IDR1> IDR1 {};
		constexpr static RegisterField<GPIOB_IDR_IDR2> IDR2 {};
		constexpr static RegisterField<GPIOB_IDR_IDR3> IDR3 {};
		constexpr static RegisterField<GPIOB_IDR_IDR4> IDR4 {};
		constexpr static RegisterField<GPIOB_IDR_IDR5> IDR5 {};
		constexpr static RegisterField<GPIOB_IDR_IDR6> IDR6 {};
		constexpr static RegisterField<GPIOB_IDR_IDR7> IDR7 {};
		constexpr static RegisterField<GPIOB_IDR_IDR8> IDR8 {};
		constexpr static RegisterField<GPIOB_IDR_IDR9> IDR9 {};
		constexpr static RegisterField<GPIOB_IDR_IDR10> IDR10 {};
		constexpr static RegisterField<GPIOB_IDR_IDR11> IDR11 {};
		constexpr static RegisterField<GPIOB_IDR_IDR12> IDR12 {};
		constexpr static RegisterField<GPIOB_IDR_IDR13> IDR13 {};
		constexpr static RegisterField<GPIOB_IDR_IDR14> IDR14 {};
		constexpr static RegisterField<GPIOB_IDR_IDR15> IDR15 {};
	};

	struct ODR {
		DECL_REGISTER(GPIOB_ODR_BASE);
		constexpr static RegisterField<GPIOB_ODR_ODR0> ODR0 {};
		constexpr static RegisterField<GPIOB_ODR_ODR1> ODR1 {};
		constexpr static RegisterField<GPIOB_ODR_ODR2> ODR2 {};
		constexpr static RegisterField<GPIOB_ODR_ODR3> ODR3 {};
		constexpr static RegisterField<GPIOB_ODR_ODR4> ODR4 {};
		constexpr static RegisterField<GPIOB_ODR_ODR5> ODR5 {};
		constexpr static RegisterField<GPIOB_ODR_ODR6> ODR6 {};
		constexpr static RegisterField<GPIOB_ODR_ODR7> ODR7 {};
		constexpr static RegisterField<GPIOB_ODR_ODR8> ODR8 {};
		constexpr static RegisterField<GPIOB_ODR_ODR9> ODR9 {};
		constexpr static RegisterField<GPIOB_ODR_ODR10> ODR10 {};
		constexpr static RegisterField<GPIOB_ODR_ODR11> ODR11 {};
		constexpr static RegisterField<GPIOB_ODR_ODR12> ODR12 {};
		constexpr static RegisterField<GPIOB_ODR_ODR13> ODR13 {};
		constexpr static RegisterField<GPIOB_ODR_ODR14> ODR14 {};
		constexpr static RegisterField<GPIOB_ODR_ODR15> ODR15 {};
	};

	struct BSRR {
		DECL_REGISTER(GPIOB_BSRR_BASE);
		constexpr static RegisterField<GPIOB_BSRR_BS0> BS0 {};
		constexpr static RegisterField<GPIOB_BSRR_BS1> BS1 {};
		constexpr static RegisterField<GPIOB_BSRR_BS2> BS2 {};
		constexpr static RegisterField<GPIOB_BSRR_BS3> BS3 {};
		constexpr static RegisterField<GPIOB_BSRR_BS4> BS4 {};
		constexpr static RegisterField<GPIOB_BSRR_BS5> BS5 {};
		constexpr static RegisterField<GPIOB_BSRR_BS6> BS6 {};
		constexpr static RegisterField<GPIOB_BSRR_BS7> BS7 {};
		constexpr static RegisterField<GPIOB_BSRR_BS8> BS8 {};
		constexpr static RegisterField<GPIOB_BSRR_BS9> BS9 {};
		constexpr static RegisterField<GPIOB_BSRR_BS10> BS10 {};
		constexpr static RegisterField<GPIOB_BSRR_BS11> BS11 {};
		constexpr static RegisterField<GPIOB_BSRR_BS12> BS12 {};
		constexpr static RegisterField<GPIOB_BSRR_BS13> BS13 {};
		constexpr static RegisterField<GPIOB_BSRR_BS14> BS14 {};
		constexpr static RegisterField<GPIOB_BSRR_BS15> BS15 {};
		constexpr static RegisterField<GPIOB_BSRR_BR0> BR0 {};
		constexpr static RegisterField<GPIOB_BSRR_BR1> BR1 {};
		constexpr static RegisterField<GPIOB_BSRR_BR2> BR2 {};
		constexpr static RegisterField<GPIOB_BSRR_BR3> BR3 {};
		constexpr static RegisterField<GPIOB_BSRR_BR4> BR4 {};
		constexpr static RegisterField<GPIOB_BSRR_BR5> BR5 {};
		constexpr static RegisterField<GPIOB_BSRR_BR6> BR6 {};
		constexpr static RegisterField<GPIOB_BSRR_BR7> BR7 {};
		constexpr static RegisterField<GPIOB_BSRR_BR8> BR8 {};
		constexpr static RegisterField<GPIOB_BSRR_BR9> BR9 {};
		constexpr static RegisterField<GPIOB_BSRR_BR10> BR10 {};
		constexpr static RegisterField<GPIOB_BSRR_BR11> BR11 {};
		constexpr static RegisterField<GPIOB_BSRR_BR12> BR12 {};
		constexpr static RegisterField<GPIOB_BSRR_BR13> BR13 {};
		constexpr static RegisterField<GPIOB_BSRR_BR14> BR14 {};
		constexpr static RegisterField<GPIOB_BSRR_BR15> BR15 {};
	};

	struct LCKR {
		DECL_REGISTER(GPIOB_LCKR_BASE);
		constexpr static RegisterField<GPIOB_LCKR_LCK0> LCK0 {};
		constexpr static RegisterField<GPIOB_LCKR_LCK1> LCK1 {};
		constexpr static RegisterField<GPIOB_LCKR_LCK2> LCK2 {};
		constexpr static RegisterField<GPIOB_LCKR_LCK3> LCK3 {};
		constexpr static RegisterField<GPIOB_LCKR_LCK4> LCK4 {};
		constexpr static RegisterField<GPIOB_LCKR_LCK5> LCK5 {};
		constexpr static RegisterField<GPIOB_LCKR_LCK6> LCK6 {};
		constexpr static RegisterField<GPIOB_LCKR_LCK7> LCK7 {};
		constexpr static RegisterField<GPIOB_LCKR_LCK8> LCK8 {};
		constexpr static RegisterField<GPIOB_LCKR_LCK9> LCK9 {};
		constexpr static RegisterField<GPIOB_LCKR_LCK10> LCK10 {};
		constexpr static RegisterField<GPIOB_LCKR_LCK11> LCK11 {};
		constexpr static RegisterField<GPIOB_LCKR_LCK12> LCK12 {};
		constexpr static RegisterField<GPIOB_LCKR_LCK13> LCK13 {};
		constexpr static RegisterField<GPIOB_LCKR_LCK14> LCK14 {};
		constexpr static RegisterField<GPIOB_LCKR_LCK15> LCK15 {};
		constexpr static RegisterField<GPIOB_LCKR_LCKK> LCKK {};
	};

	struct AFRL {
		DECL_REGISTER(GPIOB_AFRL_BASE);
		constexpr static RegisterField<GPIOB_AFRL_AFSEL0> AFSEL0 {};
		constexpr static RegisterField<GPIOB_AFRL_AFSEL1> AFSEL1 {};
		constexpr static RegisterField<GPIOB_AFRL_AFSEL2> AFSEL2 {};
		constexpr static RegisterField<GPIOB_AFRL_AFSEL3> AFSEL3 {};
		constexpr static RegisterField<GPIOB_AFRL_AFSEL4> AFSEL4 {};
		constexpr static RegisterField<GPIOB_AFRL_AFSEL5> AFSEL5 {};
		constexpr static RegisterField<GPIOB_AFRL_AFSEL6> AFSEL6 {};
		constexpr static RegisterField<GPIOB_AFRL_AFSEL7> AFSEL7 {};
	};

	struct AFRH {
		DECL_REGISTER(GPIOB_AFRH_BASE);
		constexpr static RegisterField<GPIOB_AFRH_AFSEL8> AFSEL8 {};
		constexpr static RegisterField<GPIOB_AFRH_AFSEL9> AFSEL9 {};
		constexpr static RegisterField<GPIOB_AFRH_AFSEL10> AFSEL10 {};
		constexpr static RegisterField<GPIOB_AFRH_AFSEL11> AFSEL11 {};
		constexpr static RegisterField<GPIOB_AFRH_AFSEL12> AFSEL12 {};
		constexpr static RegisterField<GPIOB_AFRH_AFSEL13> AFSEL13 {};
		constexpr static RegisterField<GPIOB_AFRH_AFSEL14> AFSEL14 {};
		constexpr static RegisterField<GPIOB_AFRH_AFSEL15> AFSEL15 {};
	};

	struct BRR {
		DECL_REGISTER(GPIOB_BRR_BASE);
		constexpr static RegisterField<GPIOB_BRR_BR0> BR0 {};
		constexpr static RegisterField<GPIOB_BRR_BR1> BR1 {};
		constexpr static RegisterField<GPIOB_BRR_BR2> BR2 {};
		constexpr static RegisterField<GPIOB_BRR_BR3> BR3 {};
		constexpr static RegisterField<GPIOB_BRR_BR4> BR4 {};
		constexpr static RegisterField<GPIOB_BRR_BR5> BR5 {};
		constexpr static RegisterField<GPIOB_BRR_BR6> BR6 {};
		constexpr static RegisterField<GPIOB_BRR_BR7> BR7 {};
		constexpr static RegisterField<GPIOB_BRR_BR8> BR8 {};
		constexpr static RegisterField<GPIOB_BRR_BR9> BR9 {};
		constexpr static RegisterField<GPIOB_BRR_BR10> BR10 {};
		constexpr static RegisterField<GPIOB_BRR_BR11> BR11 {};
		constexpr static RegisterField<GPIOB_BRR_BR12> BR12 {};
		constexpr static RegisterField<GPIOB_BRR_BR13> BR13 {};
		constexpr static RegisterField<GPIOB_BRR_BR14> BR14 {};
		constexpr static RegisterField<GPIOB_BRR_BR15> BR15 {};
	};

};

struct GPIOC {
	struct MODER {
		DECL_REGISTER(GPIOC_MODER_BASE);
		constexpr static RegisterField<GPIOC_MODER_MODER0> MODER0 {};
		constexpr static RegisterField<GPIOC_MODER_MODER1> MODER1 {};
		constexpr static RegisterField<GPIOC_MODER_MODER2> MODER2 {};
		constexpr static RegisterField<GPIOC_MODER_MODER3> MODER3 {};
		constexpr static RegisterField<GPIOC_MODER_MODER4> MODER4 {};
		constexpr static RegisterField<GPIOC_MODER_MODER5> MODER5 {};
		constexpr static RegisterField<GPIOC_MODER_MODER6> MODER6 {};
		constexpr static RegisterField<GPIOC_MODER_MODER7> MODER7 {};
		constexpr static RegisterField<GPIOC_MODER_MODER8> MODER8 {};
		constexpr static RegisterField<GPIOC_MODER_MODER9> MODER9 {};
		constexpr static RegisterField<GPIOC_MODER_MODER10> MODER10 {};
		constexpr static RegisterField<GPIOC_MODER_MODER11> MODER11 {};
		constexpr static RegisterField<GPIOC_MODER_MODER12> MODER12 {};
		constexpr static RegisterField<GPIOC_MODER_MODER13> MODER13 {};
		constexpr static RegisterField<GPIOC_MODER_MODER14> MODER14 {};
		constexpr static RegisterField<GPIOC_MODER_MODER15> MODER15 {};
	};

	struct OTYPER {
		DECL_REGISTER(GPIOC_OTYPER_BASE);
		constexpr static RegisterField<GPIOC_OTYPER_OT0> OT0 {};
		constexpr static RegisterField<GPIOC_OTYPER_OT1> OT1 {};
		constexpr static RegisterField<GPIOC_OTYPER_OT2> OT2 {};
		constexpr static RegisterField<GPIOC_OTYPER_OT3> OT3 {};
		constexpr static RegisterField<GPIOC_OTYPER_OT4> OT4 {};
		constexpr static RegisterField<GPIOC_OTYPER_OT5> OT5 {};
		constexpr static RegisterField<GPIOC_OTYPER_OT6> OT6 {};
		constexpr static RegisterField<GPIOC_OTYPER_OT7> OT7 {};
		constexpr static RegisterField<GPIOC_OTYPER_OT8> OT8 {};
		constexpr static RegisterField<GPIOC_OTYPER_OT9> OT9 {};
		constexpr static RegisterField<GPIOC_OTYPER_OT10> OT10 {};
		constexpr static RegisterField<GPIOC_OTYPER_OT11> OT11 {};
		constexpr static RegisterField<GPIOC_OTYPER_OT12> OT12 {};
		constexpr static RegisterField<GPIOC_OTYPER_OT13> OT13 {};
		constexpr static RegisterField<GPIOC_OTYPER_OT14> OT14 {};
		constexpr static RegisterField<GPIOC_OTYPER_OT15> OT15 {};
	};

	struct OSPEEDR {
		DECL_REGISTER(GPIOC_OSPEEDR_BASE);
		constexpr static RegisterField<GPIOC_OSPEEDR_OSPEEDR0> OSPEEDR0 {};
		constexpr static RegisterField<GPIOC_OSPEEDR_OSPEEDR1> OSPEEDR1 {};
		constexpr static RegisterField<GPIOC_OSPEEDR_OSPEEDR2> OSPEEDR2 {};
		constexpr static RegisterField<GPIOC_OSPEEDR_OSPEEDR3> OSPEEDR3 {};
		constexpr static RegisterField<GPIOC_OSPEEDR_OSPEEDR4> OSPEEDR4 {};
		constexpr static RegisterField<GPIOC_OSPEEDR_OSPEEDR5> OSPEEDR5 {};
		constexpr static RegisterField<GPIOC_OSPEEDR_OSPEEDR6> OSPEEDR6 {};
		constexpr static RegisterField<GPIOC_OSPEEDR_OSPEEDR7> OSPEEDR7 {};
		constexpr static RegisterField<GPIOC_OSPEEDR_OSPEEDR8> OSPEEDR8 {};
		constexpr static RegisterField<GPIOC_OSPEEDR_OSPEEDR9> OSPEEDR9 {};
		constexpr static RegisterField<GPIOC_OSPEEDR_OSPEEDR10> OSPEEDR10 {};
		constexpr static RegisterField<GPIOC_OSPEEDR_OSPEEDR11> OSPEEDR11 {};
		constexpr static RegisterField<GPIOC_OSPEEDR_OSPEEDR12> OSPEEDR12 {};
		constexpr static RegisterField<GPIOC_OSPEEDR_OSPEEDR13> OSPEEDR13 {};
		constexpr static RegisterField<GPIOC_OSPEEDR_OSPEEDR14> OSPEEDR14 {};
		constexpr static RegisterField<GPIOC_OSPEEDR_OSPEEDR15> OSPEEDR15 {};
	};

	struct PUPDR {
		DECL_REGISTER(GPIOC_PUPDR_BASE);
		constexpr static RegisterField<GPIOC_PUPDR_PUPDR0> PUPDR0 {};
		constexpr static RegisterField<GPIOC_PUPDR_PUPDR1> PUPDR1 {};
		constexpr static RegisterField<GPIOC_PUPDR_PUPDR2> PUPDR2 {};
		constexpr static RegisterField<GPIOC_PUPDR_PUPDR3> PUPDR3 {};
		constexpr static RegisterField<GPIOC_PUPDR_PUPDR4> PUPDR4 {};
		constexpr static RegisterField<GPIOC_PUPDR_PUPDR5> PUPDR5 {};
		constexpr static RegisterField<GPIOC_PUPDR_PUPDR6> PUPDR6 {};
		constexpr static RegisterField<GPIOC_PUPDR_PUPDR7> PUPDR7 {};
		constexpr static RegisterField<GPIOC_PUPDR_PUPDR8> PUPDR8 {};
		constexpr static RegisterField<GPIOC_PUPDR_PUPDR9> PUPDR9 {};
		constexpr static RegisterField<GPIOC_PUPDR_PUPDR10> PUPDR10 {};
		constexpr static RegisterField<GPIOC_PUPDR_PUPDR11> PUPDR11 {};
		constexpr static RegisterField<GPIOC_PUPDR_PUPDR12> PUPDR12 {};
		constexpr static RegisterField<GPIOC_PUPDR_PUPDR13> PUPDR13 {};
		constexpr static RegisterField<GPIOC_PUPDR_PUPDR14> PUPDR14 {};
		constexpr static RegisterField<GPIOC_PUPDR_PUPDR15> PUPDR15 {};
	};

	struct IDR {
		DECL_REGISTER(GPIOC_IDR_BASE);
		constexpr static RegisterField<GPIOC_IDR_IDR0> IDR0 {};
		constexpr static RegisterField<GPIOC_IDR_IDR1> IDR1 {};
		constexpr static RegisterField<GPIOC_IDR_IDR2> IDR2 {};
		constexpr static RegisterField<GPIOC_IDR_IDR3> IDR3 {};
		constexpr static RegisterField<GPIOC_IDR_IDR4> IDR4 {};
		constexpr static RegisterField<GPIOC_IDR_IDR5> IDR5 {};
		constexpr static RegisterField<GPIOC_IDR_IDR6> IDR6 {};
		constexpr static RegisterField<GPIOC_IDR_IDR7> IDR7 {};
		constexpr static RegisterField<GPIOC_IDR_IDR8> IDR8 {};
		constexpr static RegisterField<GPIOC_IDR_IDR9> IDR9 {};
		constexpr static RegisterField<GPIOC_IDR_IDR10> IDR10 {};
		constexpr static RegisterField<GPIOC_IDR_IDR11> IDR11 {};
		constexpr static RegisterField<GPIOC_IDR_IDR12> IDR12 {};
		constexpr static RegisterField<GPIOC_IDR_IDR13> IDR13 {};
		constexpr static RegisterField<GPIOC_IDR_IDR14> IDR14 {};
		constexpr static RegisterField<GPIOC_IDR_IDR15> IDR15 {};
	};

	struct ODR {
		DECL_REGISTER(GPIOC_ODR_BASE);
		constexpr static RegisterField<GPIOC_ODR_ODR0> ODR0 {};
		constexpr static RegisterField<GPIOC_ODR_ODR1> ODR1 {};
		constexpr static RegisterField<GPIOC_ODR_ODR2> ODR2 {};
		constexpr static RegisterField<GPIOC_ODR_ODR3> ODR3 {};
		constexpr static RegisterField<GPIOC_ODR_ODR4> ODR4 {};
		constexpr static RegisterField<GPIOC_ODR_ODR5> ODR5 {};
		constexpr static RegisterField<GPIOC_ODR_ODR6> ODR6 {};
		constexpr static RegisterField<GPIOC_ODR_ODR7> ODR7 {};
		constexpr static RegisterField<GPIOC_ODR_ODR8> ODR8 {};
		constexpr static RegisterField<GPIOC_ODR_ODR9> ODR9 {};
		constexpr static RegisterField<GPIOC_ODR_ODR10> ODR10 {};
		constexpr static RegisterField<GPIOC_ODR_ODR11> ODR11 {};
		constexpr static RegisterField<GPIOC_ODR_ODR12> ODR12 {};
		constexpr static RegisterField<GPIOC_ODR_ODR13> ODR13 {};
		constexpr static RegisterField<GPIOC_ODR_ODR14> ODR14 {};
		constexpr static RegisterField<GPIOC_ODR_ODR15> ODR15 {};
	};

	struct BSRR {
		DECL_REGISTER(GPIOC_BSRR_BASE);
		constexpr static RegisterField<GPIOC_BSRR_BS0> BS0 {};
		constexpr static RegisterField<GPIOC_BSRR_BS1> BS1 {};
		constexpr static RegisterField<GPIOC_BSRR_BS2> BS2 {};
		constexpr static RegisterField<GPIOC_BSRR_BS3> BS3 {};
		constexpr static RegisterField<GPIOC_BSRR_BS4> BS4 {};
		constexpr static RegisterField<GPIOC_BSRR_BS5> BS5 {};
		constexpr static RegisterField<GPIOC_BSRR_BS6> BS6 {};
		constexpr static RegisterField<GPIOC_BSRR_BS7> BS7 {};
		constexpr static RegisterField<GPIOC_BSRR_BS8> BS8 {};
		constexpr static RegisterField<GPIOC_BSRR_BS9> BS9 {};
		constexpr static RegisterField<GPIOC_BSRR_BS10> BS10 {};
		constexpr static RegisterField<GPIOC_BSRR_BS11> BS11 {};
		constexpr static RegisterField<GPIOC_BSRR_BS12> BS12 {};
		constexpr static RegisterField<GPIOC_BSRR_BS13> BS13 {};
		constexpr static RegisterField<GPIOC_BSRR_BS14> BS14 {};
		constexpr static RegisterField<GPIOC_BSRR_BS15> BS15 {};
		constexpr static RegisterField<GPIOC_BSRR_BR0> BR0 {};
		constexpr static RegisterField<GPIOC_BSRR_BR1> BR1 {};
		constexpr static RegisterField<GPIOC_BSRR_BR2> BR2 {};
		constexpr static RegisterField<GPIOC_BSRR_BR3> BR3 {};
		constexpr static RegisterField<GPIOC_BSRR_BR4> BR4 {};
		constexpr static RegisterField<GPIOC_BSRR_BR5> BR5 {};
		constexpr static RegisterField<GPIOC_BSRR_BR6> BR6 {};
		constexpr static RegisterField<GPIOC_BSRR_BR7> BR7 {};
		constexpr static RegisterField<GPIOC_BSRR_BR8> BR8 {};
		constexpr static RegisterField<GPIOC_BSRR_BR9> BR9 {};
		constexpr static RegisterField<GPIOC_BSRR_BR10> BR10 {};
		constexpr static RegisterField<GPIOC_BSRR_BR11> BR11 {};
		constexpr static RegisterField<GPIOC_BSRR_BR12> BR12 {};
		constexpr static RegisterField<GPIOC_BSRR_BR13> BR13 {};
		constexpr static RegisterField<GPIOC_BSRR_BR14> BR14 {};
		constexpr static RegisterField<GPIOC_BSRR_BR15> BR15 {};
	};

	struct LCKR {
		DECL_REGISTER(GPIOC_LCKR_BASE);
		constexpr static RegisterField<GPIOC_LCKR_LCK0> LCK0 {};
		constexpr static RegisterField<GPIOC_LCKR_LCK1> LCK1 {};
		constexpr static RegisterField<GPIOC_LCKR_LCK2> LCK2 {};
		constexpr static RegisterField<GPIOC_LCKR_LCK3> LCK3 {};
		constexpr static RegisterField<GPIOC_LCKR_LCK4> LCK4 {};
		constexpr static RegisterField<GPIOC_LCKR_LCK5> LCK5 {};
		constexpr static RegisterField<GPIOC_LCKR_LCK6> LCK6 {};
		constexpr static RegisterField<GPIOC_LCKR_LCK7> LCK7 {};
		constexpr static RegisterField<GPIOC_LCKR_LCK8> LCK8 {};
		constexpr static RegisterField<GPIOC_LCKR_LCK9> LCK9 {};
		constexpr static RegisterField<GPIOC_LCKR_LCK10> LCK10 {};
		constexpr static RegisterField<GPIOC_LCKR_LCK11> LCK11 {};
		constexpr static RegisterField<GPIOC_LCKR_LCK12> LCK12 {};
		constexpr static RegisterField<GPIOC_LCKR_LCK13> LCK13 {};
		constexpr static RegisterField<GPIOC_LCKR_LCK14> LCK14 {};
		constexpr static RegisterField<GPIOC_LCKR_LCK15> LCK15 {};
		constexpr static RegisterField<GPIOC_LCKR_LCKK> LCKK {};
	};

	struct AFRL {
		DECL_REGISTER(GPIOC_AFRL_BASE);
		constexpr static RegisterField<GPIOC_AFRL_AFSEL0> AFSEL0 {};
		constexpr static RegisterField<GPIOC_AFRL_AFSEL1> AFSEL1 {};
		constexpr static RegisterField<GPIOC_AFRL_AFSEL2> AFSEL2 {};
		constexpr static RegisterField<GPIOC_AFRL_AFSEL3> AFSEL3 {};
		constexpr static RegisterField<GPIOC_AFRL_AFSEL4> AFSEL4 {};
		constexpr static RegisterField<GPIOC_AFRL_AFSEL5> AFSEL5 {};
		constexpr static RegisterField<GPIOC_AFRL_AFSEL6> AFSEL6 {};
		constexpr static RegisterField<GPIOC_AFRL_AFSEL7> AFSEL7 {};
	};

	struct AFRH {
		DECL_REGISTER(GPIOC_AFRH_BASE);
		constexpr static RegisterField<GPIOC_AFRH_AFSEL8> AFSEL8 {};
		constexpr static RegisterField<GPIOC_AFRH_AFSEL9> AFSEL9 {};
		constexpr static RegisterField<GPIOC_AFRH_AFSEL10> AFSEL10 {};
		constexpr static RegisterField<GPIOC_AFRH_AFSEL11> AFSEL11 {};
		constexpr static RegisterField<GPIOC_AFRH_AFSEL12> AFSEL12 {};
		constexpr static RegisterField<GPIOC_AFRH_AFSEL13> AFSEL13 {};
		constexpr static RegisterField<GPIOC_AFRH_AFSEL14> AFSEL14 {};
		constexpr static RegisterField<GPIOC_AFRH_AFSEL15> AFSEL15 {};
	};

	struct BRR {
		DECL_REGISTER(GPIOC_BRR_BASE);
		constexpr static RegisterField<GPIOC_BRR_BR0> BR0 {};
		constexpr static RegisterField<GPIOC_BRR_BR1> BR1 {};
		constexpr static RegisterField<GPIOC_BRR_BR2> BR2 {};
		constexpr static RegisterField<GPIOC_BRR_BR3> BR3 {};
		constexpr static RegisterField<GPIOC_BRR_BR4> BR4 {};
		constexpr static RegisterField<GPIOC_BRR_BR5> BR5 {};
		constexpr static RegisterField<GPIOC_BRR_BR6> BR6 {};
		constexpr static RegisterField<GPIOC_BRR_BR7> BR7 {};
		constexpr static RegisterField<GPIOC_BRR_BR8> BR8 {};
		constexpr static RegisterField<GPIOC_BRR_BR9> BR9 {};
		constexpr static RegisterField<GPIOC_BRR_BR10> BR10 {};
		constexpr static RegisterField<GPIOC_BRR_BR11> BR11 {};
		constexpr static RegisterField<GPIOC_BRR_BR12> BR12 {};
		constexpr static RegisterField<GPIOC_BRR_BR13> BR13 {};
		constexpr static RegisterField<GPIOC_BRR_BR14> BR14 {};
		constexpr static RegisterField<GPIOC_BRR_BR15> BR15 {};
	};

};

struct GPIOD {
	struct MODER {
		DECL_REGISTER(GPIOD_MODER_BASE);
		constexpr static RegisterField<GPIOD_MODER_MODER0> MODER0 {};
		constexpr static RegisterField<GPIOD_MODER_MODER1> MODER1 {};
		constexpr static RegisterField<GPIOD_MODER_MODER2> MODER2 {};
		constexpr static RegisterField<GPIOD_MODER_MODER3> MODER3 {};
		constexpr static RegisterField<GPIOD_MODER_MODER4> MODER4 {};
		constexpr static RegisterField<GPIOD_MODER_MODER5> MODER5 {};
		constexpr static RegisterField<GPIOD_MODER_MODER6> MODER6 {};
		constexpr static RegisterField<GPIOD_MODER_MODER7> MODER7 {};
		constexpr static RegisterField<GPIOD_MODER_MODER8> MODER8 {};
		constexpr static RegisterField<GPIOD_MODER_MODER9> MODER9 {};
		constexpr static RegisterField<GPIOD_MODER_MODER10> MODER10 {};
		constexpr static RegisterField<GPIOD_MODER_MODER11> MODER11 {};
		constexpr static RegisterField<GPIOD_MODER_MODER12> MODER12 {};
		constexpr static RegisterField<GPIOD_MODER_MODER13> MODER13 {};
		constexpr static RegisterField<GPIOD_MODER_MODER14> MODER14 {};
		constexpr static RegisterField<GPIOD_MODER_MODER15> MODER15 {};
	};

	struct OTYPER {
		DECL_REGISTER(GPIOD_OTYPER_BASE);
		constexpr static RegisterField<GPIOD_OTYPER_OT0> OT0 {};
		constexpr static RegisterField<GPIOD_OTYPER_OT1> OT1 {};
		constexpr static RegisterField<GPIOD_OTYPER_OT2> OT2 {};
		constexpr static RegisterField<GPIOD_OTYPER_OT3> OT3 {};
		constexpr static RegisterField<GPIOD_OTYPER_OT4> OT4 {};
		constexpr static RegisterField<GPIOD_OTYPER_OT5> OT5 {};
		constexpr static RegisterField<GPIOD_OTYPER_OT6> OT6 {};
		constexpr static RegisterField<GPIOD_OTYPER_OT7> OT7 {};
		constexpr static RegisterField<GPIOD_OTYPER_OT8> OT8 {};
		constexpr static RegisterField<GPIOD_OTYPER_OT9> OT9 {};
		constexpr static RegisterField<GPIOD_OTYPER_OT10> OT10 {};
		constexpr static RegisterField<GPIOD_OTYPER_OT11> OT11 {};
		constexpr static RegisterField<GPIOD_OTYPER_OT12> OT12 {};
		constexpr static RegisterField<GPIOD_OTYPER_OT13> OT13 {};
		constexpr static RegisterField<GPIOD_OTYPER_OT14> OT14 {};
		constexpr static RegisterField<GPIOD_OTYPER_OT15> OT15 {};
	};

	struct OSPEEDR {
		DECL_REGISTER(GPIOD_OSPEEDR_BASE);
		constexpr static RegisterField<GPIOD_OSPEEDR_OSPEEDR0> OSPEEDR0 {};
		constexpr static RegisterField<GPIOD_OSPEEDR_OSPEEDR1> OSPEEDR1 {};
		constexpr static RegisterField<GPIOD_OSPEEDR_OSPEEDR2> OSPEEDR2 {};
		constexpr static RegisterField<GPIOD_OSPEEDR_OSPEEDR3> OSPEEDR3 {};
		constexpr static RegisterField<GPIOD_OSPEEDR_OSPEEDR4> OSPEEDR4 {};
		constexpr static RegisterField<GPIOD_OSPEEDR_OSPEEDR5> OSPEEDR5 {};
		constexpr static RegisterField<GPIOD_OSPEEDR_OSPEEDR6> OSPEEDR6 {};
		constexpr static RegisterField<GPIOD_OSPEEDR_OSPEEDR7> OSPEEDR7 {};
		constexpr static RegisterField<GPIOD_OSPEEDR_OSPEEDR8> OSPEEDR8 {};
		constexpr static RegisterField<GPIOD_OSPEEDR_OSPEEDR9> OSPEEDR9 {};
		constexpr static RegisterField<GPIOD_OSPEEDR_OSPEEDR10> OSPEEDR10 {};
		constexpr static RegisterField<GPIOD_OSPEEDR_OSPEEDR11> OSPEEDR11 {};
		constexpr static RegisterField<GPIOD_OSPEEDR_OSPEEDR12> OSPEEDR12 {};
		constexpr static RegisterField<GPIOD_OSPEEDR_OSPEEDR13> OSPEEDR13 {};
		constexpr static RegisterField<GPIOD_OSPEEDR_OSPEEDR14> OSPEEDR14 {};
		constexpr static RegisterField<GPIOD_OSPEEDR_OSPEEDR15> OSPEEDR15 {};
	};

	struct PUPDR {
		DECL_REGISTER(GPIOD_PUPDR_BASE);
		constexpr static RegisterField<GPIOD_PUPDR_PUPDR0> PUPDR0 {};
		constexpr static RegisterField<GPIOD_PUPDR_PUPDR1> PUPDR1 {};
		constexpr static RegisterField<GPIOD_PUPDR_PUPDR2> PUPDR2 {};
		constexpr static RegisterField<GPIOD_PUPDR_PUPDR3> PUPDR3 {};
		constexpr static RegisterField<GPIOD_PUPDR_PUPDR4> PUPDR4 {};
		constexpr static RegisterField<GPIOD_PUPDR_PUPDR5> PUPDR5 {};
		constexpr static RegisterField<GPIOD_PUPDR_PUPDR6> PUPDR6 {};
		constexpr static RegisterField<GPIOD_PUPDR_PUPDR7> PUPDR7 {};
		constexpr static RegisterField<GPIOD_PUPDR_PUPDR8> PUPDR8 {};
		constexpr static RegisterField<GPIOD_PUPDR_PUPDR9> PUPDR9 {};
		constexpr static RegisterField<GPIOD_PUPDR_PUPDR10> PUPDR10 {};
		constexpr static RegisterField<GPIOD_PUPDR_PUPDR11> PUPDR11 {};
		constexpr static RegisterField<GPIOD_PUPDR_PUPDR12> PUPDR12 {};
		constexpr static RegisterField<GPIOD_PUPDR_PUPDR13> PUPDR13 {};
		constexpr static RegisterField<GPIOD_PUPDR_PUPDR14> PUPDR14 {};
		constexpr static RegisterField<GPIOD_PUPDR_PUPDR15> PUPDR15 {};
	};

	struct IDR {
		DECL_REGISTER(GPIOD_IDR_BASE);
		constexpr static RegisterField<GPIOD_IDR_IDR0> IDR0 {};
		constexpr static RegisterField<GPIOD_IDR_IDR1> IDR1 {};
		constexpr static RegisterField<GPIOD_IDR_IDR2> IDR2 {};
		constexpr static RegisterField<GPIOD_IDR_IDR3> IDR3 {};
		constexpr static RegisterField<GPIOD_IDR_IDR4> IDR4 {};
		constexpr static RegisterField<GPIOD_IDR_IDR5> IDR5 {};
		constexpr static RegisterField<GPIOD_IDR_IDR6> IDR6 {};
		constexpr static RegisterField<GPIOD_IDR_IDR7> IDR7 {};
		constexpr static RegisterField<GPIOD_IDR_IDR8> IDR8 {};
		constexpr static RegisterField<GPIOD_IDR_IDR9> IDR9 {};
		constexpr static RegisterField<GPIOD_IDR_IDR10> IDR10 {};
		constexpr static RegisterField<GPIOD_IDR_IDR11> IDR11 {};
		constexpr static RegisterField<GPIOD_IDR_IDR12> IDR12 {};
		constexpr static RegisterField<GPIOD_IDR_IDR13> IDR13 {};
		constexpr static RegisterField<GPIOD_IDR_IDR14> IDR14 {};
		constexpr static RegisterField<GPIOD_IDR_IDR15> IDR15 {};
	};

	struct ODR {
		DECL_REGISTER(GPIOD_ODR_BASE);
		constexpr static RegisterField<GPIOD_ODR_ODR0> ODR0 {};
		constexpr static RegisterField<GPIOD_ODR_ODR1> ODR1 {};
		constexpr static RegisterField<GPIOD_ODR_ODR2> ODR2 {};
		constexpr static RegisterField<GPIOD_ODR_ODR3> ODR3 {};
		constexpr static RegisterField<GPIOD_ODR_ODR4> ODR4 {};
		constexpr static RegisterField<GPIOD_ODR_ODR5> ODR5 {};
		constexpr static RegisterField<GPIOD_ODR_ODR6> ODR6 {};
		constexpr static RegisterField<GPIOD_ODR_ODR7> ODR7 {};
		constexpr static RegisterField<GPIOD_ODR_ODR8> ODR8 {};
		constexpr static RegisterField<GPIOD_ODR_ODR9> ODR9 {};
		constexpr static RegisterField<GPIOD_ODR_ODR10> ODR10 {};
		constexpr static RegisterField<GPIOD_ODR_ODR11> ODR11 {};
		constexpr static RegisterField<GPIOD_ODR_ODR12> ODR12 {};
		constexpr static RegisterField<GPIOD_ODR_ODR13> ODR13 {};
		constexpr static RegisterField<GPIOD_ODR_ODR14> ODR14 {};
		constexpr static RegisterField<GPIOD_ODR_ODR15> ODR15 {};
	};

	struct BSRR {
		DECL_REGISTER(GPIOD_BSRR_BASE);
		constexpr static RegisterField<GPIOD_BSRR_BS0> BS0 {};
		constexpr static RegisterField<GPIOD_BSRR_BS1> BS1 {};
		constexpr static RegisterField<GPIOD_BSRR_BS2> BS2 {};
		constexpr static RegisterField<GPIOD_BSRR_BS3> BS3 {};
		constexpr static RegisterField<GPIOD_BSRR_BS4> BS4 {};
		constexpr static RegisterField<GPIOD_BSRR_BS5> BS5 {};
		constexpr static RegisterField<GPIOD_BSRR_BS6> BS6 {};
		constexpr static RegisterField<GPIOD_BSRR_BS7> BS7 {};
		constexpr static RegisterField<GPIOD_BSRR_BS8> BS8 {};
		constexpr static RegisterField<GPIOD_BSRR_BS9> BS9 {};
		constexpr static RegisterField<GPIOD_BSRR_BS10> BS10 {};
		constexpr static RegisterField<GPIOD_BSRR_BS11> BS11 {};
		constexpr static RegisterField<GPIOD_BSRR_BS12> BS12 {};
		constexpr static RegisterField<GPIOD_BSRR_BS13> BS13 {};
		constexpr static RegisterField<GPIOD_BSRR_BS14> BS14 {};
		constexpr static RegisterField<GPIOD_BSRR_BS15> BS15 {};
		constexpr static RegisterField<GPIOD_BSRR_BR0> BR0 {};
		constexpr static RegisterField<GPIOD_BSRR_BR1> BR1 {};
		constexpr static RegisterField<GPIOD_BSRR_BR2> BR2 {};
		constexpr static RegisterField<GPIOD_BSRR_BR3> BR3 {};
		constexpr static RegisterField<GPIOD_BSRR_BR4> BR4 {};
		constexpr static RegisterField<GPIOD_BSRR_BR5> BR5 {};
		constexpr static RegisterField<GPIOD_BSRR_BR6> BR6 {};
		constexpr static RegisterField<GPIOD_BSRR_BR7> BR7 {};
		constexpr static RegisterField<GPIOD_BSRR_BR8> BR8 {};
		constexpr static RegisterField<GPIOD_BSRR_BR9> BR9 {};
		constexpr static RegisterField<GPIOD_BSRR_BR10> BR10 {};
		constexpr static RegisterField<GPIOD_BSRR_BR11> BR11 {};
		constexpr static RegisterField<GPIOD_BSRR_BR12> BR12 {};
		constexpr static RegisterField<GPIOD_BSRR_BR13> BR13 {};
		constexpr static RegisterField<GPIOD_BSRR_BR14> BR14 {};
		constexpr static RegisterField<GPIOD_BSRR_BR15> BR15 {};
	};

	struct LCKR {
		DECL_REGISTER(GPIOD_LCKR_BASE);
		constexpr static RegisterField<GPIOD_LCKR_LCK0> LCK0 {};
		constexpr static RegisterField<GPIOD_LCKR_LCK1> LCK1 {};
		constexpr static RegisterField<GPIOD_LCKR_LCK2> LCK2 {};
		constexpr static RegisterField<GPIOD_LCKR_LCK3> LCK3 {};
		constexpr static RegisterField<GPIOD_LCKR_LCK4> LCK4 {};
		constexpr static RegisterField<GPIOD_LCKR_LCK5> LCK5 {};
		constexpr static RegisterField<GPIOD_LCKR_LCK6> LCK6 {};
		constexpr static RegisterField<GPIOD_LCKR_LCK7> LCK7 {};
		constexpr static RegisterField<GPIOD_LCKR_LCK8> LCK8 {};
		constexpr static RegisterField<GPIOD_LCKR_LCK9> LCK9 {};
		constexpr static RegisterField<GPIOD_LCKR_LCK10> LCK10 {};
		constexpr static RegisterField<GPIOD_LCKR_LCK11> LCK11 {};
		constexpr static RegisterField<GPIOD_LCKR_LCK12> LCK12 {};
		constexpr static RegisterField<GPIOD_LCKR_LCK13> LCK13 {};
		constexpr static RegisterField<GPIOD_LCKR_LCK14> LCK14 {};
		constexpr static RegisterField<GPIOD_LCKR_LCK15> LCK15 {};
		constexpr static RegisterField<GPIOD_LCKR_LCKK> LCKK {};
	};

	struct AFRL {
		DECL_REGISTER(GPIOD_AFRL_BASE);
		constexpr static RegisterField<GPIOD_AFRL_AFSEL0> AFSEL0 {};
		constexpr static RegisterField<GPIOD_AFRL_AFSEL1> AFSEL1 {};
		constexpr static RegisterField<GPIOD_AFRL_AFSEL2> AFSEL2 {};
		constexpr static RegisterField<GPIOD_AFRL_AFSEL3> AFSEL3 {};
		constexpr static RegisterField<GPIOD_AFRL_AFSEL4> AFSEL4 {};
		constexpr static RegisterField<GPIOD_AFRL_AFSEL5> AFSEL5 {};
		constexpr static RegisterField<GPIOD_AFRL_AFSEL6> AFSEL6 {};
		constexpr static RegisterField<GPIOD_AFRL_AFSEL7> AFSEL7 {};
	};

	struct AFRH {
		DECL_REGISTER(GPIOD_AFRH_BASE);
		constexpr static RegisterField<GPIOD_AFRH_AFSEL8> AFSEL8 {};
		constexpr static RegisterField<GPIOD_AFRH_AFSEL9> AFSEL9 {};
		constexpr static RegisterField<GPIOD_AFRH_AFSEL10> AFSEL10 {};
		constexpr static RegisterField<GPIOD_AFRH_AFSEL11> AFSEL11 {};
		constexpr static RegisterField<GPIOD_AFRH_AFSEL12> AFSEL12 {};
		constexpr static RegisterField<GPIOD_AFRH_AFSEL13> AFSEL13 {};
		constexpr static RegisterField<GPIOD_AFRH_AFSEL14> AFSEL14 {};
		constexpr static RegisterField<GPIOD_AFRH_AFSEL15> AFSEL15 {};
	};

	struct BRR {
		DECL_REGISTER(GPIOD_BRR_BASE);
		constexpr static RegisterField<GPIOD_BRR_BR0> BR0 {};
		constexpr static RegisterField<GPIOD_BRR_BR1> BR1 {};
		constexpr static RegisterField<GPIOD_BRR_BR2> BR2 {};
		constexpr static RegisterField<GPIOD_BRR_BR3> BR3 {};
		constexpr static RegisterField<GPIOD_BRR_BR4> BR4 {};
		constexpr static RegisterField<GPIOD_BRR_BR5> BR5 {};
		constexpr static RegisterField<GPIOD_BRR_BR6> BR6 {};
		constexpr static RegisterField<GPIOD_BRR_BR7> BR7 {};
		constexpr static RegisterField<GPIOD_BRR_BR8> BR8 {};
		constexpr static RegisterField<GPIOD_BRR_BR9> BR9 {};
		constexpr static RegisterField<GPIOD_BRR_BR10> BR10 {};
		constexpr static RegisterField<GPIOD_BRR_BR11> BR11 {};
		constexpr static RegisterField<GPIOD_BRR_BR12> BR12 {};
		constexpr static RegisterField<GPIOD_BRR_BR13> BR13 {};
		constexpr static RegisterField<GPIOD_BRR_BR14> BR14 {};
		constexpr static RegisterField<GPIOD_BRR_BR15> BR15 {};
	};

};

struct GPIOF {
	struct MODER {
		DECL_REGISTER(GPIOF_MODER_BASE);
		constexpr static RegisterField<GPIOF_MODER_MODER0> MODER0 {};
		constexpr static RegisterField<GPIOF_MODER_MODER1> MODER1 {};
		constexpr static RegisterField<GPIOF_MODER_MODER2> MODER2 {};
		constexpr static RegisterField<GPIOF_MODER_MODER3> MODER3 {};
		constexpr static RegisterField<GPIOF_MODER_MODER4> MODER4 {};
		constexpr static RegisterField<GPIOF_MODER_MODER5> MODER5 {};
		constexpr static RegisterField<GPIOF_MODER_MODER6> MODER6 {};
		constexpr static RegisterField<GPIOF_MODER_MODER7> MODER7 {};
		constexpr static RegisterField<GPIOF_MODER_MODER8> MODER8 {};
		constexpr static RegisterField<GPIOF_MODER_MODER9> MODER9 {};
		constexpr static RegisterField<GPIOF_MODER_MODER10> MODER10 {};
		constexpr static RegisterField<GPIOF_MODER_MODER11> MODER11 {};
		constexpr static RegisterField<GPIOF_MODER_MODER12> MODER12 {};
		constexpr static RegisterField<GPIOF_MODER_MODER13> MODER13 {};
		constexpr static RegisterField<GPIOF_MODER_MODER14> MODER14 {};
		constexpr static RegisterField<GPIOF_MODER_MODER15> MODER15 {};
	};

	struct OTYPER {
		DECL_REGISTER(GPIOF_OTYPER_BASE);
		constexpr static RegisterField<GPIOF_OTYPER_OT0> OT0 {};
		constexpr static RegisterField<GPIOF_OTYPER_OT1> OT1 {};
		constexpr static RegisterField<GPIOF_OTYPER_OT2> OT2 {};
		constexpr static RegisterField<GPIOF_OTYPER_OT3> OT3 {};
		constexpr static RegisterField<GPIOF_OTYPER_OT4> OT4 {};
		constexpr static RegisterField<GPIOF_OTYPER_OT5> OT5 {};
		constexpr static RegisterField<GPIOF_OTYPER_OT6> OT6 {};
		constexpr static RegisterField<GPIOF_OTYPER_OT7> OT7 {};
		constexpr static RegisterField<GPIOF_OTYPER_OT8> OT8 {};
		constexpr static RegisterField<GPIOF_OTYPER_OT9> OT9 {};
		constexpr static RegisterField<GPIOF_OTYPER_OT10> OT10 {};
		constexpr static RegisterField<GPIOF_OTYPER_OT11> OT11 {};
		constexpr static RegisterField<GPIOF_OTYPER_OT12> OT12 {};
		constexpr static RegisterField<GPIOF_OTYPER_OT13> OT13 {};
		constexpr static RegisterField<GPIOF_OTYPER_OT14> OT14 {};
		constexpr static RegisterField<GPIOF_OTYPER_OT15> OT15 {};
	};

	struct OSPEEDR {
		DECL_REGISTER(GPIOF_OSPEEDR_BASE);
		constexpr static RegisterField<GPIOF_OSPEEDR_OSPEEDR0> OSPEEDR0 {};
		constexpr static RegisterField<GPIOF_OSPEEDR_OSPEEDR1> OSPEEDR1 {};
		constexpr static RegisterField<GPIOF_OSPEEDR_OSPEEDR2> OSPEEDR2 {};
		constexpr static RegisterField<GPIOF_OSPEEDR_OSPEEDR3> OSPEEDR3 {};
		constexpr static RegisterField<GPIOF_OSPEEDR_OSPEEDR4> OSPEEDR4 {};
		constexpr static RegisterField<GPIOF_OSPEEDR_OSPEEDR5> OSPEEDR5 {};
		constexpr static RegisterField<GPIOF_OSPEEDR_OSPEEDR6> OSPEEDR6 {};
		constexpr static RegisterField<GPIOF_OSPEEDR_OSPEEDR7> OSPEEDR7 {};
		constexpr static RegisterField<GPIOF_OSPEEDR_OSPEEDR8> OSPEEDR8 {};
		constexpr static RegisterField<GPIOF_OSPEEDR_OSPEEDR9> OSPEEDR9 {};
		constexpr static RegisterField<GPIOF_OSPEEDR_OSPEEDR10> OSPEEDR10 {};
		constexpr static RegisterField<GPIOF_OSPEEDR_OSPEEDR11> OSPEEDR11 {};
		constexpr static RegisterField<GPIOF_OSPEEDR_OSPEEDR12> OSPEEDR12 {};
		constexpr static RegisterField<GPIOF_OSPEEDR_OSPEEDR13> OSPEEDR13 {};
		constexpr static RegisterField<GPIOF_OSPEEDR_OSPEEDR14> OSPEEDR14 {};
		constexpr static RegisterField<GPIOF_OSPEEDR_OSPEEDR15> OSPEEDR15 {};
	};

	struct PUPDR {
		DECL_REGISTER(GPIOF_PUPDR_BASE);
		constexpr static RegisterField<GPIOF_PUPDR_PUPDR0> PUPDR0 {};
		constexpr static RegisterField<GPIOF_PUPDR_PUPDR1> PUPDR1 {};
		constexpr static RegisterField<GPIOF_PUPDR_PUPDR2> PUPDR2 {};
		constexpr static RegisterField<GPIOF_PUPDR_PUPDR3> PUPDR3 {};
		constexpr static RegisterField<GPIOF_PUPDR_PUPDR4> PUPDR4 {};
		constexpr static RegisterField<GPIOF_PUPDR_PUPDR5> PUPDR5 {};
		constexpr static RegisterField<GPIOF_PUPDR_PUPDR6> PUPDR6 {};
		constexpr static RegisterField<GPIOF_PUPDR_PUPDR7> PUPDR7 {};
		constexpr static RegisterField<GPIOF_PUPDR_PUPDR8> PUPDR8 {};
		constexpr static RegisterField<GPIOF_PUPDR_PUPDR9> PUPDR9 {};
		constexpr static RegisterField<GPIOF_PUPDR_PUPDR10> PUPDR10 {};
		constexpr static RegisterField<GPIOF_PUPDR_PUPDR11> PUPDR11 {};
		constexpr static RegisterField<GPIOF_PUPDR_PUPDR12> PUPDR12 {};
		constexpr static RegisterField<GPIOF_PUPDR_PUPDR13> PUPDR13 {};
		constexpr static RegisterField<GPIOF_PUPDR_PUPDR14> PUPDR14 {};
		constexpr static RegisterField<GPIOF_PUPDR_PUPDR15> PUPDR15 {};
	};

	struct IDR {
		DECL_REGISTER(GPIOF_IDR_BASE);
		constexpr static RegisterField<GPIOF_IDR_IDR0> IDR0 {};
		constexpr static RegisterField<GPIOF_IDR_IDR1> IDR1 {};
		constexpr static RegisterField<GPIOF_IDR_IDR2> IDR2 {};
		constexpr static RegisterField<GPIOF_IDR_IDR3> IDR3 {};
		constexpr static RegisterField<GPIOF_IDR_IDR4> IDR4 {};
		constexpr static RegisterField<GPIOF_IDR_IDR5> IDR5 {};
		constexpr static RegisterField<GPIOF_IDR_IDR6> IDR6 {};
		constexpr static RegisterField<GPIOF_IDR_IDR7> IDR7 {};
		constexpr static RegisterField<GPIOF_IDR_IDR8> IDR8 {};
		constexpr static RegisterField<GPIOF_IDR_IDR9> IDR9 {};
		constexpr static RegisterField<GPIOF_IDR_IDR10> IDR10 {};
		constexpr static RegisterField<GPIOF_IDR_IDR11> IDR11 {};
		constexpr static RegisterField<GPIOF_IDR_IDR12> IDR12 {};
		constexpr static RegisterField<GPIOF_IDR_IDR13> IDR13 {};
		constexpr static RegisterField<GPIOF_IDR_IDR14> IDR14 {};
		constexpr static RegisterField<GPIOF_IDR_IDR15> IDR15 {};
	};

	struct ODR {
		DECL_REGISTER(GPIOF_ODR_BASE);
		constexpr static RegisterField<GPIOF_ODR_ODR0> ODR0 {};
		constexpr static RegisterField<GPIOF_ODR_ODR1> ODR1 {};
		constexpr static RegisterField<GPIOF_ODR_ODR2> ODR2 {};
		constexpr static RegisterField<GPIOF_ODR_ODR3> ODR3 {};
		constexpr static RegisterField<GPIOF_ODR_ODR4> ODR4 {};
		constexpr static RegisterField<GPIOF_ODR_ODR5> ODR5 {};
		constexpr static RegisterField<GPIOF_ODR_ODR6> ODR6 {};
		constexpr static RegisterField<GPIOF_ODR_ODR7> ODR7 {};
		constexpr static RegisterField<GPIOF_ODR_ODR8> ODR8 {};
		constexpr static RegisterField<GPIOF_ODR_ODR9> ODR9 {};
		constexpr static RegisterField<GPIOF_ODR_ODR10> ODR10 {};
		constexpr static RegisterField<GPIOF_ODR_ODR11> ODR11 {};
		constexpr static RegisterField<GPIOF_ODR_ODR12> ODR12 {};
		constexpr static RegisterField<GPIOF_ODR_ODR13> ODR13 {};
		constexpr static RegisterField<GPIOF_ODR_ODR14> ODR14 {};
		constexpr static RegisterField<GPIOF_ODR_ODR15> ODR15 {};
	};

	struct BSRR {
		DECL_REGISTER(GPIOF_BSRR_BASE);
		constexpr static RegisterField<GPIOF_BSRR_BS0> BS0 {};
		constexpr static RegisterField<GPIOF_BSRR_BS1> BS1 {};
		constexpr static RegisterField<GPIOF_BSRR_BS2> BS2 {};
		constexpr static RegisterField<GPIOF_BSRR_BS3> BS3 {};
		constexpr static RegisterField<GPIOF_BSRR_BS4> BS4 {};
		constexpr static RegisterField<GPIOF_BSRR_BS5> BS5 {};
		constexpr static RegisterField<GPIOF_BSRR_BS6> BS6 {};
		constexpr static RegisterField<GPIOF_BSRR_BS7> BS7 {};
		constexpr static RegisterField<GPIOF_BSRR_BS8> BS8 {};
		constexpr static RegisterField<GPIOF_BSRR_BS9> BS9 {};
		constexpr static RegisterField<GPIOF_BSRR_BS10> BS10 {};
		constexpr static RegisterField<GPIOF_BSRR_BS11> BS11 {};
		constexpr static RegisterField<GPIOF_BSRR_BS12> BS12 {};
		constexpr static RegisterField<GPIOF_BSRR_BS13> BS13 {};
		constexpr static RegisterField<GPIOF_BSRR_BS14> BS14 {};
		constexpr static RegisterField<GPIOF_BSRR_BS15> BS15 {};
		constexpr static RegisterField<GPIOF_BSRR_BR0> BR0 {};
		constexpr static RegisterField<GPIOF_BSRR_BR1> BR1 {};
		constexpr static RegisterField<GPIOF_BSRR_BR2> BR2 {};
		constexpr static RegisterField<GPIOF_BSRR_BR3> BR3 {};
		constexpr static RegisterField<GPIOF_BSRR_BR4> BR4 {};
		constexpr static RegisterField<GPIOF_BSRR_BR5> BR5 {};
		constexpr static RegisterField<GPIOF_BSRR_BR6> BR6 {};
		constexpr static RegisterField<GPIOF_BSRR_BR7> BR7 {};
		constexpr static RegisterField<GPIOF_BSRR_BR8> BR8 {};
		constexpr static RegisterField<GPIOF_BSRR_BR9> BR9 {};
		constexpr static RegisterField<GPIOF_BSRR_BR10> BR10 {};
		constexpr static RegisterField<GPIOF_BSRR_BR11> BR11 {};
		constexpr static RegisterField<GPIOF_BSRR_BR12> BR12 {};
		constexpr static RegisterField<GPIOF_BSRR_BR13> BR13 {};
		constexpr static RegisterField<GPIOF_BSRR_BR14> BR14 {};
		constexpr static RegisterField<GPIOF_BSRR_BR15> BR15 {};
	};

	struct LCKR {
		DECL_REGISTER(GPIOF_LCKR_BASE);
		constexpr static RegisterField<GPIOF_LCKR_LCK0> LCK0 {};
		constexpr static RegisterField<GPIOF_LCKR_LCK1> LCK1 {};
		constexpr static RegisterField<GPIOF_LCKR_LCK2> LCK2 {};
		constexpr static RegisterField<GPIOF_LCKR_LCK3> LCK3 {};
		constexpr static RegisterField<GPIOF_LCKR_LCK4> LCK4 {};
		constexpr static RegisterField<GPIOF_LCKR_LCK5> LCK5 {};
		constexpr static RegisterField<GPIOF_LCKR_LCK6> LCK6 {};
		constexpr static RegisterField<GPIOF_LCKR_LCK7> LCK7 {};
		constexpr static RegisterField<GPIOF_LCKR_LCK8> LCK8 {};
		constexpr static RegisterField<GPIOF_LCKR_LCK9> LCK9 {};
		constexpr static RegisterField<GPIOF_LCKR_LCK10> LCK10 {};
		constexpr static RegisterField<GPIOF_LCKR_LCK11> LCK11 {};
		constexpr static RegisterField<GPIOF_LCKR_LCK12> LCK12 {};
		constexpr static RegisterField<GPIOF_LCKR_LCK13> LCK13 {};
		constexpr static RegisterField<GPIOF_LCKR_LCK14> LCK14 {};
		constexpr static RegisterField<GPIOF_LCKR_LCK15> LCK15 {};
		constexpr static RegisterField<GPIOF_LCKR_LCKK> LCKK {};
	};

	struct AFRL {
		DECL_REGISTER(GPIOF_AFRL_BASE);
		constexpr static RegisterField<GPIOF_AFRL_AFSEL0> AFSEL0 {};
		constexpr static RegisterField<GPIOF_AFRL_AFSEL1> AFSEL1 {};
		constexpr static RegisterField<GPIOF_AFRL_AFSEL2> AFSEL2 {};
		constexpr static RegisterField<GPIOF_AFRL_AFSEL3> AFSEL3 {};
		constexpr static RegisterField<GPIOF_AFRL_AFSEL4> AFSEL4 {};
		constexpr static RegisterField<GPIOF_AFRL_AFSEL5> AFSEL5 {};
		constexpr static RegisterField<GPIOF_AFRL_AFSEL6> AFSEL6 {};
		constexpr static RegisterField<GPIOF_AFRL_AFSEL7> AFSEL7 {};
	};

	struct AFRH {
		DECL_REGISTER(GPIOF_AFRH_BASE);
		constexpr static RegisterField<GPIOF_AFRH_AFSEL8> AFSEL8 {};
		constexpr static RegisterField<GPIOF_AFRH_AFSEL9> AFSEL9 {};
		constexpr static RegisterField<GPIOF_AFRH_AFSEL10> AFSEL10 {};
		constexpr static RegisterField<GPIOF_AFRH_AFSEL11> AFSEL11 {};
		constexpr static RegisterField<GPIOF_AFRH_AFSEL12> AFSEL12 {};
		constexpr static RegisterField<GPIOF_AFRH_AFSEL13> AFSEL13 {};
		constexpr static RegisterField<GPIOF_AFRH_AFSEL14> AFSEL14 {};
		constexpr static RegisterField<GPIOF_AFRH_AFSEL15> AFSEL15 {};
	};

	struct BRR {
		DECL_REGISTER(GPIOF_BRR_BASE);
		constexpr static RegisterField<GPIOF_BRR_BR0> BR0 {};
		constexpr static RegisterField<GPIOF_BRR_BR1> BR1 {};
		constexpr static RegisterField<GPIOF_BRR_BR2> BR2 {};
		constexpr static RegisterField<GPIOF_BRR_BR3> BR3 {};
		constexpr static RegisterField<GPIOF_BRR_BR4> BR4 {};
		constexpr static RegisterField<GPIOF_BRR_BR5> BR5 {};
		constexpr static RegisterField<GPIOF_BRR_BR6> BR6 {};
		constexpr static RegisterField<GPIOF_BRR_BR7> BR7 {};
		constexpr static RegisterField<GPIOF_BRR_BR8> BR8 {};
		constexpr static RegisterField<GPIOF_BRR_BR9> BR9 {};
		constexpr static RegisterField<GPIOF_BRR_BR10> BR10 {};
		constexpr static RegisterField<GPIOF_BRR_BR11> BR11 {};
		constexpr static RegisterField<GPIOF_BRR_BR12> BR12 {};
		constexpr static RegisterField<GPIOF_BRR_BR13> BR13 {};
		constexpr static RegisterField<GPIOF_BRR_BR14> BR14 {};
		constexpr static RegisterField<GPIOF_BRR_BR15> BR15 {};
	};

};

struct CRC {
	struct DR {
		DECL_REGISTER(CRC_DR_BASE);
		constexpr static RegisterField<CRC_DR_DR> DRV {};
	};

	struct IDR {
		DECL_REGISTER(CRC_IDR_BASE);
		constexpr static RegisterField<CRC_IDR_IDR> IDRV {};
	};

	struct CR {
		DECL_REGISTER(CRC_CR_BASE);
		constexpr static RegisterField<CRC_CR_RESET> RESET {};
		constexpr static RegisterField<CRC_CR_POLYSIZE> POLYSIZE {};
		constexpr static RegisterField<CRC_CR_REV_IN> REV_IN {};
		constexpr static RegisterField<CRC_CR_REV_OUT> REV_OUT {};
	};

	struct INIT {
		DECL_REGISTER(CRC_INIT_BASE);
		constexpr static RegisterField<CRC_INIT_CRC_INIT> CRC_INIT {};
	};

	struct POL {
		DECL_REGISTER(CRC_POL_BASE);
		constexpr static RegisterField<CRC_POL_POL> POLV {};
	};

};

struct EXTI {
	struct RTSR1 {
		DECL_REGISTER(EXTI_RTSR1_BASE);
		constexpr static RegisterField<EXTI_RTSR1_RT0> RT0 {};
		constexpr static RegisterField<EXTI_RTSR1_RT1> RT1 {};
		constexpr static RegisterField<EXTI_RTSR1_RT2> RT2 {};
		constexpr static RegisterField<EXTI_RTSR1_RT3> RT3 {};
		constexpr static RegisterField<EXTI_RTSR1_RT4> RT4 {};
		constexpr static RegisterField<EXTI_RTSR1_RT5> RT5 {};
		constexpr static RegisterField<EXTI_RTSR1_RT6> RT6 {};
		constexpr static RegisterField<EXTI_RTSR1_RT7> RT7 {};
		constexpr static RegisterField<EXTI_RTSR1_RT8> RT8 {};
		constexpr static RegisterField<EXTI_RTSR1_RT9> RT9 {};
		constexpr static RegisterField<EXTI_RTSR1_RT10> RT10 {};
		constexpr static RegisterField<EXTI_RTSR1_RT11> RT11 {};
		constexpr static RegisterField<EXTI_RTSR1_RT12> RT12 {};
		constexpr static RegisterField<EXTI_RTSR1_RT13> RT13 {};
		constexpr static RegisterField<EXTI_RTSR1_RT14> RT14 {};
		constexpr static RegisterField<EXTI_RTSR1_RT15> RT15 {};
	};

	struct FTSR1 {
		DECL_REGISTER(EXTI_FTSR1_BASE);
		constexpr static RegisterField<EXTI_FTSR1_FT0> FT0 {};
		constexpr static RegisterField<EXTI_FTSR1_FT1> FT1 {};
		constexpr static RegisterField<EXTI_FTSR1_FT2> FT2 {};
		constexpr static RegisterField<EXTI_FTSR1_FT3> FT3 {};
		constexpr static RegisterField<EXTI_FTSR1_FT4> FT4 {};
		constexpr static RegisterField<EXTI_FTSR1_FT5> FT5 {};
		constexpr static RegisterField<EXTI_FTSR1_FT6> FT6 {};
		constexpr static RegisterField<EXTI_FTSR1_FT7> FT7 {};
		constexpr static RegisterField<EXTI_FTSR1_FT8> FT8 {};
		constexpr static RegisterField<EXTI_FTSR1_FT9> FT9 {};
		constexpr static RegisterField<EXTI_FTSR1_FT10> FT10 {};
		constexpr static RegisterField<EXTI_FTSR1_FT11> FT11 {};
		constexpr static RegisterField<EXTI_FTSR1_FT12> FT12 {};
		constexpr static RegisterField<EXTI_FTSR1_FT13> FT13 {};
		constexpr static RegisterField<EXTI_FTSR1_FT14> FT14 {};
		constexpr static RegisterField<EXTI_FTSR1_FT15> FT15 {};
	};

	struct SWIER1 {
		DECL_REGISTER(EXTI_SWIER1_BASE);
		constexpr static RegisterField<EXTI_SWIER1_SWI0> SWI0 {};
		constexpr static RegisterField<EXTI_SWIER1_SWI1> SWI1 {};
		constexpr static RegisterField<EXTI_SWIER1_SWI2> SWI2 {};
		constexpr static RegisterField<EXTI_SWIER1_SWI3> SWI3 {};
		constexpr static RegisterField<EXTI_SWIER1_SWI4> SWI4 {};
		constexpr static RegisterField<EXTI_SWIER1_SWI5> SWI5 {};
		constexpr static RegisterField<EXTI_SWIER1_SWI6> SWI6 {};
		constexpr static RegisterField<EXTI_SWIER1_SWI7> SWI7 {};
		constexpr static RegisterField<EXTI_SWIER1_SWI8> SWI8 {};
		constexpr static RegisterField<EXTI_SWIER1_SWI9> SWI9 {};
		constexpr static RegisterField<EXTI_SWIER1_SWI10> SWI10 {};
		constexpr static RegisterField<EXTI_SWIER1_SWI11> SWI11 {};
		constexpr static RegisterField<EXTI_SWIER1_SWI12> SWI12 {};
		constexpr static RegisterField<EXTI_SWIER1_SWI13> SWI13 {};
		constexpr static RegisterField<EXTI_SWIER1_SWI14> SWI14 {};
		constexpr static RegisterField<EXTI_SWIER1_SWI15> SWI15 {};
	};

	struct RPR1 {
		DECL_REGISTER(EXTI_RPR1_BASE);
		constexpr static RegisterField<EXTI_RPR1_RPIF0> RPIF0 {};
		constexpr static RegisterField<EXTI_RPR1_RPIF1> RPIF1 {};
		constexpr static RegisterField<EXTI_RPR1_RPIF2> RPIF2 {};
		constexpr static RegisterField<EXTI_RPR1_RPIF3> RPIF3 {};
		constexpr static RegisterField<EXTI_RPR1_RPIF4> RPIF4 {};
		constexpr static RegisterField<EXTI_RPR1_RPIF5> RPIF5 {};
		constexpr static RegisterField<EXTI_RPR1_RPIF6> RPIF6 {};
		constexpr static RegisterField<EXTI_RPR1_RPIF7> RPIF7 {};
		constexpr static RegisterField<EXTI_RPR1_RPIF8> RPIF8 {};
		constexpr static RegisterField<EXTI_RPR1_RPIF9> RPIF9 {};
		constexpr static RegisterField<EXTI_RPR1_RPIF10> RPIF10 {};
		constexpr static RegisterField<EXTI_RPR1_RPIF11> RPIF11 {};
		constexpr static RegisterField<EXTI_RPR1_RPIF12> RPIF12 {};
		constexpr static RegisterField<EXTI_RPR1_RPIF13> RPIF13 {};
		constexpr static RegisterField<EXTI_RPR1_RPIF14> RPIF14 {};
		constexpr static RegisterField<EXTI_RPR1_RPIF15> RPIF15 {};
	};

	struct FPR1 {
		DECL_REGISTER(EXTI_FPR1_BASE);
		constexpr static RegisterField<EXTI_FPR1_FPIF0> FPIF0 {};
		constexpr static RegisterField<EXTI_FPR1_FPIF1> FPIF1 {};
		constexpr static RegisterField<EXTI_FPR1_FPIF2> FPIF2 {};
		constexpr static RegisterField<EXTI_FPR1_FPIF3> FPIF3 {};
		constexpr static RegisterField<EXTI_FPR1_FPIF4> FPIF4 {};
		constexpr static RegisterField<EXTI_FPR1_FPIF5> FPIF5 {};
		constexpr static RegisterField<EXTI_FPR1_FPIF6> FPIF6 {};
		constexpr static RegisterField<EXTI_FPR1_FPIF7> FPIF7 {};
		constexpr static RegisterField<EXTI_FPR1_FPIF8> FPIF8 {};
		constexpr static RegisterField<EXTI_FPR1_FPIF9> FPIF9 {};
		constexpr static RegisterField<EXTI_FPR1_FPIF10> FPIF10 {};
		constexpr static RegisterField<EXTI_FPR1_FPIF11> FPIF11 {};
		constexpr static RegisterField<EXTI_FPR1_FPIF12> FPIF12 {};
		constexpr static RegisterField<EXTI_FPR1_FPIF13> FPIF13 {};
		constexpr static RegisterField<EXTI_FPR1_FPIF14> FPIF14 {};
		constexpr static RegisterField<EXTI_FPR1_FPIF15> FPIF15 {};
	};

	struct EXTICR1 {
		DECL_REGISTER(EXTI_EXTICR1_BASE);
		constexpr static RegisterField<EXTI_EXTICR1_EXTI0_7> EXTI0_7 {};
		constexpr static RegisterField<EXTI_EXTICR1_EXTI8_15> EXTI8_15 {};
		constexpr static RegisterField<EXTI_EXTICR1_EXTI16_23> EXTI16_23 {};
		constexpr static RegisterField<EXTI_EXTICR1_EXTI24_31> EXTI24_31 {};
	};

	struct EXTICR2 {
		DECL_REGISTER(EXTI_EXTICR2_BASE);
		constexpr static RegisterField<EXTI_EXTICR2_EXTI0_7> EXTI0_7 {};
		constexpr static RegisterField<EXTI_EXTICR2_EXTI8_15> EXTI8_15 {};
		constexpr static RegisterField<EXTI_EXTICR2_EXTI16_23> EXTI16_23 {};
		constexpr static RegisterField<EXTI_EXTICR2_EXTI24_31> EXTI24_31 {};
	};

	struct EXTICR3 {
		DECL_REGISTER(EXTI_EXTICR3_BASE);
		constexpr static RegisterField<EXTI_EXTICR3_EXTI0_7> EXTI0_7 {};
		constexpr static RegisterField<EXTI_EXTICR3_EXTI8_15> EXTI8_15 {};
		constexpr static RegisterField<EXTI_EXTICR3_EXTI16_23> EXTI16_23 {};
		constexpr static RegisterField<EXTI_EXTICR3_EXTI24_31> EXTI24_31 {};
	};

	struct EXTICR4 {
		DECL_REGISTER(EXTI_EXTICR4_BASE);
		constexpr static RegisterField<EXTI_EXTICR4_EXTI0_7> EXTI0_7 {};
		constexpr static RegisterField<EXTI_EXTICR4_EXTI8_15> EXTI8_15 {};
		constexpr static RegisterField<EXTI_EXTICR4_EXTI16_23> EXTI16_23 {};
		constexpr static RegisterField<EXTI_EXTICR4_EXTI24_31> EXTI24_31 {};
	};

	struct IMR1 {
		DECL_REGISTER(EXTI_IMR1_BASE);
		constexpr static RegisterField<EXTI_IMR1_IM0> IM0 {};
		constexpr static RegisterField<EXTI_IMR1_IM1> IM1 {};
		constexpr static RegisterField<EXTI_IMR1_IM2> IM2 {};
		constexpr static RegisterField<EXTI_IMR1_IM3> IM3 {};
		constexpr static RegisterField<EXTI_IMR1_IM4> IM4 {};
		constexpr static RegisterField<EXTI_IMR1_IM5> IM5 {};
		constexpr static RegisterField<EXTI_IMR1_IM6> IM6 {};
		constexpr static RegisterField<EXTI_IMR1_IM7> IM7 {};
		constexpr static RegisterField<EXTI_IMR1_IM8> IM8 {};
		constexpr static RegisterField<EXTI_IMR1_IM9> IM9 {};
		constexpr static RegisterField<EXTI_IMR1_IM10> IM10 {};
		constexpr static RegisterField<EXTI_IMR1_IM11> IM11 {};
		constexpr static RegisterField<EXTI_IMR1_IM12> IM12 {};
		constexpr static RegisterField<EXTI_IMR1_IM13> IM13 {};
		constexpr static RegisterField<EXTI_IMR1_IM14> IM14 {};
		constexpr static RegisterField<EXTI_IMR1_IM15> IM15 {};
		constexpr static RegisterField<EXTI_IMR1_IM19> IM19 {};
		constexpr static RegisterField<EXTI_IMR1_IM21> IM21 {};
		constexpr static RegisterField<EXTI_IMR1_IM22> IM22 {};
		constexpr static RegisterField<EXTI_IMR1_IM23> IM23 {};
		constexpr static RegisterField<EXTI_IMR1_IM24> IM24 {};
		constexpr static RegisterField<EXTI_IMR1_IM25> IM25 {};
		constexpr static RegisterField<EXTI_IMR1_IM26> IM26 {};
		constexpr static RegisterField<EXTI_IMR1_IM31> IM31 {};
	};

	struct EMR1 {
		DECL_REGISTER(EXTI_EMR1_BASE);
		constexpr static RegisterField<EXTI_EMR1_EM0> EM0 {};
		constexpr static RegisterField<EXTI_EMR1_EM1> EM1 {};
		constexpr static RegisterField<EXTI_EMR1_EM2> EM2 {};
		constexpr static RegisterField<EXTI_EMR1_EM3> EM3 {};
		constexpr static RegisterField<EXTI_EMR1_EM4> EM4 {};
		constexpr static RegisterField<EXTI_EMR1_EM5> EM5 {};
		constexpr static RegisterField<EXTI_EMR1_EM6> EM6 {};
		constexpr static RegisterField<EXTI_EMR1_EM7> EM7 {};
		constexpr static RegisterField<EXTI_EMR1_EM8> EM8 {};
		constexpr static RegisterField<EXTI_EMR1_EM9> EM9 {};
		constexpr static RegisterField<EXTI_EMR1_EM10> EM10 {};
		constexpr static RegisterField<EXTI_EMR1_EM11> EM11 {};
		constexpr static RegisterField<EXTI_EMR1_EM12> EM12 {};
		constexpr static RegisterField<EXTI_EMR1_EM13> EM13 {};
		constexpr static RegisterField<EXTI_EMR1_EM14> EM14 {};
		constexpr static RegisterField<EXTI_EMR1_EM15> EM15 {};
		constexpr static RegisterField<EXTI_EMR1_EM19> EM19 {};
		constexpr static RegisterField<EXTI_EMR1_EM21> EM21 {};
		constexpr static RegisterField<EXTI_EMR1_EM23> EM23 {};
		constexpr static RegisterField<EXTI_EMR1_EM25> EM25 {};
		constexpr static RegisterField<EXTI_EMR1_EM26> EM26 {};
		constexpr static RegisterField<EXTI_EMR1_EM31> EM31 {};
	};

};

struct TIM16 {
	struct CR1 {
		DECL_REGISTER(TIM16_CR1_BASE);
		constexpr static RegisterField<TIM16_CR1_CEN> CEN {};
		constexpr static RegisterField<TIM16_CR1_UDIS> UDIS {};
		constexpr static RegisterField<TIM16_CR1_URS> URS {};
		constexpr static RegisterField<TIM16_CR1_OPM> OPM {};
		constexpr static RegisterField<TIM16_CR1_ARPE> ARPE {};
		constexpr static RegisterField<TIM16_CR1_CKD> CKD {};
		constexpr static RegisterField<TIM16_CR1_UIFREMAP> UIFREMAP {};
	};

	struct CR2 {
		DECL_REGISTER(TIM16_CR2_BASE);
		constexpr static RegisterField<TIM16_CR2_CCPC> CCPC {};
		constexpr static RegisterField<TIM16_CR2_CCUS> CCUS {};
		constexpr static RegisterField<TIM16_CR2_CCDS> CCDS {};
		constexpr static RegisterField<TIM16_CR2_OIS1> OIS1 {};
		constexpr static RegisterField<TIM16_CR2_OIS1N> OIS1N {};
	};

	struct DIER {
		DECL_REGISTER(TIM16_DIER_BASE);
		constexpr static RegisterField<TIM16_DIER_UIE> UIE {};
		constexpr static RegisterField<TIM16_DIER_CC1IE> CC1IE {};
		constexpr static RegisterField<TIM16_DIER_COMIE> COMIE {};
		constexpr static RegisterField<TIM16_DIER_BIE> BIE {};
		constexpr static RegisterField<TIM16_DIER_UDE> UDE {};
		constexpr static RegisterField<TIM16_DIER_CC1DE> CC1DE {};
		constexpr static RegisterField<TIM16_DIER_COMDE> COMDE {};
	};

	struct SR {
		DECL_REGISTER(TIM16_SR_BASE);
		constexpr static RegisterField<TIM16_SR_UIF> UIF {};
		constexpr static RegisterField<TIM16_SR_CC1IF> CC1IF {};
		constexpr static RegisterField<TIM16_SR_COMIF> COMIF {};
		constexpr static RegisterField<TIM16_SR_BIF> BIF {};
		constexpr static RegisterField<TIM16_SR_CC1OF> CC1OF {};
	};

	struct EGR {
		DECL_REGISTER(TIM16_EGR_BASE);
		constexpr static RegisterField<TIM16_EGR_UG> UG {};
		constexpr static RegisterField<TIM16_EGR_CC1G> CC1G {};
		constexpr static RegisterField<TIM16_EGR_COMG> COMG {};
		constexpr static RegisterField<TIM16_EGR_BG> BG {};
	};

	struct CCMR1_Output {
		DECL_REGISTER(TIM16_CCMR1_Output_BASE);
		constexpr static RegisterField<TIM16_CCMR1_Output_CC1S> CC1S {};
		constexpr static RegisterField<TIM16_CCMR1_Output_OC1FE> OC1FE {};
		constexpr static RegisterField<TIM16_CCMR1_Output_OC1PE> OC1PE {};
		constexpr static RegisterField<TIM16_CCMR1_Output_OC1M> OC1M {};
		constexpr static RegisterField<TIM16_CCMR1_Output_OC1M_2> OC1M_2 {};
	};

	struct CCMR1_Input {
		DECL_REGISTER(TIM16_CCMR1_Input_BASE);
		constexpr static RegisterField<TIM16_CCMR1_Input_CC1S> CC1S {};
		constexpr static RegisterField<TIM16_CCMR1_Input_IC1PSC> IC1PSC {};
		constexpr static RegisterField<TIM16_CCMR1_Input_IC1F> IC1F {};
	};

	struct CCER {
		DECL_REGISTER(TIM16_CCER_BASE);
		constexpr static RegisterField<TIM16_CCER_CC1E> CC1E {};
		constexpr static RegisterField<TIM16_CCER_CC1P> CC1P {};
		constexpr static RegisterField<TIM16_CCER_CC1NE> CC1NE {};
		constexpr static RegisterField<TIM16_CCER_CC1NP> CC1NP {};
	};

	struct CNT {
		DECL_REGISTER(TIM16_CNT_BASE);
		constexpr static RegisterField<TIM16_CNT_CNT> CNTV {};
		constexpr static RegisterField<TIM16_CNT_UIFCPY> UIFCPY {};
	};

	struct PSC {
		DECL_REGISTER(TIM16_PSC_BASE);
		constexpr static RegisterField<TIM16_PSC_PSC> PSCV {};
	};

	struct ARR {
		DECL_REGISTER(TIM16_ARR_BASE);
		constexpr static RegisterField<TIM16_ARR_ARR> ARRV {};
	};

	struct RCR {
		DECL_REGISTER(TIM16_RCR_BASE);
		constexpr static RegisterField<TIM16_RCR_REP> REP {};
	};

	struct CCR1 {
		DECL_REGISTER(TIM16_CCR1_BASE);
		constexpr static RegisterField<TIM16_CCR1_CCR1> CCR1V {};
	};

	struct BDTR {
		DECL_REGISTER(TIM16_BDTR_BASE);
		constexpr static RegisterField<TIM16_BDTR_DTG> DTG {};
		constexpr static RegisterField<TIM16_BDTR_LOCK> LOCK {};
		constexpr static RegisterField<TIM16_BDTR_OSSI> OSSI {};
		constexpr static RegisterField<TIM16_BDTR_OSSR> OSSR {};
		constexpr static RegisterField<TIM16_BDTR_BKE> BKE {};
		constexpr static RegisterField<TIM16_BDTR_BKP> BKP {};
		constexpr static RegisterField<TIM16_BDTR_AOE> AOE {};
		constexpr static RegisterField<TIM16_BDTR_MOE> MOE {};
		constexpr static RegisterField<TIM16_BDTR_BKF> BKF {};
		constexpr static RegisterField<TIM16_BDTR_BKDSRM> BKDSRM {};
		constexpr static RegisterField<TIM16_BDTR_BKBID> BKBID {};
	};

	struct DCR {
		DECL_REGISTER(TIM16_DCR_BASE);
		constexpr static RegisterField<TIM16_DCR_DBA> DBA {};
		constexpr static RegisterField<TIM16_DCR_DBL> DBL {};
	};

	struct DMAR {
		DECL_REGISTER(TIM16_DMAR_BASE);
		constexpr static RegisterField<TIM16_DMAR_DMAB> DMAB {};
	};

	struct AF1 {
		DECL_REGISTER(TIM16_AF1_BASE);
		constexpr static RegisterField<TIM16_AF1_BKINE> BKINE {};
		constexpr static RegisterField<TIM16_AF1_BKCMP1E> BKCMP1E {};
		constexpr static RegisterField<TIM16_AF1_BKCMP2E> BKCMP2E {};
		constexpr static RegisterField<TIM16_AF1_BKDFBK1E> BKDFBK1E {};
		constexpr static RegisterField<TIM16_AF1_BKINP> BKINP {};
		constexpr static RegisterField<TIM16_AF1_BKCMP1P> BKCMP1P {};
		constexpr static RegisterField<TIM16_AF1_BKCMP2P> BKCMP2P {};
	};

	struct TISEL {
		DECL_REGISTER(TIM16_TISEL_BASE);
		constexpr static RegisterField<TIM16_TISEL_TI1SEL> TI1SEL {};
	};

};

struct TIM17 {
	struct CR1 {
		DECL_REGISTER(TIM17_CR1_BASE);
		constexpr static RegisterField<TIM17_CR1_CEN> CEN {};
		constexpr static RegisterField<TIM17_CR1_UDIS> UDIS {};
		constexpr static RegisterField<TIM17_CR1_URS> URS {};
		constexpr static RegisterField<TIM17_CR1_OPM> OPM {};
		constexpr static RegisterField<TIM17_CR1_ARPE> ARPE {};
		constexpr static RegisterField<TIM17_CR1_CKD> CKD {};
		constexpr static RegisterField<TIM17_CR1_UIFREMAP> UIFREMAP {};
	};

	struct CR2 {
		DECL_REGISTER(TIM17_CR2_BASE);
		constexpr static RegisterField<TIM17_CR2_CCPC> CCPC {};
		constexpr static RegisterField<TIM17_CR2_CCUS> CCUS {};
		constexpr static RegisterField<TIM17_CR2_CCDS> CCDS {};
		constexpr static RegisterField<TIM17_CR2_OIS1> OIS1 {};
		constexpr static RegisterField<TIM17_CR2_OIS1N> OIS1N {};
	};

	struct DIER {
		DECL_REGISTER(TIM17_DIER_BASE);
		constexpr static RegisterField<TIM17_DIER_UIE> UIE {};
		constexpr static RegisterField<TIM17_DIER_CC1IE> CC1IE {};
		constexpr static RegisterField<TIM17_DIER_COMIE> COMIE {};
		constexpr static RegisterField<TIM17_DIER_BIE> BIE {};
		constexpr static RegisterField<TIM17_DIER_UDE> UDE {};
		constexpr static RegisterField<TIM17_DIER_CC1DE> CC1DE {};
		constexpr static RegisterField<TIM17_DIER_COMDE> COMDE {};
	};

	struct SR {
		DECL_REGISTER(TIM17_SR_BASE);
		constexpr static RegisterField<TIM17_SR_UIF> UIF {};
		constexpr static RegisterField<TIM17_SR_CC1IF> CC1IF {};
		constexpr static RegisterField<TIM17_SR_COMIF> COMIF {};
		constexpr static RegisterField<TIM17_SR_BIF> BIF {};
		constexpr static RegisterField<TIM17_SR_CC1OF> CC1OF {};
	};

	struct EGR {
		DECL_REGISTER(TIM17_EGR_BASE);
		constexpr static RegisterField<TIM17_EGR_UG> UG {};
		constexpr static RegisterField<TIM17_EGR_CC1G> CC1G {};
		constexpr static RegisterField<TIM17_EGR_COMG> COMG {};
		constexpr static RegisterField<TIM17_EGR_BG> BG {};
	};

	struct CCMR1_Output {
		DECL_REGISTER(TIM17_CCMR1_Output_BASE);
		constexpr static RegisterField<TIM17_CCMR1_Output_CC1S> CC1S {};
		constexpr static RegisterField<TIM17_CCMR1_Output_OC1FE> OC1FE {};
		constexpr static RegisterField<TIM17_CCMR1_Output_OC1PE> OC1PE {};
		constexpr static RegisterField<TIM17_CCMR1_Output_OC1M> OC1M {};
		constexpr static RegisterField<TIM17_CCMR1_Output_OC1M_2> OC1M_2 {};
	};

	struct CCMR1_Input {
		DECL_REGISTER(TIM17_CCMR1_Input_BASE);
		constexpr static RegisterField<TIM17_CCMR1_Input_CC1S> CC1S {};
		constexpr static RegisterField<TIM17_CCMR1_Input_IC1PSC> IC1PSC {};
		constexpr static RegisterField<TIM17_CCMR1_Input_IC1F> IC1F {};
	};

	struct CCER {
		DECL_REGISTER(TIM17_CCER_BASE);
		constexpr static RegisterField<TIM17_CCER_CC1E> CC1E {};
		constexpr static RegisterField<TIM17_CCER_CC1P> CC1P {};
		constexpr static RegisterField<TIM17_CCER_CC1NE> CC1NE {};
		constexpr static RegisterField<TIM17_CCER_CC1NP> CC1NP {};
	};

	struct CNT {
		DECL_REGISTER(TIM17_CNT_BASE);
		constexpr static RegisterField<TIM17_CNT_CNT> CNTV {};
		constexpr static RegisterField<TIM17_CNT_UIFCPY> UIFCPY {};
	};

	struct PSC {
		DECL_REGISTER(TIM17_PSC_BASE);
		constexpr static RegisterField<TIM17_PSC_PSC> PSCV {};
	};

	struct ARR {
		DECL_REGISTER(TIM17_ARR_BASE);
		constexpr static RegisterField<TIM17_ARR_ARR> ARRV {};
	};

	struct RCR {
		DECL_REGISTER(TIM17_RCR_BASE);
		constexpr static RegisterField<TIM17_RCR_REP> REP {};
	};

	struct CCR1 {
		DECL_REGISTER(TIM17_CCR1_BASE);
		constexpr static RegisterField<TIM17_CCR1_CCR1> CCR1V {};
	};

	struct BDTR {
		DECL_REGISTER(TIM17_BDTR_BASE);
		constexpr static RegisterField<TIM17_BDTR_DTG> DTG {};
		constexpr static RegisterField<TIM17_BDTR_LOCK> LOCK {};
		constexpr static RegisterField<TIM17_BDTR_OSSI> OSSI {};
		constexpr static RegisterField<TIM17_BDTR_OSSR> OSSR {};
		constexpr static RegisterField<TIM17_BDTR_BKE> BKE {};
		constexpr static RegisterField<TIM17_BDTR_BKP> BKP {};
		constexpr static RegisterField<TIM17_BDTR_AOE> AOE {};
		constexpr static RegisterField<TIM17_BDTR_MOE> MOE {};
		constexpr static RegisterField<TIM17_BDTR_BKF> BKF {};
		constexpr static RegisterField<TIM17_BDTR_BKDSRM> BKDSRM {};
		constexpr static RegisterField<TIM17_BDTR_BKBID> BKBID {};
	};

	struct DCR {
		DECL_REGISTER(TIM17_DCR_BASE);
		constexpr static RegisterField<TIM17_DCR_DBA> DBA {};
		constexpr static RegisterField<TIM17_DCR_DBL> DBL {};
	};

	struct DMAR {
		DECL_REGISTER(TIM17_DMAR_BASE);
		constexpr static RegisterField<TIM17_DMAR_DMAB> DMAB {};
	};

	struct AF1 {
		DECL_REGISTER(TIM17_AF1_BASE);
		constexpr static RegisterField<TIM17_AF1_BKINE> BKINE {};
		constexpr static RegisterField<TIM17_AF1_BKCMP1E> BKCMP1E {};
		constexpr static RegisterField<TIM17_AF1_BKCMP2E> BKCMP2E {};
		constexpr static RegisterField<TIM17_AF1_BKDFBK1E> BKDFBK1E {};
		constexpr static RegisterField<TIM17_AF1_BKINP> BKINP {};
		constexpr static RegisterField<TIM17_AF1_BKCMP1P> BKCMP1P {};
		constexpr static RegisterField<TIM17_AF1_BKCMP2P> BKCMP2P {};
	};

	struct TISEL {
		DECL_REGISTER(TIM17_TISEL_BASE);
		constexpr static RegisterField<TIM17_TISEL_TI1SEL> TI1SEL {};
	};

};

struct USART1 {
	struct CR1 {
		DECL_REGISTER(USART1_CR1_BASE);
		constexpr static RegisterField<USART1_CR1_UE> UE {};
		constexpr static RegisterField<USART1_CR1_UESM> UESM {};
		constexpr static RegisterField<USART1_CR1_RE> RE {};
		constexpr static RegisterField<USART1_CR1_TE> TE {};
		constexpr static RegisterField<USART1_CR1_IDLEIE> IDLEIE {};
		constexpr static RegisterField<USART1_CR1_RXNEIE> RXNEIE {};
		constexpr static RegisterField<USART1_CR1_TCIE> TCIE {};
		constexpr static RegisterField<USART1_CR1_TXEIE> TXEIE {};
		constexpr static RegisterField<USART1_CR1_PEIE> PEIE {};
		constexpr static RegisterField<USART1_CR1_PS> PS {};
		constexpr static RegisterField<USART1_CR1_PCE> PCE {};
		constexpr static RegisterField<USART1_CR1_WAKE> WAKE {};
		constexpr static RegisterField<USART1_CR1_M0> M0 {};
		constexpr static RegisterField<USART1_CR1_MME> MME {};
		constexpr static RegisterField<USART1_CR1_CMIE> CMIE {};
		constexpr static RegisterField<USART1_CR1_OVER8> OVER8 {};
		constexpr static RegisterField<USART1_CR1_DEDT> DEDT {};
		constexpr static RegisterField<USART1_CR1_DEAT> DEAT {};
		constexpr static RegisterField<USART1_CR1_RTOIE> RTOIE {};
		constexpr static RegisterField<USART1_CR1_EOBIE> EOBIE {};
		constexpr static RegisterField<USART1_CR1_M1> M1 {};
		constexpr static RegisterField<USART1_CR1_FIFOEN> FIFOEN {};
		constexpr static RegisterField<USART1_CR1_TXFEIE> TXFEIE {};
		constexpr static RegisterField<USART1_CR1_RXFFIE> RXFFIE {};
	};

	struct CR2 {
		DECL_REGISTER(USART1_CR2_BASE);
		constexpr static RegisterField<USART1_CR2_SLVEN> SLVEN {};
		constexpr static RegisterField<USART1_CR2_DIS_NSS> DIS_NSS {};
		constexpr static RegisterField<USART1_CR2_ADDM7> ADDM7 {};
		constexpr static RegisterField<USART1_CR2_LBDL> LBDL {};
		constexpr static RegisterField<USART1_CR2_LBDIE> LBDIE {};
		constexpr static RegisterField<USART1_CR2_LBCL> LBCL {};
		constexpr static RegisterField<USART1_CR2_CPHA> CPHA {};
		constexpr static RegisterField<USART1_CR2_CPOL> CPOL {};
		constexpr static RegisterField<USART1_CR2_CLKEN> CLKEN {};
		constexpr static RegisterField<USART1_CR2_STOP> STOP {};
		constexpr static RegisterField<USART1_CR2_LINEN> LINEN {};
		constexpr static RegisterField<USART1_CR2_SWAP> SWAP {};
		constexpr static RegisterField<USART1_CR2_RXINV> RXINV {};
		constexpr static RegisterField<USART1_CR2_TXINV> TXINV {};
		constexpr static RegisterField<USART1_CR2_TAINV> TAINV {};
		constexpr static RegisterField<USART1_CR2_MSBFIRST> MSBFIRST {};
		constexpr static RegisterField<USART1_CR2_ABREN> ABREN {};
		constexpr static RegisterField<USART1_CR2_ABRMOD> ABRMOD {};
		constexpr static RegisterField<USART1_CR2_RTOEN> RTOEN {};
		constexpr static RegisterField<USART1_CR2_ADD0_3> ADD0_3 {};
		constexpr static RegisterField<USART1_CR2_ADD4_7> ADD4_7 {};
	};

	struct CR3 {
		DECL_REGISTER(USART1_CR3_BASE);
		constexpr static RegisterField<USART1_CR3_EIE> EIE {};
		constexpr static RegisterField<USART1_CR3_IREN> IREN {};
		constexpr static RegisterField<USART1_CR3_IRLP> IRLP {};
		constexpr static RegisterField<USART1_CR3_HDSEL> HDSEL {};
		constexpr static RegisterField<USART1_CR3_NACK> NACK {};
		constexpr static RegisterField<USART1_CR3_SCEN> SCEN {};
		constexpr static RegisterField<USART1_CR3_DMAR> DMAR {};
		constexpr static RegisterField<USART1_CR3_DMAT> DMAT {};
		constexpr static RegisterField<USART1_CR3_RTSE> RTSE {};
		constexpr static RegisterField<USART1_CR3_CTSE> CTSE {};
		constexpr static RegisterField<USART1_CR3_CTSIE> CTSIE {};
		constexpr static RegisterField<USART1_CR3_ONEBIT> ONEBIT {};
		constexpr static RegisterField<USART1_CR3_OVRDIS> OVRDIS {};
		constexpr static RegisterField<USART1_CR3_DDRE> DDRE {};
		constexpr static RegisterField<USART1_CR3_DEM> DEM {};
		constexpr static RegisterField<USART1_CR3_DEP> DEP {};
		constexpr static RegisterField<USART1_CR3_SCARCNT> SCARCNT {};
		constexpr static RegisterField<USART1_CR3_WUS> WUS {};
		constexpr static RegisterField<USART1_CR3_WUFIE> WUFIE {};
		constexpr static RegisterField<USART1_CR3_TXFTIE> TXFTIE {};
		constexpr static RegisterField<USART1_CR3_TCBGTIE> TCBGTIE {};
		constexpr static RegisterField<USART1_CR3_RXFTCFG> RXFTCFG {};
		constexpr static RegisterField<USART1_CR3_RXFTIE> RXFTIE {};
		constexpr static RegisterField<USART1_CR3_TXFTCFG> TXFTCFG {};
	};

	struct BRR {
		DECL_REGISTER(USART1_BRR_BASE);
		constexpr static RegisterField<USART1_BRR_BRR_0_3> BRR_0_3 {};
		constexpr static RegisterField<USART1_BRR_BRR_4_15> BRR_4_15 {};
	};

	struct GTPR {
		DECL_REGISTER(USART1_GTPR_BASE);
		constexpr static RegisterField<USART1_GTPR_PSC> PSC {};
		constexpr static RegisterField<USART1_GTPR_GT> GT {};
	};

	struct RTOR {
		DECL_REGISTER(USART1_RTOR_BASE);
		constexpr static RegisterField<USART1_RTOR_RTO> RTO {};
		constexpr static RegisterField<USART1_RTOR_BLEN> BLEN {};
	};

	struct RQR {
		DECL_REGISTER(USART1_RQR_BASE);
		constexpr static RegisterField<USART1_RQR_ABRRQ> ABRRQ {};
		constexpr static RegisterField<USART1_RQR_SBKRQ> SBKRQ {};
		constexpr static RegisterField<USART1_RQR_MMRQ> MMRQ {};
		constexpr static RegisterField<USART1_RQR_RXFRQ> RXFRQ {};
		constexpr static RegisterField<USART1_RQR_TXFRQ> TXFRQ {};
	};

	struct ISR {
		DECL_REGISTER(USART1_ISR_BASE);
		constexpr static RegisterField<USART1_ISR_PE> PE {};
		constexpr static RegisterField<USART1_ISR_FE> FE {};
		constexpr static RegisterField<USART1_ISR_NF> NF {};
		constexpr static RegisterField<USART1_ISR_ORE> ORE {};
		constexpr static RegisterField<USART1_ISR_IDLE> IDLE {};
		constexpr static RegisterField<USART1_ISR_RXNE> RXNE {};
		constexpr static RegisterField<USART1_ISR_TC> TC {};
		constexpr static RegisterField<USART1_ISR_TXE> TXE {};
		constexpr static RegisterField<USART1_ISR_LBDF> LBDF {};
		constexpr static RegisterField<USART1_ISR_CTSIF> CTSIF {};
		constexpr static RegisterField<USART1_ISR_CTS> CTS {};
		constexpr static RegisterField<USART1_ISR_RTOF> RTOF {};
		constexpr static RegisterField<USART1_ISR_EOBF> EOBF {};
		constexpr static RegisterField<USART1_ISR_UDR> UDR {};
		constexpr static RegisterField<USART1_ISR_ABRE> ABRE {};
		constexpr static RegisterField<USART1_ISR_ABRF> ABRF {};
		constexpr static RegisterField<USART1_ISR_BUSY> BUSY {};
		constexpr static RegisterField<USART1_ISR_CMF> CMF {};
		constexpr static RegisterField<USART1_ISR_SBKF> SBKF {};
		constexpr static RegisterField<USART1_ISR_RWU> RWU {};
		constexpr static RegisterField<USART1_ISR_WUF> WUF {};
		constexpr static RegisterField<USART1_ISR_TEACK> TEACK {};
		constexpr static RegisterField<USART1_ISR_REACK> REACK {};
		constexpr static RegisterField<USART1_ISR_TXFE> TXFE {};
		constexpr static RegisterField<USART1_ISR_RXFF> RXFF {};
		constexpr static RegisterField<USART1_ISR_TCBGT> TCBGT {};
		constexpr static RegisterField<USART1_ISR_RXFT> RXFT {};
		constexpr static RegisterField<USART1_ISR_TXFT> TXFT {};
	};

	struct ICR {
		DECL_REGISTER(USART1_ICR_BASE);
		constexpr static RegisterField<USART1_ICR_PECF> PECF {};
		constexpr static RegisterField<USART1_ICR_FECF> FECF {};
		constexpr static RegisterField<USART1_ICR_NCF> NCF {};
		constexpr static RegisterField<USART1_ICR_ORECF> ORECF {};
		constexpr static RegisterField<USART1_ICR_IDLECF> IDLECF {};
		constexpr static RegisterField<USART1_ICR_TXFECF> TXFECF {};
		constexpr static RegisterField<USART1_ICR_TCCF> TCCF {};
		constexpr static RegisterField<USART1_ICR_TCBGTCF> TCBGTCF {};
		constexpr static RegisterField<USART1_ICR_LBDCF> LBDCF {};
		constexpr static RegisterField<USART1_ICR_CTSCF> CTSCF {};
		constexpr static RegisterField<USART1_ICR_RTOCF> RTOCF {};
		constexpr static RegisterField<USART1_ICR_EOBCF> EOBCF {};
		constexpr static RegisterField<USART1_ICR_UDRCF> UDRCF {};
		constexpr static RegisterField<USART1_ICR_CMCF> CMCF {};
		constexpr static RegisterField<USART1_ICR_WUCF> WUCF {};
	};

	struct RDR {
		DECL_REGISTER(USART1_RDR_BASE);
		constexpr static RegisterField<USART1_RDR_RDR> RDRV {};
	};

	struct TDR {
		DECL_REGISTER(USART1_TDR_BASE);
		constexpr static RegisterField<USART1_TDR_TDR> TDRV {};
	};

	struct PRESC {
		DECL_REGISTER(USART1_PRESC_BASE);
		constexpr static RegisterField<USART1_PRESC_PRESCALER> PRESCALER {};
	};

};

struct USART2 {
	struct CR1 {
		DECL_REGISTER(USART2_CR1_BASE);
		constexpr static RegisterField<USART2_CR1_UE> UE {};
		constexpr static RegisterField<USART2_CR1_UESM> UESM {};
		constexpr static RegisterField<USART2_CR1_RE> RE {};
		constexpr static RegisterField<USART2_CR1_TE> TE {};
		constexpr static RegisterField<USART2_CR1_IDLEIE> IDLEIE {};
		constexpr static RegisterField<USART2_CR1_RXNEIE> RXNEIE {};
		constexpr static RegisterField<USART2_CR1_TCIE> TCIE {};
		constexpr static RegisterField<USART2_CR1_TXEIE> TXEIE {};
		constexpr static RegisterField<USART2_CR1_PEIE> PEIE {};
		constexpr static RegisterField<USART2_CR1_PS> PS {};
		constexpr static RegisterField<USART2_CR1_PCE> PCE {};
		constexpr static RegisterField<USART2_CR1_WAKE> WAKE {};
		constexpr static RegisterField<USART2_CR1_M0> M0 {};
		constexpr static RegisterField<USART2_CR1_MME> MME {};
		constexpr static RegisterField<USART2_CR1_CMIE> CMIE {};
		constexpr static RegisterField<USART2_CR1_OVER8> OVER8 {};
		constexpr static RegisterField<USART2_CR1_DEDT> DEDT {};
		constexpr static RegisterField<USART2_CR1_DEAT> DEAT {};
		constexpr static RegisterField<USART2_CR1_RTOIE> RTOIE {};
		constexpr static RegisterField<USART2_CR1_EOBIE> EOBIE {};
		constexpr static RegisterField<USART2_CR1_M1> M1 {};
		constexpr static RegisterField<USART2_CR1_FIFOEN> FIFOEN {};
		constexpr static RegisterField<USART2_CR1_TXFEIE> TXFEIE {};
		constexpr static RegisterField<USART2_CR1_RXFFIE> RXFFIE {};
	};

	struct CR2 {
		DECL_REGISTER(USART2_CR2_BASE);
		constexpr static RegisterField<USART2_CR2_SLVEN> SLVEN {};
		constexpr static RegisterField<USART2_CR2_DIS_NSS> DIS_NSS {};
		constexpr static RegisterField<USART2_CR2_ADDM7> ADDM7 {};
		constexpr static RegisterField<USART2_CR2_LBDL> LBDL {};
		constexpr static RegisterField<USART2_CR2_LBDIE> LBDIE {};
		constexpr static RegisterField<USART2_CR2_LBCL> LBCL {};
		constexpr static RegisterField<USART2_CR2_CPHA> CPHA {};
		constexpr static RegisterField<USART2_CR2_CPOL> CPOL {};
		constexpr static RegisterField<USART2_CR2_CLKEN> CLKEN {};
		constexpr static RegisterField<USART2_CR2_STOP> STOP {};
		constexpr static RegisterField<USART2_CR2_LINEN> LINEN {};
		constexpr static RegisterField<USART2_CR2_SWAP> SWAP {};
		constexpr static RegisterField<USART2_CR2_RXINV> RXINV {};
		constexpr static RegisterField<USART2_CR2_TXINV> TXINV {};
		constexpr static RegisterField<USART2_CR2_TAINV> TAINV {};
		constexpr static RegisterField<USART2_CR2_MSBFIRST> MSBFIRST {};
		constexpr static RegisterField<USART2_CR2_ABREN> ABREN {};
		constexpr static RegisterField<USART2_CR2_ABRMOD> ABRMOD {};
		constexpr static RegisterField<USART2_CR2_RTOEN> RTOEN {};
		constexpr static RegisterField<USART2_CR2_ADD0_3> ADD0_3 {};
		constexpr static RegisterField<USART2_CR2_ADD4_7> ADD4_7 {};
	};

	struct CR3 {
		DECL_REGISTER(USART2_CR3_BASE);
		constexpr static RegisterField<USART2_CR3_EIE> EIE {};
		constexpr static RegisterField<USART2_CR3_IREN> IREN {};
		constexpr static RegisterField<USART2_CR3_IRLP> IRLP {};
		constexpr static RegisterField<USART2_CR3_HDSEL> HDSEL {};
		constexpr static RegisterField<USART2_CR3_NACK> NACK {};
		constexpr static RegisterField<USART2_CR3_SCEN> SCEN {};
		constexpr static RegisterField<USART2_CR3_DMAR> DMAR {};
		constexpr static RegisterField<USART2_CR3_DMAT> DMAT {};
		constexpr static RegisterField<USART2_CR3_RTSE> RTSE {};
		constexpr static RegisterField<USART2_CR3_CTSE> CTSE {};
		constexpr static RegisterField<USART2_CR3_CTSIE> CTSIE {};
		constexpr static RegisterField<USART2_CR3_ONEBIT> ONEBIT {};
		constexpr static RegisterField<USART2_CR3_OVRDIS> OVRDIS {};
		constexpr static RegisterField<USART2_CR3_DDRE> DDRE {};
		constexpr static RegisterField<USART2_CR3_DEM> DEM {};
		constexpr static RegisterField<USART2_CR3_DEP> DEP {};
		constexpr static RegisterField<USART2_CR3_SCARCNT> SCARCNT {};
		constexpr static RegisterField<USART2_CR3_WUS> WUS {};
		constexpr static RegisterField<USART2_CR3_WUFIE> WUFIE {};
		constexpr static RegisterField<USART2_CR3_TXFTIE> TXFTIE {};
		constexpr static RegisterField<USART2_CR3_TCBGTIE> TCBGTIE {};
		constexpr static RegisterField<USART2_CR3_RXFTCFG> RXFTCFG {};
		constexpr static RegisterField<USART2_CR3_RXFTIE> RXFTIE {};
		constexpr static RegisterField<USART2_CR3_TXFTCFG> TXFTCFG {};
	};

	struct BRR {
		DECL_REGISTER(USART2_BRR_BASE);
		constexpr static RegisterField<USART2_BRR_BRR_0_3> BRR_0_3 {};
		constexpr static RegisterField<USART2_BRR_BRR_4_15> BRR_4_15 {};
	};

	struct GTPR {
		DECL_REGISTER(USART2_GTPR_BASE);
		constexpr static RegisterField<USART2_GTPR_PSC> PSC {};
		constexpr static RegisterField<USART2_GTPR_GT> GT {};
	};

	struct RTOR {
		DECL_REGISTER(USART2_RTOR_BASE);
		constexpr static RegisterField<USART2_RTOR_RTO> RTO {};
		constexpr static RegisterField<USART2_RTOR_BLEN> BLEN {};
	};

	struct RQR {
		DECL_REGISTER(USART2_RQR_BASE);
		constexpr static RegisterField<USART2_RQR_ABRRQ> ABRRQ {};
		constexpr static RegisterField<USART2_RQR_SBKRQ> SBKRQ {};
		constexpr static RegisterField<USART2_RQR_MMRQ> MMRQ {};
		constexpr static RegisterField<USART2_RQR_RXFRQ> RXFRQ {};
		constexpr static RegisterField<USART2_RQR_TXFRQ> TXFRQ {};
	};

	struct ISR {
		DECL_REGISTER(USART2_ISR_BASE);
		constexpr static RegisterField<USART2_ISR_PE> PE {};
		constexpr static RegisterField<USART2_ISR_FE> FE {};
		constexpr static RegisterField<USART2_ISR_NF> NF {};
		constexpr static RegisterField<USART2_ISR_ORE> ORE {};
		constexpr static RegisterField<USART2_ISR_IDLE> IDLE {};
		constexpr static RegisterField<USART2_ISR_RXNE> RXNE {};
		constexpr static RegisterField<USART2_ISR_TC> TC {};
		constexpr static RegisterField<USART2_ISR_TXE> TXE {};
		constexpr static RegisterField<USART2_ISR_LBDF> LBDF {};
		constexpr static RegisterField<USART2_ISR_CTSIF> CTSIF {};
		constexpr static RegisterField<USART2_ISR_CTS> CTS {};
		constexpr static RegisterField<USART2_ISR_RTOF> RTOF {};
		constexpr static RegisterField<USART2_ISR_EOBF> EOBF {};
		constexpr static RegisterField<USART2_ISR_UDR> UDR {};
		constexpr static RegisterField<USART2_ISR_ABRE> ABRE {};
		constexpr static RegisterField<USART2_ISR_ABRF> ABRF {};
		constexpr static RegisterField<USART2_ISR_BUSY> BUSY {};
		constexpr static RegisterField<USART2_ISR_CMF> CMF {};
		constexpr static RegisterField<USART2_ISR_SBKF> SBKF {};
		constexpr static RegisterField<USART2_ISR_RWU> RWU {};
		constexpr static RegisterField<USART2_ISR_WUF> WUF {};
		constexpr static RegisterField<USART2_ISR_TEACK> TEACK {};
		constexpr static RegisterField<USART2_ISR_REACK> REACK {};
		constexpr static RegisterField<USART2_ISR_TXFE> TXFE {};
		constexpr static RegisterField<USART2_ISR_RXFF> RXFF {};
		constexpr static RegisterField<USART2_ISR_TCBGT> TCBGT {};
		constexpr static RegisterField<USART2_ISR_RXFT> RXFT {};
		constexpr static RegisterField<USART2_ISR_TXFT> TXFT {};
	};

	struct ICR {
		DECL_REGISTER(USART2_ICR_BASE);
		constexpr static RegisterField<USART2_ICR_PECF> PECF {};
		constexpr static RegisterField<USART2_ICR_FECF> FECF {};
		constexpr static RegisterField<USART2_ICR_NCF> NCF {};
		constexpr static RegisterField<USART2_ICR_ORECF> ORECF {};
		constexpr static RegisterField<USART2_ICR_IDLECF> IDLECF {};
		constexpr static RegisterField<USART2_ICR_TXFECF> TXFECF {};
		constexpr static RegisterField<USART2_ICR_TCCF> TCCF {};
		constexpr static RegisterField<USART2_ICR_TCBGTCF> TCBGTCF {};
		constexpr static RegisterField<USART2_ICR_LBDCF> LBDCF {};
		constexpr static RegisterField<USART2_ICR_CTSCF> CTSCF {};
		constexpr static RegisterField<USART2_ICR_RTOCF> RTOCF {};
		constexpr static RegisterField<USART2_ICR_EOBCF> EOBCF {};
		constexpr static RegisterField<USART2_ICR_UDRCF> UDRCF {};
		constexpr static RegisterField<USART2_ICR_CMCF> CMCF {};
		constexpr static RegisterField<USART2_ICR_WUCF> WUCF {};
	};

	struct RDR {
		DECL_REGISTER(USART2_RDR_BASE);
		constexpr static RegisterField<USART2_RDR_RDR> RDRV {};
	};

	struct TDR {
		DECL_REGISTER(USART2_TDR_BASE);
		constexpr static RegisterField<USART2_TDR_TDR> TDRV {};
	};

	struct PRESC {
		DECL_REGISTER(USART2_PRESC_BASE);
		constexpr static RegisterField<USART2_PRESC_PRESCALER> PRESCALER {};
	};

};

struct SPI1 {
	struct CR1 {
		DECL_REGISTER(SPI1_CR1_BASE);
		constexpr static RegisterField<SPI1_CR1_CPHA> CPHA {};
		constexpr static RegisterField<SPI1_CR1_CPOL> CPOL {};
		constexpr static RegisterField<SPI1_CR1_MSTR> MSTR {};
		constexpr static RegisterField<SPI1_CR1_BR> BR {};
		constexpr static RegisterField<SPI1_CR1_SPE> SPE {};
		constexpr static RegisterField<SPI1_CR1_LSBFIRST> LSBFIRST {};
		constexpr static RegisterField<SPI1_CR1_SSI> SSI {};
		constexpr static RegisterField<SPI1_CR1_SSM> SSM {};
		constexpr static RegisterField<SPI1_CR1_RXONLY> RXONLY {};
		constexpr static RegisterField<SPI1_CR1_DFF> DFF {};
		constexpr static RegisterField<SPI1_CR1_CRCNEXT> CRCNEXT {};
		constexpr static RegisterField<SPI1_CR1_CRCEN> CRCEN {};
		constexpr static RegisterField<SPI1_CR1_BIDIOE> BIDIOE {};
		constexpr static RegisterField<SPI1_CR1_BIDIMODE> BIDIMODE {};
	};

	struct CR2 {
		DECL_REGISTER(SPI1_CR2_BASE);
		constexpr static RegisterField<SPI1_CR2_RXDMAEN> RXDMAEN {};
		constexpr static RegisterField<SPI1_CR2_TXDMAEN> TXDMAEN {};
		constexpr static RegisterField<SPI1_CR2_SSOE> SSOE {};
		constexpr static RegisterField<SPI1_CR2_NSSP> NSSP {};
		constexpr static RegisterField<SPI1_CR2_FRF> FRF {};
		constexpr static RegisterField<SPI1_CR2_ERRIE> ERRIE {};
		constexpr static RegisterField<SPI1_CR2_RXNEIE> RXNEIE {};
		constexpr static RegisterField<SPI1_CR2_TXEIE> TXEIE {};
		constexpr static RegisterField<SPI1_CR2_DS> DS {};
		constexpr static RegisterField<SPI1_CR2_FRXTH> FRXTH {};
		constexpr static RegisterField<SPI1_CR2_LDMA_RX> LDMA_RX {};
		constexpr static RegisterField<SPI1_CR2_LDMA_TX> LDMA_TX {};
	};

	struct SR {
		DECL_REGISTER(SPI1_SR_BASE);
		constexpr static RegisterField<SPI1_SR_RXNE> RXNE {};
		constexpr static RegisterField<SPI1_SR_TXE> TXE {};
		constexpr static RegisterField<SPI1_SR_CHSIDE> CHSIDE {};
		constexpr static RegisterField<SPI1_SR_UDR> UDR {};
		constexpr static RegisterField<SPI1_SR_CRCERR> CRCERR {};
		constexpr static RegisterField<SPI1_SR_MODF> MODF {};
		constexpr static RegisterField<SPI1_SR_OVR> OVR {};
		constexpr static RegisterField<SPI1_SR_BSY> BSY {};
		constexpr static RegisterField<SPI1_SR_TIFRFE> TIFRFE {};
		constexpr static RegisterField<SPI1_SR_FRLVL> FRLVL {};
		constexpr static RegisterField<SPI1_SR_FTLVL> FTLVL {};
	};

	struct DR {
		DECL_REGISTER(SPI1_DR_BASE);
		constexpr static RegisterField<SPI1_DR_DR> DRV {};
	};

	struct CRCPR {
		DECL_REGISTER(SPI1_CRCPR_BASE);
		constexpr static RegisterField<SPI1_CRCPR_CRCPOLY> CRCPOLY {};
	};

	struct RXCRCR {
		DECL_REGISTER(SPI1_RXCRCR_BASE);
		constexpr static RegisterField<SPI1_RXCRCR_RxCRC> RxCRC {};
	};

	struct TXCRCR {
		DECL_REGISTER(SPI1_TXCRCR_BASE);
		constexpr static RegisterField<SPI1_TXCRCR_TxCRC> TxCRC {};
	};

	struct I2SCFGR {
		DECL_REGISTER(SPI1_I2SCFGR_BASE);
		constexpr static RegisterField<SPI1_I2SCFGR_CHLEN> CHLEN {};
		constexpr static RegisterField<SPI1_I2SCFGR_DATLEN> DATLEN {};
		constexpr static RegisterField<SPI1_I2SCFGR_CKPOL> CKPOL {};
		constexpr static RegisterField<SPI1_I2SCFGR_I2SSTD> I2SSTD {};
		constexpr static RegisterField<SPI1_I2SCFGR_PCMSYNC> PCMSYNC {};
		constexpr static RegisterField<SPI1_I2SCFGR_I2SCFG> I2SCFG {};
		constexpr static RegisterField<SPI1_I2SCFGR_SE2> SE2 {};
		constexpr static RegisterField<SPI1_I2SCFGR_I2SMOD> I2SMOD {};
	};

	struct I2SPR {
		DECL_REGISTER(SPI1_I2SPR_BASE);
		constexpr static RegisterField<SPI1_I2SPR_I2SDIV> I2SDIV {};
		constexpr static RegisterField<SPI1_I2SPR_ODD> ODD {};
		constexpr static RegisterField<SPI1_I2SPR_MCKOE> MCKOE {};
	};

};

struct SPI2 {
	struct CR1 {
		DECL_REGISTER(SPI2_CR1_BASE);
		constexpr static RegisterField<SPI2_CR1_CPHA> CPHA {};
		constexpr static RegisterField<SPI2_CR1_CPOL> CPOL {};
		constexpr static RegisterField<SPI2_CR1_MSTR> MSTR {};
		constexpr static RegisterField<SPI2_CR1_BR> BR {};
		constexpr static RegisterField<SPI2_CR1_SPE> SPE {};
		constexpr static RegisterField<SPI2_CR1_LSBFIRST> LSBFIRST {};
		constexpr static RegisterField<SPI2_CR1_SSI> SSI {};
		constexpr static RegisterField<SPI2_CR1_SSM> SSM {};
		constexpr static RegisterField<SPI2_CR1_RXONLY> RXONLY {};
		constexpr static RegisterField<SPI2_CR1_DFF> DFF {};
		constexpr static RegisterField<SPI2_CR1_CRCNEXT> CRCNEXT {};
		constexpr static RegisterField<SPI2_CR1_CRCEN> CRCEN {};
		constexpr static RegisterField<SPI2_CR1_BIDIOE> BIDIOE {};
		constexpr static RegisterField<SPI2_CR1_BIDIMODE> BIDIMODE {};
	};

	struct CR2 {
		DECL_REGISTER(SPI2_CR2_BASE);
		constexpr static RegisterField<SPI2_CR2_RXDMAEN> RXDMAEN {};
		constexpr static RegisterField<SPI2_CR2_TXDMAEN> TXDMAEN {};
		constexpr static RegisterField<SPI2_CR2_SSOE> SSOE {};
		constexpr static RegisterField<SPI2_CR2_NSSP> NSSP {};
		constexpr static RegisterField<SPI2_CR2_FRF> FRF {};
		constexpr static RegisterField<SPI2_CR2_ERRIE> ERRIE {};
		constexpr static RegisterField<SPI2_CR2_RXNEIE> RXNEIE {};
		constexpr static RegisterField<SPI2_CR2_TXEIE> TXEIE {};
		constexpr static RegisterField<SPI2_CR2_DS> DS {};
		constexpr static RegisterField<SPI2_CR2_FRXTH> FRXTH {};
		constexpr static RegisterField<SPI2_CR2_LDMA_RX> LDMA_RX {};
		constexpr static RegisterField<SPI2_CR2_LDMA_TX> LDMA_TX {};
	};

	struct SR {
		DECL_REGISTER(SPI2_SR_BASE);
		constexpr static RegisterField<SPI2_SR_RXNE> RXNE {};
		constexpr static RegisterField<SPI2_SR_TXE> TXE {};
		constexpr static RegisterField<SPI2_SR_CHSIDE> CHSIDE {};
		constexpr static RegisterField<SPI2_SR_UDR> UDR {};
		constexpr static RegisterField<SPI2_SR_CRCERR> CRCERR {};
		constexpr static RegisterField<SPI2_SR_MODF> MODF {};
		constexpr static RegisterField<SPI2_SR_OVR> OVR {};
		constexpr static RegisterField<SPI2_SR_BSY> BSY {};
		constexpr static RegisterField<SPI2_SR_TIFRFE> TIFRFE {};
		constexpr static RegisterField<SPI2_SR_FRLVL> FRLVL {};
		constexpr static RegisterField<SPI2_SR_FTLVL> FTLVL {};
	};

	struct DR {
		DECL_REGISTER(SPI2_DR_BASE);
		constexpr static RegisterField<SPI2_DR_DR> DRV {};
	};

	struct CRCPR {
		DECL_REGISTER(SPI2_CRCPR_BASE);
		constexpr static RegisterField<SPI2_CRCPR_CRCPOLY> CRCPOLY {};
	};

	struct RXCRCR {
		DECL_REGISTER(SPI2_RXCRCR_BASE);
		constexpr static RegisterField<SPI2_RXCRCR_RxCRC> RxCRC {};
	};

	struct TXCRCR {
		DECL_REGISTER(SPI2_TXCRCR_BASE);
		constexpr static RegisterField<SPI2_TXCRCR_TxCRC> TxCRC {};
	};

	struct I2SCFGR {
		DECL_REGISTER(SPI2_I2SCFGR_BASE);
		constexpr static RegisterField<SPI2_I2SCFGR_CHLEN> CHLEN {};
		constexpr static RegisterField<SPI2_I2SCFGR_DATLEN> DATLEN {};
		constexpr static RegisterField<SPI2_I2SCFGR_CKPOL> CKPOL {};
		constexpr static RegisterField<SPI2_I2SCFGR_I2SSTD> I2SSTD {};
		constexpr static RegisterField<SPI2_I2SCFGR_PCMSYNC> PCMSYNC {};
		constexpr static RegisterField<SPI2_I2SCFGR_I2SCFG> I2SCFG {};
		constexpr static RegisterField<SPI2_I2SCFGR_SE2> SE2 {};
		constexpr static RegisterField<SPI2_I2SCFGR_I2SMOD> I2SMOD {};
	};

	struct I2SPR {
		DECL_REGISTER(SPI2_I2SPR_BASE);
		constexpr static RegisterField<SPI2_I2SPR_I2SDIV> I2SDIV {};
		constexpr static RegisterField<SPI2_I2SPR_ODD> ODD {};
		constexpr static RegisterField<SPI2_I2SPR_MCKOE> MCKOE {};
	};

};

struct TIM1 {
	struct CR1 {
		DECL_REGISTER(TIM1_CR1_BASE);
		constexpr static RegisterField<TIM1_CR1_CEN> CEN {};
		constexpr static RegisterField<TIM1_CR1_UDIS> UDIS {};
		constexpr static RegisterField<TIM1_CR1_URS> URS {};
		constexpr static RegisterField<TIM1_CR1_OPM> OPM {};
		constexpr static RegisterField<TIM1_CR1_DIR> DIR {};
		constexpr static RegisterField<TIM1_CR1_CMS> CMS {};
		constexpr static RegisterField<TIM1_CR1_ARPE> ARPE {};
		constexpr static RegisterField<TIM1_CR1_CKD> CKD {};
		constexpr static RegisterField<TIM1_CR1_UIFREMAP> UIFREMAP {};
	};

	struct CR2 {
		DECL_REGISTER(TIM1_CR2_BASE);
		constexpr static RegisterField<TIM1_CR2_CCPC> CCPC {};
		constexpr static RegisterField<TIM1_CR2_CCUS> CCUS {};
		constexpr static RegisterField<TIM1_CR2_CCDS> CCDS {};
		constexpr static RegisterField<TIM1_CR2_MMS> MMS {};
		constexpr static RegisterField<TIM1_CR2_TI1S> TI1S {};
		constexpr static RegisterField<TIM1_CR2_OIS1> OIS1 {};
		constexpr static RegisterField<TIM1_CR2_OIS1N> OIS1N {};
		constexpr static RegisterField<TIM1_CR2_OIS2> OIS2 {};
		constexpr static RegisterField<TIM1_CR2_OIS2N> OIS2N {};
		constexpr static RegisterField<TIM1_CR2_OIS3> OIS3 {};
		constexpr static RegisterField<TIM1_CR2_OIS3N> OIS3N {};
		constexpr static RegisterField<TIM1_CR2_OIS4> OIS4 {};
		constexpr static RegisterField<TIM1_CR2_OIS5> OIS5 {};
		constexpr static RegisterField<TIM1_CR2_OIS6> OIS6 {};
		constexpr static RegisterField<TIM1_CR2_MMS2> MMS2 {};
	};

	struct SMCR {
		DECL_REGISTER(TIM1_SMCR_BASE);
		constexpr static RegisterField<TIM1_SMCR_SMS> SMS {};
		constexpr static RegisterField<TIM1_SMCR_OCCS> OCCS {};
		constexpr static RegisterField<TIM1_SMCR_TS_4> TS_4 {};
		constexpr static RegisterField<TIM1_SMCR_MSM> MSM {};
		constexpr static RegisterField<TIM1_SMCR_ETF> ETF {};
		constexpr static RegisterField<TIM1_SMCR_ETPS> ETPS {};
		constexpr static RegisterField<TIM1_SMCR_ECE> ECE {};
		constexpr static RegisterField<TIM1_SMCR_ETP> ETP {};
		constexpr static RegisterField<TIM1_SMCR_SMS_3> SMS_3 {};
		constexpr static RegisterField<TIM1_SMCR_TS> TS {};
	};

	struct DIER {
		DECL_REGISTER(TIM1_DIER_BASE);
		constexpr static RegisterField<TIM1_DIER_UIE> UIE {};
		constexpr static RegisterField<TIM1_DIER_CC1IE> CC1IE {};
		constexpr static RegisterField<TIM1_DIER_CC2IE> CC2IE {};
		constexpr static RegisterField<TIM1_DIER_CC3IE> CC3IE {};
		constexpr static RegisterField<TIM1_DIER_CC4IE> CC4IE {};
		constexpr static RegisterField<TIM1_DIER_COMIE> COMIE {};
		constexpr static RegisterField<TIM1_DIER_TIE> TIE {};
		constexpr static RegisterField<TIM1_DIER_BIE> BIE {};
		constexpr static RegisterField<TIM1_DIER_UDE> UDE {};
		constexpr static RegisterField<TIM1_DIER_CC1DE> CC1DE {};
		constexpr static RegisterField<TIM1_DIER_CC2DE> CC2DE {};
		constexpr static RegisterField<TIM1_DIER_CC3DE> CC3DE {};
		constexpr static RegisterField<TIM1_DIER_CC4DE> CC4DE {};
		constexpr static RegisterField<TIM1_DIER_COMDE> COMDE {};
		constexpr static RegisterField<TIM1_DIER_TDE> TDE {};
	};

	struct SR {
		DECL_REGISTER(TIM1_SR_BASE);
		constexpr static RegisterField<TIM1_SR_UIF> UIF {};
		constexpr static RegisterField<TIM1_SR_CC1IF> CC1IF {};
		constexpr static RegisterField<TIM1_SR_CC2IF> CC2IF {};
		constexpr static RegisterField<TIM1_SR_CC3IF> CC3IF {};
		constexpr static RegisterField<TIM1_SR_CC4IF> CC4IF {};
		constexpr static RegisterField<TIM1_SR_COMIF> COMIF {};
		constexpr static RegisterField<TIM1_SR_TIF> TIF {};
		constexpr static RegisterField<TIM1_SR_BIF> BIF {};
		constexpr static RegisterField<TIM1_SR_B2IF> B2IF {};
		constexpr static RegisterField<TIM1_SR_CC1OF> CC1OF {};
		constexpr static RegisterField<TIM1_SR_CC2OF> CC2OF {};
		constexpr static RegisterField<TIM1_SR_CC3OF> CC3OF {};
		constexpr static RegisterField<TIM1_SR_CC4OF> CC4OF {};
		constexpr static RegisterField<TIM1_SR_SBIF> SBIF {};
		constexpr static RegisterField<TIM1_SR_CC5IF> CC5IF {};
		constexpr static RegisterField<TIM1_SR_CC6IF> CC6IF {};
	};

	struct EGR {
		DECL_REGISTER(TIM1_EGR_BASE);
		constexpr static RegisterField<TIM1_EGR_UG> UG {};
		constexpr static RegisterField<TIM1_EGR_CC1G> CC1G {};
		constexpr static RegisterField<TIM1_EGR_CC2G> CC2G {};
		constexpr static RegisterField<TIM1_EGR_CC3G> CC3G {};
		constexpr static RegisterField<TIM1_EGR_CC4G> CC4G {};
		constexpr static RegisterField<TIM1_EGR_COMG> COMG {};
		constexpr static RegisterField<TIM1_EGR_TG> TG {};
		constexpr static RegisterField<TIM1_EGR_BG> BG {};
		constexpr static RegisterField<TIM1_EGR_B2G> B2G {};
	};

	struct CCMR1_Output {
		DECL_REGISTER(TIM1_CCMR1_Output_BASE);
		constexpr static RegisterField<TIM1_CCMR1_Output_CC1S> CC1S {};
		constexpr static RegisterField<TIM1_CCMR1_Output_OC1FE> OC1FE {};
		constexpr static RegisterField<TIM1_CCMR1_Output_OC1PE> OC1PE {};
		constexpr static RegisterField<TIM1_CCMR1_Output_OC1M> OC1M {};
		constexpr static RegisterField<TIM1_CCMR1_Output_OC1CE> OC1CE {};
		constexpr static RegisterField<TIM1_CCMR1_Output_CC2S> CC2S {};
		constexpr static RegisterField<TIM1_CCMR1_Output_OC2FE> OC2FE {};
		constexpr static RegisterField<TIM1_CCMR1_Output_OC2PE> OC2PE {};
		constexpr static RegisterField<TIM1_CCMR1_Output_OC2M> OC2M {};
		constexpr static RegisterField<TIM1_CCMR1_Output_OC2CE> OC2CE {};
		constexpr static RegisterField<TIM1_CCMR1_Output_OC1M_3> OC1M_3 {};
		constexpr static RegisterField<TIM1_CCMR1_Output_OC2M_3> OC2M_3 {};
	};

	struct CCMR1_Input {
		DECL_REGISTER(TIM1_CCMR1_Input_BASE);
		constexpr static RegisterField<TIM1_CCMR1_Input_CC1S> CC1S {};
		constexpr static RegisterField<TIM1_CCMR1_Input_OC1FE> OC1FE {};
		constexpr static RegisterField<TIM1_CCMR1_Input_OC1PE> OC1PE {};
		constexpr static RegisterField<TIM1_CCMR1_Input_OC1M> OC1M {};
		constexpr static RegisterField<TIM1_CCMR1_Input_OC1CE> OC1CE {};
		constexpr static RegisterField<TIM1_CCMR1_Input_CC2S> CC2S {};
		constexpr static RegisterField<TIM1_CCMR1_Input_OC2FE> OC2FE {};
		constexpr static RegisterField<TIM1_CCMR1_Input_OC2PE> OC2PE {};
		constexpr static RegisterField<TIM1_CCMR1_Input_OC2M> OC2M {};
		constexpr static RegisterField<TIM1_CCMR1_Input_OC2CE> OC2CE {};
	};

	struct CCMR2_Output {
		DECL_REGISTER(TIM1_CCMR2_Output_BASE);
		constexpr static RegisterField<TIM1_CCMR2_Output_CC3S> CC3S {};
		constexpr static RegisterField<TIM1_CCMR2_Output_OC3FE> OC3FE {};
		constexpr static RegisterField<TIM1_CCMR2_Output_OC3PE> OC3PE {};
		constexpr static RegisterField<TIM1_CCMR2_Output_OC3M> OC3M {};
		constexpr static RegisterField<TIM1_CCMR2_Output_OC3CE> OC3CE {};
		constexpr static RegisterField<TIM1_CCMR2_Output_CC4S> CC4S {};
		constexpr static RegisterField<TIM1_CCMR2_Output_OC4FE> OC4FE {};
		constexpr static RegisterField<TIM1_CCMR2_Output_OC4PE> OC4PE {};
		constexpr static RegisterField<TIM1_CCMR2_Output_OC4M> OC4M {};
		constexpr static RegisterField<TIM1_CCMR2_Output_OC4CE> OC4CE {};
		constexpr static RegisterField<TIM1_CCMR2_Output_OC3M_3> OC3M_3 {};
		constexpr static RegisterField<TIM1_CCMR2_Output_OC4M_3> OC4M_3 {};
	};

	struct CCMR2_Input {
		DECL_REGISTER(TIM1_CCMR2_Input_BASE);
		constexpr static RegisterField<TIM1_CCMR2_Input_CC3S> CC3S {};
		constexpr static RegisterField<TIM1_CCMR2_Input_OC3FE> OC3FE {};
		constexpr static RegisterField<TIM1_CCMR2_Input_OC3PE> OC3PE {};
		constexpr static RegisterField<TIM1_CCMR2_Input_OC3M> OC3M {};
		constexpr static RegisterField<TIM1_CCMR2_Input_OC3CE> OC3CE {};
		constexpr static RegisterField<TIM1_CCMR2_Input_CC4S> CC4S {};
		constexpr static RegisterField<TIM1_CCMR2_Input_OC4FE> OC4FE {};
		constexpr static RegisterField<TIM1_CCMR2_Input_OC4PE> OC4PE {};
		constexpr static RegisterField<TIM1_CCMR2_Input_OC4M> OC4M {};
		constexpr static RegisterField<TIM1_CCMR2_Input_OC4CE> OC4CE {};
	};

	struct CCER {
		DECL_REGISTER(TIM1_CCER_BASE);
		constexpr static RegisterField<TIM1_CCER_CC1E> CC1E {};
		constexpr static RegisterField<TIM1_CCER_CC1P> CC1P {};
		constexpr static RegisterField<TIM1_CCER_CC1NE> CC1NE {};
		constexpr static RegisterField<TIM1_CCER_CC1NP> CC1NP {};
		constexpr static RegisterField<TIM1_CCER_CC2E> CC2E {};
		constexpr static RegisterField<TIM1_CCER_CC2P> CC2P {};
		constexpr static RegisterField<TIM1_CCER_CC2NE> CC2NE {};
		constexpr static RegisterField<TIM1_CCER_CC2NP> CC2NP {};
		constexpr static RegisterField<TIM1_CCER_CC3E> CC3E {};
		constexpr static RegisterField<TIM1_CCER_CC3P> CC3P {};
		constexpr static RegisterField<TIM1_CCER_CC3NE> CC3NE {};
		constexpr static RegisterField<TIM1_CCER_CC3NP> CC3NP {};
		constexpr static RegisterField<TIM1_CCER_CC4E> CC4E {};
		constexpr static RegisterField<TIM1_CCER_CC4P> CC4P {};
		constexpr static RegisterField<TIM1_CCER_CC4NP> CC4NP {};
		constexpr static RegisterField<TIM1_CCER_CC5E> CC5E {};
		constexpr static RegisterField<TIM1_CCER_CC5P> CC5P {};
		constexpr static RegisterField<TIM1_CCER_CC6E> CC6E {};
		constexpr static RegisterField<TIM1_CCER_CC6P> CC6P {};
	};

	struct CNT {
		DECL_REGISTER(TIM1_CNT_BASE);
		constexpr static RegisterField<TIM1_CNT_CNT> CNTV {};
		constexpr static RegisterField<TIM1_CNT_UIFCPY> UIFCPY {};
	};

	struct PSC {
		DECL_REGISTER(TIM1_PSC_BASE);
		constexpr static RegisterField<TIM1_PSC_PSC> PSCV {};
	};

	struct ARR {
		DECL_REGISTER(TIM1_ARR_BASE);
		constexpr static RegisterField<TIM1_ARR_ARR> ARRV {};
	};

	struct RCR {
		DECL_REGISTER(TIM1_RCR_BASE);
		constexpr static RegisterField<TIM1_RCR_REP> REP {};
	};

	struct CCR1 {
		DECL_REGISTER(TIM1_CCR1_BASE);
		constexpr static RegisterField<TIM1_CCR1_CCR1> CCR1V {};
	};

	struct CCR2 {
		DECL_REGISTER(TIM1_CCR2_BASE);
		constexpr static RegisterField<TIM1_CCR2_CCR2> CCR2V {};
	};

	struct CCR3 {
		DECL_REGISTER(TIM1_CCR3_BASE);
		constexpr static RegisterField<TIM1_CCR3_CCR3> CCR3V {};
	};

	struct CCR4 {
		DECL_REGISTER(TIM1_CCR4_BASE);
		constexpr static RegisterField<TIM1_CCR4_CCR4> CCR4V {};
	};

	struct BDTR {
		DECL_REGISTER(TIM1_BDTR_BASE);
		constexpr static RegisterField<TIM1_BDTR_DTG> DTG {};
		constexpr static RegisterField<TIM1_BDTR_LOCK> LOCK {};
		constexpr static RegisterField<TIM1_BDTR_OSSI> OSSI {};
		constexpr static RegisterField<TIM1_BDTR_OSSR> OSSR {};
		constexpr static RegisterField<TIM1_BDTR_BKE> BKE {};
		constexpr static RegisterField<TIM1_BDTR_BKP> BKP {};
		constexpr static RegisterField<TIM1_BDTR_AOE> AOE {};
		constexpr static RegisterField<TIM1_BDTR_MOE> MOE {};
		constexpr static RegisterField<TIM1_BDTR_BKF> BKF {};
		constexpr static RegisterField<TIM1_BDTR_BK2F> BK2F {};
		constexpr static RegisterField<TIM1_BDTR_BK2E> BK2E {};
		constexpr static RegisterField<TIM1_BDTR_BK2P> BK2P {};
		constexpr static RegisterField<TIM1_BDTR_BKDSRM> BKDSRM {};
		constexpr static RegisterField<TIM1_BDTR_BK2DSRM> BK2DSRM {};
		constexpr static RegisterField<TIM1_BDTR_BKBID> BKBID {};
		constexpr static RegisterField<TIM1_BDTR_BK2ID> BK2ID {};
	};

	struct DCR {
		DECL_REGISTER(TIM1_DCR_BASE);
		constexpr static RegisterField<TIM1_DCR_DBA> DBA {};
		constexpr static RegisterField<TIM1_DCR_DBL> DBL {};
	};

	struct DMAR {
		DECL_REGISTER(TIM1_DMAR_BASE);
		constexpr static RegisterField<TIM1_DMAR_DMAB> DMAB {};
	};

	struct OR1 {
		DECL_REGISTER(TIM1_OR1_BASE);
		constexpr static RegisterField<TIM1_OR1_OCREF_CLR> OCREF_CLR {};
	};

	struct CCMR3_Output {
		DECL_REGISTER(TIM1_CCMR3_Output_BASE);
		constexpr static RegisterField<TIM1_CCMR3_Output_OC5FE> OC5FE {};
		constexpr static RegisterField<TIM1_CCMR3_Output_OC5PE> OC5PE {};
		constexpr static RegisterField<TIM1_CCMR3_Output_OC5M> OC5M {};
		constexpr static RegisterField<TIM1_CCMR3_Output_OC5CE> OC5CE {};
		constexpr static RegisterField<TIM1_CCMR3_Output_OC6FE> OC6FE {};
		constexpr static RegisterField<TIM1_CCMR3_Output_OC6PE> OC6PE {};
		constexpr static RegisterField<TIM1_CCMR3_Output_OC6M> OC6M {};
		constexpr static RegisterField<TIM1_CCMR3_Output_OC6CE> OC6CE {};
		constexpr static RegisterField<TIM1_CCMR3_Output_OC5M_bit3> OC5M_bit3 {};
		constexpr static RegisterField<TIM1_CCMR3_Output_OC6M_bit3> OC6M_bit3 {};
	};

	struct CCR5 {
		DECL_REGISTER(TIM1_CCR5_BASE);
		constexpr static RegisterField<TIM1_CCR5_CCR5> CCR5V {};
		constexpr static RegisterField<TIM1_CCR5_GC5C1> GC5C1 {};
		constexpr static RegisterField<TIM1_CCR5_GC5C2> GC5C2 {};
		constexpr static RegisterField<TIM1_CCR5_GC5C3> GC5C3 {};
	};

	struct CCR6 {
		DECL_REGISTER(TIM1_CCR6_BASE);
		constexpr static RegisterField<TIM1_CCR6_CCR6> CCR6V {};
	};

	struct AF1 {
		DECL_REGISTER(TIM1_AF1_BASE);
		constexpr static RegisterField<TIM1_AF1_BKINE> BKINE {};
		constexpr static RegisterField<TIM1_AF1_BKCMP1E> BKCMP1E {};
		constexpr static RegisterField<TIM1_AF1_BKCMP2E> BKCMP2E {};
		constexpr static RegisterField<TIM1_AF1_BKINP> BKINP {};
		constexpr static RegisterField<TIM1_AF1_BKCMP1P> BKCMP1P {};
		constexpr static RegisterField<TIM1_AF1_BKCMP2P> BKCMP2P {};
		constexpr static RegisterField<TIM1_AF1_ETRSEL> ETRSEL {};
	};

	struct AF2 {
		DECL_REGISTER(TIM1_AF2_BASE);
		constexpr static RegisterField<TIM1_AF2_BK2INE> BK2INE {};
		constexpr static RegisterField<TIM1_AF2_BK2CMP1E> BK2CMP1E {};
		constexpr static RegisterField<TIM1_AF2_BK2CMP2E> BK2CMP2E {};
		constexpr static RegisterField<TIM1_AF2_BK2DFBK0E> BK2DFBK0E {};
		constexpr static RegisterField<TIM1_AF2_BK2INP> BK2INP {};
		constexpr static RegisterField<TIM1_AF2_BK2CMP1P> BK2CMP1P {};
		constexpr static RegisterField<TIM1_AF2_BK2CMP2P> BK2CMP2P {};
	};

	struct TISEL {
		DECL_REGISTER(TIM1_TISEL_BASE);
		constexpr static RegisterField<TIM1_TISEL_TI1SEL3_0> TI1SEL3_0 {};
		constexpr static RegisterField<TIM1_TISEL_TI2SEL3_0> TI2SEL3_0 {};
		constexpr static RegisterField<TIM1_TISEL_TI3SEL3_0> TI3SEL3_0 {};
		constexpr static RegisterField<TIM1_TISEL_TI4SEL3_0> TI4SEL3_0 {};
	};

};

struct SYSCFG {
	struct CFGR1 {
		DECL_REGISTER(SYSCFG_CFGR1_BASE);
		constexpr static RegisterField<SYSCFG_CFGR1_MEM_MODE> MEM_MODE {};
		constexpr static RegisterField<SYSCFG_CFGR1_PA11_RMP> PA11_RMP {};
		constexpr static RegisterField<SYSCFG_CFGR1_PA12_RMP> PA12_RMP {};
		constexpr static RegisterField<SYSCFG_CFGR1_IR_POL> IR_POL {};
		constexpr static RegisterField<SYSCFG_CFGR1_IR_MOD> IR_MOD {};
		constexpr static RegisterField<SYSCFG_CFGR1_BOOSTEN> BOOSTEN {};
		constexpr static RegisterField<SYSCFG_CFGR1_UCPD1_STROBE> UCPD1_STROBE {};
		constexpr static RegisterField<SYSCFG_CFGR1_UCPD2_STROBE> UCPD2_STROBE {};
		constexpr static RegisterField<SYSCFG_CFGR1_I2C_PBx_FMP> I2C_PBx_FMP {};
		constexpr static RegisterField<SYSCFG_CFGR1_I2C_PB7_FMP> I2C_PB7_FMP {};
		constexpr static RegisterField<SYSCFG_CFGR1_I2C_PB8_FMP> I2C_PB8_FMP {};
		constexpr static RegisterField<SYSCFG_CFGR1_I2C_PB9_FMP> I2C_PB9_FMP {};
		constexpr static RegisterField<SYSCFG_CFGR1_I2C1_FMP> I2C1_FMP {};
		constexpr static RegisterField<SYSCFG_CFGR1_I2C2_FMP> I2C2_FMP {};
		constexpr static RegisterField<SYSCFG_CFGR1_I2C_PA9_FMP> I2C_PA9_FMP {};
		constexpr static RegisterField<SYSCFG_CFGR1_I2C_PA10_FMP> I2C_PA10_FMP {};
		constexpr static RegisterField<SYSCFG_CFGR1_I2C3_FMP> I2C3_FMP {};
	};

	struct CFGR2 {
		DECL_REGISTER(SYSCFG_CFGR2_BASE);
		constexpr static RegisterField<SYSCFG_CFGR2_LOCKUP_LOCK> LOCKUP_LOCK {};
		constexpr static RegisterField<SYSCFG_CFGR2_SRAM_PARITY_LOCK> SRAM_PARITY_LOCK {};
		constexpr static RegisterField<SYSCFG_CFGR2_ECC_LOCK> ECC_LOCK {};
		constexpr static RegisterField<SYSCFG_CFGR2_SRAM_PEF> SRAM_PEF {};
	};

	struct ITLINE0 {
		DECL_REGISTER(SYSCFG_ITLINE0_BASE);
		constexpr static RegisterField<SYSCFG_ITLINE0_WWDG> WWDG {};
	};

	struct ITLINE2 {
		DECL_REGISTER(SYSCFG_ITLINE2_BASE);
		constexpr static RegisterField<SYSCFG_ITLINE2_TAMP> TAMP {};
		constexpr static RegisterField<SYSCFG_ITLINE2_RTC> RTC {};
	};

	struct ITLINE3 {
		DECL_REGISTER(SYSCFG_ITLINE3_BASE);
		constexpr static RegisterField<SYSCFG_ITLINE3_FLASH_ITF> FLASH_ITF {};
		constexpr static RegisterField<SYSCFG_ITLINE3_FLASH_ECC> FLASH_ECC {};
	};

	struct ITLINE4 {
		DECL_REGISTER(SYSCFG_ITLINE4_BASE);
		constexpr static RegisterField<SYSCFG_ITLINE4_RCC> RCC {};
	};

	struct ITLINE5 {
		DECL_REGISTER(SYSCFG_ITLINE5_BASE);
		constexpr static RegisterField<SYSCFG_ITLINE5_EXTI0> EXTI0 {};
		constexpr static RegisterField<SYSCFG_ITLINE5_EXTI1> EXTI1 {};
	};

	struct ITLINE6 {
		DECL_REGISTER(SYSCFG_ITLINE6_BASE);
		constexpr static RegisterField<SYSCFG_ITLINE6_EXTI2> EXTI2 {};
		constexpr static RegisterField<SYSCFG_ITLINE6_EXTI3> EXTI3 {};
	};

	struct ITLINE7 {
		DECL_REGISTER(SYSCFG_ITLINE7_BASE);
		constexpr static RegisterField<SYSCFG_ITLINE7_EXTI4> EXTI4 {};
		constexpr static RegisterField<SYSCFG_ITLINE7_EXTI5> EXTI5 {};
		constexpr static RegisterField<SYSCFG_ITLINE7_EXTI6> EXTI6 {};
		constexpr static RegisterField<SYSCFG_ITLINE7_EXTI7> EXTI7 {};
		constexpr static RegisterField<SYSCFG_ITLINE7_EXTI8> EXTI8 {};
		constexpr static RegisterField<SYSCFG_ITLINE7_EXTI9> EXTI9 {};
		constexpr static RegisterField<SYSCFG_ITLINE7_EXTI10> EXTI10 {};
		constexpr static RegisterField<SYSCFG_ITLINE7_EXTI11> EXTI11 {};
		constexpr static RegisterField<SYSCFG_ITLINE7_EXTI12> EXTI12 {};
		constexpr static RegisterField<SYSCFG_ITLINE7_EXTI13> EXTI13 {};
		constexpr static RegisterField<SYSCFG_ITLINE7_EXTI14> EXTI14 {};
		constexpr static RegisterField<SYSCFG_ITLINE7_EXTI15> EXTI15 {};
	};

	struct ITLINE8 {
		DECL_REGISTER(SYSCFG_ITLINE8_BASE);
		constexpr static RegisterField<SYSCFG_ITLINE8_USB> USB {};
	};

	struct ITLINE9 {
		DECL_REGISTER(SYSCFG_ITLINE9_BASE);
		constexpr static RegisterField<SYSCFG_ITLINE9_DMA1_CH1> DMA1_CH1 {};
	};

	struct ITLINE10 {
		DECL_REGISTER(SYSCFG_ITLINE10_BASE);
		constexpr static RegisterField<SYSCFG_ITLINE10_DMA1_CH2> DMA1_CH2 {};
		constexpr static RegisterField<SYSCFG_ITLINE10_DMA1_CH3> DMA1_CH3 {};
	};

	struct ITLINE11 {
		DECL_REGISTER(SYSCFG_ITLINE11_BASE);
		constexpr static RegisterField<SYSCFG_ITLINE11_DMAMUX> DMAMUX {};
		constexpr static RegisterField<SYSCFG_ITLINE11_DMA1_CH4> DMA1_CH4 {};
		constexpr static RegisterField<SYSCFG_ITLINE11_DMA1_CH5> DMA1_CH5 {};
		constexpr static RegisterField<SYSCFG_ITLINE11_DMA1_CH6> DMA1_CH6 {};
		constexpr static RegisterField<SYSCFG_ITLINE11_DMA1_CH7> DMA1_CH7 {};
		constexpr static RegisterField<SYSCFG_ITLINE11_DMA2_CH1> DMA2_CH1 {};
		constexpr static RegisterField<SYSCFG_ITLINE11_DMA2_CH2> DMA2_CH2 {};
		constexpr static RegisterField<SYSCFG_ITLINE11_DMA2_CH3> DMA2_CH3 {};
		constexpr static RegisterField<SYSCFG_ITLINE11_DMA2_CH4> DMA2_CH4 {};
		constexpr static RegisterField<SYSCFG_ITLINE11_DMA2_CH5> DMA2_CH5 {};
	};

	struct ITLINE12 {
		DECL_REGISTER(SYSCFG_ITLINE12_BASE);
		constexpr static RegisterField<SYSCFG_ITLINE12_ADC> ADC {};
	};

	struct ITLINE13 {
		DECL_REGISTER(SYSCFG_ITLINE13_BASE);
		constexpr static RegisterField<SYSCFG_ITLINE13_TIM1_CCU> TIM1_CCU {};
		constexpr static RegisterField<SYSCFG_ITLINE13_TIM1_TRG> TIM1_TRG {};
		constexpr static RegisterField<SYSCFG_ITLINE13_TIM1_UPD> TIM1_UPD {};
		constexpr static RegisterField<SYSCFG_ITLINE13_TIM1_BRK> TIM1_BRK {};
	};

	struct ITLINE14 {
		DECL_REGISTER(SYSCFG_ITLINE14_BASE);
		constexpr static RegisterField<SYSCFG_ITLINE14_TIM1_CC> TIM1_CC {};
	};

	struct ITLINE16 {
		DECL_REGISTER(SYSCFG_ITLINE16_BASE);
		constexpr static RegisterField<SYSCFG_ITLINE16_TIM3> TIM3 {};
		constexpr static RegisterField<SYSCFG_ITLINE16_TIM4> TIM4 {};
	};

	struct ITLINE17 {
		DECL_REGISTER(SYSCFG_ITLINE17_BASE);
		constexpr static RegisterField<SYSCFG_ITLINE17_TIM6> TIM6 {};
	};

	struct ITLINE18 {
		DECL_REGISTER(SYSCFG_ITLINE18_BASE);
		constexpr static RegisterField<SYSCFG_ITLINE18_TIM7> TIM7 {};
	};

	struct ITLINE19 {
		DECL_REGISTER(SYSCFG_ITLINE19_BASE);
		constexpr static RegisterField<SYSCFG_ITLINE19_TIM14> TIM14 {};
	};

	struct ITLINE20 {
		DECL_REGISTER(SYSCFG_ITLINE20_BASE);
		constexpr static RegisterField<SYSCFG_ITLINE20_TIM15> TIM15 {};
	};

	struct ITLINE21 {
		DECL_REGISTER(SYSCFG_ITLINE21_BASE);
		constexpr static RegisterField<SYSCFG_ITLINE21_TIM16> TIM16 {};
	};

	struct ITLINE22 {
		DECL_REGISTER(SYSCFG_ITLINE22_BASE);
		constexpr static RegisterField<SYSCFG_ITLINE22_TIM17> TIM17 {};
	};

	struct ITLINE23 {
		DECL_REGISTER(SYSCFG_ITLINE23_BASE);
		constexpr static RegisterField<SYSCFG_ITLINE23_I2C1> I2C1 {};
	};

	struct ITLINE24 {
		DECL_REGISTER(SYSCFG_ITLINE24_BASE);
		constexpr static RegisterField<SYSCFG_ITLINE24_I2C2> I2C2 {};
		constexpr static RegisterField<SYSCFG_ITLINE24_I2C3> I2C3 {};
	};

	struct ITLINE25 {
		DECL_REGISTER(SYSCFG_ITLINE25_BASE);
		constexpr static RegisterField<SYSCFG_ITLINE25_SPI1> SPI1 {};
	};

	struct ITLINE26 {
		DECL_REGISTER(SYSCFG_ITLINE26_BASE);
		constexpr static RegisterField<SYSCFG_ITLINE26_SPI2> SPI2 {};
		constexpr static RegisterField<SYSCFG_ITLINE26_SPI3> SPI3 {};
	};

	struct ITLINE27 {
		DECL_REGISTER(SYSCFG_ITLINE27_BASE);
		constexpr static RegisterField<SYSCFG_ITLINE27_USART1> USART1 {};
	};

	struct ITLINE28 {
		DECL_REGISTER(SYSCFG_ITLINE28_BASE);
		constexpr static RegisterField<SYSCFG_ITLINE28_USART2> USART2 {};
	};

	struct ITLINE29 {
		DECL_REGISTER(SYSCFG_ITLINE29_BASE);
		constexpr static RegisterField<SYSCFG_ITLINE29_USART3> USART3 {};
		constexpr static RegisterField<SYSCFG_ITLINE29_USART4> USART4 {};
		constexpr static RegisterField<SYSCFG_ITLINE29_USART5> USART5 {};
		constexpr static RegisterField<SYSCFG_ITLINE29_USART6> USART6 {};
	};

};

struct TAMP {
	struct TAMP_CR1 {
		DECL_REGISTER(TAMP_TAMP_CR1_BASE);
		constexpr static RegisterField<TAMP_TAMP_CR1_TAMP1E> TAMP1E {};
		constexpr static RegisterField<TAMP_TAMP_CR1_TAMP2E> TAMP2E {};
		constexpr static RegisterField<TAMP_TAMP_CR1_TAMP3E> TAMP3E {};
		constexpr static RegisterField<TAMP_TAMP_CR1_ITAMP3E> ITAMP3E {};
		constexpr static RegisterField<TAMP_TAMP_CR1_ITAMP4E> ITAMP4E {};
		constexpr static RegisterField<TAMP_TAMP_CR1_ITAMP5E> ITAMP5E {};
		constexpr static RegisterField<TAMP_TAMP_CR1_ITAMP6E> ITAMP6E {};
	};

	struct TAMP_CR2 {
		DECL_REGISTER(TAMP_TAMP_CR2_BASE);
		constexpr static RegisterField<TAMP_TAMP_CR2_TAMP1NOER> TAMP1NOER {};
		constexpr static RegisterField<TAMP_TAMP_CR2_TAMP2NOER> TAMP2NOER {};
		constexpr static RegisterField<TAMP_TAMP_CR2_TAMP3NOER> TAMP3NOER {};
		constexpr static RegisterField<TAMP_TAMP_CR2_TAMP1MSK> TAMP1MSK {};
		constexpr static RegisterField<TAMP_TAMP_CR2_TAMP2MSK> TAMP2MSK {};
		constexpr static RegisterField<TAMP_TAMP_CR2_TAMP3MSK> TAMP3MSK {};
		constexpr static RegisterField<TAMP_TAMP_CR2_TAMP1TRG> TAMP1TRG {};
		constexpr static RegisterField<TAMP_TAMP_CR2_TAMP2TRG> TAMP2TRG {};
		constexpr static RegisterField<TAMP_TAMP_CR2_TAMP3TRG> TAMP3TRG {};
	};

	struct TAMP_FLTCR {
		DECL_REGISTER(TAMP_TAMP_FLTCR_BASE);
		constexpr static RegisterField<TAMP_TAMP_FLTCR_TAMPFREQ> TAMPFREQ {};
		constexpr static RegisterField<TAMP_TAMP_FLTCR_TAMPFLT> TAMPFLT {};
		constexpr static RegisterField<TAMP_TAMP_FLTCR_TAMPPRCH> TAMPPRCH {};
		constexpr static RegisterField<TAMP_TAMP_FLTCR_TAMPPUDIS> TAMPPUDIS {};
	};

	struct TAMP_IER {
		DECL_REGISTER(TAMP_TAMP_IER_BASE);
		constexpr static RegisterField<TAMP_TAMP_IER_TAMP1IE> TAMP1IE {};
		constexpr static RegisterField<TAMP_TAMP_IER_TAMP2IE> TAMP2IE {};
		constexpr static RegisterField<TAMP_TAMP_IER_TAMP3IE> TAMP3IE {};
		constexpr static RegisterField<TAMP_TAMP_IER_ITAMP3IE> ITAMP3IE {};
		constexpr static RegisterField<TAMP_TAMP_IER_ITAMP4IE> ITAMP4IE {};
		constexpr static RegisterField<TAMP_TAMP_IER_ITAMP5IE> ITAMP5IE {};
		constexpr static RegisterField<TAMP_TAMP_IER_ITAMP6IE> ITAMP6IE {};
	};

	struct TAMP_SR {
		DECL_REGISTER(TAMP_TAMP_SR_BASE);
		constexpr static RegisterField<TAMP_TAMP_SR_TAMP1F> TAMP1F {};
		constexpr static RegisterField<TAMP_TAMP_SR_TAMP2F> TAMP2F {};
		constexpr static RegisterField<TAMP_TAMP_SR_TAMP3F> TAMP3F {};
		constexpr static RegisterField<TAMP_TAMP_SR_ITAMP3F> ITAMP3F {};
		constexpr static RegisterField<TAMP_TAMP_SR_ITAMP4F> ITAMP4F {};
		constexpr static RegisterField<TAMP_TAMP_SR_ITAMP5F> ITAMP5F {};
		constexpr static RegisterField<TAMP_TAMP_SR_ITAMP6F> ITAMP6F {};
	};

	struct TAMP_MISR {
		DECL_REGISTER(TAMP_TAMP_MISR_BASE);
		constexpr static RegisterField<TAMP_TAMP_MISR_TAMP1MF> TAMP1MF {};
		constexpr static RegisterField<TAMP_TAMP_MISR_TAMP2MF> TAMP2MF {};
		constexpr static RegisterField<TAMP_TAMP_MISR_TAMP3MF> TAMP3MF {};
		constexpr static RegisterField<TAMP_TAMP_MISR_ITAMP3MF> ITAMP3MF {};
		constexpr static RegisterField<TAMP_TAMP_MISR_ITAMP4MF> ITAMP4MF {};
		constexpr static RegisterField<TAMP_TAMP_MISR_ITAMP5MF> ITAMP5MF {};
		constexpr static RegisterField<TAMP_TAMP_MISR_ITAMP6MF> ITAMP6MF {};
	};

	struct TAMP_SCR {
		DECL_REGISTER(TAMP_TAMP_SCR_BASE);
		constexpr static RegisterField<TAMP_TAMP_SCR_CTAMP1F> CTAMP1F {};
		constexpr static RegisterField<TAMP_TAMP_SCR_CTAMP2F> CTAMP2F {};
		constexpr static RegisterField<TAMP_TAMP_SCR_CTAMP3F> CTAMP3F {};
		constexpr static RegisterField<TAMP_TAMP_SCR_CITAMP3F> CITAMP3F {};
		constexpr static RegisterField<TAMP_TAMP_SCR_CITAMP4F> CITAMP4F {};
		constexpr static RegisterField<TAMP_TAMP_SCR_CITAMP5F> CITAMP5F {};
		constexpr static RegisterField<TAMP_TAMP_SCR_CITAMP6F> CITAMP6F {};
	};

	struct TAMP_BKP0R {
		DECL_REGISTER(TAMP_TAMP_BKP0R_BASE);
		constexpr static RegisterField<TAMP_TAMP_BKP0R_BKP> BKP {};
	};

	struct TAMP_BKP1R {
		DECL_REGISTER(TAMP_TAMP_BKP1R_BASE);
		constexpr static RegisterField<TAMP_TAMP_BKP1R_BKP> BKP {};
	};

	struct TAMP_BKP2R {
		DECL_REGISTER(TAMP_TAMP_BKP2R_BASE);
		constexpr static RegisterField<TAMP_TAMP_BKP2R_BKP> BKP {};
	};

	struct TAMP_BKP3R {
		DECL_REGISTER(TAMP_TAMP_BKP3R_BASE);
		constexpr static RegisterField<TAMP_TAMP_BKP3R_BKP> BKP {};
	};

	struct TAMP_BKP4R {
		DECL_REGISTER(TAMP_TAMP_BKP4R_BASE);
		constexpr static RegisterField<TAMP_TAMP_BKP4R_BKP> BKP {};
	};

};

struct I2C1 {
	struct CR1 {
		DECL_REGISTER(I2C1_CR1_BASE);
		constexpr static RegisterField<I2C1_CR1_PE> PE {};
		constexpr static RegisterField<I2C1_CR1_TXIE> TXIE {};
		constexpr static RegisterField<I2C1_CR1_RXIE> RXIE {};
		constexpr static RegisterField<I2C1_CR1_ADDRIE> ADDRIE {};
		constexpr static RegisterField<I2C1_CR1_NACKIE> NACKIE {};
		constexpr static RegisterField<I2C1_CR1_STOPIE> STOPIE {};
		constexpr static RegisterField<I2C1_CR1_TCIE> TCIE {};
		constexpr static RegisterField<I2C1_CR1_ERRIE> ERRIE {};
		constexpr static RegisterField<I2C1_CR1_DNF> DNF {};
		constexpr static RegisterField<I2C1_CR1_ANFOFF> ANFOFF {};
		constexpr static RegisterField<I2C1_CR1_TXDMAEN> TXDMAEN {};
		constexpr static RegisterField<I2C1_CR1_RXDMAEN> RXDMAEN {};
		constexpr static RegisterField<I2C1_CR1_SBC> SBC {};
		constexpr static RegisterField<I2C1_CR1_NOSTRETCH> NOSTRETCH {};
		constexpr static RegisterField<I2C1_CR1_WUPEN> WUPEN {};
		constexpr static RegisterField<I2C1_CR1_GCEN> GCEN {};
		constexpr static RegisterField<I2C1_CR1_SMBHEN> SMBHEN {};
		constexpr static RegisterField<I2C1_CR1_SMBDEN> SMBDEN {};
		constexpr static RegisterField<I2C1_CR1_ALERTEN> ALERTEN {};
		constexpr static RegisterField<I2C1_CR1_PECEN> PECEN {};
	};

	struct CR2 {
		DECL_REGISTER(I2C1_CR2_BASE);
		constexpr static RegisterField<I2C1_CR2_SADD> SADD {};
		constexpr static RegisterField<I2C1_CR2_RD_WRN> RD_WRN {};
		constexpr static RegisterField<I2C1_CR2_ADD10> ADD10 {};
		constexpr static RegisterField<I2C1_CR2_HEAD10R> HEAD10R {};
		constexpr static RegisterField<I2C1_CR2_START> START {};
		constexpr static RegisterField<I2C1_CR2_STOP> STOP {};
		constexpr static RegisterField<I2C1_CR2_NACK> NACK {};
		constexpr static RegisterField<I2C1_CR2_NBYTES> NBYTES {};
		constexpr static RegisterField<I2C1_CR2_RELOAD> RELOAD {};
		constexpr static RegisterField<I2C1_CR2_AUTOEND> AUTOEND {};
		constexpr static RegisterField<I2C1_CR2_PECBYTE> PECBYTE {};
	};

	struct OAR1 {
		DECL_REGISTER(I2C1_OAR1_BASE);
		constexpr static RegisterField<I2C1_OAR1_OA1_0> OA1_0 {};
		constexpr static RegisterField<I2C1_OAR1_OA1_7_1> OA1_7_1 {};
		constexpr static RegisterField<I2C1_OAR1_OA1_8_9> OA1_8_9 {};
		constexpr static RegisterField<I2C1_OAR1_OA1MODE> OA1MODE {};
		constexpr static RegisterField<I2C1_OAR1_OA1EN> OA1EN {};
	};

	struct OAR2 {
		DECL_REGISTER(I2C1_OAR2_BASE);
		constexpr static RegisterField<I2C1_OAR2_OA2> OA2 {};
		constexpr static RegisterField<I2C1_OAR2_OA2MSK> OA2MSK {};
		constexpr static RegisterField<I2C1_OAR2_OA2EN> OA2EN {};
	};

	struct TIMINGR {
		DECL_REGISTER(I2C1_TIMINGR_BASE);
		constexpr static RegisterField<I2C1_TIMINGR_SCLL> SCLL {};
		constexpr static RegisterField<I2C1_TIMINGR_SCLH> SCLH {};
		constexpr static RegisterField<I2C1_TIMINGR_SDADEL> SDADEL {};
		constexpr static RegisterField<I2C1_TIMINGR_SCLDEL> SCLDEL {};
		constexpr static RegisterField<I2C1_TIMINGR_PRESC> PRESC {};
	};

	struct TIMEOUTR {
		DECL_REGISTER(I2C1_TIMEOUTR_BASE);
		constexpr static RegisterField<I2C1_TIMEOUTR_TIMEOUTA> TIMEOUTA {};
		constexpr static RegisterField<I2C1_TIMEOUTR_TIDLE> TIDLE {};
		constexpr static RegisterField<I2C1_TIMEOUTR_TIMOUTEN> TIMOUTEN {};
		constexpr static RegisterField<I2C1_TIMEOUTR_TIMEOUTB> TIMEOUTB {};
		constexpr static RegisterField<I2C1_TIMEOUTR_TEXTEN> TEXTEN {};
	};

	struct ISR {
		DECL_REGISTER(I2C1_ISR_BASE);
		constexpr static RegisterField<I2C1_ISR_TXE> TXE {};
		constexpr static RegisterField<I2C1_ISR_TXIS> TXIS {};
		constexpr static RegisterField<I2C1_ISR_RXNE> RXNE {};
		constexpr static RegisterField<I2C1_ISR_ADDR> ADDR {};
		constexpr static RegisterField<I2C1_ISR_NACKF> NACKF {};
		constexpr static RegisterField<I2C1_ISR_STOPF> STOPF {};
		constexpr static RegisterField<I2C1_ISR_TC> TC {};
		constexpr static RegisterField<I2C1_ISR_TCR> TCR {};
		constexpr static RegisterField<I2C1_ISR_BERR> BERR {};
		constexpr static RegisterField<I2C1_ISR_ARLO> ARLO {};
		constexpr static RegisterField<I2C1_ISR_OVR> OVR {};
		constexpr static RegisterField<I2C1_ISR_PECERR> PECERR {};
		constexpr static RegisterField<I2C1_ISR_TIMEOUT> TIMEOUT {};
		constexpr static RegisterField<I2C1_ISR_ALERT> ALERT {};
		constexpr static RegisterField<I2C1_ISR_BUSY> BUSY {};
		constexpr static RegisterField<I2C1_ISR_DIR> DIR {};
		constexpr static RegisterField<I2C1_ISR_ADDCODE> ADDCODE {};
	};

	struct ICR {
		DECL_REGISTER(I2C1_ICR_BASE);
		constexpr static RegisterField<I2C1_ICR_ADDRCF> ADDRCF {};
		constexpr static RegisterField<I2C1_ICR_NACKCF> NACKCF {};
		constexpr static RegisterField<I2C1_ICR_STOPCF> STOPCF {};
		constexpr static RegisterField<I2C1_ICR_BERRCF> BERRCF {};
		constexpr static RegisterField<I2C1_ICR_ARLOCF> ARLOCF {};
		constexpr static RegisterField<I2C1_ICR_OVRCF> OVRCF {};
		constexpr static RegisterField<I2C1_ICR_PECCF> PECCF {};
		constexpr static RegisterField<I2C1_ICR_TIMOUTCF> TIMOUTCF {};
		constexpr static RegisterField<I2C1_ICR_ALERTCF> ALERTCF {};
	};

	struct PECR {
		DECL_REGISTER(I2C1_PECR_BASE);
		constexpr static RegisterField<I2C1_PECR_PEC> PEC {};
	};

	struct RXDR {
		DECL_REGISTER(I2C1_RXDR_BASE);
		constexpr static RegisterField<I2C1_RXDR_RXDATA> RXDATA {};
	};

	struct TXDR {
		DECL_REGISTER(I2C1_TXDR_BASE);
		constexpr static RegisterField<I2C1_TXDR_TXDATA> TXDATA {};
	};

};

struct I2C2 {
	struct CR1 {
		DECL_REGISTER(I2C2_CR1_BASE);
		constexpr static RegisterField<I2C2_CR1_PE> PE {};
		constexpr static RegisterField<I2C2_CR1_TXIE> TXIE {};
		constexpr static RegisterField<I2C2_CR1_RXIE> RXIE {};
		constexpr static RegisterField<I2C2_CR1_ADDRIE> ADDRIE {};
		constexpr static RegisterField<I2C2_CR1_NACKIE> NACKIE {};
		constexpr static RegisterField<I2C2_CR1_STOPIE> STOPIE {};
		constexpr static RegisterField<I2C2_CR1_TCIE> TCIE {};
		constexpr static RegisterField<I2C2_CR1_ERRIE> ERRIE {};
		constexpr static RegisterField<I2C2_CR1_DNF> DNF {};
		constexpr static RegisterField<I2C2_CR1_ANFOFF> ANFOFF {};
		constexpr static RegisterField<I2C2_CR1_TXDMAEN> TXDMAEN {};
		constexpr static RegisterField<I2C2_CR1_RXDMAEN> RXDMAEN {};
		constexpr static RegisterField<I2C2_CR1_SBC> SBC {};
		constexpr static RegisterField<I2C2_CR1_NOSTRETCH> NOSTRETCH {};
		constexpr static RegisterField<I2C2_CR1_WUPEN> WUPEN {};
		constexpr static RegisterField<I2C2_CR1_GCEN> GCEN {};
		constexpr static RegisterField<I2C2_CR1_SMBHEN> SMBHEN {};
		constexpr static RegisterField<I2C2_CR1_SMBDEN> SMBDEN {};
		constexpr static RegisterField<I2C2_CR1_ALERTEN> ALERTEN {};
		constexpr static RegisterField<I2C2_CR1_PECEN> PECEN {};
	};

	struct CR2 {
		DECL_REGISTER(I2C2_CR2_BASE);
		constexpr static RegisterField<I2C2_CR2_SADD> SADD {};
		constexpr static RegisterField<I2C2_CR2_RD_WRN> RD_WRN {};
		constexpr static RegisterField<I2C2_CR2_ADD10> ADD10 {};
		constexpr static RegisterField<I2C2_CR2_HEAD10R> HEAD10R {};
		constexpr static RegisterField<I2C2_CR2_START> START {};
		constexpr static RegisterField<I2C2_CR2_STOP> STOP {};
		constexpr static RegisterField<I2C2_CR2_NACK> NACK {};
		constexpr static RegisterField<I2C2_CR2_NBYTES> NBYTES {};
		constexpr static RegisterField<I2C2_CR2_RELOAD> RELOAD {};
		constexpr static RegisterField<I2C2_CR2_AUTOEND> AUTOEND {};
		constexpr static RegisterField<I2C2_CR2_PECBYTE> PECBYTE {};
	};

	struct OAR1 {
		DECL_REGISTER(I2C2_OAR1_BASE);
		constexpr static RegisterField<I2C2_OAR1_OA1_0> OA1_0 {};
		constexpr static RegisterField<I2C2_OAR1_OA1_7_1> OA1_7_1 {};
		constexpr static RegisterField<I2C2_OAR1_OA1_8_9> OA1_8_9 {};
		constexpr static RegisterField<I2C2_OAR1_OA1MODE> OA1MODE {};
		constexpr static RegisterField<I2C2_OAR1_OA1EN> OA1EN {};
	};

	struct OAR2 {
		DECL_REGISTER(I2C2_OAR2_BASE);
		constexpr static RegisterField<I2C2_OAR2_OA2> OA2 {};
		constexpr static RegisterField<I2C2_OAR2_OA2MSK> OA2MSK {};
		constexpr static RegisterField<I2C2_OAR2_OA2EN> OA2EN {};
	};

	struct TIMINGR {
		DECL_REGISTER(I2C2_TIMINGR_BASE);
		constexpr static RegisterField<I2C2_TIMINGR_SCLL> SCLL {};
		constexpr static RegisterField<I2C2_TIMINGR_SCLH> SCLH {};
		constexpr static RegisterField<I2C2_TIMINGR_SDADEL> SDADEL {};
		constexpr static RegisterField<I2C2_TIMINGR_SCLDEL> SCLDEL {};
		constexpr static RegisterField<I2C2_TIMINGR_PRESC> PRESC {};
	};

	struct TIMEOUTR {
		DECL_REGISTER(I2C2_TIMEOUTR_BASE);
		constexpr static RegisterField<I2C2_TIMEOUTR_TIMEOUTA> TIMEOUTA {};
		constexpr static RegisterField<I2C2_TIMEOUTR_TIDLE> TIDLE {};
		constexpr static RegisterField<I2C2_TIMEOUTR_TIMOUTEN> TIMOUTEN {};
		constexpr static RegisterField<I2C2_TIMEOUTR_TIMEOUTB> TIMEOUTB {};
		constexpr static RegisterField<I2C2_TIMEOUTR_TEXTEN> TEXTEN {};
	};

	struct ISR {
		DECL_REGISTER(I2C2_ISR_BASE);
		constexpr static RegisterField<I2C2_ISR_TXE> TXE {};
		constexpr static RegisterField<I2C2_ISR_TXIS> TXIS {};
		constexpr static RegisterField<I2C2_ISR_RXNE> RXNE {};
		constexpr static RegisterField<I2C2_ISR_ADDR> ADDR {};
		constexpr static RegisterField<I2C2_ISR_NACKF> NACKF {};
		constexpr static RegisterField<I2C2_ISR_STOPF> STOPF {};
		constexpr static RegisterField<I2C2_ISR_TC> TC {};
		constexpr static RegisterField<I2C2_ISR_TCR> TCR {};
		constexpr static RegisterField<I2C2_ISR_BERR> BERR {};
		constexpr static RegisterField<I2C2_ISR_ARLO> ARLO {};
		constexpr static RegisterField<I2C2_ISR_OVR> OVR {};
		constexpr static RegisterField<I2C2_ISR_PECERR> PECERR {};
		constexpr static RegisterField<I2C2_ISR_TIMEOUT> TIMEOUT {};
		constexpr static RegisterField<I2C2_ISR_ALERT> ALERT {};
		constexpr static RegisterField<I2C2_ISR_BUSY> BUSY {};
		constexpr static RegisterField<I2C2_ISR_DIR> DIR {};
		constexpr static RegisterField<I2C2_ISR_ADDCODE> ADDCODE {};
	};

	struct ICR {
		DECL_REGISTER(I2C2_ICR_BASE);
		constexpr static RegisterField<I2C2_ICR_ADDRCF> ADDRCF {};
		constexpr static RegisterField<I2C2_ICR_NACKCF> NACKCF {};
		constexpr static RegisterField<I2C2_ICR_STOPCF> STOPCF {};
		constexpr static RegisterField<I2C2_ICR_BERRCF> BERRCF {};
		constexpr static RegisterField<I2C2_ICR_ARLOCF> ARLOCF {};
		constexpr static RegisterField<I2C2_ICR_OVRCF> OVRCF {};
		constexpr static RegisterField<I2C2_ICR_PECCF> PECCF {};
		constexpr static RegisterField<I2C2_ICR_TIMOUTCF> TIMOUTCF {};
		constexpr static RegisterField<I2C2_ICR_ALERTCF> ALERTCF {};
	};

	struct PECR {
		DECL_REGISTER(I2C2_PECR_BASE);
		constexpr static RegisterField<I2C2_PECR_PEC> PEC {};
	};

	struct RXDR {
		DECL_REGISTER(I2C2_RXDR_BASE);
		constexpr static RegisterField<I2C2_RXDR_RXDATA> RXDATA {};
	};

	struct TXDR {
		DECL_REGISTER(I2C2_TXDR_BASE);
		constexpr static RegisterField<I2C2_TXDR_TXDATA> TXDATA {};
	};

};

struct RTC {
	struct RTC_TR {
		DECL_REGISTER(RTC_RTC_TR_BASE);
		constexpr static RegisterField<RTC_RTC_TR_SU> SU {};
		constexpr static RegisterField<RTC_RTC_TR_ST> ST {};
		constexpr static RegisterField<RTC_RTC_TR_MNU> MNU {};
		constexpr static RegisterField<RTC_RTC_TR_MNT> MNT {};
		constexpr static RegisterField<RTC_RTC_TR_HU> HU {};
		constexpr static RegisterField<RTC_RTC_TR_HT> HT {};
		constexpr static RegisterField<RTC_RTC_TR_PM> PM {};
	};

	struct RTC_DR {
		DECL_REGISTER(RTC_RTC_DR_BASE);
		constexpr static RegisterField<RTC_RTC_DR_DU> DU {};
		constexpr static RegisterField<RTC_RTC_DR_DT> DT {};
		constexpr static RegisterField<RTC_RTC_DR_MU> MU {};
		constexpr static RegisterField<RTC_RTC_DR_MT> MT {};
		constexpr static RegisterField<RTC_RTC_DR_WDU> WDU {};
		constexpr static RegisterField<RTC_RTC_DR_YU> YU {};
		constexpr static RegisterField<RTC_RTC_DR_YT> YT {};
	};

	struct RTC_SSR {
		DECL_REGISTER(RTC_RTC_SSR_BASE);
		constexpr static RegisterField<RTC_RTC_SSR_SS> SS {};
	};

	struct RTC_ICSR {
		DECL_REGISTER(RTC_RTC_ICSR_BASE);
		constexpr static RegisterField<RTC_RTC_ICSR_ALRAWF> ALRAWF {};
		constexpr static RegisterField<RTC_RTC_ICSR_ALRBWF> ALRBWF {};
		constexpr static RegisterField<RTC_RTC_ICSR_WUTWF> WUTWF {};
		constexpr static RegisterField<RTC_RTC_ICSR_SHPF> SHPF {};
		constexpr static RegisterField<RTC_RTC_ICSR_INITS> INITS {};
		constexpr static RegisterField<RTC_RTC_ICSR_RSF> RSF {};
		constexpr static RegisterField<RTC_RTC_ICSR_INITF> INITF {};
		constexpr static RegisterField<RTC_RTC_ICSR_INIT> INIT {};
		constexpr static RegisterField<RTC_RTC_ICSR_RECALPF> RECALPF {};
	};

	struct RTC_PRER {
		DECL_REGISTER(RTC_RTC_PRER_BASE);
		constexpr static RegisterField<RTC_RTC_PRER_PREDIV_S> PREDIV_S {};
		constexpr static RegisterField<RTC_RTC_PRER_PREDIV_A> PREDIV_A {};
	};

	struct RTC_WUTR {
		DECL_REGISTER(RTC_RTC_WUTR_BASE);
		constexpr static RegisterField<RTC_RTC_WUTR_WUT> WUT {};
	};

	struct RTC_CR {
		DECL_REGISTER(RTC_RTC_CR_BASE);
		constexpr static RegisterField<RTC_RTC_CR_WUCKSEL> WUCKSEL {};
		constexpr static RegisterField<RTC_RTC_CR_TSEDGE> TSEDGE {};
		constexpr static RegisterField<RTC_RTC_CR_REFCKON> REFCKON {};
		constexpr static RegisterField<RTC_RTC_CR_BYPSHAD> BYPSHAD {};
		constexpr static RegisterField<RTC_RTC_CR_FMT> FMT {};
		constexpr static RegisterField<RTC_RTC_CR_ALRAE> ALRAE {};
		constexpr static RegisterField<RTC_RTC_CR_ALRBE> ALRBE {};
		constexpr static RegisterField<RTC_RTC_CR_WUTE> WUTE {};
		constexpr static RegisterField<RTC_RTC_CR_TSE> TSE {};
		constexpr static RegisterField<RTC_RTC_CR_ALRAIE> ALRAIE {};
		constexpr static RegisterField<RTC_RTC_CR_ALRBIE> ALRBIE {};
		constexpr static RegisterField<RTC_RTC_CR_WUTIE> WUTIE {};
		constexpr static RegisterField<RTC_RTC_CR_TSIE> TSIE {};
		constexpr static RegisterField<RTC_RTC_CR_ADD1H> ADD1H {};
		constexpr static RegisterField<RTC_RTC_CR_SUB1H> SUB1H {};
		constexpr static RegisterField<RTC_RTC_CR_BKP> BKP {};
		constexpr static RegisterField<RTC_RTC_CR_COSEL> COSEL {};
		constexpr static RegisterField<RTC_RTC_CR_POL> POL {};
		constexpr static RegisterField<RTC_RTC_CR_OSEL> OSEL {};
		constexpr static RegisterField<RTC_RTC_CR_COE> COE {};
		constexpr static RegisterField<RTC_RTC_CR_ITSE> ITSE {};
		constexpr static RegisterField<RTC_RTC_CR_TAMPTS> TAMPTS {};
		constexpr static RegisterField<RTC_RTC_CR_TAMPOE> TAMPOE {};
		constexpr static RegisterField<RTC_RTC_CR_TAMPALRM_PU> TAMPALRM_PU {};
		constexpr static RegisterField<RTC_RTC_CR_TAMPALRM_TYPE> TAMPALRM_TYPE {};
		constexpr static RegisterField<RTC_RTC_CR_OUT2EN> OUT2EN {};
	};

	struct RTC_WPR {
		DECL_REGISTER(RTC_RTC_WPR_BASE);
		constexpr static RegisterField<RTC_RTC_WPR_KEY> KEY {};
	};

	struct RTC_CALR {
		DECL_REGISTER(RTC_RTC_CALR_BASE);
		constexpr static RegisterField<RTC_RTC_CALR_CALM> CALM {};
		constexpr static RegisterField<RTC_RTC_CALR_CALW16> CALW16 {};
		constexpr static RegisterField<RTC_RTC_CALR_CALW8> CALW8 {};
		constexpr static RegisterField<RTC_RTC_CALR_CALP> CALP {};
	};

	struct RTC_SHIFTR {
		DECL_REGISTER(RTC_RTC_SHIFTR_BASE);
		constexpr static RegisterField<RTC_RTC_SHIFTR_SUBFS> SUBFS {};
		constexpr static RegisterField<RTC_RTC_SHIFTR_ADD1S> ADD1S {};
	};

	struct RTC_TSTR {
		DECL_REGISTER(RTC_RTC_TSTR_BASE);
		constexpr static RegisterField<RTC_RTC_TSTR_SU> SU {};
		constexpr static RegisterField<RTC_RTC_TSTR_ST> ST {};
		constexpr static RegisterField<RTC_RTC_TSTR_MNU> MNU {};
		constexpr static RegisterField<RTC_RTC_TSTR_MNT> MNT {};
		constexpr static RegisterField<RTC_RTC_TSTR_HU> HU {};
		constexpr static RegisterField<RTC_RTC_TSTR_HT> HT {};
		constexpr static RegisterField<RTC_RTC_TSTR_PM> PM {};
	};

	struct RTC_TSDR {
		DECL_REGISTER(RTC_RTC_TSDR_BASE);
		constexpr static RegisterField<RTC_RTC_TSDR_DU> DU {};
		constexpr static RegisterField<RTC_RTC_TSDR_DT> DT {};
		constexpr static RegisterField<RTC_RTC_TSDR_MU> MU {};
		constexpr static RegisterField<RTC_RTC_TSDR_MT> MT {};
		constexpr static RegisterField<RTC_RTC_TSDR_WDU> WDU {};
	};

	struct RTC_TSSSR {
		DECL_REGISTER(RTC_RTC_TSSSR_BASE);
		constexpr static RegisterField<RTC_RTC_TSSSR_SS> SS {};
	};

	struct RTC_ALRMAR {
		DECL_REGISTER(RTC_RTC_ALRMAR_BASE);
		constexpr static RegisterField<RTC_RTC_ALRMAR_SU> SU {};
		constexpr static RegisterField<RTC_RTC_ALRMAR_ST> ST {};
		constexpr static RegisterField<RTC_RTC_ALRMAR_MSK1> MSK1 {};
		constexpr static RegisterField<RTC_RTC_ALRMAR_MNU> MNU {};
		constexpr static RegisterField<RTC_RTC_ALRMAR_MNT> MNT {};
		constexpr static RegisterField<RTC_RTC_ALRMAR_MSK2> MSK2 {};
		constexpr static RegisterField<RTC_RTC_ALRMAR_HU> HU {};
		constexpr static RegisterField<RTC_RTC_ALRMAR_HT> HT {};
		constexpr static RegisterField<RTC_RTC_ALRMAR_PM> PM {};
		constexpr static RegisterField<RTC_RTC_ALRMAR_MSK3> MSK3 {};
		constexpr static RegisterField<RTC_RTC_ALRMAR_DU> DU {};
		constexpr static RegisterField<RTC_RTC_ALRMAR_DT> DT {};
		constexpr static RegisterField<RTC_RTC_ALRMAR_WDSEL> WDSEL {};
		constexpr static RegisterField<RTC_RTC_ALRMAR_MSK4> MSK4 {};
	};

	struct RTC_ALRMASSR {
		DECL_REGISTER(RTC_RTC_ALRMASSR_BASE);
		constexpr static RegisterField<RTC_RTC_ALRMASSR_SS> SS {};
		constexpr static RegisterField<RTC_RTC_ALRMASSR_MASKSS> MASKSS {};
	};

	struct RTC_ALRMBR {
		DECL_REGISTER(RTC_RTC_ALRMBR_BASE);
		constexpr static RegisterField<RTC_RTC_ALRMBR_SU> SU {};
		constexpr static RegisterField<RTC_RTC_ALRMBR_ST> ST {};
		constexpr static RegisterField<RTC_RTC_ALRMBR_MSK1> MSK1 {};
		constexpr static RegisterField<RTC_RTC_ALRMBR_MNU> MNU {};
		constexpr static RegisterField<RTC_RTC_ALRMBR_MNT> MNT {};
		constexpr static RegisterField<RTC_RTC_ALRMBR_MSK2> MSK2 {};
		constexpr static RegisterField<RTC_RTC_ALRMBR_HU> HU {};
		constexpr static RegisterField<RTC_RTC_ALRMBR_HT> HT {};
		constexpr static RegisterField<RTC_RTC_ALRMBR_PM> PM {};
		constexpr static RegisterField<RTC_RTC_ALRMBR_MSK3> MSK3 {};
		constexpr static RegisterField<RTC_RTC_ALRMBR_DU> DU {};
		constexpr static RegisterField<RTC_RTC_ALRMBR_DT> DT {};
		constexpr static RegisterField<RTC_RTC_ALRMBR_WDSEL> WDSEL {};
		constexpr static RegisterField<RTC_RTC_ALRMBR_MSK4> MSK4 {};
	};

	struct RTC_ALRMBSSR {
		DECL_REGISTER(RTC_RTC_ALRMBSSR_BASE);
		constexpr static RegisterField<RTC_RTC_ALRMBSSR_SS> SS {};
		constexpr static RegisterField<RTC_RTC_ALRMBSSR_MASKSS> MASKSS {};
	};

	struct RTC_SR {
		DECL_REGISTER(RTC_RTC_SR_BASE);
		constexpr static RegisterField<RTC_RTC_SR_ALRAF> ALRAF {};
		constexpr static RegisterField<RTC_RTC_SR_ALRBF> ALRBF {};
		constexpr static RegisterField<RTC_RTC_SR_WUTF> WUTF {};
		constexpr static RegisterField<RTC_RTC_SR_TSF> TSF {};
		constexpr static RegisterField<RTC_RTC_SR_TSOVF> TSOVF {};
		constexpr static RegisterField<RTC_RTC_SR_ITSF> ITSF {};
	};

	struct RTC_MISR {
		DECL_REGISTER(RTC_RTC_MISR_BASE);
		constexpr static RegisterField<RTC_RTC_MISR_ALRAMF> ALRAMF {};
		constexpr static RegisterField<RTC_RTC_MISR_ALRBMF> ALRBMF {};
		constexpr static RegisterField<RTC_RTC_MISR_WUTMF> WUTMF {};
		constexpr static RegisterField<RTC_RTC_MISR_TSMF> TSMF {};
		constexpr static RegisterField<RTC_RTC_MISR_TSOVMF> TSOVMF {};
		constexpr static RegisterField<RTC_RTC_MISR_ITSMF> ITSMF {};
	};

	struct RTC_SCR {
		DECL_REGISTER(RTC_RTC_SCR_BASE);
		constexpr static RegisterField<RTC_RTC_SCR_CALRAF> CALRAF {};
		constexpr static RegisterField<RTC_RTC_SCR_CALRBF> CALRBF {};
		constexpr static RegisterField<RTC_RTC_SCR_CWUTF> CWUTF {};
		constexpr static RegisterField<RTC_RTC_SCR_CTSF> CTSF {};
		constexpr static RegisterField<RTC_RTC_SCR_CTSOVF> CTSOVF {};
		constexpr static RegisterField<RTC_RTC_SCR_CITSF> CITSF {};
	};

};

struct TIM14 {
	struct CR1 {
		DECL_REGISTER(TIM14_CR1_BASE);
		constexpr static RegisterField<TIM14_CR1_CEN> CEN {};
		constexpr static RegisterField<TIM14_CR1_UDIS> UDIS {};
		constexpr static RegisterField<TIM14_CR1_URS> URS {};
		constexpr static RegisterField<TIM14_CR1_OPM> OPM {};
		constexpr static RegisterField<TIM14_CR1_ARPE> ARPE {};
		constexpr static RegisterField<TIM14_CR1_CKD> CKD {};
		constexpr static RegisterField<TIM14_CR1_UIFREMAP> UIFREMAP {};
	};

	struct DIER {
		DECL_REGISTER(TIM14_DIER_BASE);
		constexpr static RegisterField<TIM14_DIER_UIE> UIE {};
		constexpr static RegisterField<TIM14_DIER_CC1IE> CC1IE {};
	};

	struct SR {
		DECL_REGISTER(TIM14_SR_BASE);
		constexpr static RegisterField<TIM14_SR_UIF> UIF {};
		constexpr static RegisterField<TIM14_SR_CC1IF> CC1IF {};
		constexpr static RegisterField<TIM14_SR_CC1OF> CC1OF {};
	};

	struct EGR {
		DECL_REGISTER(TIM14_EGR_BASE);
		constexpr static RegisterField<TIM14_EGR_UG> UG {};
		constexpr static RegisterField<TIM14_EGR_CC1G> CC1G {};
	};

	struct CCMR1_Output {
		DECL_REGISTER(TIM14_CCMR1_Output_BASE);
		constexpr static RegisterField<TIM14_CCMR1_Output_CC1S> CC1S {};
		constexpr static RegisterField<TIM14_CCMR1_Output_OC1FE> OC1FE {};
		constexpr static RegisterField<TIM14_CCMR1_Output_OC1PE> OC1PE {};
		constexpr static RegisterField<TIM14_CCMR1_Output_OC1M> OC1M {};
		constexpr static RegisterField<TIM14_CCMR1_Output_OC1CE> OC1CE {};
		constexpr static RegisterField<TIM14_CCMR1_Output_OC1M_3> OC1M_3 {};
	};

	struct CCMR1_Input {
		DECL_REGISTER(TIM14_CCMR1_Input_BASE);
		constexpr static RegisterField<TIM14_CCMR1_Input_CC1S> CC1S {};
		constexpr static RegisterField<TIM14_CCMR1_Input_ICPCS> ICPCS {};
		constexpr static RegisterField<TIM14_CCMR1_Input_IC1F> IC1F {};
	};

	struct CCER {
		DECL_REGISTER(TIM14_CCER_BASE);
		constexpr static RegisterField<TIM14_CCER_CC1E> CC1E {};
		constexpr static RegisterField<TIM14_CCER_CC1P> CC1P {};
		constexpr static RegisterField<TIM14_CCER_CC1NP> CC1NP {};
	};

	struct CNT {
		DECL_REGISTER(TIM14_CNT_BASE);
		constexpr static RegisterField<TIM14_CNT_CNT> CNTV {};
		constexpr static RegisterField<TIM14_CNT_UIFCPY> UIFCPY {};
	};

	struct PSC {
		DECL_REGISTER(TIM14_PSC_BASE);
		constexpr static RegisterField<TIM14_PSC_PSC> PSCV {};
	};

	struct ARR {
		DECL_REGISTER(TIM14_ARR_BASE);
		constexpr static RegisterField<TIM14_ARR_ARR> ARRV {};
	};

	struct CCR1 {
		DECL_REGISTER(TIM14_CCR1_BASE);
		constexpr static RegisterField<TIM14_CCR1_CCR1> CCR1V {};
	};

	struct TISEL {
		DECL_REGISTER(TIM14_TISEL_BASE);
		constexpr static RegisterField<TIM14_TISEL_TISEL> TISELV {};
	};

};

struct TIM2 {
	struct CR1 {
		DECL_REGISTER(TIM2_CR1_BASE);
		constexpr static RegisterField<TIM2_CR1_CEN> CEN {};
		constexpr static RegisterField<TIM2_CR1_UDIS> UDIS {};
		constexpr static RegisterField<TIM2_CR1_URS> URS {};
		constexpr static RegisterField<TIM2_CR1_OPM> OPM {};
		constexpr static RegisterField<TIM2_CR1_DIR> DIR {};
		constexpr static RegisterField<TIM2_CR1_CMS> CMS {};
		constexpr static RegisterField<TIM2_CR1_ARPE> ARPE {};
		constexpr static RegisterField<TIM2_CR1_CKD> CKD {};
		constexpr static RegisterField<TIM2_CR1_UIFREMAP> UIFREMAP {};
	};

	struct CR2 {
		DECL_REGISTER(TIM2_CR2_BASE);
		constexpr static RegisterField<TIM2_CR2_CCDS> CCDS {};
		constexpr static RegisterField<TIM2_CR2_MMS> MMS {};
		constexpr static RegisterField<TIM2_CR2_TI1S> TI1S {};
	};

	struct SMCR {
		DECL_REGISTER(TIM2_SMCR_BASE);
		constexpr static RegisterField<TIM2_SMCR_SMS> SMS {};
		constexpr static RegisterField<TIM2_SMCR_OCCS> OCCS {};
		constexpr static RegisterField<TIM2_SMCR_TS> TS {};
		constexpr static RegisterField<TIM2_SMCR_MSM> MSM {};
		constexpr static RegisterField<TIM2_SMCR_ETF> ETF {};
		constexpr static RegisterField<TIM2_SMCR_ETPS> ETPS {};
		constexpr static RegisterField<TIM2_SMCR_ECE> ECE {};
		constexpr static RegisterField<TIM2_SMCR_ETP> ETP {};
		constexpr static RegisterField<TIM2_SMCR_SMS_3> SMS_3 {};
		constexpr static RegisterField<TIM2_SMCR_TS_4_3> TS_4_3 {};
	};

	struct DIER {
		DECL_REGISTER(TIM2_DIER_BASE);
		constexpr static RegisterField<TIM2_DIER_UIE> UIE {};
		constexpr static RegisterField<TIM2_DIER_CC1IE> CC1IE {};
		constexpr static RegisterField<TIM2_DIER_CC2IE> CC2IE {};
		constexpr static RegisterField<TIM2_DIER_CC3IE> CC3IE {};
		constexpr static RegisterField<TIM2_DIER_CC4IE> CC4IE {};
		constexpr static RegisterField<TIM2_DIER_TIE> TIE {};
		constexpr static RegisterField<TIM2_DIER_UDE> UDE {};
		constexpr static RegisterField<TIM2_DIER_CC1DE> CC1DE {};
		constexpr static RegisterField<TIM2_DIER_CC2DE> CC2DE {};
		constexpr static RegisterField<TIM2_DIER_CC3DE> CC3DE {};
		constexpr static RegisterField<TIM2_DIER_CC4DE> CC4DE {};
		constexpr static RegisterField<TIM2_DIER_TDE> TDE {};
	};

	struct SR {
		DECL_REGISTER(TIM2_SR_BASE);
		constexpr static RegisterField<TIM2_SR_UIF> UIF {};
		constexpr static RegisterField<TIM2_SR_CC1IF> CC1IF {};
		constexpr static RegisterField<TIM2_SR_CC2IF> CC2IF {};
		constexpr static RegisterField<TIM2_SR_CC3IF> CC3IF {};
		constexpr static RegisterField<TIM2_SR_CC4IF> CC4IF {};
		constexpr static RegisterField<TIM2_SR_TIF> TIF {};
		constexpr static RegisterField<TIM2_SR_CC1OF> CC1OF {};
		constexpr static RegisterField<TIM2_SR_CC2OF> CC2OF {};
		constexpr static RegisterField<TIM2_SR_CC3OF> CC3OF {};
		constexpr static RegisterField<TIM2_SR_CC4OF> CC4OF {};
	};

	struct EGR {
		DECL_REGISTER(TIM2_EGR_BASE);
		constexpr static RegisterField<TIM2_EGR_UG> UG {};
		constexpr static RegisterField<TIM2_EGR_CC1G> CC1G {};
		constexpr static RegisterField<TIM2_EGR_CC2G> CC2G {};
		constexpr static RegisterField<TIM2_EGR_CC3G> CC3G {};
		constexpr static RegisterField<TIM2_EGR_CC4G> CC4G {};
		constexpr static RegisterField<TIM2_EGR_TG> TG {};
	};

	struct CCMR1_Output {
		DECL_REGISTER(TIM2_CCMR1_Output_BASE);
		constexpr static RegisterField<TIM2_CCMR1_Output_CC1S> CC1S {};
		constexpr static RegisterField<TIM2_CCMR1_Output_OC1FE> OC1FE {};
		constexpr static RegisterField<TIM2_CCMR1_Output_OC1PE> OC1PE {};
		constexpr static RegisterField<TIM2_CCMR1_Output_OC1M> OC1M {};
		constexpr static RegisterField<TIM2_CCMR1_Output_OC1CE> OC1CE {};
		constexpr static RegisterField<TIM2_CCMR1_Output_CC2S> CC2S {};
		constexpr static RegisterField<TIM2_CCMR1_Output_OC2FE> OC2FE {};
		constexpr static RegisterField<TIM2_CCMR1_Output_OC2PE> OC2PE {};
		constexpr static RegisterField<TIM2_CCMR1_Output_OC2M> OC2M {};
		constexpr static RegisterField<TIM2_CCMR1_Output_OC2CE> OC2CE {};
		constexpr static RegisterField<TIM2_CCMR1_Output_OC1M_3> OC1M_3 {};
		constexpr static RegisterField<TIM2_CCMR1_Output_OC2M_3> OC2M_3 {};
	};

	struct CCMR1_Input {
		DECL_REGISTER(TIM2_CCMR1_Input_BASE);
		constexpr static RegisterField<TIM2_CCMR1_Input_CC1S> CC1S {};
		constexpr static RegisterField<TIM2_CCMR1_Input_IC1PSC> IC1PSC {};
		constexpr static RegisterField<TIM2_CCMR1_Input_IC1F> IC1F {};
		constexpr static RegisterField<TIM2_CCMR1_Input_CC2S> CC2S {};
		constexpr static RegisterField<TIM2_CCMR1_Input_IC2PSC> IC2PSC {};
		constexpr static RegisterField<TIM2_CCMR1_Input_IC2F> IC2F {};
	};

	struct CCMR2_Output {
		DECL_REGISTER(TIM2_CCMR2_Output_BASE);
		constexpr static RegisterField<TIM2_CCMR2_Output_CC3S> CC3S {};
		constexpr static RegisterField<TIM2_CCMR2_Output_OC3FE> OC3FE {};
		constexpr static RegisterField<TIM2_CCMR2_Output_OC3PE> OC3PE {};
		constexpr static RegisterField<TIM2_CCMR2_Output_OC3M> OC3M {};
		constexpr static RegisterField<TIM2_CCMR2_Output_OC3CE> OC3CE {};
		constexpr static RegisterField<TIM2_CCMR2_Output_CC4S> CC4S {};
		constexpr static RegisterField<TIM2_CCMR2_Output_OC4FE> OC4FE {};
		constexpr static RegisterField<TIM2_CCMR2_Output_OC4PE> OC4PE {};
		constexpr static RegisterField<TIM2_CCMR2_Output_OC4M> OC4M {};
		constexpr static RegisterField<TIM2_CCMR2_Output_OC4CE> OC4CE {};
		constexpr static RegisterField<TIM2_CCMR2_Output_OC3M_3> OC3M_3 {};
		constexpr static RegisterField<TIM2_CCMR2_Output_OC4M_3> OC4M_3 {};
	};

	struct CCMR2_Input {
		DECL_REGISTER(TIM2_CCMR2_Input_BASE);
		constexpr static RegisterField<TIM2_CCMR2_Input_CC3S> CC3S {};
		constexpr static RegisterField<TIM2_CCMR2_Input_IC3PSC> IC3PSC {};
		constexpr static RegisterField<TIM2_CCMR2_Input_IC3F> IC3F {};
		constexpr static RegisterField<TIM2_CCMR2_Input_CC4S> CC4S {};
		constexpr static RegisterField<TIM2_CCMR2_Input_IC4PSC> IC4PSC {};
		constexpr static RegisterField<TIM2_CCMR2_Input_IC4F> IC4F {};
	};

	struct CCER {
		DECL_REGISTER(TIM2_CCER_BASE);
		constexpr static RegisterField<TIM2_CCER_CC1E> CC1E {};
		constexpr static RegisterField<TIM2_CCER_CC1P> CC1P {};
		constexpr static RegisterField<TIM2_CCER_CC1NP> CC1NP {};
		constexpr static RegisterField<TIM2_CCER_CC2E> CC2E {};
		constexpr static RegisterField<TIM2_CCER_CC2P> CC2P {};
		constexpr static RegisterField<TIM2_CCER_CC2NP> CC2NP {};
		constexpr static RegisterField<TIM2_CCER_CC3E> CC3E {};
		constexpr static RegisterField<TIM2_CCER_CC3P> CC3P {};
		constexpr static RegisterField<TIM2_CCER_CC3NP> CC3NP {};
		constexpr static RegisterField<TIM2_CCER_CC4E> CC4E {};
		constexpr static RegisterField<TIM2_CCER_CC4P> CC4P {};
		constexpr static RegisterField<TIM2_CCER_CC4NP> CC4NP {};
	};

	struct CNT {
		DECL_REGISTER(TIM2_CNT_BASE);
		constexpr static RegisterField<TIM2_CNT_CNT_L> CNT_L {};
		constexpr static RegisterField<TIM2_CNT_CNT_H> CNT_H {};
	};

	struct PSC {
		DECL_REGISTER(TIM2_PSC_BASE);
		constexpr static RegisterField<TIM2_PSC_PSC> PSCV {};
	};

	struct ARR {
		DECL_REGISTER(TIM2_ARR_BASE);
		constexpr static RegisterField<TIM2_ARR_ARR_L> ARR_L {};
		constexpr static RegisterField<TIM2_ARR_ARR_H> ARR_H {};
	};

	struct CCR1 {
		DECL_REGISTER(TIM2_CCR1_BASE);
		constexpr static RegisterField<TIM2_CCR1_CCR1_L> CCR1_L {};
		constexpr static RegisterField<TIM2_CCR1_CCR1_H> CCR1_H {};
	};

	struct CCR2 {
		DECL_REGISTER(TIM2_CCR2_BASE);
		constexpr static RegisterField<TIM2_CCR2_CCR2_L> CCR2_L {};
		constexpr static RegisterField<TIM2_CCR2_CCR2_H> CCR2_H {};
	};

	struct CCR3 {
		DECL_REGISTER(TIM2_CCR3_BASE);
		constexpr static RegisterField<TIM2_CCR3_CCR3_L> CCR3_L {};
		constexpr static RegisterField<TIM2_CCR3_CCR3_H> CCR3_H {};
	};

	struct CCR4 {
		DECL_REGISTER(TIM2_CCR4_BASE);
		constexpr static RegisterField<TIM2_CCR4_CCR4_L> CCR4_L {};
		constexpr static RegisterField<TIM2_CCR4_CCR4_H> CCR4_H {};
	};

	struct DCR {
		DECL_REGISTER(TIM2_DCR_BASE);
		constexpr static RegisterField<TIM2_DCR_DBA> DBA {};
		constexpr static RegisterField<TIM2_DCR_DBL> DBL {};
	};

	struct DMAR {
		DECL_REGISTER(TIM2_DMAR_BASE);
		constexpr static RegisterField<TIM2_DMAR_DMAB> DMAB {};
	};

	struct OR1 {
		DECL_REGISTER(TIM2_OR1_BASE);
		constexpr static RegisterField<TIM2_OR1_IOCREF_CLR> IOCREF_CLR {};
	};

	struct AF1 {
		DECL_REGISTER(TIM2_AF1_BASE);
		constexpr static RegisterField<TIM2_AF1_ETRSEL> ETRSEL {};
	};

	struct TISEL {
		DECL_REGISTER(TIM2_TISEL_BASE);
		constexpr static RegisterField<TIM2_TISEL_TI1SEL> TI1SEL {};
		constexpr static RegisterField<TIM2_TISEL_TI2SEL> TI2SEL {};
	};

};

struct TIM3 {
	struct CR1 {
		DECL_REGISTER(TIM3_CR1_BASE);
		constexpr static RegisterField<TIM3_CR1_CEN> CEN {};
		constexpr static RegisterField<TIM3_CR1_UDIS> UDIS {};
		constexpr static RegisterField<TIM3_CR1_URS> URS {};
		constexpr static RegisterField<TIM3_CR1_OPM> OPM {};
		constexpr static RegisterField<TIM3_CR1_DIR> DIR {};
		constexpr static RegisterField<TIM3_CR1_CMS> CMS {};
		constexpr static RegisterField<TIM3_CR1_ARPE> ARPE {};
		constexpr static RegisterField<TIM3_CR1_CKD> CKD {};
		constexpr static RegisterField<TIM3_CR1_UIFREMAP> UIFREMAP {};
	};

	struct CR2 {
		DECL_REGISTER(TIM3_CR2_BASE);
		constexpr static RegisterField<TIM3_CR2_CCDS> CCDS {};
		constexpr static RegisterField<TIM3_CR2_MMS> MMS {};
		constexpr static RegisterField<TIM3_CR2_TI1S> TI1S {};
	};

	struct SMCR {
		DECL_REGISTER(TIM3_SMCR_BASE);
		constexpr static RegisterField<TIM3_SMCR_SMS> SMS {};
		constexpr static RegisterField<TIM3_SMCR_OCCS> OCCS {};
		constexpr static RegisterField<TIM3_SMCR_TS> TS {};
		constexpr static RegisterField<TIM3_SMCR_MSM> MSM {};
		constexpr static RegisterField<TIM3_SMCR_ETF> ETF {};
		constexpr static RegisterField<TIM3_SMCR_ETPS> ETPS {};
		constexpr static RegisterField<TIM3_SMCR_ECE> ECE {};
		constexpr static RegisterField<TIM3_SMCR_ETP> ETP {};
		constexpr static RegisterField<TIM3_SMCR_SMS_3> SMS_3 {};
		constexpr static RegisterField<TIM3_SMCR_TS_4_3> TS_4_3 {};
	};

	struct DIER {
		DECL_REGISTER(TIM3_DIER_BASE);
		constexpr static RegisterField<TIM3_DIER_UIE> UIE {};
		constexpr static RegisterField<TIM3_DIER_CC1IE> CC1IE {};
		constexpr static RegisterField<TIM3_DIER_CC2IE> CC2IE {};
		constexpr static RegisterField<TIM3_DIER_CC3IE> CC3IE {};
		constexpr static RegisterField<TIM3_DIER_CC4IE> CC4IE {};
		constexpr static RegisterField<TIM3_DIER_TIE> TIE {};
		constexpr static RegisterField<TIM3_DIER_UDE> UDE {};
		constexpr static RegisterField<TIM3_DIER_CC1DE> CC1DE {};
		constexpr static RegisterField<TIM3_DIER_CC2DE> CC2DE {};
		constexpr static RegisterField<TIM3_DIER_CC3DE> CC3DE {};
		constexpr static RegisterField<TIM3_DIER_CC4DE> CC4DE {};
		constexpr static RegisterField<TIM3_DIER_TDE> TDE {};
	};

	struct SR {
		DECL_REGISTER(TIM3_SR_BASE);
		constexpr static RegisterField<TIM3_SR_UIF> UIF {};
		constexpr static RegisterField<TIM3_SR_CC1IF> CC1IF {};
		constexpr static RegisterField<TIM3_SR_CC2IF> CC2IF {};
		constexpr static RegisterField<TIM3_SR_CC3IF> CC3IF {};
		constexpr static RegisterField<TIM3_SR_CC4IF> CC4IF {};
		constexpr static RegisterField<TIM3_SR_TIF> TIF {};
		constexpr static RegisterField<TIM3_SR_CC1OF> CC1OF {};
		constexpr static RegisterField<TIM3_SR_CC2OF> CC2OF {};
		constexpr static RegisterField<TIM3_SR_CC3OF> CC3OF {};
		constexpr static RegisterField<TIM3_SR_CC4OF> CC4OF {};
	};

	struct EGR {
		DECL_REGISTER(TIM3_EGR_BASE);
		constexpr static RegisterField<TIM3_EGR_UG> UG {};
		constexpr static RegisterField<TIM3_EGR_CC1G> CC1G {};
		constexpr static RegisterField<TIM3_EGR_CC2G> CC2G {};
		constexpr static RegisterField<TIM3_EGR_CC3G> CC3G {};
		constexpr static RegisterField<TIM3_EGR_CC4G> CC4G {};
		constexpr static RegisterField<TIM3_EGR_TG> TG {};
	};

	struct CCMR1_Output {
		DECL_REGISTER(TIM3_CCMR1_Output_BASE);
		constexpr static RegisterField<TIM3_CCMR1_Output_CC1S> CC1S {};
		constexpr static RegisterField<TIM3_CCMR1_Output_OC1FE> OC1FE {};
		constexpr static RegisterField<TIM3_CCMR1_Output_OC1PE> OC1PE {};
		constexpr static RegisterField<TIM3_CCMR1_Output_OC1M> OC1M {};
		constexpr static RegisterField<TIM3_CCMR1_Output_OC1CE> OC1CE {};
		constexpr static RegisterField<TIM3_CCMR1_Output_CC2S> CC2S {};
		constexpr static RegisterField<TIM3_CCMR1_Output_OC2FE> OC2FE {};
		constexpr static RegisterField<TIM3_CCMR1_Output_OC2PE> OC2PE {};
		constexpr static RegisterField<TIM3_CCMR1_Output_OC2M> OC2M {};
		constexpr static RegisterField<TIM3_CCMR1_Output_OC2CE> OC2CE {};
		constexpr static RegisterField<TIM3_CCMR1_Output_OC1M_3> OC1M_3 {};
		constexpr static RegisterField<TIM3_CCMR1_Output_OC2M_3> OC2M_3 {};
	};

	struct CCMR1_Input {
		DECL_REGISTER(TIM3_CCMR1_Input_BASE);
		constexpr static RegisterField<TIM3_CCMR1_Input_CC1S> CC1S {};
		constexpr static RegisterField<TIM3_CCMR1_Input_IC1PSC> IC1PSC {};
		constexpr static RegisterField<TIM3_CCMR1_Input_IC1F> IC1F {};
		constexpr static RegisterField<TIM3_CCMR1_Input_CC2S> CC2S {};
		constexpr static RegisterField<TIM3_CCMR1_Input_IC2PSC> IC2PSC {};
		constexpr static RegisterField<TIM3_CCMR1_Input_IC2F> IC2F {};
	};

	struct CCMR2_Output {
		DECL_REGISTER(TIM3_CCMR2_Output_BASE);
		constexpr static RegisterField<TIM3_CCMR2_Output_CC3S> CC3S {};
		constexpr static RegisterField<TIM3_CCMR2_Output_OC3FE> OC3FE {};
		constexpr static RegisterField<TIM3_CCMR2_Output_OC3PE> OC3PE {};
		constexpr static RegisterField<TIM3_CCMR2_Output_OC3M> OC3M {};
		constexpr static RegisterField<TIM3_CCMR2_Output_OC3CE> OC3CE {};
		constexpr static RegisterField<TIM3_CCMR2_Output_CC4S> CC4S {};
		constexpr static RegisterField<TIM3_CCMR2_Output_OC4FE> OC4FE {};
		constexpr static RegisterField<TIM3_CCMR2_Output_OC4PE> OC4PE {};
		constexpr static RegisterField<TIM3_CCMR2_Output_OC4M> OC4M {};
		constexpr static RegisterField<TIM3_CCMR2_Output_OC4CE> OC4CE {};
		constexpr static RegisterField<TIM3_CCMR2_Output_OC3M_3> OC3M_3 {};
		constexpr static RegisterField<TIM3_CCMR2_Output_OC4M_3> OC4M_3 {};
	};

	struct CCMR2_Input {
		DECL_REGISTER(TIM3_CCMR2_Input_BASE);
		constexpr static RegisterField<TIM3_CCMR2_Input_CC3S> CC3S {};
		constexpr static RegisterField<TIM3_CCMR2_Input_IC3PSC> IC3PSC {};
		constexpr static RegisterField<TIM3_CCMR2_Input_IC3F> IC3F {};
		constexpr static RegisterField<TIM3_CCMR2_Input_CC4S> CC4S {};
		constexpr static RegisterField<TIM3_CCMR2_Input_IC4PSC> IC4PSC {};
		constexpr static RegisterField<TIM3_CCMR2_Input_IC4F> IC4F {};
	};

	struct CCER {
		DECL_REGISTER(TIM3_CCER_BASE);
		constexpr static RegisterField<TIM3_CCER_CC1E> CC1E {};
		constexpr static RegisterField<TIM3_CCER_CC1P> CC1P {};
		constexpr static RegisterField<TIM3_CCER_CC1NP> CC1NP {};
		constexpr static RegisterField<TIM3_CCER_CC2E> CC2E {};
		constexpr static RegisterField<TIM3_CCER_CC2P> CC2P {};
		constexpr static RegisterField<TIM3_CCER_CC2NP> CC2NP {};
		constexpr static RegisterField<TIM3_CCER_CC3E> CC3E {};
		constexpr static RegisterField<TIM3_CCER_CC3P> CC3P {};
		constexpr static RegisterField<TIM3_CCER_CC3NP> CC3NP {};
		constexpr static RegisterField<TIM3_CCER_CC4E> CC4E {};
		constexpr static RegisterField<TIM3_CCER_CC4P> CC4P {};
		constexpr static RegisterField<TIM3_CCER_CC4NP> CC4NP {};
	};

	struct CNT {
		DECL_REGISTER(TIM3_CNT_BASE);
		constexpr static RegisterField<TIM3_CNT_CNT_L> CNT_L {};
		constexpr static RegisterField<TIM3_CNT_CNT_H> CNT_H {};
	};

	struct PSC {
		DECL_REGISTER(TIM3_PSC_BASE);
		constexpr static RegisterField<TIM3_PSC_PSC> PSCV {};
	};

	struct ARR {
		DECL_REGISTER(TIM3_ARR_BASE);
		constexpr static RegisterField<TIM3_ARR_ARR_L> ARR_L {};
		constexpr static RegisterField<TIM3_ARR_ARR_H> ARR_H {};
	};

	struct CCR1 {
		DECL_REGISTER(TIM3_CCR1_BASE);
		constexpr static RegisterField<TIM3_CCR1_CCR1_L> CCR1_L {};
		constexpr static RegisterField<TIM3_CCR1_CCR1_H> CCR1_H {};
	};

	struct CCR2 {
		DECL_REGISTER(TIM3_CCR2_BASE);
		constexpr static RegisterField<TIM3_CCR2_CCR2_L> CCR2_L {};
		constexpr static RegisterField<TIM3_CCR2_CCR2_H> CCR2_H {};
	};

	struct CCR3 {
		DECL_REGISTER(TIM3_CCR3_BASE);
		constexpr static RegisterField<TIM3_CCR3_CCR3_L> CCR3_L {};
		constexpr static RegisterField<TIM3_CCR3_CCR3_H> CCR3_H {};
	};

	struct CCR4 {
		DECL_REGISTER(TIM3_CCR4_BASE);
		constexpr static RegisterField<TIM3_CCR4_CCR4_L> CCR4_L {};
		constexpr static RegisterField<TIM3_CCR4_CCR4_H> CCR4_H {};
	};

	struct DCR {
		DECL_REGISTER(TIM3_DCR_BASE);
		constexpr static RegisterField<TIM3_DCR_DBA> DBA {};
		constexpr static RegisterField<TIM3_DCR_DBL> DBL {};
	};

	struct DMAR {
		DECL_REGISTER(TIM3_DMAR_BASE);
		constexpr static RegisterField<TIM3_DMAR_DMAB> DMAB {};
	};

	struct OR1 {
		DECL_REGISTER(TIM3_OR1_BASE);
		constexpr static RegisterField<TIM3_OR1_IOCREF_CLR> IOCREF_CLR {};
	};

	struct AF1 {
		DECL_REGISTER(TIM3_AF1_BASE);
		constexpr static RegisterField<TIM3_AF1_ETRSEL> ETRSEL {};
	};

	struct TISEL {
		DECL_REGISTER(TIM3_TISEL_BASE);
		constexpr static RegisterField<TIM3_TISEL_TI1SEL> TI1SEL {};
		constexpr static RegisterField<TIM3_TISEL_TI2SEL> TI2SEL {};
	};

};

struct VREFBUF {
	struct CSR {
		DECL_REGISTER(VREFBUF_CSR_BASE);
		constexpr static RegisterField<VREFBUF_CSR_ENVR> ENVR {};
		constexpr static RegisterField<VREFBUF_CSR_HIZ> HIZ {};
		constexpr static RegisterField<VREFBUF_CSR_VRR> VRR {};
		constexpr static RegisterField<VREFBUF_CSR_VRS> VRS {};
	};

	struct CCR {
		DECL_REGISTER(VREFBUF_CCR_BASE);
		constexpr static RegisterField<VREFBUF_CCR_TRIM> TRIM {};
	};

};

struct DBG {
	struct IDCODE {
		DECL_REGISTER(DBG_IDCODE_BASE);
		constexpr static RegisterField<DBG_IDCODE_DEV_ID> DEV_ID {};
		constexpr static RegisterField<DBG_IDCODE_REV_ID> REV_ID {};
	};

	struct CR {
		DECL_REGISTER(DBG_CR_BASE);
		constexpr static RegisterField<DBG_CR_DBG_STOP> DBG_STOP {};
		constexpr static RegisterField<DBG_CR_DBG_STANDBY> DBG_STANDBY {};
	};

	struct APB_FZ1 {
		DECL_REGISTER(DBG_APB_FZ1_BASE);
		constexpr static RegisterField<DBG_APB_FZ1_DBG_TIM2_STOP> DBG_TIM2_STOP {};
		constexpr static RegisterField<DBG_APB_FZ1_DBG_TIM3_STOP> DBG_TIM3_STOP {};
		constexpr static RegisterField<DBG_APB_FZ1_DBG_RTC_STOP> DBG_RTC_STOP {};
		constexpr static RegisterField<DBG_APB_FZ1_DBG_WWDG_STOP> DBG_WWDG_STOP {};
		constexpr static RegisterField<DBG_APB_FZ1_DBG_IWDG_STOP> DBG_IWDG_STOP {};
		constexpr static RegisterField<DBG_APB_FZ1_DBG_I2C1_STOP> DBG_I2C1_STOP {};
	};

	struct APB_FZ2 {
		DECL_REGISTER(DBG_APB_FZ2_BASE);
		constexpr static RegisterField<DBG_APB_FZ2_DBG_TIM1_STOP> DBG_TIM1_STOP {};
		constexpr static RegisterField<DBG_APB_FZ2_DBG_TIM14_STOP> DBG_TIM14_STOP {};
		constexpr static RegisterField<DBG_APB_FZ2_DBG_TIM16_STOP> DBG_TIM16_STOP {};
		constexpr static RegisterField<DBG_APB_FZ2_DBG_TIM17_STOP> DBG_TIM17_STOP {};
	};

};

