////////////////////
// C:\Program Files\Microchip\xc8\v2.46\pic\dat\cfgdata\18f27q84.cfgdata

// CONFIG1
#pragma config FEXTOSC = OFF            // External Oscillator Selection
#pragma config RSTOSC = HFINTOSC_64MHZ  // Reset Oscillator Selection

// CONFIG2
#pragma config CLKOUTEN = OFF  // Clock out Enable bit
#pragma config PR1WAY = ON     // PRLOCKED One-Way Set Enable bit
#pragma config CSWEN = OFF     // Clock Switch Enable bit
#pragma config JTAGEN = OFF    // JTAG Enable bit
#pragma config FCMEN = OFF     // Fail-Safe Clock Monitor Enable bit
#pragma config FCMENP = OFF  // Fail-Safe Clock Monitor -Primary XTAL Enable bit
#pragma config FCMENS = \
    OFF  // Fail-Safe Clock Monitor -Secondary XTAL Enable bit

// CONFIG3
#pragma config MCLRE = INTMCLR  // MCLR Enable bit
#pragma config PWRTS = PWRT_1   // Power-up timer selection bits
#pragma config MVECEN = OFF     // Multi-vector enable bit
#pragma config IVT1WAY = ON     // IVTLOCK bit One-way set enable bit
#pragma config LPBOREN = ON     // Low Power BOR Enable bit
#pragma config BOREN = SBORDIS  // Brown-out Reset Enable bits

// CONFIG4
#pragma config BORV = VBOR_2P85  // Brown-out Reset Voltage Selection bits
#pragma config ZCD = OFF         // ZCD Disable bit
#pragma config PPS1WAY = ON      // PPSLOCK bit One-Way Set Enable bit
#pragma config STVREN = ON       // Stack Full/Underflow Reset Enable bit
#pragma config LVP = OFF         // Low Voltage Programming Enable bit
#pragma config XINST = ON        // Extended Instruction Set Enable bit

// CONFIG5
#pragma config WDTCPS = WDTCPS_10  // WDT Period selection bits
#pragma config WDTE = WDTCPS_10    // WDT operating mode

// CONFIG6
#pragma config WDTCWS = WDTCWS_6  // WDT Window Select bits
#pragma config WDTCCS = LFINTOSC  // WDT input clock selector

// CONFIG7
#pragma config BBSIZE = BBSIZE_512  // Boot Block Size selection bits
#pragma config BBEN = OFF           // Boot Block enable bit
#pragma config SAFEN = OFF          // Storage Area Flash enable bit
#pragma config DEBUG = ON           // Background Debugger

// CONFIG8
#pragma config WRTB = ON    // Boot Block Write Protection bit
#pragma config WRTC = ON    // Configuration Register Write Protection bit
#pragma config WRTD = OFF   // Data EEPROM Write Protection bit
#pragma config WRTSAF = ON  // SAF Write protection bit
#pragma config WRTAPP = ON  // Application Block write protection bit

// CONFIG9
#pragma config BOOTPINSEL = RA4  // CRC on boot output pin selection
#pragma config BPEN = OFF        // CRC on boot output pin enable bit
#pragma config ODCON = ON        // CRC on boot output pin open drain bit

// CONFIG10
#pragma config CP = ON  // PFM and Data EEPROM Code Protection bit

// CONFIG11
#pragma config BOOTSCEN = ON  // CRC on boot scan enable for boot area
#pragma config BOOTCOE = \
    CONTINUE                 // CRC on boot Continue on Error for boot areas bit
#pragma config APPSCEN = ON  // CRC on boot application code scan enable
#pragma config SAFSCEN = ON  // CRC on boot SAF area scan enable
#pragma config DATASCEN = ON  // CRC on boot Data EEPROM scan enable
#pragma config CFGSCEN = ON   // CRC on boot Config fuses scan enable
#pragma config COE = \
    CONTINUE  // CRC on boot Continue on Error for non-boot areas bit
#pragma config BOOTPOR = OFF  // Boot on CRC Enable bit

////////////////////
// CRC Polynomial: 0x93 A4 09 EB
// HD=4 (2,147,483,615 bits)
// https://users.ece.cmu.edu/~koopman/crc/index.html

// CONFIG12-15
// Boot Sector Polynomial for CRC on boot
#pragma config BCRCPOLT = h93  // bits 31-24
#pragma config BCRCPOLU = hA4  // bits 23-16
#pragma config BCRCPOLH = h09  // bits 15-8
#pragma config BCRCPOLL = hEB  // bits 7-0

// CONFIG16-19
// Boot Sector Seed for CRC on boot
#pragma config BCRCSEEDT = hFF  // bits 31-24
#pragma config BCRCSEEDU = hFF  // bits 23-16
#pragma config BCRCSEEDH = hFF  // bits 15-8
#pragma config BCRCSEEDL = hFF  // bits 7-0

// CONFIG20-23
// Boot Sector Expected Result for CRC on boot
#pragma config BCRCEREST = h00  // bits 31-24
#pragma config BCRCERESU = h00  // bits 23-16
#pragma config BCRCERESH = h00  // bits 15-8
#pragma config BCRCERESL = h00  // bits 7-0

// CONFIG24-27
// Non-Boot Sector Polynomial for CRC on boot
#pragma config CRCPOLT = h93  // bits 31-24
#pragma config CRCPOLU = hA4  // bits 23-16
#pragma config CRCPOLH = h09  // bits 15-8
#pragma config CRCPOLL = hEB  // bits 7-0

// CONFIG28-31
// Non-Boot Sector Seed for CRC on boot
#pragma config CRCSEEDT = hFF  // bits 31-24
#pragma config CRCSEEDU = hFF  // bits 23-16
#pragma config CRCSEEDH = hFF  // bits 15-8
#pragma config CRCSEEDL = hFF  // bits 7-0

// CONFIG32-35
// Non-Boot Sector Expected Result for CRC on boot
#pragma config CRCEREST = h00  // bits 31-24
#pragma config CRCERESU = h00  // bits 23-16
#pragma config CRCERESH = h00  // bits 15-8
#pragma config CRCERESL = h00  // bits 7-0
